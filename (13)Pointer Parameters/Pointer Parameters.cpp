// Pointer Parameters.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>


// 매개변수가 포인터를 가지고 있다면 주소값을 요구 하는 것이다.
int Add(int* a, int* b)
{
	*a += 10;
	*b -= 5;

	return *a + *b;
}

/*
포인터란?
주소값을 가리키는 값
*/

void suffle(int *arrData)
{
	int nSrc;
	int nDest;
	int nTemp;

	for (int i = 0; i < 100; i++)
	{
		nSrc = rand() % 10;
		nDest = rand() % 10;

		nTemp = arrData[nSrc];
		arrData[nSrc] = arrData[nDest];
		arrData[nDest] = nTemp;
	}
}

int main()
{
	srand(time(NULL));
	rand();

	int nA = 10, nB = 5, nC;

	// new 연산을 통해서 메모리에 공간을 할당한다
	// * 변수가 그 할당 된 메모리 공간을 가르킨다
	int *pA = new int;
	int *pB = new int;

	*pA = 10;
	*pB = 5;

	cout << pA << ", " << pB << endl;

	nC = Add(pA, pB);

	cout << *pA << ", " << *pB << endl;
	cout << nC << endl;

	// new 를 사용하여 할당 받은 메모리가 있다면
	// 사용이 끝나고 나면 delete 를 사용하여 해제 해준다
	delete pA;
	delete pB;


	// nArray 는 배열이 할당 된 첫번째 주소값을 가르킨다
	// nArray[0] 는 가르키는 주소값 + 0
	// nArray[1] 는 가르키는 주소값 + 1 (선언 변수의 크기에 따라서 달라진다)
	int nArray[10];

	for (int i = 0; i < 10; i++)
	{
		nArray[i] = i + 1;
	}

	suffle(nArray);

	for (int i = 0; i < 10; i++)
	{
		cout << nArray[i] << endl;
	}

	system("pause");

	return 0;
}