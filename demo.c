//c��׼��
/*
cstring:
	strlen()�ַ������ȣ�
	strcmp()�ַ����Ƚ�
	strcpy()�ַ�������
	memset()�������
	memcpy()��������

cmath��
	���Ǻ�����ָ��������������ȡ��

cstdlib:
	qsort()C���Կ��ţ�C++�и��ȶ��Ŀ���
	rand()�����
	malloc() free()C��̬�ֲ��ڴ�

ctime:
	time(0)��������������
	clock()����������Ŀǰλ�õĺ�����

cctype:
	isdigit(),isalpha()���ж��Ƿ�Ϊ���֣���Сд��ĸ

vector:
	�ɱ䳤�����飬�����±��ʾ���ʣ��������ӳ���
	������ push_back(),������pop_back();
	list.size();�����Ԫ�ظ���
	list.clear();һ���������
	list.empty()�������Ƿ�Ϊ��
	list.begin();������Ԫ�ص�����
	list.end();�������һ��Ԫ�ص���һ��Ԫ�صĵ�������ʵ�ʲ�����
	list.erase();ɾ������ĳ������������λ�õ����֣�

	vector(int) list;
	list.push_back(1);
	cout<<"����Ϊ"<<list.size()<<endl;
	list.pop_back();
	for(int i =0;i<list.size();i++)
	{
		cout<<list[i]<<endl;
	}

string:
	str.length();str.size();
	str.insert(1,"aaa");��1������aaa
	str.c_str();����C�����ַ���������printf��
	str.append(str2);��str2ƴ����str����
	str.compare(str2��;�Ƚ�
	str ==str2;4
	str +=str2;
	str +='a';

queue��
	����
	queue<int> q;
	q.front();���ص�һ��Ԫ�ص�����
	q.back();�������һ��Ԫ�ص�����
	q.push(1);�ڶ�β����һ��Ԫ��
	q.pop();ɾ����һ��Ԫ�أ�û�з���ֵ
	q.size()��Ԫ�صĸ���
	q.empty()���ж��Ƿ�Ϊ��

	���ȶ���
	priority_queue<int> q;�ᰴ��С����ÿ�γ���Ϊ���Ԫ�أ�

stack:
	ջ
	s.top();�������һ��Ԫ�أ�


map:
	����ʽ�������������������µĳ�������
	map<�����������ͣ�ֵ����������> ������
	map<string,int> data;������ʱ��Ϊo(nlogn)
	unordered_map<string,int> data;����ʱ��Ϊo(1)
pair c++���ýṹ�壬ֻ��first��second
	pari<int,double> p;

	map<string,int> data;
	data["������"]=7��
	data.insert(pair<string,int>("������"��5))��mapҲ����ͨ��pair�����Ԫ��

algorithm:
	�㷨��
	sort(),�������򣬿��Զ����������
*/



#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

/*
����һ��0-100�������;
*/
int Randint()
{
	srand(time(NULL));
	return rand() % 100;
}

int main()
{

}