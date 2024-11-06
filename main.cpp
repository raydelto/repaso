#include <iostream>

using namespace std;

/*


5->             0      1      0        1
3->             0      1      1        0 

                2^3    2^2    2^1     2^0




3->                 1  1
1->                 0  1
3 & 1               0  1   


    0 0 0 0 0 0
 |  0 0 0 1 0 0
 ________________
     0 0 1 0 0
&
|
^
*/





int main()
{
    int x = 3;
    int y = x << 1;

    cout << "Hola mundo. Y = " << y << endl;
    int tres = 3;
    int uno = 1;
    int resultado = tres & uno;
    cout << "El resultado de la operación binaria es " << resultado << endl;
    return 0;
}