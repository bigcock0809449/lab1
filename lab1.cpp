#include<iostream>
using namespace std;
int main()
{

	float check;//�����ϥΪ̯��J�p��
	cout << "please input a number" << endl;
	cout << "------------------" << endl;
	cin >> check;
	cout << "------------------" << endl;
	int input = check;//����input�s��Ƴ��� �᭱��while�|�ˬdcheck�O���O�u����Ƴ��� ���O����(���p��)�N�|�Q���b���
	while ((input <= 0)||(input!=check))//���b�� ����ϥΪ̿�J�t�ƩΤp��
	{
		cout << "please input positive integer" ;
		cin >> check;
		input = check;
	}
	
	cout << input << endl;//��cout�X�ϥΪ̿�J���Ĥ@�ӼƦr �᭱�A�ݩ_��
	    while (input != 1)//�ϥΪ̿�J���O1�����p�U
	     {

			if ((input % 2) == 1)//�_�ƪ��� ��X3n+1
			{
				input = 3 * input + 1;
				cout << input  << endl;
				
			}
			else//��L���p(����) ��Xn/2
			{
				input = input / 2;
				cout << input << endl;
				
			}
			
		}
		if (input == 1)//�p�G�ϥΪ̿�J1�N��������
		{
			cin.get();
		}
		cin.get();
	return 0;
}
