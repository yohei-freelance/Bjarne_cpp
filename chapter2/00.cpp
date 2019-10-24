#include <iostream>
using namespace std; //std::なしでstd内の名前を見えるようにする

double square(double x)
{
  return x*x;
}

void print_square(double x)
{
  cout << "the square of " << x << " is " << square(x) << "\n";
}

int main()
{
  std::cout << "Hello, world!\n";
  print_square(1.234); // "the square of 1.234 is 1.52276"と表示
}

// bool 論理値:取り得るのはtrueとfalse
// char 文字:たとえば'a'や'z'や'9'
// int 整数:たとえば-213や42や1066
// double 倍精度浮動小数点数:たとえば3.14や299793.0

// x+y 加算
// +x 単項加算
// x-y 減算
// -x 単項減算
// x*y 乗算
// x/y 商
// x%y 剰余の整数部

// x==y 等しい
// x!=y 等しくない
// x<y より小さい
// x>y より大きい
// x<= 以下
// x>= 以上
