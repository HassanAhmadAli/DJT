//
// Created by hassan on 2022-06-01
//

#include "DisjointSet.h"

using namespace std;


int main() {

    int n, x, y;
    std::cout << "input n" << std::endl;
    std::cin >> n;
    DisjointSet test(n);
    std::cout << "input the relationships " << std::endl;
    do {
        std::cin >> x >> y;
        test.link(x, y);
        std::cout << x << "<==>" << y << std::endl;
    } while (q());
    cout << "would you like to test the relationships ? " << endl << "\t";
    while (q()) {
        std::cin >> x >> y;
        if (test.findFirstParent(x) == test.findFirstParent(y))
            cout << "Yes" << std::endl;

        else
            cout << "No" << std::endl;
    }


    return 0;
}


