/*
* Author: Adam Engelhart
*
*  For each function
*/

#include <iostream>
#include <string>

using namespace std;

template<typename T, typename COMP>
void foreach(T arr, size_t size, COMP func)
{
	for (size_t index = 0; index < size; index++)
	{
		func(arr[index]);
	}
}

int main()
{
	int arrInt[] = { 3,4,5,6,7,8,9 };
	double arrDouble[] = { 1.1,2.2,3.3,4.4 };
	int sum = 0;

	foreach(arrInt, 7, [&sum](int& a)->void {sum+=a; });
	foreach(arrDouble, 4, [](double d)->void {cout<<d<<endl; });

	cout << sum << endl;

	system("pause");
	return 0;
}