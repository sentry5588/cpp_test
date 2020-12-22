#include <iostream>

class quote{
public:
	std::string isbn();
	virtual double net_price(size_t n) const;
	
	std::string sn;
};

std::string quote::isbn() {
	return "test_number";
}

double quote::net_price(size_t n) const {
	return 10.0 * (double) n;
}

class bulk_quote : public quote {
public:
	double net_price(size_t n) const override;
};

double bulk_quote::net_price(size_t n) const {
	return 8.0 * (double) n;
}

void print_total(const quote & book) {
	std::cout << "The price is " << book.net_price(5) << std::endl;
}

int main(void) {
	quote q;
	bulk_quote b;
	print_total(q);
	print_total(b);
	return 0;
}

