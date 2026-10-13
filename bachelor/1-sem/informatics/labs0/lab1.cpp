//Задание 1

#include <iostream>   
#include <cmath>

using namespace std;

int main()
{
    float a_f = 1000.0f;
    float b_f = 0.0001f;
    float s3_f = pow(a_f + b_f, 3);
    float a3_f = pow(a_f, 3) ;
    float z_f = 3.0f * a_f * pow(b_f, 2) +
pow(b_f, 3) + 3.0f * pow(a_f, 2) * pow(b_f, 2) ;
    float r_f = s3_f - a3_f / z_f;
    cout << "float: " << r_f << endl;
        
    double a_d = 1000.0;
    double b_d = 0.0001;
    double s3_d = pow(a_d + b_d, 3);
    double a3_d = pow(a_d, 3);
    double z_d = 3.0 * a_d * pow(b_d, 2) +
pow (b_d, 3) + 3.0 * pow(a_d, 2) * pow(b_d, 2) ;
    double r_d = s3_d - a3_d / z_d;
    cout << "double: " << r_d << endl;
return 0;
}

//Задание 2
#include <iostream> 

using namespace std;

int main()
{
    int n = 5, m = 10;
    
    cout << "n++-m = " << n++-m << endl;
    
    n = 5; m = 10;
    cout << "m-- > n =" << (m-- > n) << endl;

    n = 5; m = 10;
    cout << "n-- > m= " << (n-- > m) << endl;
    
    return 0;
}




