#include <iostream>
#include "string"
using namespace std;
int main()
{
	string A1;
	int i;
	cout << "请输入一句话:" ;
	getline(cin,A1);
	int N;
	cout << "请输入一个N使句子向后移动N位;" ;
	cin >> N;
	cout << "将这句话的每个字母顺序向后移动后" << N << "位:" << endl;
	for(i = 0 ; i < A1.length() ; i++)
	{
		if((A1[i] >= 'A') && (A1[i] <= 'z'))
		{
			if(A1[i] + N <= 'Z') 
				A1[i] += N;
			else if(A1[i] + N <='z')
				A1[i] += N;
			else
				A1[i] -= 26 - N;
		}
		else
		{
			A1[i] = A1[i];
		}
	}
	for(int j = 0 ; j <= A1.length() ; j++)
	{
		cout << A1[j];
	}
	cout << endl;
	return 0;
}
