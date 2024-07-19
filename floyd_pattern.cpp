// C++ program to print
// Floyd's pattern triangle
// using for loop
#include <bits/stdc++.h>
using namespace std;

void print_patt(int row)
{
	// Initializing count to 1.
	int count = 1;

	for (int i = 1; i <= row; i++)
	{
		// The inner loop maintains the
		// number of column.
		for (int j = 1; j <= i; j++)
		{
			// To print the numbers
			cout << count << " ";

			// To keep increasing the count
			// of numbers
			count += 1;
		}
	
		// To proceed to next line.
		cout << "\n";
	}
}

// Driver Code
int main()
{
	int row = 5;
	print_patt(row);
	return 0;
}
