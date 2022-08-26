//
// Created by hassan on 2022-06-01.
//

#include "DisjointSet.h"


DisjointSet::DisjointSet(int _n) {
	rank = new int[_n];
	parent = new int[_n];
	for (int i = 0; i < _n; i++) {
		parent[i] = i;
		rank[i] = 0;
	}
}

int DisjointSet::findFirstParent(int _x) {
	while (_x != parent[_x]) {
		_x = parent[_x];
	}
	return parent[_x];
}

void DisjointSet::link(int _x, int _y) {
	int x = findFirstParent(_x);//
	int y = findFirstParent(_y);
	if (x == y)
		return;
	else if (rank[x] == rank[y]) {
		parent[y] = x;
		rank[x] = rank[x] + 1;
	}
	if (rank[x] < rank[y]) {
		parent[x] = y;
	} else {
		parent[y] = x;
	}
}
bool q() {
	char q;

	std::cout << R"(----------------------------------------
Enter 'N' to break or 'Y' to continue 
)";
	std::cin >> q;
	if (q == 'Y' || q == 'y') { std::cout << R"(----------------------------------------
)";
	return true; }
	else if (q == 'N' || q == 'n') { std::cout << R"(----------------------------------------
)";
return false; }
	else {
		std::cout << R"(invalid Input !
		----------------------------------------
)";
		return false;
	}

}
