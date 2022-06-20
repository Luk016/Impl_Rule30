// Code implementation of the Automata rule30 using BitWise
// by @Think1 2022   *Some horrible code here:
#include <iostream>
typedef unsigned long long u64;
int main()
{
  u64 stt = 1u << 31; char ch; unsigned int r;

  std::cout<<"Choose a character: ";
  std::cin>>ch;
  std::cout<<"Choose a Seed (Btw 10-124 or else): ";
  std::cin>>r;
  //------------------------------------------
  for (int i=0 ;i<64;++i) {
    for (int j=r;j-=1;)
      std::cout<<char(stt >> j & 1 ? ch : '-');
    std::cout << '\n';
    stt = (stt>> 1) ^ (stt|stt<< 1);
  }
  return 0;
}
