// Bitwise Operator
// AND=&
// OR=|
// NOT=~
// XOR=^

// In AND all must be 1 then output is 1
// In OR atleast any 1 then op is 1
// In NOT invert means o to 1 viceversa
// In XOR 11 =0 and 01=1,10=1,00=0 means only one time 1 op will be 1

#include <iostream>
using namespace std;
int main()
{

//mcq asked in interview ques
    int a = 4;
    int b = 6;
    cout << "a&b" << (a & b) << endl;
    cout << "a|b" << (a | b) << endl;
    cout << "~a" << (~a) << endl;
    cout << "a^b" << (a ^ b) << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    int i = 7;

    cout << (++i) << endl;
    // 8
    cout << (i++) << endl;
    // 8 , i=9
    cout << (i--) << endl;
    // 9, i=8
    cout << (--i) << endl;
    // 7, i=7

}


