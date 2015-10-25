#include <iostream>
#include <random>
#include "point.h"

using namespace std;

int main() {
    long r = 4, n = 100000000;
    double counter = 0;

    random_device rd;
    mt19937 engine(rd());
    uniform_real_distribution<> distribution(0, r);

    time_t starting_time = time(0);

#pragma omp parallel for reduction(+:counter)
    for (int i = 0; i < n; i++) {
        point point(distribution(engine), distribution(engine));
        if (pow(point.x(), 2) + pow(point.y(), 2) < pow(r, 2)) {
            counter++;
        }
    }

    time_t end_time = time(0);
    time_t time = end_time - starting_time;
    cout << "it takes about : " << time << endl;

    double pi = 4 * counter / (float) n;
    cout << counter << endl << 4 * counter << endl << pi;
    return 0;
}