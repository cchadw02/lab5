/*
 * heapsort.cc
 *
 *  Created on: Nov 17, 2026
 *      Author: Drew Healy
 */
#include "myheaders.h"

//Restores the max-heap property for the subtree rooted at index root,
// looking only at data[root..last]. The value at root is moved down until
// neither of its children is greater than it.
static void moveDown(long data[], int root, int last) {
	int child = 2 * root + 1;
	while (child <= last) {
		if (child < last && data[child] < data[child + 1])
			child ++;
		if (data[root] >= data[child])
			return;
		swap(data[root], data[child]);
		root = child;
		child = 2 * root + 1;
	}
}

//Sorts data in increasing order. First builds a max-heap, then repeatedly
//swaps the largest element from the max.
void heapSort(long data[], int n) {
	for (int i = n / 2 - 1; i >= 0; --i)
		moveDown(data, i, n - 1);
	for (int i = n - 1; i >= 1; --i) {
		swap(data[0], data[i]);
		moveDown(data, 0, i - 1);
	}
}


