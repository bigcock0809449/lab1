#include<iostream>
using namespace std;
int main()
{

	float check;//先讓使用者能輸入小數
	cout << "please input a number" << endl;
	cout << "------------------" << endl;
	cin >> check;
	cout << "------------------" << endl;
	int input = check;//先讓input存整數部分 後面的while會檢查check是不是只有整數部分 不是的話(有小數)就會被防呆抓到
	while ((input <= 0)||(input!=check))//防呆用 防止使用者輸入負數或小數
	{
		cout << "please input positive integer" ;
		cin >> check;
		input = check;
	}
	
	cout << input << endl;//先cout出使用者輸入的第一個數字 後面再看奇偶
	    while (input != 1)//使用者輸入不是1的狀況下
	     {

			if ((input % 2) == 1)//奇數的話 輸出3n+1
			{
				input = 3 * input + 1;
				cout << input  << endl;
				
			}
			else//其他狀況(偶數) 輸出n/2
			{
				input = input / 2;
				cout << input << endl;
				
			}
			
		}
		if (input == 1)//如果使用者輸入1就直接結束
		{
			cin.get();
		}
		cin.get();
	return 0;
}
