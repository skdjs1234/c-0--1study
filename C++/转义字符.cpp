#include <iostream>
using namespace std;

int main() {
    // 换行符 \n
    cout << "hello world\n";// 输出 "hello world" 后换行
    // 反斜杠 
    cout << "\\" << endl;// 输出一个反斜杠 \，然后换行
    // 水平制表符 \t
    cout << "hello\tworld" << endl;// 输出 "hello" 和 "world" 之间有水平制表符分隔，然后换行
    system("pause");
    return 0;
}