#include <iostream>
#include <string>
#include <string_view>

std::string getUserName()
{
    std::string name{};

    std::cout << "输入配送员姓名：" ;
    std::getline(std::cin >> std::ws, name);

    return name ;
}

int getUserLevel()
{
    int level{};

    std::cout << "\n配送员等级是: " ;
    std::cin >> level ;

    return level ;
}

int getUserPower()
{
    int power{};

    std::cout << "\n配送员攻击力是: " ;
    std::cin >> power ;

    return power ;
}

int getUserCheckOrder()
{
    int order{};

    std::cout << "\n配送员已完成的订单数: " ;
    std::cin >> order ;

    return order ;
}

double userScorex(int level) //配送员评分暴击判断
{
    double scorex {} ;
    if (level >= 300 )
    {
        double scorex {level * 3.0} ;

        return scorex ;
    }

    else if (level >= 200)
    {
        double scorex {level * 2.5} ;

        return scorex ;
    }

    else if (level >= 150)
    {
        double scorex {level * 2.0} ;

        return scorex ;
    }

    else if (level >= 100)
    {
        double scorex {level * 1.5} ;

        return scorex ;
    }

    else
    {
        double scorex {level * 1.0} ;

        return scorex ;
    }
}

double userScore(double order)
{
    double Score{order * 2.0};

    return Score ;
}

double userEndScore(double score , double scorex)
{
    double EndScore{score + scorex} ;
    
    return EndScore ;
}

char userGrade(double endScore)
{
    char garde{};

    if (endScore >= 1500)
    {
        garde = 'S' ;

        return garde ;
    }

    else if (endScore >= 1200)
    {
        garde = 'A' ;

        return garde ;
    }

    else if (endScore >= 1000)
    {
        garde = 'B' ;

        return garde ;
    }

    else if (endScore >= 800)
    {
        garde = 'C' ;

        return garde ;
    }

    else if (endScore >= 700)
    {
        garde = 'D' ;

        return garde ;
    }

    else
    {
        garde = 'F' ;

        return garde ;
    }
}

void output()
{
    std::string name{getUserName()} ;
    int level{getUserLevel()} , power{getUserPower()} , order{getUserCheckOrder()} ;
    double scorex{userScorex(level)} , score{userScore(order)} , endScore{userEndScore(score , scorex)} ;
    char grade{userGrade(endScore)} ;

    std::cout << "\n欢迎使用配送员评分系统, " << name << '\n'
    << "您的等级为 " << level << "级" << '\n'
    << "基础攻击力 " << power << "点" << '\n'
    << "截至目前，您共完成了 " << order << " 份订单" << '\n'
    << "本次您的订单分数为 " << score << " , 暴击评分为 " << scorex << " 共计 " << score + scorex << '\n'
    << "以上，您的评级为 " << grade << '\n'
    <<"Keep on , keeping on!" ;
}

int main()
{
    output() ;

    return 0 ;
}