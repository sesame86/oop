#include <iostream>
using namespace std;

int main4()
{
	int total_sales = 0, order_count, price;
	string order;

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
    
    while (total_sales < 20000) {
        cout << "주문>>";
        cin >> order >> order_count;
        if (order == "에스프레소") {
            price = 2000 * order_count;
            cout << price << "원입니다. 맛있게 드세요" << endl;
            total_sales += price;
        }
        else if (order == "아메리카노") {
            price = 2300 * order_count;
            cout << price << "원입니다. 맛있게 드세요" << endl;
            total_sales += price;
        }
        else if (order == "카푸치노") {
            price = 2500 * order_count;
            cout << price << "원입니다. 맛있게 드세요" << endl;
            total_sales += price;
        }
    }
    cout << "오늘 " << total_sales << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
	return 0;
}
