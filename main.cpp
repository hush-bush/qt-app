#include <QCoreApplication>
#include <iostream>
#include <QVector>
#include <algorithm>
#include <QtAlgorithms>
#include <locale.h>

using namespace std;

template <typename A> //создал шаблон
class intchar
{
protected:
    A ch[255]={};
    int k = 0;
public:
void zap()
{
    cout << "Input simbol: " << endl;
    cin>>ch[k];
    this -> k=this -> k+1;
}
void read()
{
    int search;
    cout << "Input number of element which you wanna find < "<<k<< endl;
    cin>>search;
    cout<< "Element equils = " << ch[search-1] << endl;
}
void print()
{
    int i=0;
    cout << "Outputs all elements :"<< endl;
    for(i=0; i<k; i++)
    {
        cout << ch[i]<< ' ';
    }
}
};
///////////////////////////
template <typename A>
class B : public intchar <A>
{
public:
    void sort()
    {
        qSort(this -> ch,this -> ch+ this -> k);
    }
};
/////////////////////////////////////////////
int main(int argc, char *argv[])

{
   QCoreApplication a(argc, argv);
   setlocale(LC_ALL, "Russian");
   B <char> obj1;
   B <int> obj2;
   obj1.zap();
   obj1.zap();
   obj1.zap();
   obj1.read();
   obj1.sort();
   obj1.print();

   obj2.zap();
   obj2.zap();
   obj2.zap();
   obj2.read();
   obj2.sort();
   obj2.print();

   return a.exec();
}
