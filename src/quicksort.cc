#include "myheaders.h"
//quick Sort
//Cullen Chadwick

void quicksort(long data[], int first, long last){
	long lower = first + 1;		//these two statements initialize the boundaries
	long upper = last;

	swap(data[first],data[(first+last)/2]);		//utilizes the swap function defined in helper_fns to choose the middle element as the pivot point, and places it at the first index
	long bound = data[first];		//stores the pivot value in bound
	while(lower <= upper){
		while (bound > data[lower])		//iterates through data starting from the lower bound until it finds a value >= bound
			lower ++;		//value used to iterate
		while (bound < data[upper])		//iterates through data starting from upper bound until finds a value <= bound
			upper--;		//used to iterate downwards through data
		if (lower < upper)
			swap(data[lower++], data[upper--]);		//lower < upper, both values are out of order because lower would be >= to bound and upper would be <= to bound, so they are swapped then the data is incremented post swap
		else lower ++;
	}


	swap(data[upper], data[first]);		//swaps the bound value with the final upper value so that bound is sorted into it's final position
	if (first < upper - 1)				//if there is 0 or 1 element, the statement is false, and the numbers below the pivot are all sorted
		quicksort (data, first, upper - 1);		//if there are more than one element below the pivot, the function recursively sorts these
	if (upper + 1 < last)		//doesn't execute if there is 1 or 0 elements above the pivot value
		quicksort(data, upper + 1, last);		//recursively sorts the values greater than the pivot point

}

void quicksort (long data[], int n){		//overloads the quicksort function by having different amount of input parameters
	int i, max;
	if (n < 2)		//checks if the array has less than 2 elements, if it does then by default it is already sorted
		return;
	for(i = 1, max = 0; i < n; i++)		//goes through the array and finds the max value
		if(data[max] < data[i])
			max = i;
	swap(data[n-1], data[max]);			//puts that max value at the highest index value
	quicksort (data, 0, n-2);			//calls the other quicksort function on the remaining elements
}



