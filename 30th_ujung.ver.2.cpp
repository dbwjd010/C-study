#include <iostream>
using namespace std;

/*iostream = ����� ��Ʈ��,(��Ʈ�� = ������ ���� �帧)
using namespace std; > ���� �����̽� ������ ����ϰڴٴ� �ǹ̷� �̸� ���� �����̴�.
                     > std �̸������� ����� ��� �̸��� std:: ����*/

int main() {  //main �Լ��� ���α׷��� ������ �� ������ ����Ǵ� �Լ��� ��� ���α׷��� �־�� �ϴ� �Լ�

    cout << "�̸��� �����Դϱ�? "; //cout : C ����� printf()�� ���� �Լ�
    char name[12]; //char �Լ��� �̿��Ͽ� ���ڿ��� ǥ��
    cin.getline(name, 12, '\n'); //cin.getline() : ������ ������ ���ڿ��� �Է� ���� �� ����.
    /*cin �Լ��� ��� �� ���� ���ڸ� ������ �Ǹ� ������ �Էµ� ���ڵ��� ��� �ϳ��� ���ڿ���
    �ν��ϱ� ������ �� �����Դϴٰ� �ƴ� �� �Դϴٷ� ���*/
    cout << "�ݰ����ϴ�. " << name << "��\n";

    int coke, sam, hwan, nc, ns, nh, tot;

    std::cout << "-----------------------------------" << std::endl;

    std::cout << "������ ���� �Է��� �����մϴ�. " << std::endl;

    std::cout << "�ݶ��� ���� : ";
    std::cin >> coke;

    std::cout << "��ټ��� ���� : ";
    std::cin >> sam;

    std::cout << "ȯŸ�� ���� : ";
    std::cin >> hwan;

    std::cout << "������ �Է����ּ���." << std::endl;

    std::cout << "�ݶ� ���� : ";
    std::cin >> nc;

    std::cout << "��ټ� ���� : ";
    std::cin >> ns;

    std::cout << "ȯŸ ���� : ";
    std::cin >> nh;

    /*std:: = C++ ǥ�ؿ��� ������ �̸� ���� �� �ϳ�
    using ���þ ����Ͽ� std::�� ������ ����*/

    tot = coke * nc + sam * ns + hwan * nh - 500;

    std::cout << "-----------------------------------" << std::endl;
    std::cout << "500���� ���� �޾� �� " << tot << "�� �Դϴ�." << std::endl;

    return 0; //return 0; �� �Լ��� �����ϸ鼭 Ư�� ���� ��ȯ

    //int main()�� retun 0; �� ���� �׻� ���� ���δ�

}