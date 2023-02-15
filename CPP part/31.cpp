#include <iostream>
#include <ctime>
#include <cstdlib>
#define MAX_LEN  100;
#define CHAR_SET "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define CHAR_SET_SIZE 52
class String {
private:
    char head[100];
public:
    String(char *Head);//构造函数
    void reverse();
    void print();
};

String::String(char *Head) {
    char *head = new char[8];
    strcpy(this->head, Head);
}
void String::reverse() {
    for (int low = 0, high = strlen(this->head) - 1; low <= high; low++, high--) {
        char tmp = this->head[low];
        this->head[low] = this->head[high];
        this->head[high] = tmp;        
    }
}
void String::print() {
    int n = strlen(this->head);
    for (int i = 0; i < n; i++) {
        std::cout << this->head[i];
    }
    std::cout << std::endl;
}
//随机生成字符串函数
char *generate_random_string(int len) {
    char *str = new char[len + 1];
    for (int i =  0; i < len; i++) {
        str[i] = CHAR_SET[rand() % CHAR_SET_SIZE];
    }
    str[len] = '\0';
    return str;
}

int main() {
    std::cout << "请输入要生成随机字符串的长度: ";
    int len;
    std::cin >> len;
    time_t t; //time_t是long类型

    srand(static_cast<unsigned>(time(&t))); //srand和rand
    char * myHead = generate_random_string(len);
    std::cout << "随机生成的字符串: " << myHead << std::endl;

    String myString(myHead);
    std::cout << "构造函数实现的初始化: ";
    myString.print();
    
    std::cout << "翻转后的字符串: ";
    myString.reverse();
    myString.print();

    delete [] myHead;
    return 0;
}