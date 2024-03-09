#include    <iostream>
using namespace std;

int main()
{
   int N, M, V=1;
   do
   {
      cout << "Enter your N, M(0 < N < 10,  1 <= M <= 10): ";
      cin >> N >> M;
   } while (0 >= N >= 10 || 1 > M > 10);
  for (int i = 0; i < M; i++)
  {if (i>0)
  {
   for (size_t j = 0; j < i; j++)
   {  V=V*N;
      cout<<","<<V;
   }
  }else{
   cout<<"1";
  }
  }
  cout<< endl;
}
