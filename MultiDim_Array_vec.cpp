#include <iostream>
#include <vector>

using namespace std;
/*
A variable sized array of size n, 'a[n]', whose elements 'i'
are in turn arrays whose sizes are defined by the user
*/
int main()
{
   int nArrSize, q; // array size <nArrSize>, and number of quesries <q>
   cout << "Please enter the size of the array and the number of queries: " << endl;
   cin >> nArrSize >> q;
   /*
        instantiate a vector of <nArrSize> objects of type vector<int>
        and resize each object to size <length>
   */ 
   vector<vector<int>> arr(nArrSize);

   for (int i=0; i<nArrSize; i++)
   {
        int length;
        cin >> length;
        arr[i].resize(length);
        for (int j=0; j<length; j++)
        {
            cin >> arr[i][j];
        }
   }
   for (int k = 0; k < q; k++)
   {
    int i, j;
    cin >> i >> j;
    cout << arr[i][j]<<endl;
   }
    return 0;
}