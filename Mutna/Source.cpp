#include <iostream>
#include "String.h"

using namespace std;

int main()
{
    String t("test");
    String t1("test2");
    
    t.print();
    t1.print();

    String::swap(t, t1);
    cout << "simple t" << endl;
    t.print();


    cout << "t2" << endl;
    t1.print();

    String copy(move(t));
    copy.print();

    t = move(t1);
    t.print();


	return 0;
}