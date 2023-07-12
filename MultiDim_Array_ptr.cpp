#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int nArrSize, nQ; // array size <nArrSize>, and number of quesries <nQ>
    cout << "Please enter the size of the array and the number of queries: " << endl;
	cin >> nArrSize >> nQ; // get length of the 2D array <nArrSize> and the number of queries <nQ>
    /*
    creating a dynamic 2D array <DynArr> using <new>, this variable is pointer to pointers
    */
	int **DynArr = new int *[nArrSize];

	// fill 2D array <DynArr> with 1D subarrays
	for (int i = 0; i < nArrSize; i++)
	{
		int nInnerArrSize; 
		cin >> nInnerArrSize; // get the length of the 1D array at DynArr[i]
		int *b = new int[nInnerArrSize]; // create the 1D subarray with the given length

		// fill the subarray with 'e' values
		for (int j = 0; j < nInnerArrSize; j++)
		{
			int e;
			cin >> e;
			b[j] = e;
		}

		// store the subarray in DynArr
		*(DynArr + i) = b;
	}
	
	// run the queries on DynArr
	for (int i = 0; i < nQ; i++)
	{
		// get r and s as the 'query' to get a value from DynArr
		int r, s;
		cin >> r >> s;
		cout << DynArr[r][s] << endl;
	}
	// delete 2D array (each subarray must be deleted)
	for (int i = 0; i < nArrSize; i++)
	{
		delete[] DynArr[i];
	}
	delete [] DynArr;

}