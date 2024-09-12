#include<iostream>
#include<string>
using namespace std;

int main()
{
int compteur{0};
int nombre{0};
int nombre_1{0};
int nombre_2{0};
std::cin>>nombre;
while(compteur<nombre){
nombre_2+=1;
nombre_1+=nombre_2;
++compteur ;
}
std::cout<<"somme consécutifs="<<nombre_1<<endl;
    return 0;
}