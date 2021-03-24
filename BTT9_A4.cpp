#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int *p1;
    {
    	int p2=100;
    	p1=&p2;
    	delete p1;
    	//khong thu hoi dc vung nho chua cap phat dong
	}
    return 0;
}
