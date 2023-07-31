#include <iostream>
#include <cmath>
#include <string>
#include <array>
using namespace std;

void calc(int nums[], int cunt)

{
	int result = 0;
	for(int i =0 ; i < cunt ; i++)
	{
		result += nums[i];
	}
	cout << result;
}

int main()
{
	int arr[] = { 35,75,80,10 };
	int number_cont = size(arr);
	calc(arr, number_cont);



	return 0;
}