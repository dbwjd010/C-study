#include <iostream>
#include <time.h> //시간을 seed 값으로 사용하기 위해 작성 필요
using namespace std;

int main()
{
    int rnum, mnum, n1;
    srand(time(NULL));//시간을 seed 값으로 사용하여 난수를 생성 

    rnum = rand() % 100 + 1;//0부터 99까지이지만 +1을 함으로서 1부터 100까지로 범위가 지정
    cout << "랜덤한 수: " << rnum << endl;

    cout << "특정 배수 개수: ";
    cin >> mnum;

    cout << "<특정배수만 출력하는 프로그램>" << endl;
    int i = 0;
    while (i < mnum) {//특정 배수 개수보다 i가 작을 때까지 출력  
        cout << i << "번째 특정 배수: ";
        cin >> n1;
        cout << "<특정배수만 출력하는 프로그램>" << endl;
        int j = 1;
        while (j <= rnum) {
            if (j % n1 == 0)//나머지가 0일때 즉, 배수일때를 말함 > x == y 는 x와 y가 같음을 의미
                cout << j << ", ";
            j++;
        }
        cout << endl;
        cout << "<특정배수 제외 출력하는 프로그램>" << endl;
        int k = 1;
        while (k <= rnum) {
            if (k % n1 != 0)//나머지가 0이 아닐떄 즉, 배수가 아닐 때를 말함 > x != y 는 x와 y가 다름을 의미 
                cout << k << ", ";
            k++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
