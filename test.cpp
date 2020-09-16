#include <iostream>
#include <string.h>
#include <Windows.h>

using namespace std;

class Point{
	public:
		Point(float a, float b){
			x = a;
			y = b;
		}
		void print(){
			cout<<"Point P = ("<<x<<","<<y<<")";
		}
	private:
		float x,y;
};

int main(void){
	Point P1(1.0, 2.0);
	P1.print();

	return 0;
}