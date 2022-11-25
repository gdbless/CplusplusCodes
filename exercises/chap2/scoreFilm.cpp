# include <iostream>
using namespace std;

int main()
{
    cout << "请你为 《肖申克的救赎》这部电影打分（只能输入数字1~9）：" << endl;
    int score;
    cin >> score;
    cout << "你为电影《肖申克的救赎》的评价为：此处有" << score << "个*。" <<endl;
    return 0;
}