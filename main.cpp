#include    <iostream>
using namespace std;

int main()
{
   int N, M;
   do
   {
      cout << "Enter your N, M(0 < N < 10,  1 <= M <= 10): ";
      cin >> N >> M;
   } while (0 >= N >= 10 && 1 > M > 10);
   
   cout << "Enter your N, M(0 < N < 10,  1 <= M <= 10): ";
   cin >> N >> M;
   
  for (int i = 0; i < M; i++)
  {if (i>0)
  {
   for (size_t j = 0; j < i; j++)
   {
      cout<<N<<",";
      N=N+N;
   }
  }else{
   cout<<"1";
  }
  }
  cout<< endl;
}
