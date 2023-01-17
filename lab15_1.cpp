#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N)
{
int x;
T numb;

for(int i = 1; i <= N-1; i++)
	{
	numb = d[i];
	for (x=i-1; x>=0&&numb>d[x]; x--)
	{
	 d[x+1] = d[x];
	}
	d[x+1] = numb;
	cout << "Pass " << i << ":";
	for (int y = 0; y < N; y++)
      {
        cout << d[y] << " ";
      }
cout <<endl;
}

}
int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
