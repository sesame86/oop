#include <iostream>
using namespace std;

int main4()
{
	int total_sales = 0, order_count, price;
	string order;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;
    
    while (total_sales < 20000) {
        cout << "�ֹ�>>";
        cin >> order >> order_count;
        if (order == "����������") {
            price = 2000 * order_count;
            cout << price << "���Դϴ�. ���ְ� �弼��" << endl;
            total_sales += price;
        }
        else if (order == "�Ƹ޸�ī��") {
            price = 2300 * order_count;
            cout << price << "���Դϴ�. ���ְ� �弼��" << endl;
            total_sales += price;
        }
        else if (order == "īǪġ��") {
            price = 2500 * order_count;
            cout << price << "���Դϴ�. ���ְ� �弼��" << endl;
            total_sales += price;
        }
    }
    cout << "���� " << total_sales << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl;
	return 0;
}
