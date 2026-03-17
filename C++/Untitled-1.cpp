#include <iostream> // 包含输入输出流库，以便使用 cout 和 endl
using namespace std;// 使用标准命名空间，避免每次使用 cout 和 endl 时都要加上 std:: 前缀

int main() {// 主函数，程序的入口点
    char ch = 'a';//    定义一个 char 类型的变量 ch，并初始化为字符 'a'
    cout << ch << endl;// 输出字符 'a'
    cout << sizeof(char) << endl;// 输出 char 类型的大小，通常是 1 字节
    cout << (int)ch << endl;// 输出字符 'a' 的 ASCII 码值，通常是 97
    ch = 97; //虽然没有写 char ch，但变量 ch 之前已经被定义为 char 类型了，所以它的类型不会因为赋值 97 而改变。
    cout << ch << endl;// 输出 'a'，因为 97 是字符 'a' 的 ASCII 码值

    system("pause");  // 在这里暂停
    return 0;// 返回 0，表示程序成功结束
}

