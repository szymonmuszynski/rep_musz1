#include <iostream>

#include <iostream>
int Policz (int a, int b) {
    return (a+b)*(a-b);
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout <<"W trzecim branchu; (a+b)*(a-b)=" << Policz(2,3) <<
              std::endl;
    return 0;

}
