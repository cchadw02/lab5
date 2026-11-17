/*
 * selectionsort.cc
 *
 *  Created on: Nov 17, 2026
 *      Author: Drew Healy
 */
#include "myheaders.h"
//Sorts data in increasing order. For each position i, finds the smallest element
//in data and swaps it into position i.

void selectionSort(long data[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int least = i;
		for (int j = i + 1; j < n; j++)
			if (data[j] < data[least])
				least = j;
		if (i != least)
			swap(data[i], data[least]);
	}
}



