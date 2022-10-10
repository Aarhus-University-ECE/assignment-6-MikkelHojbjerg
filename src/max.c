#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{

	assert(!(size < 0));

	int res = numbers[0];

	if(size == 1){
		return res;
	}


	for(int i = 1; i < size; i++){
		if(numbers[i] > res){
			res = numbers[i];
		}
	}


    return res;

}
