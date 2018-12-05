lude<iostream>
#include<string>
using namespace std;
int main()
{
	string c;               //定义字符变量c   c指输入的单词
	int n;                //定义整型变量n   n指要移动的顺序
	int k;                //定义整型变量k   k指单词在单词表中对应的顺序
	cout<<"请输入一句话：";
	getline(cin,c);
	cout<<"字母顺序将移动n位  请输入n:";
	cin>>n;
for(int i=0;i<c.length();i++)  //输入句子
{
	if(c[i]>='a'&&c[i]<='z')          //如果输入为小写单词则执行下列语句
{	k=c[i]-'a';                 //算出单词在单词表中的顺序
    k=n+k;                   //算出单词移动n位后单词在单词表中的顺序
	if(k>25) k=k%26;         //如果单词顺序多出单词表则求余算出正确顺序
	c[i]=k+'a';                //算出移动位置后单词对应的ASCII表位置
  
}
}


for(i=0;i<c.length();i++)
{
if(c[i]>='A'&&c[i]<='Z')           //如果输入为大写单词则执行下列语句
{  k=c[i]-'A';                  //算出单词在单词表中的顺序
k=n+k;                       //算出单词移动n位后单词在单词表中的顺序
if(k>25) k=k%26;             //如果单词顺序多出单词表则求余算出正确顺序
c[i]=k+'A';}                    //算出移动位置后单词对应的ASCII表位置

}


for(i=0;i<c.length();i++)
{
if(c[i]<'A'||(c[i]>'Z'&&c[i]<'a')||c[i]>'z')    //如果输入不为大写或小写单词则执行下列语句
c[i]=c[i];                        //输出c
}


for(int j=0;j<c.length();j++)
{
cout<<c[j];
}
cout<<endl;
return 0;
}