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

void some_function() //値を返却しない関数
{
  double d = 2.2; //浮動小数点数を初期化
  int i=7; //整数を初期化
  d = d+i; //dに加算結果を代入
  i = d*i //iに積を代入(double型のd*iをintに切捨て)
}

double d1 = 2.3; //d1を2.3で初期化
double d2 {2.3}; //d2を2.3で初期化

complex<double> z=1; //倍精度浮動小数点スカラの複素数
complex<double> z2 {d1,d2};
complex<double> z3 = {1,2}; //{...}形式では=を付けてもよい

vector<int> v {1,2,3,4,5,6}; //intのvector

//int i1 = 7.2; i1は7になる(驚いたかな?)
//int i2 = {7.2}; エラー:浮動小数点から整数への変換
//int i3= {7.2}; エラー:浮動小数点から整数への変換(=は省略可)

auto b = true; //bool型
auto ch = 'x'; //char型
auto i = 123; //int型
auto d = 1.2; //double型
auto z = sqrt(y); //zはsqrt(y)の返却型となる


