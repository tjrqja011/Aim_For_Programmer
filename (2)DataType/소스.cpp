#include <iostream>

using namespace std;

// ��� ��ɾ� : cout
// �Է� ��ɾ� : cin
// �ٹٲ� ��ɾ� : endl

/*
10����
0~9 �� ���ڷ� ǥ�� �Ǵ� ������
2����
0~1 �ΰ��� ���ڷ� ǥ�� �Ǵ� ������
10����	:	2����
0		:	0
1		:	1
2		:	10
3		:	11
4		:	100
1bit -> 0
1byte == 8bit
1byte : 00000000 11111111
*/

/* ������ �ڷ���
bool	 : 1����Ʈ ���� - ���� ������ ǥ���Ѵ� true(1), false(0)
char	 : 1����Ʈ ������ - ���� �ϳ��� ǥ���Ѵ� ex) a, b, c
short	 : 2����Ʈ ������ (����, 0, ���)
int		 : 4����Ʈ ������
float	 : 4����Ʈ �Ǽ���
double	 : 8����Ʈ �Ǽ���
*/

/* ������
���� ������ =
�� ������ == ( ���п����� =)
���� a = 10 �ǹ̴� a�� 10�� ����
���α׷��� A = 10 �ǹ̴� A�� 10�� �����Ѵ�
��������� + - * /
*/
int main()
{
	// �밡���� ǥ��� : ������ �տ� ������ Ÿ���� ������ ǥ���� �ִ� ���

	//���� ����
	bool isPlaying, bPlay;
	char chLetter;
	short shArmor;
	int nAttack;
	float fSpeed;
	double dPower;

	isPlaying = true;
	bPlay = false;

	chLetter = 'a';
	shArmor = 10;
	nAttack = 20;
	fSpeed = 3.0f;
	dPower = 4.0;

	cout << chLetter << endl;
	cout << nAttack << endl;
	cout << fSpeed << endl;

	cout << "�Ŀ��� �Է� �ϼ���." << endl;
	cin >> dPower;

	cout << "�Է��Ͻ� �Ŀ��� : " << dPower << "�Դϴ�" << endl;

	system("pause");
}