#include<iostream>
#include<utility>
#include<cmath>
using namespace std;
//using创建化名
using Zeros=std::pair<double,double>;
using Solution=std::pair<bool,Zeros>;
Solution solveQuadratic(double a,double b,double c){

if(a==0){
    if(b==0){

        return {false,{0,0}};
    }else{
        //线性方程bx+c=0
        double root =-c/b;
        return {true,{root,root}};
    }
}
double discriminant =b*b-4*a*c;
if(discriminant<0){
    return {false,{0,0}};
}else if(discriminant==0){
    double root=-b/(2*a);
    return {true,{root,root}};
}else{
    double root1=(-b+std::sqrt(discriminant))/(2*a);
    double root2=(-b-std::sqrt(discriminant))/(2*a);
    return {true,{root1,root2}};
}
}

int main(){
double a=1,b=-3,c=2;
//std::pair<bool,std::pair<double,double>>result=solveQuadratic( a, b, c);
auto result =solveQuadratic(a,b,c);
if(result.first){
    std::cout<<"Roots:"<<result.second.first<<","<<result.second.second<<std::endl;
}else{
    std::cout<<"No real roots."<<std::endl;
}
return 0;
}