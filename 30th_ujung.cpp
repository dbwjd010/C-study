#include <iostream>
using namespace std;

int main() {

    cout << "이름이 무엇입니까? ";
    char name[12];
    cin.getline(name, 12,'\n');
    cout << "반갑습니다. " << name << "님\n";
    
    int coke, sam, hwan, nc, ns, nh, tot;
    
    std::cout << "-----------------------------------" << std::endl;

    std::cout << "음료의 가격 입력을 시작합니다. " << std::endl;

    std::cout << "콜라의 가격 : ";
    std::cin >> coke;

    std::cout << "삼다수의 가격 : ";
    std::cin >> sam;

    std::cout << "환타의 가격 : " ;
    std::cin >> hwan;

    std::cout << "개수를 입력해주세요." << std::endl;

    std::cout << "콜라 수량 : ";
    std::cin >> nc;

    std::cout << "삼다수 수량 : ";
    std::cin >> ns;

    std::cout << "환타 수량 : ";
    std::cin >> nh;

    tot = coke * nc + sam * ns + hwan * nh - 500;

    std::cout << "-----------------------------------" << std::endl;
    std::cout << "500원을 할인 받아 총 " << tot << "원 입니다." << std::endl;

    return 0;
}