#include<iostream>
using namespace std;

int main()
{
	char a[10], b[10];
	while (cin >> a >> b)
	{
		int num = 0;
		for (int i = 0; i < strlen(a); i++)
		{
			if ((a[i] - '0' + b[i] - '0') >= 10)
				num++;
		}
		if (num > 1)
			cout << num << " carry operations." << endl;
		if (num == 0)
			cout << "No carry operation." << endl;
		if (num == 1)
			cout << num << " carry operation." << endl;
	}
}
