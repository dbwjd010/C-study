#include <iostream>
using namespace std;

/*iostream = 입출력 스트림,(스트림 = 문자의 연속 흐름)
using namespace std; > 네임 스페이스 공간을 사용하겠다는 의미로 이름 저장 공간이다.
                     > std 이름공간에 선언된 모든 이름에 std:: 생략*/

int main() {  //main 함수는 프로그램이 시작할 떄 무조건 실행되는 함수로 모든 프로그램에 있어야 하는 함수

    cout << "이름이 무엇입니까? "; //cout : C 언어의 printf()와 같은 함수
    char name[12]; //char 함수를 이용하여 문자열을 표현
    cin.getline(name, 12, '\n'); //cin.getline() : 공백을 포함한 문자열을 입력 받을 수 있음.
    /*cin 함수를 사용 시 공백 문자를 만나게 되면 이전의 입력된 문자들을 모두 하나의 문자열로
    인식하기 때문에 장 유정입니다가 아닌 장 입니다로 출력*/
    cout << "반갑습니다. " << name << "님\n";

    int coke, sam, hwan, nc, ns, nh, tot;

    std::cout << "-----------------------------------" << std::endl;

    std::cout << "음료의 가격 입력을 시작합니다. " << std::endl;

    std::cout << "콜라의 가격 : ";
    std::cin >> coke;

    std::cout << "삼다수의 가격 : ";
    std::cin >> sam;

    std::cout << "환타의 가격 : ";
    std::cin >> hwan;

    std::cout << "개수를 입력해주세요." << std::endl;

    std::cout << "콜라 수량 : ";
    std::cin >> nc;

    std::cout << "삼다수 수량 : ";
    std::cin >> ns;

    std::cout << "환타 수량 : ";
    std::cin >> nh;

    /*std:: = C++ 표준에서 정의한 이름 공간 중 하나
    using 지시어를 사용하여 std::의 생략이 가능*/

    tot = coke * nc + sam * ns + hwan * nh - 500;

    std::cout << "-----------------------------------" << std::endl;
    std::cout << "500원을 할인 받아 총 " << tot << "원 입니다." << std::endl;

    return 0; //return 0; 는 함수를 종료하면서 특정 값을 반환

    //int main()과 retun 0; 는 거의 항상 같이 쓰인다

}