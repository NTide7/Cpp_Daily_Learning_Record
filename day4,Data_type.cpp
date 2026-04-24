#include <iostream>
//询问用户数据的函数
int asklevel()
{
    int level{};

    std::cout << "这个角色的等级是？";
    std::cin >> level ;
    
    return level ;
}

int askHp()
{
    int hp{};

    std::cout << "这个角色的基础生命值是？";
    std::cin >> hp ;
    
    return hp ;
}

int asklevelToHp()
{
    int levelHp{};

    std::cout << "这个角色的每级成长多少生命值？";
    std::cin >> levelHp ;
    
    return levelHp ;
}

float askSpeed()
{
    float speed{};

    std::cout << "这个角色的移动速度是？";
    std::cin >> speed ;
    
    return speed ;
}

char askGrade()
{
    char grade{};

    std::cout << "这个角色的评级是？";
    std::cin >> grade ;
    
    return grade ;
}

bool askUnlock()
{
    bool lock{};

    std::cout << "这个角色解锁了吗?输入1代表解锁,输入0则反之: ";
    std::cin >> lock ;
    
    return lock ;
}
//用于计算数据的函数
int endHp(int Hp , int level , int levelHp) //最终生命值计算并返回
{
    int endHp{Hp + level * levelHp} ;
    
    return endHp;
}

int halfSpeed(float Speed) //半速值计算并返回
{
    int halfSpeed{Speed / 2.0};

    return halfSpeed ;
}

int level_l5(int level) //计算当前等级除以5的值并返回
{
    int level5{level / 5} ;

    return level5 ;
}
//总结并输出
void outPut(int level , int hp , int levelhp , int endhp , int halfSpeed , int l5 , float speed , char grade , bool unlock) 
{
    std::cout << '\n' << "角色数据收集完成，以下为总结：\n"
    << "角色基础生命：" << hp << '\n'
    << "角色生长生命：" << levelhp << '\n'
    << "角色当前生命：" << endhp << '\n'
    << "角色基础速度：" << speed << '\n'
    << "角色减半速度：" << halfSpeed << '\n'
    << "角色当前等级：" << level << '\n'
    << "角色折扣等级：" << l5 << '\n'
    << "角色稀有评级：" << grade << '\n'
    << "角色解锁状态：" << unlock << '\n' ;
}
//main，主要收发公用函数
int main()
{
    int level{asklevel()} , Hp{askHp()} , levelHp{asklevelToHp()} ;

    float Speed{askSpeed()} ;

    char grade{askGrade()} ;
    
    bool unlock{askUnlock()} ;

    int eH{endHp(Hp , level , levelHp)};
    
    int hS{halfSpeed(Speed)};

    int l5{level_l5(level)};

    outPut(level , Hp , levelHp , eH , hS , l5 , Speed , grade , unlock);

    return 0 ;
}