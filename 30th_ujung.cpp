#include <iostream>
using namespace std;

int main() {

    cout << "�̸��� �����Դϱ�? ";
    char name[12];
    cin.getline(name, 12,'\n');
    cout << "�ݰ����ϴ�. " << name << "��\n";
    
    int coke, sam, hwan, nc, ns, nh, tot;
    
    std::cout << "-----------------------------------" << std::endl;

    std::cout << "������ ���� �Է��� �����մϴ�. " << std::endl;

    std::cout << "�ݶ��� ���� : ";
    std::cin >> coke;

    std::cout << "��ټ��� ���� : ";
    std::cin >> sam;

    std::cout << "ȯŸ�� ���� : " ;
    std::cin >> hwan;

    std::cout << "������ �Է����ּ���." << std::endl;

    std::cout << "�ݶ� ���� : ";
    std::cin >> nc;

    std::cout << "��ټ� ���� : ";
    std::cin >> ns;

    std::cout << "ȯŸ ���� : ";
    std::cin >> nh;

    tot = coke * nc + sam * ns + hwan * nh - 500;

    std::cout << "-----------------------------------" << std::endl;
    std::cout << "500���� ���� �޾� �� " << tot << "�� �Դϴ�." << std::endl;

    return 0;
}