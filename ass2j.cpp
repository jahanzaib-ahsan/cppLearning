#include <iostream>
using namespace std;
int main()
{
    long total, men, women, literatemen, literatewomen, literate, illiteratemen, illiteratewomen;
    total = 80000;
    men = 80000 * 52 / 100;
    women = total - men;
    literatemen = total * 35 / 100;
    literate = total * 48 / 100;
    literatewomen = literate - literatemen;
    illiteratemen = men - literatemen;
    illiteratewomen = women - literatewomen;
    cout << "Total number of illiterate men is : " << illiteratemen << endl;
    cout << "Total number of illiterate women is : " << illiteratewomen << endl;

    return 0;
}