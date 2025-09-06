/*Program to find the distace betn 2 point of x & y coordinates*/
#include<iostream>
#include<cmath>
using namespace std;
class Distance{
   float x,y;
   public:
   Distance()
   {
    x = 0;
    y = 0;
   }
   Distance(float x1, float y1)
   {
    x = x1;
    y = y1;
   }
   friend float distance(Distance p1, Distance p2);
};
float distance(Distance p1, Distance p2){
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
int main(){
    int x,y;
    cout<<"enter the x,y for p1:";
    cin>>x>>y;
    Distance p1(x,y);
    cout<<"enter the x,y for p2:";
    cin>>x>>y;
    Distance p2(x,y);
    cout<<"the distance between p1 p2 is:"<<distance(p1,p2);
return 0;
}