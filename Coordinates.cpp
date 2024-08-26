//Program to find coordinates lies in which quadrant
//Kautik Verma
//23070123073
//Exp-3(2)

#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter X coordinates: ";
    cin>>x;
    cout<<"Enter Y coordinates: ";
    cin>>y;
    if(x>0 && y>0)
    cout<<"The coordinate lies in first quadrant";
    else if(x<0 && y>0)
    cout<<"The coordinate lies in second quadrant";
    else if(x<0 && y<0)
    cout<<"The coordinate lies in third quadrant";
    else
    cout<<"The coordinate lies in fourth quadrant";
}

/*
**OUTPUT**
Output-Enter X coordinates: 3
Enter Y coordinates: 4
The coordinate lies in first quadrant
*/
