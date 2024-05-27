#include <iostream>
#include <stack>
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(nullptr));
    std::stack<int> stack;
    int n;
    std::cout << "Введите количесво элементов Стека:";
    std::cin >> n;
    for (int i = 0; i < n;i++) {
        stack.push(rand() / 100);
    }
    int* p = &stack.top();

    std::cout << "Вершина стека:" << *p << "\n" << "Указатель: " << p;

}