// interview mcq
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b = 1;
//     a = 10;
//     if (++a)
//         cout << b;
//     else
//         cout << ++b;
//         //1
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1;
//     int b = 2;
//     if (a-- > 0 && ++b > 2)
//     {
//         cout << "Stage - Inside If ";
//     }
//     else
//     {
//         cout << "Stage2- Inside else";
//     }
//     cout << a << " " << b << endl;
// }
// Stage - Inside If 0 3

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=1;
//     int b=2;
//     if(a-->0 || ++b>2){
//         cout<<"Stage1 - Inside if ";
//     }
//     else{
//         cout<<"Stage2 - Inside else";
//     }
//     cout<<a<<" "<<b<<endl;
// }
// Stage2 - inside if 0 2

// #include <iostream>
// using namespace std;
// int main()
// {
//  int number =3;
//  cout<<(25*(++number));
// }
// 25*4=100

#include <iostream>
using namespace std;
int main()
{
    int a=1;
    int b=a++;
    
    int c=++a;
    cout<<b;
    cout<<c;
}
//1 3
