#include<iostream>
#include<cstring>
using namespace std;
char *concat(const char*s1,const char*s2) {
	int n=strlen(s1)+strlen(s2);
	char *s=new char [n];
	for(int i=0;i<strlen(s1);i++) {
		*(s+i)=*(s1+i);
	}
	for(int i=strlen(s1);i<strlen(s1)+strlen(s2);i++) {
		*(s+i)=*(s2+i-strlen(s1));
	}
	return s;
}
int main() {
	char s1[]="Hello";
	char s2[]="World";
    cout << concat(s1,s2);
	return 0;
}
