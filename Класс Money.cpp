#include <iostream>
using namespace std;
class Money
{
public:
	void convert();
	void wtite();
private:

};
class FirstMoney : public Money {
public:
	void convert(int k) {
		celay *= k;
		nishay *= k;
		nishay %= 100;
	}
	void wtite() {
		cout << celay << "," << nishay << endl;
	}
	FirstMoney(int cealy, int nishay) {
		this->celay = cealy;
		this->nishay = nishay;
	}

private:
	long celay;
	long nishay;

};

int main() {
	int a, b;
	cout << "Convert from rubles to dollars"<<endl;
	cout << "the whole part of ruble" << endl;
	cin >> a ;
	cout << "kopeiki" << endl;
	cin	>> b;
	cout << "Rubles in dollars" << endl;
	FirstMoney f1(a, b);
	f1.convert(63);
	f1.wtite();
}