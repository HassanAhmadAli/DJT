//
// Created by hassan on 2022-06-01
//

#ifndef DISJOINTSET_H
#define DISJOINTSET_H
#pragma once
#include <vector>

struct Job {
public:
char JobId;
int DeadLine, Profit;

Job(char JobId_, int DeadLine_, int Profit_);

};


class DisjointSet {
    int *Parent;
public:
    explicit DisjointSet(int n);

    [[nodiscard]] int findFirstParent(int s) const;

    void link(int u, int v);
};

bool q();
int maxDeadline(const std::vector<Job> &x);
void printJobScheduling(std::vector<Job> x);

#endif //DISJOINTSET_H
