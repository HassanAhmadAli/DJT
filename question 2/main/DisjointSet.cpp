//
// Created by hassan on 2022-06-01
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include "DisjointSet.h"


Job::Job(char JobId_, int DeadLine_, int Profit_) : JobId(JobId_), DeadLine(DeadLine_), Profit(Profit_) {}


DisjointSet::DisjointSet(int n) {
    Parent = new int[n + 1];
    for (int i = 0; i <= n; i++)
        Parent[i] = i;
}

void DisjointSet::link(int u, int v) {
    Parent[v] = u;
}

int DisjointSet::findFirstParent(int s) const {
    while (s != Parent[s]) {
        s = Parent[s];
    }
    return s;
}


int maxDeadline(const std::vector<Job> &x) {
    int res = INT_MIN;
    for (Job i: x) {
        res = (res > i.DeadLine ? res : i.DeadLine);
    }
    return res;
}

void printJobScheduling(std::vector<Job> x) {

    sort(x.begin(), x.end(),
         [](const Job &a, const Job &b) -> bool {
             return (a.Profit > b.Profit);
         }
    );

    DisjointSet res(maxDeadline(x));

    for (const Job &i: x) {
        int j = res.findFirstParent(i.DeadLine);

        if (j > 0) {
            res.link(res.findFirstParent(j - 1), j);
            std::cout << i.JobId << " ";
        }
    }


}


bool q() {
    char q;

    std::cout << R"(----------------------------------------
Enter 'N' to break or 'Y' to continue
)";
    std::cin >> q;
    if (q == 'Y' || q == 'y') {
        std::cout << R"(----------------------------------------
)";
        return true;
    } else if (q == 'N' || q == 'n') {
        std::cout << R"(----------------------------------------
)";
        return false;
    } else {
        std::cout << R"(invalid Input !
		----------------------------------------
)";
        return false;
    }

}

