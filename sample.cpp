#include <iostream>
#include <functional>
#include <string>
#include <type_traits>

using namespace std;

void convert_inplace(string& mystr){}

string convert(const string& mystr){
    return mystr;
}

// ternary operator
void bitrot_inplace(string& mystr){}


template<typename ret, typename par>
using fn = function<ret(par)>;

template<typename ret, typename par>
void caller(fn<ret,par> f) {
    typename remove_reference<par>::type p;
    ret r = f(p);
}

template<typename par>
void caller(fn<void,par> f) {
    typename remove_reference<par>::type p;
    f(p);
}

int main()
{
    auto f1 = fn<void,string&>(convert_inplace);
    auto f2 = fn<string,const string&>(convert);
    auto f3 = fn<void,string&>(bitrot_inplace);
    caller(f1);
    caller(f2);
    caller(f3);
    return 0;
}
