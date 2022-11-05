#include<iostream>
using namespace std;
#include "string"
int main()
{
	string a;
	cin >> a;//获取输入的元素
	
	for (int i = 0; i < sizeof(a); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
			{
				if (a[i + 2] >= '2' && a[i + 2] <= '9')
				{
					cout << a[i] << a[i + 1] << ":"<<a[i + 2];
				}
			}
			else if (a[i + 1] >= '1' && a[i + 1] <= '9')
			{

			}
		}
	}


	system("pause");
	return 0;
}