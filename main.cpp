#include <iostream>
#include "BigDecimalInt.h"
#include"string.h"

using namespace std;

int main()
{
    BigDecimalInt n1("123456789012345678901234567890");
    BigDecimalInt n2("113456789011345678901134567890");
    BigDecimalInt n3("-123456789012345678901234567890");
    BigDecimalInt n4("-113456789011345678901134567890");
    cout<<n1+n2;
    cout<<n3+n4;
    cout<<n1+n4;

    return 0;
}
