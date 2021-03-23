#include <iostream>
#include <cstring>
using namespace std;
int size(const char *s) {
	int dem=0;
	while(s[dem]!='\0') {
		dem++;
	}
	return dem;
}
char *reverse(const char *s) {
	int n=size(s);
	char *s2=new char [n];
	for(int i=0;i<n;i++) {
		*(s2+i)=*(s+n-1-i);
	}
	return s2;
}
char *delete_char(const char *s,char c) {
	int n=size(s);
	char *s2=new char [n];
	for(int i=0;i<n;i++) {
		*(s2+i)=*(s+i);
	}
	for(int i=0;i<n;i++) {
		if(s2[i]==c) {
			for(int j=i;j<n-1;j++) {
				*(s2+j)=*(s2+j+1);
			}
			i--;
			*(s2+n-1)='\0';
		}
	}
	return s2;
}
char *pad_right(const char *s, int n) {
	int m=size(s);
	char *s2=new char [n];
    if(n>m) {
    	for(int i=0;i<m;i++) {
        	*(s2+i)=*(s+i);
		}
        for(int i=m;i<n;i++) {
        	*(s2+i)=' ';
		}
    }
    return s2;
}
char *pad_left(const char *s, int n) {
	int m=size(s);
	char *s2=new char [n];
    if(n>m) {
    	for(int i=0;i<m;i++) {
        	*(s2+i)=*(s+i);
		}
        for(int i=0;i<m;i++) {
		    *(s2+i+(n-m))=*(s2+i);
	     }
	     for(int i=0;i<n-m;i++) {
	        *(s2+i)=' ';
	     }
    }
    return s2;
}
char *truncate(const char *s, int n ) {
	int m=size(s);
	char *s2=new char [n];
	if(n<m) {
		for(int i=0;i<m;i++) {
        	*(s2+i)=*(s+i);
		}
		for(int i=m-n;i<m;i++) {
			*(s2+i)='\0';
		}
	}
	return s2;
}
bool is_palindrome(char s[]) {
	int n=size(s);
	for(int i=0;i<n/2;i++) {
		if(*(s+i)!=*(s+n-1-i)) {
			return false;
		}
	}
	return true;
}
char *trim_left(const char *s) {
	int n=size(s);
	char *s2=new char [n];
	for(int i=0;i<n;i++) {
        *(s2+i)=*(s+i);
	}
	if(*(s2+0)==' ') {
		for(int i=0;i<n;i++) {
			if(*(s2+i)==' ') {
				for(int j=i;j<n-1;j++) {
					*(s2+j)=*(s2+j+1);
				}
				i--;
			}
		}
	}
	return s2;
}
char *trim_right(const char *s) {
	int n=size(s);
	char *s2=new char [n];
	for(int i=0;i<n;i++) {
        *(s2+i)=*(s+i);
	}
	if(*(s2+n-1)==' ') {
		for(int i=0;i<n;i++) {
			if(*(s2+i)==' ') {
				for(int j=i;j<n-1;j++) {
					*(s2+j)=*(s2+j+1);
				}
				i--;
			}
		}
	}
	return s2;
}
int main() {
	char *s=new char [50];
	cin >> s;
	//cout << reverse(s);
	//cout << delete_char(s,'a');
	int n;
	cin >> n;
	//cout << pad_right(s,n);
	//cout << pad_left(s,n);
	//cout << truncate(s,n);
	// cout << is_palindrome(s);
	//cout << trim_left(s);
	//cout << trim_right(s);
	return 0;
}
