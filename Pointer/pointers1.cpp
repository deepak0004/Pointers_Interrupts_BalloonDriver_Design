/*
Author : deepak2015
Plagiarism is bad.
*/
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    char abc[27];
    char *ptr = abc;

    strcpy(abc, "abcdefgxyz");

    cout << "abc: " << abc << endl;
    cout << "*abc: " << *abc << endl;
    cout << "abc[2]: " << abc[2] << endl;
    cout << "&abc[3]: " << &abc[3] << endl;
    cout << "abc+4: " << abc+4 << endl;
    cout << "*(abc+5)+2: " << *(abc+5) + 2 << endl;
    cout << "abc[10]: " << abc[10] << endl;
    cout << "abc[12]: " << abc[12] << endl;
    cout << "&ptr: " << &ptr << endl;
    cout << "*ptr: " << *ptr << endl;
    cout << "ptr: " << ptr << endl;
    cout << "&abc: " << &abc << endl;

    /*
     * What are the types and values of expressions:
     *

     * 1. abc
     * 2. *abc
     * 3. abc[2]
     * 4. &abc[3]
     * 5. abc+4
     * 6. *(abc+5) + 2
     * 7. abc[10]
     * 8. abc[12]
     * 9. &ptr// ??? a = &ptr;
     */

    return 0;
}
