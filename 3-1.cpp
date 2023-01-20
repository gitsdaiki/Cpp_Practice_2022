#include <iostream>
using namespace std;
/*トランプクラス*/
class Trump
{
	char* mark;   /*トランプの数字*/
	int    number; /*トランプのマーク*/
public:
	/*コンストラクタ*/
	Trump(const char* mark, int number)
	{
		this->mark = (char*)mark;
		this->number = number;
	}
	/*トランプの数字を表示する関数*/
	void show()
	{
		cout << this->mark << "の" << this-> number << endl;
	}
};
int main(void)
{
	Trump H1("ハート", 1); /*ハートのエースを用意*/
	H1.show(); /*トランプを表示*/
}
