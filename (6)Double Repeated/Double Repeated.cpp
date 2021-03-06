// Double Repeated.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"

int main()
{
	srand(time(NULL));
	rand();

	// i = i + 2;
	/*
		1 x 1 = 2	2 x 1 = 2	3 x 1 = 3
		1 x 2 = 2	2 x 2 = 4	3 x 2 = 6
		...
		...

		4 x 1 = 4	...
		...
		...

		7 x 1 = 7
		...
		7 x 9 = 63
	*/
	/*
	for (int i = 0; i < 9; i += 3)				 // 총 9번 출력한다 (3번씩 묶어서)
	{
		for (int j = 1; j <= 9; j++)		 // x 1 ~ 9 까지 출력
		{
			for (int k = 1; k <= 3; k++)	 // 3번씩 묶어서 줄 단위로 출력
			{
				cout << i + k << " x " << j << " = " << (i + k) * j << "\t\t";
			}
			cout << endl;
		}
		cout << endl;
	}
	*/

	for (int i = 1; i <= 9; i += 3)			// 3단씩 묶어서 출력
	{
		for (int j = 1; j <= 9; j++)		// x 1 ~ 9
		{
			cout << i + 0 << " x " << j << " = " << (i + 0) * j << "\t\t";
			cout << i + 1 << " x " << j << " = " << (i + 1) * j << "\t\t";
			cout << i + 2 << " x " << j << " = " << (i + 2) * j << endl;
		}
		cout << endl;
	}

	system("pause");

	return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
