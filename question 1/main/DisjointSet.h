//
// Created by hassan on 6/2/22.
//
#include <iostream>

#ifndef DISJOINTSET_H
#define DISJOINTSET_H


class DisjointSet {
    int *rank, *parent;
public:
    explicit DisjointSet(int _n);
    int findFirstParent(int _x);
    void link(int _x, int _y);
};
bool q();
#endif //DISJOINTSET_H
