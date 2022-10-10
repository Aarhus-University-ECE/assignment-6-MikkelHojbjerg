#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
	//Assert hvis size er mindre end nul
	assert(!(size < 0));

	int res = numbers[0];

	//Hvis der kun er en værdi i arrayet er værdien jo automatisk det største
	if(size == 1){
		return res;
	}

	//Loop kører hele arrayet igennem
	for(int i = 1; i < size; i++){
		//Tjekker om nuværende nummer i arrayet er større end det nuværende nummer
		if(numbers[i] > res){
			//Hvis ja bliver res det nye største tal
			res = numbers[i];
		}
	}


    return res;

}
