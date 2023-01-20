#include <iostream>
using namespace std;
/*トランプクラス*/
class Trump
{
	char* mark;   /*トランプのマーク*/
	int    number; /*トランプの数字*/
public:
	/*コンストラクタ*/
	Trump(const char* mark, int number)
	{
		this->mark = new char[strlen(mark) + 1]; /*末尾の\0も含めるため1文字分増やす(+1する)ことに注意*/
		strcpy_s(this->mark, strlen(mark) + 1, mark);              /*markをthis->markにコピー*/
		this->number = number;                                               /*数字をコピー*/
	}

	/*デストラクタ*/
	~Trump() { delete[]   this->mark; }

	/*トランプの数字を表示する関数*/
	void show() { cout << this->mark << "の" << this->number << endl; }
};
int main(void)
{
	Trump H1("ハート", 1); /*ハートのエースを用意*/
	H1.show(); /*トランプを表示*/
}