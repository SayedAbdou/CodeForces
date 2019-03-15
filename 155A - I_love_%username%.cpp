#include <bits/stdc++.h>

using namespace std;

int main()
{
	int num, max, min, point=0, arr[1000000];

	cin >> num;

	for (int i = 0; i < num; ++i)
	{
		/* code */
		cin >> arr[i];
	}

	max = arr[0];
	min = arr[0];
	for (int i = 1; i < num; ++i)
	{
		/* code */
		if (max < arr[i])
		{
			max = arr[i];
			point++;
		}

		if (min > arr[i])
		{
			min = arr[i];
			point++;
		}
	}

	cout << point <<endl;

	return 0;
}
