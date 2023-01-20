#include <iostream>
using namespace std;
class Trump /*トランプクラス*/
{
	char* mark;   /*トランプのマーク*/
	int    number; /*トランプの数字*/
public:
	Trump(const char* mark, int number) /*コンストラクタ*/
	{
		this->mark = new char[strlen(mark) + 1]; /*末尾の\0も含めるため1文字分増やす(+1する)ことに注意*/
		strcpy_s(this->mark, strlen(mark) + 1, mark);              /*markをthis->markにコピー*/
		this->number = number;                                               /*数字をコピー*/
	}
	/*コピーコンストラクタ*/
	Trump(const Trump  & x)
	{
		this->mark = new char[strlen(x.mark) + 1];
		strcpy_s(this->mark, strlen(x.mark) + 1, x.mark);
		this->number = x.number;
	}
	~Trump() { delete[]   this->mark; }    /*デストラクタ*/
	void show() { cout << this->mark << "の" << this->number << endl; } /*トランプの数字を表示する関数*/
};
Trump return_self(Trump *x) { return *x; } /* ポインタ渡しで受け取ったトランプをそのまま返す関数 */

int main(void)
{
	Trump H1("ハート", 1); /*ハートのエースを用意*/
	return_self(&H1).show(); /*ハートのエースを表示*/
}