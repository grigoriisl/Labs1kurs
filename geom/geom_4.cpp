#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int len=8;
    float v[len];
    float c1,c2, sum=0,res=0;
    int num =1;
    for (int i =0; i< len ; i=i+2)
    {
        
        cout << "Введите координату X " << num << " -ого элемента";
        cin >> v[i];
        cout << "Введите координату Y " << num << " -ого элемента";
        cin >> v[i+1];
        num = num+1;
    }
    res=pow((pow((v[3]-v[1]),2)+pow((v[2]-v[0]),2)), 0.5);

    cout << "Длина диагонали: " << res;
    return 0;
}