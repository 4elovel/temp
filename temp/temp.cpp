#include <iostream>
#include <vector>
#include <deque>
#include <list>

using namespace std;

template <class T>
class Mas
{
public:
	Mas(vector <T> mass)
	{
		this->mass = mass;
	}
	Mas()
	{
	}

	void print() {
		for (auto i : mass) {
			cout << i << " ";
		}
		cout << endl;
	}

private:
	vector <T> mass;
};


int main()
{

	Mas <int> ms1 ( vector <int> { 1,2,3,4,5 } );
	Mas <string> ms2 ( vector <string> { "a","b","c","d","e" } );
	Mas <double> ms3 ( vector <double> { 1.6,1.7,2.6,8.4,3.7 } );
	ms1.print();
	ms2.print();
	ms3.print();
}
