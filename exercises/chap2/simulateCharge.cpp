#include<iostream>
using namespace std;
int  main()
{
    int money;
    cout<<"┌────────────────────────────────────────┐"<<endl;
    cout<<"│●电费账单                               │"<<endl;
    cout<<"│＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿│"<<endl;
    cout<<"│ 欠费金额  574元                        │"<<endl;
    cout<<"│     户名  长春惠鹏石油化工科技有限公   │"<<endl;
    cout<<"│           司                           │"<<endl;
    cout<<"│     户号  0140117369                   │"<<endl;
    cout<<"│     地址  吉林省长春市二道区中意之尊   │"<<endl;
    cout<<"│           小区4#楼商铺101              │"<<endl;
    cout<<"│  截止时间  19日04时                    │"<<endl;
    cout<<"└────────────────────────────────────────┘"<<endl;
    cout<<"请输入缴费金额（大于574元）：";
    cin>>money;
    printf("账户电费余额为：%d\n", money - 574);
    return 0;
}