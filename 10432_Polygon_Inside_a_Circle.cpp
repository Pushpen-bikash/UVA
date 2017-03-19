#include<iostream>
#include<cstdio>
#include <math.h>
using namespace std;
#define PI 3.1415926535897932384626433832795

int main()
{
  double r,n,thita,base,height,area_of_half_triangle,area_of_each_triangle,total_area;

  while(scanf("%lf%lf",&r,&n)==2)
  {
      thita=2*PI/n;
      //cout<<"thita="<<thita<<" "<<thita/2<<endl;
      base=r*cos(thita/2);
      //cout<<"base="<<base<<endl;
      height=r*sin(thita/2);
      //cout<<"height="<<height<<endl;
      area_of_half_triangle=0.5*base*height;
      //cout<<"area_of_half_triangle="<<area_of_half_triangle<<endl;
      area_of_each_triangle=2*area_of_half_triangle;
      //cout<<"area_of_each_triangle="<<area_of_each_triangle<<endl;
      total_area=n*area_of_each_triangle;
      //cout<<total_area<<endl;
      printf("%.3lf\n",total_area);

      //cout<<sin(thita/2)<<" "<<cos(thita/2)<<endl;
  }
    return 0;
}
