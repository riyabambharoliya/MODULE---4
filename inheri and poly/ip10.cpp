//QUE.10 : Write a program to concatenate the two strings using Operator Overloading */

#include<iostream>
#include<string.h>
using namespace std;

class String {
private:
    char str[100];
public:
    String(const char* s = " ")
	 {
	 
        strcpy(str, s);
}

    void get() {
        cout << str << endl;
    }

    String operator+(const String& s) 
	{
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
};

int main() 
{
    String s1("JAY");
    String s2("SHREEKRISHNA");
    s1.get();
    s2.get();
    String s3 = s1 + s2;
    s3.get();
    return 0;
}
