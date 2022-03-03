
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;


int main () {

	char ch;
	float vfloat[];


	std::ifstream myfile;
	myfile.open ("myfile.txt", ios::in);

	if (!myfile)
		exit(0);
  
	myfile.get(vfloat);
	while(!myfile.oef())
	{
		float calculate_median;
		float median_value;
		calculate_median = median_calculator(vfloat, median_value);
	}


	myfile.close();

	return 0;
}




void sort(float f[], float len)
{
	float hold;

	  for (float pass = 1; pas < len; pass++)
		  for (float j = 0; j < len - a; j++)
			  if (a [j] > a [j + 1] ){
				  hold = a [j];
	  	  	  	  a[j] = a [j +1];
	  	  	  	  a[j + 1] = hold;
				}
}


float median_calculator(float value_fromfile[], float len_from_sort)
{
	float temp_median;
	temp_median = calculated_value = value_fromfile[len_from_sort/2];
	return temp_median;
}

