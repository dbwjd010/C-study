#include <iostream>
#include <time.h> //�ð��� seed ������ ����ϱ� ���� �ۼ� �ʿ�
using namespace std;

int main()
{
    int rnum, mnum, n1;
    srand(time(NULL));//�ð��� seed ������ ����Ͽ� ������ ���� 

    rnum = rand() % 100 + 1;//0���� 99���������� +1�� �����μ� 1���� 100������ ������ ����
    cout << "������ ��: " << rnum << endl;

    cout << "Ư�� ��� ����: ";
    cin >> mnum;

    cout << "<Ư������� ����ϴ� ���α׷�>" << endl;
    int i = 0;
    while (i < mnum) {//Ư�� ��� �������� i�� ���� ������ ���  
        cout << i << "��° Ư�� ���: ";
        cin >> n1;
        cout << "<Ư������� ����ϴ� ���α׷�>" << endl;
        int j = 1;
        while (j <= rnum) {
            if (j % n1 == 0)//�������� 0�϶� ��, ����϶��� ���� > x == y �� x�� y�� ������ �ǹ�
                cout << j << ", ";
            j++;
        }
        cout << endl;
        cout << "<Ư����� ���� ����ϴ� ���α׷�>" << endl;
        int k = 1;
        while (k <= rnum) {
            if (k % n1 != 0)//�������� 0�� �ƴҋ� ��, ����� �ƴ� ���� ���� > x != y �� x�� y�� �ٸ��� �ǹ� 
                cout << k << ", ";
            k++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
