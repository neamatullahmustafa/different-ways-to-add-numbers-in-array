#include <iostream>
using namespace std;
int d_l(int arr[][5], int x)
{
	int sum = 0;
	for (int i = 0; i <= 4; i++)
	{
		for (int j = 0; j <= i; j++)
			sum += arr[i][j];
	}
	return sum;
}//done
int u_l(int arr[][5], int x)
{
	int sum = 0;
	for (int i = 0; i <= 4; i++)
	{
		for (int j = 0; j <= (4 - i); j++)
			sum += arr[i][j];
	}
	return sum;
}//done
int u_r(int arr[][5], int x)
{
	int sum = 0;
	for (int i = 4; i >= 0; i--)
	{
		for (int j = 4; j >= i; j--)
			sum += arr[i][j];
	}
	return sum;
}//done
int d_r(int arr[][5], int x)
{
	int sum = 0;
	for (int i = 4; i >= 0; i--)
	{
		for (int j = 4; j >= (4 - i); j--)
			sum += arr[i][j];
	}
	return sum;
}
int main()
{
	int array[5][5] = { {0,1,2,3,4},
	{5,6,7,8,9},
   {10,11,12,13,14},
   {15,16,17,18,19},
   {20,21,22,23,24} },
		choose = 0, sum = 0;
	cout << "to prent sum of down left inter number 1\n";
	"to prent sum of up left inter number 2\n"
		"to prent sum of up right inter number 3\n"
		"to prent sum of down right inter number 4\n";
	cin >> choose;
	switch (choose)
	{
	case 1:
		sum = d_l(array, 5);
		break;
	case 2:
		sum = u_l(array, 5);
		break;
	case 3:
		sum = u_r(array, 5);
		break;
	case 4:
		sum = d_r(array, 5);
		break;
	};
	cout << "sum =" << sum << "/n";
	return 0;
};