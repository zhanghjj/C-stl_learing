//c标准库
/*
cstring:
	strlen()字符串长度；
	strcmp()字符串比较
	strcpy()字符串拷贝
	memset()暴力清空
	memcpy()暴力拷贝

cmath：
	三角函数、指数函数、浮点数取整

cstdlib:
	qsort()C语言快排，C++有更稳定的快排
	rand()随机数
	malloc() free()C动态分布内存

ctime:
	time(0)秒数，配合随机数
	clock()程序启动到目前位置的毫秒数

cctype:
	isdigit(),isalpha()，判断是否为数字，大小写字母

vector:
	可变长度数组，可用下标表示访问，可以增加长度
	增加用 push_back(),减少用pop_back();
	list.size();数组的元素个数
	list.clear();一键清空数组
	list.empty()；数组是否为空
	list.begin();数组首元素迭代器
	list.end();数组最后一个元素的下一个元素的迭代器，实际不存在
	list.erase();删除数组某个迭代器所在位置的数字；

	vector(int) list;
	list.push_back(1);
	cout<<"长度为"<<list.size()<<endl;
	list.pop_back();
	for(int i =0;i<list.size();i++)
	{
		cout<<list[i]<<endl;
	}

string:
	str.length();str.size();
	str.insert(1,"aaa");在1处插入aaa
	str.c_str();返回C语言字符串，用于printf；
	str.append(str2);将str2拼接至str后面
	str.compare(str2）;比较
	str ==str2;4
	str +=str2;
	str +='a';

queue：
	队列
	queue<int> q;
	q.front();返回第一个元素的引用
	q.back();返回最后一个元素的引用
	q.push(1);在队尾增加一个元素
	q.pop();删除第一个元素，没有返回值
	q.size()；元素的个数
	q.empty()；判断是否为空

	优先队列
	priority_queue<int> q;会按大小排序，每次出列为最大元素，

stack:
	栈
	s.top();返回最后一个元素；


map:
	关联式容器，任意数据类型下的超级数组
	map<键的数据类型，值的数据类型> 变量名
	map<string,int> data;会排序，时间为o(nlogn)
	unordered_map<string,int> data;无序，时间为o(1)
pair c++内置结构体，只有first和second
	pari<int,double> p;

	map<string,int> data;
	data["星期天"]=7；
	data.insert(pair<string,int>("星期五"，5))；map也可以通过pair来添加元素

algorithm:
	算法库
	sort(),快速排序，可自定义排序规则
*/



#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

/*
生成一个0-100的随机数;
*/
int Randint()
{
	srand(time(NULL));
	return rand() % 100;
}

int main()
{

}