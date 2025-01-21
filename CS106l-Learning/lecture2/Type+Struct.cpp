#include <string>//-->std::string
#include <iostream>//-->std::cout,std::endl
#include <sstream>
#include <utility>//-->std::pair
using namespace std;

std::pair<int,int> findMinMax(int a,int b);

    int f(double foo) { return (int)(foo+0.5);}//What is this?
    //这是int类型函数f，参数是doubleleix，返回值是强制转换参数+0.5后四舍五入成int类型



    double func(int x)//(1)
    {
        return (double)x +3;//typecast:int->double
    }

    double func(double x)//(2)
    {
        return x*3;
    }
    int main(){
    func(2);//uses version(1),return:5.0
    func(2.0);//uses version(2),return:6.0
    
    auto result=findMinMax(10,5);
    std::cout<<"Min:"<<result.first<<",Max:"<<result.second<<std::endl;
    

    //嵌套使用std::pair
    std::pair<std::string,std::pair<int,double>> product{"Apple",{10,1.5}};
    std::cout<<"Product:"<<product.first<<",Quantity:"<<product.second.first
    <<",Price:"<<product.second.second<<std::endl;
    return 0;
    }
    


    //struct bundle data together
    struct StanfordID
    {
        string name; //There are called fields
        string sunet; //Each has a name and types
        int idNumber;
    };



//Return multiple values 返回多个值
StanfordID issuNewID1(){
    StanfordID id;//Initialize struct 初始化
    id.name="dingjiaao";//Access field with '.' 用.来使用属性
    id.sunet="jtrb";
    id.idNumber=123456;
    return id;
}




//list initialization 列表初始化 '='可有可无
StanfordID jrb ={"dingjiaao","jtrb",123456};
StanfordID fi {"hesuyuan","fibanez",654321};




//Using list initialization
StanfordID issuNewID2()
{
    StanfordID id ={"hesuyuan","fibanez",654321};
    return id;
}

StanfordID issuNewID3()
{
    return {"dingjiaao","jtrb",123456};
}
//将多个相关的变量组合在一起。形成一个新的数据对象，从而更好的组织和管理代码



//std::pair是一个标准化的工具，省去了定义自定义结构的麻烦。

// struct Order {
//     std::string item;
//     int quantity;
// };
// Order dozen= {"Eggs",12};

std::pair<std::string,int>dozen{"Egg",12};
std::string item=dozen.first;  //"Eggs"
int quantity =dozen.second;   //12



//std::pair的用法示例
//用在函数返回值中
std::pair<int,int> findMinMax(int a,int b){
    if(a>b){
        return {b,a};
    }else {
        return {a,b};
    }
}


