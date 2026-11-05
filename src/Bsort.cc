#include "myheaders.h"

//Cullen Chadwick
//Bubble sort function sorting algorithm

// Your Bubble sort function goes here ..



void bubblesort(long data[], long n){
	for(int i = 0; i < n-1; i++){
		for(int j = n-1; j > i; j--){
			if (data[j] > data[j-1]) swap(data[j], data[j-1]);
		}
	}

}
