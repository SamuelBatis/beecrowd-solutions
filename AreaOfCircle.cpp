#include <iostream> 
#include <iomanip>

int main() {
 
    double R;
    const double pi = 3.14159;

    
    std::cin >> R;

    
    double A = pi * R * R;

    
    std::cout << "A=" << std::fixed << std::setprecision(4) << A << std::endl;

    return 0;
}
