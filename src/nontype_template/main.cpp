#include "TrajectoryBase.h"

int main (void) {
    DiscreteTraj<2, double> d;
    d.i[0] = 6;
    d.v.push_back(0.1);
    d.v.push_back(1.1);

    int i = 55;
    return i;
}
