#include "math.h"
#include "io.h"

int main() //调用询问函数返回的值给变量赋值，然后交给计算函数进行输出
    {
        int o (askUser1()) ,t (askUser2());
        numPlus(o , t) ;
        numTimes(o , t) ;

        return 0;
    }