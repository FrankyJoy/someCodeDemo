// 测试getline函数，从输入中读入一行数字h或者字符，空格分开，将得到的数字或字符分别输出

#include <iostream>
#include <string>
#include <vector>

int main() {

    using std::string;
    using std::cin;
    using std::cout;
    using std::endl;
    using std::vector;

    string strInput;
    cout << "input sth splited with space and ended with enter:" << endl;

    getline(cin,strInput);       //get()在换行符处结束，但会读取换行符，因此需要在最后加上get()读取空字符。
    vector<string> strvec;
    string tmp = "";  //不能为NULL

    for(auto it=strInput.begin();it!=strInput.end();it++)
    {
        if(*it==' '){
            strvec.push_back(tmp);
            tmp.clear();
        }
        else
        {
            tmp += *it;
        }
    }
    // 程序运行最后,仍然有未输出的tmp，没有找到'\r'或者'\n'或者EOF
        strvec.push_back(tmp);
    for(auto it=strvec.begin();it!=strvec.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}