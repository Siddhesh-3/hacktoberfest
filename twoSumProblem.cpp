// C++ program to check if given array
// has 2 elements whose sum is equal
// to the given value
#include <bits/stdc++.h>

using namespace std;

void printPairs(int arr[], int arr_size, int sum)
{
	unordered_set<int> s;
	for (int i = 0; i < arr_size; i++)
	{
		int temp = sum - arr[i];

		if (s.find(temp) != s.end())
			cout << "Pair with given sum "
				<< sum << " is (" << arr[i] << ","
					<< temp << ")" << endl;

		s.insert(arr[i]);
	}
}

int main()
{
	
int sum;
cin>>sum;
  int n;
  cin>>n;
      int A[n];
  for(int i=0;i<n;i++)
    cin>>A[i];
	// Function calling
	printPairs(A, n, sum);

	return 0;
}
