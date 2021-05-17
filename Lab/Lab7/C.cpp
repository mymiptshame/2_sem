#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double a, sum, sum_sq, m_x, m_x2;
    int num;
    sum = sum_sq = 0.000;
    num = 0;
    std::cin >> a;

    while (a !=0 ) {
        num++;
        sum += a;
        sum_sq += a*a;
        std::cin >> a;
    }
    m_x = sum/num;
    m_x2 = sum_sq/num;

    if (int(round(m_x*1000))%10 > 0) printf( "%.3f ", m_x);
    else {
        if (int(round(m_x*100))%10 > 0) printf( "%.2f ", m_x);
        else printf( "%.1f ", m_x);
    }
    if (int(round((m_x2-m_x*m_x)*1000))%10 > 0) printf( "%.3f ", (m_x2-m_x*m_x));
    else {
        if (int(round((m_x2-m_x*m_x)*100))%10 > 0) printf( "%.2f ", (m_x2-m_x*m_x));
        else printf( "%.1f ", (m_x2-m_x*m_x));
    }

}
