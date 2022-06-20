#include <iostream>
#include <cstdio>
using namespace std; 
class date{
    int dd,mm,yy;
    public:
    date(char* d){
        sscanf(d,"%d%*c%d%*c%d", &mm,&dd,&yy);
    }
    date(int m, int d, int y){
        dd=d;
        mm=m;
        yy=y;
    }
    void displayDate(){
        cout<<mm<<"/"<<dd<<"/"<<yy<<endl;
    }

};
int main()
{
    date d1((char*)"1/2/2000");
    date d2(1,2,2022);
    d1.displayDate();
    d2.displayDate();
    return 1;
}