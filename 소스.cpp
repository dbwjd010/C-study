#include <iostream>
using namespace std;

int main()
{
	int reservation[3][10] =
	{
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
	};// 배열 정의와 배열 출력이 꼭 붙어 있어야 한다고 생각하여 문제를 해결하려니 도저히 풀리지 않았음 >> 이를 분리해서 코딩하자 문제 해결을 할 수 있었음
	int seat;
	do
	{
	    cout << "좌석을 예약하시겠습니까?(0이나 1 선택)";
	    cin >> seat;
		if (seat == 1)
		{
			for (int i = 0; i < 10; i++)
				cout << i + 1 << ' ';
			cout << '\n';
			cout << "---------------------------------\n";
			for (int k = 0; k < 3; k++)
			{
				for (int j = 0; j < 10; j++)
				{
					cout << reservation[k][j] << " ";
				}
				cout << endl;
			}
			cout << "몇열, 몇번째 좌석을 예약하시겠습니까?";
			int a;
			int b;
			cin >> a;
			cin >> b;
			if (reservation[a - 1][b - 1] == 0)
			{
				reservation[a - 1][b - 1] = 1;
				cout << "예약되었습니다" << endl;
			}
			else
			{
				cout << "이미 예약된 좌석입니다" << endl;
			}
			cout << '\n';
			for (int k = 0; k < 3; k++)
			{
				for (int j = 0; j < 10; j++)
				{
					cout << reservation[k][j] << " ";
				}
				cout << endl;
			}
		}
		
		else
		{
			cout << "좌석 예약 종료" << endl;
			break; //이것을 하지 않으면 예약 화면이 계속 뜸
		}
		
	} while (seat == 1 or seat == 0); // while문을 사용하였더니 seat의 값이 주어지지 않아 오류 발생 >> do while문 사용으로 이를 해결
}
/*시간이 없어서 if else문만을 사용하였지만 다음번에는 else if문도 사용하여 주어진 외의 값을 입력시 조건에
맞는 값을 입력하라는 문구가 나올 수 있도록 만들었으면 좋겠음*/