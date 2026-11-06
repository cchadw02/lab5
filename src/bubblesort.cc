#include "myheaders.h"

//Cullen Chadwick
//Bubble sort function sorting algorithm

// Your Bubble sort function goes here ..



void bubblesort(long data[], long n){
	for(int i = 0; i < n-1; i++){		//main counter
		for(int j = n-1; j > i; j--){	//secondary counter that brings the value from the main counter to every other value
			if (data[j] < data[j-1]) swap(data[j], data[j-1]);		//if the value in j is smaller than the value in the index behind it, they swap, it goes through and does this until j==0
		}
	}

}
