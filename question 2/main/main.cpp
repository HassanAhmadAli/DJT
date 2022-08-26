//
// Created by hassan on 2022-06-01
//
#include <iostream>
#include "DisjointSet.h"
using namespace std;
//input example A 4 20 yB 1 10yC 1 40 yD 1 30
int main() {
    char x;
    int y, z;
    std::vector<Job> test;

    std::cout << "input the Jobs (JobID , DeadLIne , Profit) " << std::endl;
    do {
        std::cin >> x >> y >> z;
        test.emplace_back(x, y, z);/*add the new defined Jop to the std::vector*/
        std::cout << "( " << x << ", " << y << ", " << ", " << z << " )" << std::endl;
    } while (q());

    std::cout << " Maximum Profit Sequence" << std::endl;
    printJobScheduling(test);
    return 0;
}