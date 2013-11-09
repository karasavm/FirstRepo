#include <iostream>
using namespace std;

class A{
	public:
	A(int x_) {x = x_;}
	int x;
};

template <class T>
int fun(){

	T a=3,b=5;
	
	return a.x+b.x;

}


int main(){
	
	
	int i=fun<A>();
	
	cout << i ;
	
	return 0;
	
	
}
