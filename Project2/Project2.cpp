#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <iomanip>
#include <thread>
#include <Windows.h>
#include <conio.h> //�жϼ�������
#include <cstring>
#include <cmath>
#include <limits.h>
#include <assert.h>//����assert()����
#include <math.h>
//#include <ctime>

//STL��׼��
#include <iterator>
#include <algorithm>//����ʹ��STL�㷨��
#include <functional>//����ʹ��STL�ĺ�������
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>

#include <numeric>

//#include "clock.h"
#include "point.h"//Point��Ŀ���ļ�
//#include "account.h"//employeeʹ���ļ�   ���ÿ�ʹ���ļ�



using namespace std;

//����b��ȡa�ķ�����
/*
int common(int a, int b) {
	if (a > b)
		return 0;
	else if (a == b || a == 0)
		return 1;
	else
		return common(a - 1, b - 1) + common(a, b - 1);
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << "C(" << a << "," << b << ")=" << common(a, b) << endl;
	cout << "�Ƿ�������㣿Y/N";
	system("pause");
	return 0;
	}
*/


//��n������ȡm�������������ȡ���Ŀ���
/*
void select_core(vector<int> &a, vector<int> &b, int left, int m, int M) {
	int N = a.size();
	if (m == 0) {
		for (auto i : b)
			cout << i << " ";
		cout << endl;
		return;
	}

	for (int i = left; i < N; i++) {
		b[M - m] = a[i];
		select_core(a, b, i + 1, m - 1, M);

	}


}

int main() {
	cout << "n= ";
	int n;
	cin >> n;
	cout << endl;
	cout << "m= ";
	int m;
	cin >> m;
	cout << endl;
	vector<int> n_;
	for (int i = 1; i <= n; i++)
		n_.push_back(i);

	vector<int> out_(m);
	select_core(n_, out_, 0, m, m);

	vector<int> k{9,8,7,6,5,4};
	for(auto i:k)
		cout<<i<<" ";
	return 0;

}
*/



//��ŵ���ƶ�����
/*
//��src���������һ�������ƶ���destָ����
int i;
void move(char src, char dest) {
	cout << src << "-->" << dest << endl;
	i++;
}
//��n�����Ӵ�src���ƶ���dest�룬��medium����Ϊ�н�
void hanoi(int n, char src, char medium, char dest) {
	if (n == 1)
		move(src, dest);
	else {
		hanoi(n - 1, src, dest, medium);
		move(src, dest);
		hanoi(n - 1, medium, src, dest);
	}
}
//��n �����Ӵ�A���Ƶ�C����Էֽ�Ϊ�������裺

//��A ��n - 1�������Ƶ� B���ϣ�����C�룩��

//��A����ʣ�µ�һ�������Ƶ�C���ϣ�

//��n - 1�����Ӵ�B���Ƶ�C���ϣ�����A�룩��


int main() {
	int m;
	cout << "Enter the number of disks:";
	cin >> m;
	cout << "the step to moving " << m << " disk:" << endl;
	hanoi(m, 'A', 'B', 'C');
	cout << "total moving times: " << i << endl;
	system("pause");
	return 0;
}
*/



//ʹ��ָ�뽻��������ֵ
/*
void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main() {
	int a = 10, b = 15;
	swap(&a, &b);
	cout << "a:" << a << " b:" << b << endl;
	return 0;
}
*/



//ʹ�����ý���������ֵ
/*
void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}
void main() {
	int x, y;
	cout << "��������int����ֵ" << endl;
	cin >> x >> y;
	swap(x, y);
	cout << "���������ֵ" << x << " , " << y << endl;
	system("pause");
}
*/



//���������÷���ֵ
/*
int & valplus(int &a);
int main()
{
	int num1 = 10;
	int num2;
	num2 = valplus(num1);  //ֱ�ӽ�valplus����õ���ֵ����num2����������ʱ�ռ䣨���÷��أ�
	cout << num1 << " " << num2 << endl;
	system("pause");
	return 0;
}
int & valplus(int &a)
{
	a = a + 5;
	return a;
}
*/



//static_castǿ������ת��
/*
void main() {
	int a, b;
	a = 10;
	b = 3;
	//cout << (double)a / (double)b << endl;
	cout << static_cast<double>(a) / static_cast<double>(b) << endl;
	system("pause");
}
*/



//const_castǿ������ת��
/*
void main()
{
	const int a = 10;
	const int * p = &a;
	int *q;
	q = const_cast<int *>(p);
	*q = 20;    //fine
	cout << a << " " << *p << " " << *q << endl;
	cout << &a << " " << p << " " << q << endl;
	system("pause");
}
*/



//��Ĭ�ϲ���ֵ�ĺ�����������������㣩
/*
int getVolume(int length, int width = 2, int height = 3);

int main() {
	const int X = 10, Y = 12, Z = 15;

	cout << "Some box data is " << getVolume(X, Y, Z) << endl;
	cout << "Some box data is " << getVolume(X, Y) << endl;
	cout << "Some box data is " << getVolume(X) << endl;
	system("pause");
	return 0;
}

int getVolume(int length, int width, int height) {
	cout << setw(5) << length << setw(5) << width << setw(5) << height << '\t';
	return length * width*height;
}
*/



//���������ļ�����
/*
const double PI = 3.14159265358979;
inline double calArea(double radius) {  //inline��һ�����飬����������Ƕ�������򣬵�Ȼ���������ܲ��ɻ򲻲���

	return PI * radius * radius;

}

int main() {

	double r = 3.0;

	double area = calArea(r);

	cout << area << endl;
	system("pause");


}
*/



//constexpr��������
/*
constexpr int get_size() { return 20; }
constexpr int foo = get_size();  //��ȷ��foo��һ���������ʽ
void main()
{
	get_size();
	system("pause");

}
*/



//namespaceӦ�þ���
/*
namespace feng {
	int a;
}
namespace yun {
	bool a;
}
void main() {
	feng::a = 125;
	yun::a = true;
	cout << "feng:" << feng::a << endl;
	cout << "yun:" << yun::a << endl;
	system("pause");
}
*/



//�ص�����ѧϰ1
/*
int basketball()//����1
{
	printf("ѡ������\n");
	return 0;
}

int football()//����2
{
	printf("ѡ������\n");
	return 0;
}

void selectball(int (*ball)())//����3
//void selectball(int ball())
{
	printf("ѡ��ʲô��\n");
	ball();
}

int main(void)
{
	selectball(&basketball);
	selectball(&football);
	//selectball(basketball);
	//selectball(football);
	system("Pause");
	return 0;
}
*/



//�ص�����ѧϰ2
/*
typedef int (callBack)(const void *buffer, size_t size, char *p_out);

void callFunc(callBack *consume_bytes, char *p_out) {
	printf("callFunc\n");
	const void *buffer = NULL;
	consume_bytes(buffer, 0, p_out); //����ֵ���������
}

int callBackFunc(const void *buffer, size_t size, char *p_out) {
	printf("callBackFunc\n");
	memset(p_out, 0x00, sizeof(char) * 100);
	strcpy(p_out, "encoderCallback:this is string.");
	return 1;
}

int main(int argc, char *args[]) {
	char p_out[100];
	callFunc(callBackFunc, p_out);
	printf("%s\n", p_out);
	system("Pause");
	return 0;
}
*/



//�ص�ѧϰ3
/*
class A
{
public:
	void Test()
	{
		cout << "A::Test()" << endl;
	}
};

class B : public A
{
public:
	void Test()
	{
		cout << "B::Test()" << endl;
	}
};

typedef void (A::*A_mFun)();//������ĳ�Ա����ָ��

typedef void (B::*B_mFun)();

int main()
{

	A a;
	B b;
	A_mFun pAFun = &(A::Test); //Note:Test��Ա��������Ϊpublic,����ᱨ��
	B_mFun pBFun = &(B::Test); //Note:Test��Ա��������Ϊpublic,����ᱨ��
	(a.*pAFun)();        //���A::Test()
	(b.*pBFun)();        //���B::Test()
	(b.*pAFun)();        //���A::Test()
	system("Pause");
	A* pA = &a;
	B* pB = &b;
	(pA->*pAFun)();       //���A::Test()
	(pB->*pBFun)();       //���B::Test()
	(pB->*pAFun)();       //���A::Test(),B*�����ɸ�ֵ��A*����

	system("Pause");
	return 0;
}
*/



//�ص�ѧϰ4
/*
int compute(int a, int b, int(*func)(int, int)) {//��ú����׵�ַ��ָ���Ӧ��������Σ����ж�Ӧ����
	return func(a, b);
}

int maximum(int a, int b) {
	return ((a > b) ? a : b);
}

int minimun(int a, int b) {
	return ((a < b) ? a : b);
}

int sum(int a, int b) {
	return a + b;
}

int main() {
	int a=10, b=2, res;
	//cout << "����������a:"; cin >> a;
	//cout << "����������b:"; cin >> b;
	res = compute(a, b, &maximum);//���������׵�ַ����compute����
	cout << "Max of " << a << " and " << b << " is " << res << endl;
	res = compute(a, b, minimun);
	cout << "Min of " << a << " and " << b << " is " << res << endl;
	res = compute(a, b, sum);
	cout << "Sum of " << a << " and " << b << " is " << res << endl;

	cout << &maximum << endl;
	cout << maximum << endl;
	cout << minimun << endl;
	cout << sum << endl;
	return 0;
}
*/


//���߳�ѧϰ1
/*
void thread1() {
	for (int i = 0; i < 10; ++i)
	{
		cout << "thread1:" << i << endl;
		Sleep(30);
	}
}

void thread2() {
	for (int i = 0; i < 10; ++i)
	{
		cout << "thread2:" << i << endl;
		Sleep(15);
	}
}

int main() {
	thread th1(thread1);   //ʵ����һ���̶߳���th1�����߳̿�ʼִ��
	thread th2(thread2);


	th2.join();
	th1.join();

	cout << "main..." << endl;

	system("Pause");
	return 0;

}
*/



//���߳�ѧϰ2  ��Ҫע����ǣ���Linux�в�֧�ֺ���system("Pause"),�����unistd.hͷ�ļ�ʹ��pause()���档
/*
void a(int i) {

	for (; i >= 0;i--) {
		printf("%d\n", i);
	}
	return;
}
void main() {
	int i = 0;
	for (int j = 0; j < 10; j++) {
		printf("%d\n",i++);
	}
	std::thread t1([i]() mutable {
		a(i);
	});
	t1.detach();
	system("Pause");
}
*/



//������Ϣ����
/*
int main()
{
	int ch;
	while (1) {
		if (_kbhit()) {//����а������£���_kbhit()����������
			ch = _getch();//ʹ��_getch()������ȡ���µļ�ֵ
			cout << ch;
			if (ch == 27) { break; }//������ESCʱѭ����ESC���ļ�ֵʱ27.
		}
	}
	system("Pause");
	return 0;
}
*/



//�ڴ渴��
/*
int *neicun() {
	static int a[10] = { 0,1,2,3,4 };
	memcpy(a + 5, a, 5 * sizeof(int));
	return a;
}

void main() {
	cout << *neicun() << endl;
	system("Pause");
}
*/



//�Hת��
/*
float Convert(float F) {
	float C;
	C = (F - 32) * 5 / 9;
	return C;
}
int main() {
	float F;
	cout << "Please input the temperature in Fahrenheit:\n";
	cin >> F;
	cout << "Convet the temperature in celsius:\n";
	cout << Convert(F);
	system("pause");
}
*/



//����ʲ�����������������ֵ
/*
int fib(int n) {
	int a;
	if (n > 2)
		a = fib(n - 1) + fib(n - 2);

	else
		return 1;
	return a;

}
int main() {
	int n, answer;
	cout << "Enter a level:";
	cin >> n;
	answer = fib(n);
	cout << "\n" << answer << " is the " << n << "th leavel of Fibonacci" << endl;
	system("pause");
}
*/



//����ķ�����ʲ�����ǰ20��
/*
int main() {
	int f[20] = { 1,1 }; //��ʼ����0��1����
	for (int i = 2; i < 20; i++) //���2��19����
		f[i] = f[i - 2] + f[i - 1];
	for (int i = 0; i < 20; i++) { //�����ÿ��5����
		if (i % 5 == 0)
			cout << endl;
		cout.width(12); //����������Ϊ12
		cout << f[i];
	}
	return 0;
}
*/


//����һ�����ж����Ƿ�Ϊ����
/*
bool uglynumber(int a) {
	int b,c,d;
	if (a == 1)
		return true;
	else {
		do
		{
			d = a;
			b = a / 2;
			c = a % 2;
			a = b;
		} while (c == 0 && a != 1);

		if (a == 1 && c == 0)
			return true;
		else
		{
			do
			{
				a = d;
				b = d / 3;
				c = d % 3;
				d = b;
			} while (c == 0 && d != 1);
			if (d == 1 && c == 0)
				return true;
			else
			{
				do {
					d = a;
					b = a / 5;
					c = a % 5;
					a = b;
				} while (c == 0 && a != 1);
				if (a == 1 && c == 0)
					return true;
				else
					return false;
			}
		}
	}
}

void main() {
	int a,i;
	i = 0;
	while (1) {
		cout << "new #"<<++i<<":";
		cin >> a;
		uglynumber(a) ? cout << "True" << endl : cout << "False" << endl;
	}
	system("pause");
}
*/



//�ݹ鷨ʵ�ֻ����ַ������
/*
bool Recursion(string str, int len, int left, int right) {
	if (!len || len == 1)
		return true;
	else if (str[left] != str[right])
		return false;
	return Recursion(str, len - 2, left + 1, right - 1);
}

void main() {
	string a;
	cout << "������һ���ַ���";
	cout << endl;
	cin >> a;
	int b = a.length();
	Recursion(a, b, 0, b - 1) ? cout << "True" << endl : cout << "False" << endl;
	system("pause");
}
*/



//n��¥�ݣ�һ��ֻ����һ�׻����ף��߷���
/*
long stairs(int a) {
	static int i = 0;
	if (a == 0 || a == 1)
		return 1;
	return stairs(a - 1) + stairs(a - 2);

}

int main() {
	int a;
	cout << "¥�ݽ�����";
	cin >> a;
	cout << stairs(a) << endl;
	system("pause");
}
*/



//��nյ�ƣ��������Ϊ1, 2, 3, ��, n����ʼ��ʱ�����еƶ��ǹر�״̬��
//С����һ�ν����Ϊ1, 2, 3, ��, ��nյ�ƶ����ˣ��ڶ��ν����Ϊ2, 4, 6, ��, ��n / 2յ�ƶ��ر��ˣ�
//�����ν����Ϊ3, 6, 9, ��, ��n / 3յ�ƽ��в���������֮ǰ�ر�״̬��򿪣����Ǵ�״̬����رգ�
//���Ĵν�4, 8, 12, ��, ��n / 4յ�ƽ��в���������������n�Σ���������˼�յ�ơ�
/*
int numFactors(int number) {
	int cnt = 0;
	for (int i = 1; i <= number; i++) {
		if (number%i == 0)
			cnt++;
	}
	return cnt;
}

int Lights(int n) {
	int numL = 0;
	for (int i = 1; i <= n; i++) {
		int cnt;
		cnt = numFactors(i);
		if (cnt % 2 == 1)
			numL += 1;
	}
	return numL;
}

int main() {
	int T;
	int n;
	cout << "����������";
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cout << "test" << i << " " << "յ����";
		cin >> n;
		cout << "ʣ����������" << Lights(n) << endl;
	}
	system("pause");
}
*/



//����λ�ӷ�
/*
int main() {
	string s1, s2, results = "";
	cin >> s1 >> s2;
	int num1, num2;
	int len1 = s1.size();
	int	len2 = s2.size();
	int carry = 0, sum;
	for (int i = 1; i <= max(len1, len2); i++) {
		if (i > len1)
			num1 = 0;
		else
			num1 = int(s1[len1 - i] - '0');

		if (i > len2)
			num2 = 0;
		else
			num2 = int(s2[len2 - i] - '0');


		sum = (num1 + num2 + carry) % 10;
		carry = (num1 + num2 + carry) / 10;
		results.insert(0, to_string(sum));
	}
	if (carry == 1)
		results.insert(0, "1");
	cout << results << endl;
	system("pause");
	return 0;
}
*/



//�����ؼ�ϵͳ������ʹ��
/*
int max1(int x, int y) {
	return x > y ? x : y;
}

int max1(int x, int y, int z) {
	return max1(max1(x, y), max1(y, z));
}

float max1(float x, float y) {
	return x > y ? x : y;
}

float max1(float x, float y, float z) {
	return max1(max1(x, y), max1(y, z));
}

int main() {

	int x, y, z;
	//float a, b, c;
	cout << "Input 2 or 3 numbers:";
	cin >> x;
	cin >> y;
	cin >> z;
	cout << max1(x, y, z);
	system("pause");
}
*/



//�ж�ֱ��������
/*
bool Tran(int a, int b, int c) {
	int a1[3] = { a,b,c };
	int intern;
	for (int i = 0; i <= 1; i++) {
		if (a1[i] > a1[i + 1]) {
			intern = a1[i];
			a1[i] = a1[i + 1];
			a1[i + 1] = intern;
		}
	}
	if (a1[0] * a1[0] + a1[1] * a1[1] == a1[2] * a1[2])
		return true;
	else
		return false;

}

void main() {
	int a, b, c;

		cout << "��������������";
		cin >> a >> b >> c;
		if (Tran(a, b, c))
			cout << "True" << endl;
		else
			cout << "False" << endl;


		system("pause");
}
*/



//��̬�滮��Dynamic Programming��
/*
const int N = 15;

int v[N] = { 0,8, 10, 6, 3, 7, 2 };
int w[N] = { 0,4, 6, 2, 2, 5, 1 };
int m[N][N];
int x[N];
int n = 6, c = 12;

void FindWhat(int i, int j)//�ݹ鷨Ѱ�ҽ����ɷ�ʽ
{
	if (i >= 0)
	{
		if (m[i][j] == m[i - 1][j])//���˵��ûװ
		{
			x[i] = 0;//ȫ�ֱ��������δ��ѡ��
			FindWhat(i - 1, j);
		}
		else if (j - w[i] >= 0 && m[i][j] == m[i - 1][j - w[i]] + v[i])
		{
			x[i] = 1;//����ѱ�ѡ��
			FindWhat(i - 1, j - w[i]);//�ص�װ��֮ǰ��λ��
		}
	}
}

 void traceback()//�ǵݹ鷨Ѱ�ҽ����ɷ�ʽ
{
	for(int i=n;i>1;i--)
	{
		if(m[i][c]==m[i-1][c])
			x[i]=0;
		else
		{
			x[i]=1;
			c-=w[i];
		}
	}
	x[1]=(m[1][c]>0)?1:0;
}


int main()
{

	memset(m, 0, sizeof(m));
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (j >= w[i])
				m[i][j] = max(m[i - 1][j], m[i - 1][j - w[i]] + v[i]);
			else
				m[i][j] = m[i - 1][j];
		}
	}

		 for(int i=1;i<=n;i++)//��ӡ״̬����
		{
			 for(int j=1;j<=c;j++)
			{
				 cout<<m[i][j]<<' ';
			}
			 cout<<endl;
		}
		cout<<m[6][12];//��ӡ����ֵ


	FindWhat(6, 12);//���õݹ鷨��·��
	//traceback();//���÷ǵݹ鷨��·��
	for (int i = 1; i <= n; i++)
		cout << x[i];
	system("pause");
	return 0;
}
*/



//���������



//Clock
/*
int main() {
	Clock myClock1(8,10,0);
	//myClock.setTime(8, 30, 30);
	Clock myClock2;
	myClock1.showTime();
	myClock2.showTime();
	system("pause");
	return 0;
}
*/



//���ƹ��캯�����þ���
/*
class Point{
public:
	Point();//Ordinary Constructor
	Point(const Point &p);//Copy Constructor
	int getX();//display x's value
	~Point();//Destructor
private:
	int x, y;

};

Point::Point():x(0),y(0){}//Ordinary Constructor initialize x,y with 0

Point::Point(const Point &p) {//Copy Constructor, using an exist Object to initialize a new Object
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor" << endl;
}

int Point::getX() {
	return x;
}

Point::~Point(){}



void fun1(Point p) {//Ordinary function, outside Class, initialize with an Object and call function getX()
	cout << p.getX() << endl;
}

Point fun2() {
	Point a;
	return a;
}

int main() {
	Point a;
	Point b(a);//Senario 1, using A initialize B. The first time call the copy constructor
	cout << b.getX() << endl;
	fun1(b);
	b = fun2();
	cout << b.getX() << endl;
	system("pause");
	return 0;
}
*/



//����༰�������캯��
/*
class Point { //Point�ඨ��
public:
	Point(int xx = 0, int yy = 0) :x(xx),y(yy){

	}
	Point(Point &p);
	int getX() { return x; }
	int getY() { return y; }
private:
	int x, y;
};

Point::Point(Point &p) { //���ƹ��캯����ʵ��
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor of Point" << endl;
}

class Line { //Line Class identify
public: //external interface
	Line(Point xp1, Point xp2);
	Line(Line &l);
	double getLen() { return len; }
private:
	Point p1, p2;
	double len;
};

Line::Line(Point xp1, Point xp2) : p1(xp1), p2(xp2) {//Constructor of composite class
	cout << "Calling constructor of Line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x * x + y * y);
}

Line::Line(Line &l) : p1(l.p1), p2(l.p2) {//�����ĸ��ƹ��캯��
	cout << "Calling the copy constructor of Line" << endl;
	len = l.len;
}

int main() {
	Point myp1(1, 1), myp2(4, 5); //construct point object
	Line line(myp1, myp2); //construct line object
	Line line2(line); //using copy constructor construct a new object
	cout << "The length of the line is: ";
	cout << line.getLen() << endl;
	cout << "The length of the line2 is: ";
	cout << line2.getLen() << endl;
	system("pause");
	return 0;
}
*/



//ǰ����������1����ȷ
/*
class B;
class A {
public:
	void f(B b);
};

class B {
public:
	void g(A a);
};

void A::f(class B) {

}

void B::g(class A){

}
*/



//ǰ����������2������1
/*
class B;

class A {
public:
	void f(B b);
};

class B {
public:
	void g(A a);
};
*/



//ǰ����������3������2
/*
class Fred;
class Barney {
	Fred x; //������Fred�������в����ƣ���������������Ǽ�����ϸ�ڵģ��������޷�֪��Ҫ��Fred�����ֽڵĿռ�
};

class Fred {
	Barney y;
};
*/



//ǰ����������4����ȷ
/*
class Fred;
class Barney {
	Fred *x;//����ָ��Fred��ָ�룬�ڹ�������ʱ����new������䶯̬�ڴ�ռ䣬����һ��Barney���󣬽����׵�ַ����x���ָ��
};

class Fred {
	Barney y;
};
*/



//�ṹ��ʵ��
/*
struct Student {	//ѧ����Ϣ�ṹ��
	int num;		//ѧ��
	string name;	//�������ַ������󣬽��ڵ�6����ϸ����
	char sex;		//�Ա�
	int age;		//����
};

int main() {
	Student stu = { 97001, "Lin Lin", 'F', 19 };
	cout << "Num:  " << stu.num << endl;
	cout << "Name: " << stu.name << endl;
	cout << "Sex:  " << stu.sex << endl;
	cout << "Age:  " << stu.age << endl;
	system("pause");
	return 0;
}
*/



//���������1
/*
class ExamInfo {
private:
	string name;	//�γ�����
	enum { GRADE, PASS, PERCENTAGE } mode;//�Ʒַ�ʽ
	union {
		char grade;	//�ȼ��Ƶĳɼ�
		bool pass;	//ֻ���Ƿ�ͨ���γ̵ĳɼ�
		int percent;	//�ٷ��Ƶĳɼ�
	};
public:
	//���ֹ��캯�����ֱ��õȼ����Ƿ�ͨ���Ͱٷֳ�ʼ��
	ExamInfo(string name, char grade)
		: name(name), mode(GRADE), grade(grade) { }
	ExamInfo(string name, bool pass)
		: name(name), mode(PASS), pass(pass) { }
	ExamInfo(string name, int percent)
		: name(name), mode(PERCENTAGE), percent(percent) { }
	void show();
};

void ExamInfo::show() {
	cout << name << ": ";
	switch (mode) {
	case GRADE:
		cout << grade;
		break;
	case PASS:
		cout << (pass ? "PASS" : "FAIL");
		break;
	case PERCENTAGE:
		cout << percent;
		break;
	}
	cout << endl;
}

int main() {
	ExamInfo course1("English", 'B');
	ExamInfo course2("Calculus", true);
	ExamInfo course3("C++ Programming", 85);
	course1.show();
	course2.show();
	course3.show();
	system("pause");
	return 0;
}
*/


//���������2
/*
union {
	int i;
	int c;
	char x[2];
}a;
int main()
{
	cout << "Hello world!" << endl;
	a.i = 0x4142;
	//a.x[1] = 1;
	cout << a.x[0] << endl;
	cout << a.x[1] << endl;
	cout << sizeof(a) << endl;
	return 0;
}
*/



//ö�����;���1(�޷�ͨ���������ӣ�ö�����ö�ٸ����ϸ�)
/*
enum class Side { Right, Left };
enum class Thing { Wrong, Right };  //����ͻ
enum class Category {General, Pistol, MachineGun, Cannon};
int main()
{
	Side s = Side::Right;
	Thing w = Thing::Wrong;
	Category test1 = Category::General;
	Category test2 = Category::General;
	string out = (test1 == test2) ? "yes" : "no";
	cout << out << endl; //��������޷�ֱ�ӱȽϲ�ͬö����
	system("pause");
	return 0;
}
*/



//ö�����;���2(��ͨ����������)
/*
enum  Side { Right1, Left };
enum  Thing { Wrong, Right };  //����ͻ
int main()
{
	Side s = Side::Right1;
	Thing w = Thing::Wrong;
	cout << (s == w) << endl;  //��������޷�ֱ�ӱȽϲ�ͬö����
	system("pause");
	return 0;
}
*/



//�����������1
/*
enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};
class CPU {
private:
	CPU_Rank rank;
	int frequency;
	float voltage;
public:
	CPU(CPU_Rank r, int f, float v) ;
	CPU();
	~CPU();
	int GetFrequency();
	CPU_Rank GetRank();
	float GetVoltage();
	void SetFrequency(int f);
	void SetVoltage(float v);
	void SetRank(CPU_Rank r);
	void Run();
	void Stop();
};

CPU::CPU(){
}
CPU::CPU(CPU_Rank r, int f, float v) :rank(r), frequency(f), voltage(v) {
	cout << "Created a CPU" << endl;
}
CPU::~CPU() {
	cout << "Released a CPU" << endl;
}

int CPU::GetFrequency() {
	return frequency;
}
CPU_Rank CPU::GetRank() {
	return rank;
}
float CPU::GetVoltage() {
	return voltage;
}
void CPU::SetFrequency(int f) {
	frequency = f;
}
void CPU::SetVoltage(float v) {
	voltage = v;
}
void CPU::SetRank(CPU_Rank r) {
	rank = r;
}
void CPU::Run() {
	cout << "A CPU is running" << endl;
}
void CPU::Stop() {
	cout << "A CPU has stopped" << endl;
}

enum RAM_Type{DDR2=2,DDR3,DDR4};
class RAM {
private:
	RAM_Type type;
	unsigned int frequency;
	unsigned int size;
public:
	RAM() { cout << "Created a RAM" << endl; };
	~RAM() { cout << "Released a RAM" << endl; }
	RAM(RAM_Type t, unsigned int f, unsigned int s) :type(t), frequency(f), size(s) {
		cout << "Created a RAM" << endl;
	}
	void SetType(RAM_Type a) { type = a; };
	void SetFrequency(unsigned int b) { frequency = b; };
	void SetSize(unsigned int c) { size = c; };
	unsigned int GetFrequency() { return frequency; };
	RAM_Type GetType() { return type; };
	unsigned int GetSize() { return size; };
	void Run() { cout << "A RAM is running" << endl; }
	void Stop() { cout << "A RAM has stopped" << endl; }
};

enum CDROM_Interface{SATA,USB};
enum CDROM_Install_Type{external,built_in};
class CDROM {
private:
	CDROM_Interface InterfaceType;
	CDROM_Install_Type InstallType;
	unsigned int frequency;
	unsigned int size;
public:
	CDROM() { cout << "Created a CD_RAM" << endl; }
	CDROM(CDROM_Interface Interface,CDROM_Install_Type Install,unsigned int f, unsigned int s):
		InterfaceType(Interface), InstallType(Install),frequency(f),size(s){
		cout << "Created a CD_RAM" << endl;
	}
	~CDROM() { cout << "Released a CD_ROM" << endl; }
	void SetInterface(CDROM_Interface Interface) { InterfaceType = Interface; }
	void SetInstallType(CDROM_Install_Type Install) { InstallType = Install; }
	void SetFrequency(unsigned int f) { frequency = f; }
	void SetSize(unsigned s) { size = s; }
	CDROM_Interface GetInterfaceT() { return InterfaceType; }
	CDROM_Install_Type GetInstallT() { return InstallType; }
	unsigned int GetFrequency() { return frequency; }
	unsigned int GetSize() { return size; }
	void Run() { cout << "A CD_ROM is running" << endl; }
	void Stop() { cout << "A CD_ROM has stopped" << endl; }
};

class Computer {
private:
	CPU MyCPU;
	RAM MyRAM;
	CDROM MyCDROM;
	unsigned int StorageSize;
	unsigned int Bandwidth;
public:
	Computer() { cout << "Created a computer" << endl; }
	Computer(CPU cpu, RAM ram, CDROM mycdrom, unsigned int storagesize, unsigned int bandwidth):
		MyCPU(cpu),MyRAM(ram),MyCDROM(mycdrom),StorageSize(storagesize),Bandwidth(bandwidth)
	{
		cout << "Created a computer" << endl;
	}
	~Computer() {

		cout << "Released a computer" << endl; }
	void Run();
	void Stop();
};
void Computer::Run() {
	MyCPU.Run();
	MyCDROM.Run();
	MyRAM.Run();
	cout << "A Computer is running" << endl;
}
void Computer::Stop() {
	MyCDROM.Stop();
	MyCPU.Stop();
	MyRAM.Stop();
	cout << "A Computer has stopped" << endl;
}



int main() {
	CPU a(P6, 300, 2.8);
	RAM b(DDR4, 50, 4);
	CDROM c(USB, external, 100, 4);
	Computer MyPC(a, b, c, 1024, 600);

	cout << "************" << endl;
	MyPC.Run();
	cout << "************" << endl;

	MyPC.Stop();
	//system("pause");
	return 0;
}
*/



//�����������2  ��a,b���������
/*
class Integer {
private:
	int _num;
public:
	//���캯��
	Integer() {};
	Integer(int num) {
		_num = num;
	}
	//���㵱ǰInteger �� b֮������Լ��
	int gcd(Integer b);
};

int Integer::gcd(Integer b) {
	int j = 1;
	for (int i = 1; i <= max(_num, b._num); i++) {
		if (_num%i == 0 && b._num%i == 0)
			j = i;

	}
	return j;
}

int main() {
	int a, b;
	cin >> a >> b;
	Integer A(a);
	Integer B(b);
	cout << A.gcd(B) << endl;
	//system("pause");
	return 0;
}
*/



//��ʶ����������Ϳɼ���
/*
int i;// ȫ�ֱ������ļ�������
int main() {
	i = 5;
	{
		int i;//�ֲ��������ֲ�������
		i = 7;
		cout << "i= " << i << endl;
	}
	cout << "i= " << i << endl;
	system("pause");
	return 0;
}
*/



//��̬�����ں;�̬������
/*
int i = 1; // i Ϊȫ�ֱ��������о�̬�����ڡ�
void other() {
	static int a = 2;//ֻ�е�һ�ν���ʱ����ʼ�����ڶ��ν���ʱ������ʼ��
	static int b;
	// a,bΪ��̬�ֲ�����������ȫ���������ֲ��ɼ���
	//ֻ��һ�ν��뺯��ʱ����ʼ����
	int c = 10; // CΪ�ֲ����������ж�̬�����ڣ�
	//ÿ�ν��뺯��ʱ����ʼ����
	a += 2; i += 32; c += 5;
	cout << "---OTHER---\n";
	cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
	b = a;
}

int main() {
	static int a;//��̬�ֲ���������ȫ���������ֲ��ɼ���
	int b = -10; // b, cΪ�ֲ����������ж�̬�����ڡ�
	int c = 0;
	cout << "---MAIN---\n";
	cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
	c += 8;
	other();
	cout << "---MAIN---\n";
	cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
	i += 10;
	other();
	system("pause");
	return 0;
}
*/



//���ж��徲̬��Ա����Ԫ����
/*
class Point {
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {

		count++;
	}
	Point(Point &p) {
		x = p.x;
		y = p.y;
		count++;
	}
	~Point() { count--; }
	int getX() { return x; }
	int getY() { return y; }
	friend float dis(Point &a, Point &b);//��Ԫ�������壨�������ܴ�����Ч�ʸߣ�

	static void showCount() {           //�����̬���ݳ�Ա
		cout << "  Object count = " << count << endl;
	}
private:
	int x, y;
	static int count;       //��̬���ݳ�Ա���������ڼ�¼��ĸ���
};

int Point::count = 0;//��̬���ݳ�Ա����ͳ�ʼ����ʹ�������޶�

float dis(Point &a, Point &b) {//��Ԫ������ʵ��
	return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}
int main() {
	Point::showCount();//ͨ�����������þ�̬������Ա
	Point a(4, 5);
	cout << "Point A: " << a.getX() << ", " << a.getY();
	a.showCount(); //ͨ�������������þ�̬������Ա
	Point b(a);
	cout << "Point B: " << b.getX() << ", " << b.getY();
	b.showCount();
	Point c(5, 4);
	float dist=dis(a, c);
	cout << "Distance: " << dist << endl;

	b.showCount();
	return 0;
}
*/



//��Ԫ��
/*
class A {
	friend class B;
public:
	void display() {
		cout << x << endl;
	}
private:
	int x;
};

class B {
public:
	void set(int i);
	void display();
private: A a;
};

void B::set(int i) {
	a.x = i;
}

void B::display() {
	a.display();
}
*/



//����Ա����1
/*
class R {
public:
	R(int r1, int r2) : r1(r1), r2(r2) { }
	void print();
	void print() const;//����Ա�������������������غ������˺������ı����״̬
private:
	int r1, r2;
};

void R::print() {
	cout << r1 << ":" << r2 << endl;
}

void R::print() const {
	cout << r1 << ";" << r2 << endl;
}

int main() {
	R a(5, 4);
	a.print(); //����void print()
	const R b(20, 52);
	b.print(); //����bΪ����������ֻ�ܵ���void print() const
	return 0;
}
*/



//�����ݳ�Ա1
/*
class A {
public:
	A(int i);
	void print();	
private:
	const int a;
	static const int b;  //��̬�����ݳ�Ա
};

const int A::b = 10;
A::A(int i) : a(i) {}


void A::print() {

	cout << a << ":" << b << endl;
	//b++;
}

int main() {
	//��������a��b������100��0��Ϊ��ֵ���ֱ���ù��캯����
	//ͨ�����캯���ĳ�ʼ���б������ĳ����ݳ�Ա����ֵ
	A a1(100), a2(0);
	a1.print();
	a2.print();
	return 0;
}
*/



//�����ݳ�Ա2
/*
class Point {
public:
	Point(int x = 0, int y = 0): x(x), y(y) {}
	int getX() { return x; }
	int getY() { return y; }
	friend float dist(const Point &p1, const Point &p2);//����const��ֻ�ܴ�p12�л�ȡ���ݵ������޸����е�����
private:
	int x, y;
};

float dist(const Point &p1, const Point &p2) {

	double x = p1.x - p2.x;
	double y = p1.y - p2.y;
	return static_cast<float>(sqrt(x*x + y * y));
}

int main() {
	const Point myp1(1, 1), myp2(4, 5);
	cout << "The distance is: ";
	cout << dist(myp1, myp2) << endl;
	return 0;
}
*/


/*
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
template<class T>
class point {
private:
	T x;
	T y;
	static int pointnum;
public:
	point() { pointnum++; };
	point(T a=0, T b=0) :x(a), y(b) { pointnum++; };	
	point(point<T> &k) {
		x = k.getX();
		y = k.getY();
		pointnum++;
	};
	~point() { pointnum--; };
	T getX();
	T getY();	
	int getPointNum();
};

template<class T>
int point<T>::pointnum = 0;

template<class T>
T point<T>::getX() {
	cout <<"X: "<< x << endl;
	return x;
}

template<class T>
T point<T>::getY() {
	cout << "Y: " << y << endl;
	return y;
}

template<class T>
int point<T>::getPointNum() {
	cout << "Now node number: ";
	return pointnum;
}

template<class T>
class line {
private:	
	T distance;
	static int linenum;
public:
	point<T>  node1;
    point<T> node2;
	line() { 
		linenum++; }

	line(line<T> &k) {
		node1(k.node1);
		node2(k.node2);
		linenum++;
	}
	
	line(point<T> &a,point<T> &b) {
		node1(a);
		node2(b);
		linenum++;
	};

	~line() {
		linenum--;
	}

	T getDistance() {
		distance = sqrt((node1.getX() - node2.getX())*(node1.getX() - node2.getX())
			+ (node1.getY() - node2.getY())*(node1.getY() - node2.getY()));
		return distance;
	}
};
template<class T>
int line<T>::linenum = 0;

int main() {
	point<double> a(1.2, 1.2);
	cout << a.getPointNum() << endl;
	point<double> b(2.4, 2.4);
	cout << b.getPointNum() << endl;
	point<double> c(b);
	cout << b.getPointNum() << endl;
	
	
	line<double> k( c, b);
	cout << k.getDistance() << endl;
	return 0;
}*/


//point��Ŀ���ļ�
/*
int main() {
	Point a(4, 5);
	cout << "Point A:" << a.getX() << "," << a.getY() << endl;
	Point::showCount();
	Point b(a);
	cout << "Point B:" << b.getX() << "," << b.getY();
	Point::showCount();
	return 0;
}
*/



//������
/*
class Yuebao
{
	static double profitRate;
public:
	Yuebao(double am);
	static void setProfitRate(double rate);
	void addProfit();
	void deposit(double dp);
	void withdraw(double wd);
	double getBalance();
	 //Your code here!
private:
	double Amount;

};

double Yuebao::profitRate = 0;

Yuebao::Yuebao(double am) { Amount = am; };
void Yuebao::setProfitRate(double rate) {
	profitRate = rate;
}

void Yuebao::addProfit() {
	Amount = Amount * (1 + profitRate / 100);
}

void Yuebao::deposit(double dp) {
	Amount = Amount + dp;
}

void Yuebao::withdraw(double wd) {
	Amount = Amount - wd;
}

double Yuebao::getBalance() {
	return Amount;
}

int main()
{
	cout << "������Ҫ�洢��������" << endl;
	int n;
	while (cin >> n)
	{
		double profitRate;
		cin >> profitRate;
		Yuebao::setProfitRate(profitRate);//�趨��������
		Yuebao y(0); //�½����˻�������ʼ��Ϊ0
		int operation;//���������ж��Ǵ滹��ȡ
		double amount;//���������ȡ���
		for (int i = 0; i < n; ++i)
		{
			cout << "Today is the " << i << "th day." << endl;
			y.addProfit();//����ǰһ������������Ϣ
			cout << "Press 0 for Deposit, 1 for Withdraw: ";
			cin >> operation;
			if (operation == 0){
				cout << "How much do you want to deposit?";
				cin >> amount;
				y.deposit(amount);//������
			}
			else {
				cout << "How much do you want to withdraw?";
				cin >> amount;
				y.withdraw(amount);//ȡ�����
			}
			cout << "Congratulations! Now you own:";
			cout << y.getBalance() << endl;//��������˻����
		}

	}
	return 0;
}
*/



//����������
/*
class Mouse {
public:
	Mouse() { num++; };
	Mouse(const Mouse &a) { num++; };
	~Mouse() { num--; };
	void static fn(Mouse m);
	static int num;
};

int Mouse::num;
void Mouse::fn(Mouse m)
{
	cout << Mouse::num << endl;
	Mouse n(m);
	cout << Mouse::num << endl;
}


int main()
{
	Mouse::num = 0;
	Mouse a;
	cout << Mouse::num << endl;
	Mouse b(a);
	cout << Mouse::num << endl;
	for (int i = 0; i < 10; ++i)
	{
		Mouse x;
		cout << Mouse::num << endl;
	}
	Mouse::fn(a);
	cout << Mouse::num << endl;
	return 0;
}
*/



//�������ͳ����ȷ��
/*
int main() {
	const char key[] = { 'a','c','b','a','d' };
	const int NUM_QUES = 5;
	char c;
	int ques = 0, numCorrect = 0;
	cout << "Enter the " << NUM_QUES << " question tests:" << endl;
	int a;
	while (cin.get(c)) {
		cout << c << endl;
		if (c != '\n') {
			if (c == key[ques]) {
				numCorrect++; cout << " ";
			}
			else
				cout << "*";
			ques++;
		}
		else {
			cout << " Score " << static_cast<float>(numCorrect) / NUM_QUES * 100 << "%";
			ques = 0;  numCorrect = 0; cout << endl;
		}
	}
	return 0;
}
*/



//����ѧϰ1
/*
int main() {
	int a[] = { 5,4,3,2,1,0 };
	int *b = &a[1];
	int **c = &b;
	cout << *c << endl;
	cout << a+1 << endl;
	cout << b << endl;
	
	return 0;
}
*/




//����ѧϰ2   ��ָ�����ʶ
/*
void rowSum1(int *a, int nRow) {
	for (int i = 0; i < nRow; i++) {
		for (int j = 1; j < 4; j++)
			*(a+i*4)+=*(a+i*4+j);
	}
}

void rowSum2(int a[][4], int nRow) {
	for (int i = 0; i < nRow; i++)
		for (int j = 1; j < 4; j++)
			a[i][0] += a[i][j];
}
void rowSum3(int (&r)[3][4]) {
	
	for (int i = 0; i < 3; i++) {
		for (int j = 1; j < 4; j++) {
			r[i][0] += r[i][j];

		}
	}
	
}

int main() {
	int table[3][4] = { {1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6} };
	
	//�������Ԫ��
	cout << "way1" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			cout << table[i][j] << "   ";
			cout << endl;
		}	
	rowSum1(&table[0][0], 3);     //�����Ӻ�����������к�, ����ָ��
	for (int i = 0; i < 3; i++) {
		cout << "Sum1 of row " << i << " is " << table[i][0] << endl;
		table[i][0] = i+1;
	}
		

	cout << "way2" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			cout << table[i][j] << "   ";
		cout << endl;
	}	
	rowSum2(table, 3);			//��������
	for (int i = 0; i < 3; i++) {
		cout << "Sum2 of row " << i << " is " << table[i][0] << endl;
		table[i][0] = i + 1;
	}

	cout << "way3" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			cout << table[i][j] << "   ";
		cout << endl;
	}

	int (&r)[3][4] =table;
	rowSum3(r);					//��������
	for (int i = 0; i < 3; i++) {
		cout << "Sum3 of row " << i << " is " << table[i][0] << endl;
		table[i][0] = i + 1;
	}
	return 0;
}
*/

//����  ��ָ�����ʶ
/*
void rowSum(int *a, int nRow) {
	int *p = a;
	for (int i = 0; i < nRow; i++) {
		p = a + 4 * i;//��ָ��pÿ�ζ�ָ������a��ÿ�е�һ��λ��
		for (int j = 1; j < 4; j++)
			*p = *p + *(a + 4 * i + j);//�ۼӣ�ÿ���޸�pָ��λ�õ���ֵ

	}
}

int main() {
	int table[3][4] = { {1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6} };
	//�������Ԫ��
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			cout << table[i][j] << "   ";
		cout << endl;
	}
	rowSum(*table, 3);     //�����Ӻ�����������к�
	 //���������
	for (int i = 0; i < 3; i++)
		cout << "Sum of row " << i << " is " << table[i][0] << endl;
	return 0;
}
*/



//��������  ʹ��ʱ��uncommon point.h
/*
int main() {
	cout << "Entering main..." << endl;
	Point a[2];
	for (int i = 0; i < 2; i++)
		a[i].move(i + 10, i + 20);
	cout << "Exiting main..." << endl;
	return 0;
}
*/



//���ڷ�Χ��forѭ��
/*
int main()
{
	int array[3] = { 1,2,3 };
	for (int & e : array)
	{
		e += 2;
		cout << e << endl;
	}
	int num[2][3] = { {1,2,3},{4,5,6} };
	for (int (&p)[3]:num) {
		for (int &q : p) {
			cout << q << " ";
		}
		cout << endl;
	}

	for (auto &p : num) {
		for (auto &q : p) {
			cout << q << " ";
		}
		cout << endl;
	}
	return 0;
}*/




//ָ������ָ��
/*
int main() {
	int a=0;
	const int *p1 = &a; //p1��ָ������ָ��
	int b;
	int c=0;
	p1 = &b; //��ȷ��p1�����ֵ���Ըı�
	p1 = &c; //����ʱ��������ͨ��p1�ı���ָ�Ķ���
	cout << c << endl;
	*(p1) = (a + 10);
	cout << a << endl;
	cout << c << endl;
}
*/



//����ָ��
/*
int main() {
	int a;
	int * const p2 = &a;
	p2 = &b; //����p2��ָ�볣����ֵ���ܸı�
}
*/




//�����˻�
/*
class SavingsAccount {
private:
	int id;
	double balance;
	double rate;
	int lastDate;
	double accumulation;
	double accumulate(int date)const {
		return accumulation + balance * (date - lastDate);
	};
	void record(int date, double amount);

public:
	SavingsAccount(int date, int iden, double r)
		:id(iden),rate(r),balance(0),lastDate(date),accumulation(0){
		cout << date << "\t#" << id << " is created" << endl;
	}
	int getId();
	double getBalance();
	double getRate();
	void show();
	void deposit(int date, double amount);
	void withdraw(int date, double amount);
	void settle(int date);

};

void SavingsAccount::record(int date, double amount) {
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;
	balance += amount;
	cout << date << "\t#" << id << "\t" << amount << "\t" << balance << endl;

}

void SavingsAccount::settle(int date) {
	double interest = accumulate(date)*rate / 365;
	if (interest != 0)
		record(date, interest);
	accumulation = 0;
}

void SavingsAccount::show() {
	cout << "#" << id << "\tBalance:" << balance;
}
*/



//����ת��1
/*
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a[3][3];
	cout << "Input 9 int numbers as matrix's initial value" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}
	cout << "Initial matrix is:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < i; j++) {
			swap(a[i][j], a[j][i]);
		}
	}
	cout << "After operation:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
*/



//����ת��2
/*
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int **a;
	a = new int*[3];
	for (int i = 0; i < 3; i++) {
		a[i] = new int[3];
	}
	cout << "����9��������Ϊ����Ԫ��ֵ" << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];
	cout << "��ʼ������" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	cout << "ת�ú����" << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < i; j++)
			swap(a[i][j], a[j][i]);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
*/



//ָ������
/*
int main() {//������һά���飬ʹ��ָ�����飬����һ����ά����
	int a[] = { 1,2,3 };
	int b[] = { 4,5,6 };
	int c[] = { 7,8,9 };
	int *p[3];
	p[0] = a; p[1] = b; p[2] = c;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << p[i][j] << " ";
		}
		cout << endl;
	}

}
*/



//ָ����Ϊ��������(�����������С�����ֺ��������֣�
/*
void seperate(float a, float *f, int *i) {
	*i = (int) a;
	*f = a - *i;
}

int main() {
	float a, f;
	int i;
	cout << "���븡����F:" << endl;
	cin >> a;
	seperate(a, &f, &i);
	cout << "��������Ϊ��" << i << " " << "С������Ϊ��" << f << endl;
	return 0;
}
*/



//ָ�����͵ĺ���
/*
int *newintvar() {
	int *p = new int();
	return p;
}

int main() {
	int *newintvar();
	int *pt = newintvar();
	*pt = 5;
	delete pt;
	return 0;
}
*/



//����ָ��
/*
int main() {
	Point a(5, 10);
	Point *p;
	p = &a;
	p->showCount();
}
*/



//��̬�ڴ����
/*
class Point {
private:
	int x, y;
public:
	Point() {};
	int getX() { return x; };
	Point(int a, int b) { x = a; y = b; };


};

int main() {
	//int a = 10; ������뱨��ɾ��һ����new������ڴ�ռ�ָ���ǲ������
	//int *p = &a;
	//delete p;
	//cout << a << endl;

	cout << "Step one:" << endl;
	Point *p = new Point;//����Ĭ�Ϲ��캯��
	delete p;//ɾ�������Զ�������������
	cout << "Step two:" << endl;
	p = new Point(1, 2);
	Point b(*p);
	delete p;
	Point a(1, 2);
	cout << b.getX() << endl;
	return 0;
}
*/





//������ͷŶ�̬����1
/*
int main() {
	Point *p = new Point[2];
	p[0].move(5, 10);
	p[1].move(15, 20);
	cout << "Deleting..." << endl;
	delete[] p;//delete��Ҫ����[],����ֻ�ͷ������һ��Ԫ��
	return 0;
}
*/



//��̬������ά����
/*
int main() {
	int(*cp)[9][8] = new int[7][9][8];

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 8; k++) {
				cp[i][j][k] = (i * 100 + j * 10 + k);
				//*(*(*(cp + i) + j) + k) = (i * 100 + j * 10 + k);//����д������ȷ
				cout << cp[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	delete[] cp;
	return 0;
}
*/



//��װ��̬������
/*
class ArrayOfPoints {
public:
	ArrayOfPoints(int size) :size(size) {
		points = new Point[size];
	}
	ArrayOfPoints(const ArrayOfPoints &v) {//��㸴��
		size = v.size;
		points = new Point[size];
		for (int i = 0; i < size; i++) {
			points[i] = v.points[i];
		}
	}
	~ArrayOfPoints() {
		cout << "Deleting..." << endl;
		delete[] points;
	}
	Point& element(int index) {//���Ƿ���һ������Ԫ�ض�ϣ��������ֵ����Ҫ����ȥ����pointΪ���Ӧ���Ԫ�ص��ڲ����ݣ�������һ������
		if(index >= 0 && index < size);//�������&������ֵ����ôֻ������һ�������������޷�����ԭ�������е�Ԫ��
			return points[index];
	}
private:
	Point *points;
	int size;
};

//int main() {
//	int count;
//	cout << "Please enter the count of points:";
//	cin >> count;
//	ArrayOfPoints points(count);
//	points.element(0).move(5, 0);
//	points.element(1).move(15, 20);
//	return 0;
//}
*/



//vectorӦ�þ���
/*
double average(const vector<double> &arr);
int main() {
	unsigned n;
	cout << "n=";
	cin >> n;
	vector<double> arr(n);
	cout << "Please input" << n << "real numbers:" << endl;
	for (unsigned i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Average=" << average(arr) << endl;
	return 0;
}

double average(vector<double> &arr) {
	double sum = 0;
	for (int i = 0; i < arr.size(); i++) {
		sum += arr[i];
	}
	return sum / arr.size();
}
*/



//���ڷ�Χ��forѭ�����auto����
/*
int main() {
	vector<int> v = { 1,2,3 };
	for (auto i = v.begin(); i != v.end(); ++i) {
		cout << *i << endl;
	}
	for (auto e : v)//eÿ�λ��v��ȡ��һ�����󣬲���v�ж�����ʲô���ͣ�ֱ�ӱ��auto����
		cout << e << endl;
}
*/


//�����ǳ�㸴�ƣ���ʹ�÷�װ��̬�����ࣩ
/*
int main() {
	int count;
	cout << "Please enter the count of Points:";
	cin >> count;
	ArrayOfPoints pointsArray1(count);
	pointsArray1.element(0).move(5, 10);
	pointsArray1.element(1).move(15, 20);
	ArrayOfPoints pointsArray2(pointsArray1);//��������,2��Ӧ��1����ͬ
	cout << "Copy of pointsArray1:" << endl;
	cout << "Point_0 of array2:" << pointsArray2.element(0).getX() << ","
		<< pointsArray2.element(0).getY() << endl;
	cout << "Poins_1 of array2:" << pointsArray2.element(1).getX() << ","
		<< pointsArray2.element(1).getY() << endl;
	cout << "**********" << endl;

	pointsArray1.element(0).move(25, 30);
	pointsArray1.element(1).move(35, 40);
	cout << "After the moving of pointsArray1:" << endl;
	cout << "Point_0 of array2:" << pointsArray2.element(0).getX() << ","
		<< pointsArray2.element(0).getY() << endl;
	cout << "Point_1 of array2:" << pointsArray2.element(1).getX() << ","
		<< pointsArray2.element(1).getY() << endl;

	return 0;//����ָ��ͬʱָ��ͬһ���ڴ浥Ԫ����һ��������������ڴ浥Ԫ�ͷţ���ô�ڶ�������ʱ�ͻ������ǳ�㸴���޷��������������㸴��
}
*/



//�ƶ����캯��
/*
class IntNum {
public:
	IntNum(int x = 0) : xptr(new int(x)) { //���캯��
		cout << "Calling constructor..." << endl;
	}

	IntNum(const IntNum &n) : xptr(new int(*n.xptr)) {//���ƹ��캯������㸴�ƣ�����int���������ֵΪxptrָ����ָ��Ķ���ֵ��
		cout << "Calling copy constructor..." << endl;
	};

	//&&������ֵ������������ֵ�����ã��������ص���ʱ��������ֵ
	IntNum(IntNum &&n) :xptr(n.xptr) {//�ƶ����캯��(���Ѵ��ڵ�ָ���ʼ��xptrָ���λ�ã�Σ�յ�ǳ�㸴��)
		n.xptr = nullptr;//��ָ��ָ���ָ�룬��������ʱ�򲻻����
		cout << "Calling move constructor..." << endl;
	}

	~IntNum() {
		delete xptr;//ɾ���ڴ�ռ�
		cout << "Destructing..." << endl;
	}

	int getInt() { return *xptr; }//����ָ����ָ���ֵ
private:
	int *xptr;
};

IntNum getNum() {//���ֲ����󷵻�
	IntNum a;
	return a;//ָ���Ѿ����ÿ��ˣ����Բ������������˹���
}

int main() {
	int a;
	cout << getNum().getInt() << endl;//�÷��صĶ���ȡ����ֵ
	return 0;
}
*/



//string��
/*
int main() {
	for (int i = 0; i < 2; i++) {
		string city, state;
		getline(cin, city, ',');//�ԡ�����Ϊ�ָ���
		getline(cin, state);
		cout << "City:" << city << "State : " << state << endl;
	}
	return 0;
}
*/


//Employee��
/*
int main() {
	Date date(2008, 11, 1);	//��ʼ����
	//���������˻�
	SavingsAccount accounts[] = {
		SavingsAccount(date, "S3755217", 0.015),
		SavingsAccount(date, "02342342", 0.015)
	};

	const int n = sizeof(accounts) / sizeof(SavingsAccount); //�˻�����
	//11�·ݵļ�����Ŀ
	accounts[0].deposit(Date(2008, 11, 5), 5000, "salary");
	accounts[1].deposit(Date(2008, 11, 25), 10000, "sell stock 0323");
	//12�·ݵļ�����Ŀ
	accounts[0].deposit(Date(2008, 12, 5), 5500, "salary");
	accounts[1].withdraw(Date(2008, 12, 20), 4000, "buy a laptop");

	//���������˻�����������˻���Ϣ
	cout << endl;
	for (int i = 0; i < n; i++) {
		accounts[i].settle(Date(2009, 1, 1));
		accounts[i].show();
		cout << endl;
	}
	cout << "Total: " << SavingsAccount::getTotal() << endl;
	return 0;
}
*/



//���ַ���������Ŀ
/*
int SubPalindrome(string str) {
	int len = str.size();
	vector<vector<int> > dp(len, vector<int>(len));//����len*len�Ķ�ά����
	for (int j = 0; j < len; j++) {
		dp[j][j] = 1;
		for (int i = j - 1; i >= 0; i--) {
			dp[i][j] = dp[i + 1][j] + dp[i][j - 1] - dp[i + 1][j - 1];
			if (str[i] == str[j])
				dp[i][j] += 1 + dp[i + 1][j - 1];
		}
	}
	return dp[0][len - 1];
}

bool main() {
	string a;

	cout << "Type in your string:";
	cin >> a;
	if (a.size() > 15)
		return false;
	else {
		cout << "Palindrom number of Substring is:" << SubPalindrome(a) << endl;

		return true;
	}
}
*/




//����һ����������a[0,...,n-1]���������е�kС��
/*
void sort(int *a,int num) {
	int p;
	for (int i = 0; i < num; i++) {
		for (int j = i; j < num; j++) {
			if (a[j] < a[i]) {
				p = a[j];
				a[j] = a[i];
				a[i] = p;
			}
		}
	}
}

int main() {
	int num,position;
	cout << "�������ݵĸ�����";
	cin >> num;
	cout << "Ѱ�ҵڼ�С��";
	cin >> position;
	int *a=new int[num];
	cout << "��������" << num << "������";
	for (int i = 0; i < num; i++)
		cin >> a[i];
	sort(a,num);
	cout << "����Ϊ�� " << a[position-1] << endl;
	delete[] a;
	return 0;
}
*/



//����һ������a[0,...,n-1],�������������(����>=1)��
/*
int SumArr(int *arr, int i, int j) {
	int sum = 0;
	for (i; i <= j; i++) {
		sum += arr[i];
	}
	return sum;
}
int main() {
	cout << "�����鳤�ȣ�";
	int length;
	cin >> length;
	int MaxSum=0;
	int *arr = new int[length];
	cout << "����������飺";
	for (int k = 0; k < length; k++)
		cin >> arr[k];
	for (int i = 0; i < length; i++) {
		for (int j = 1; (j+i) < length; j++) {
			if (MaxSum < SumArr(arr, j, j + i))
				MaxSum = SumArr(arr, j, j + i);
		}
	}
	cout << "����������Ϊ�� " << MaxSum << endl;
	delete[] arr;
	return 0;

}
*/



//�������
/*
int main() {
	int n;
	cout << "����������ǽ�����";
	cin >> n;
	vector<vector<int>> arr(n, vector<int>(n));

	for (int i = 0; i < n; i++) {

		for (int j = 0; j <= i; j++) {
			if (j == 0)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];

		}
	}
	for (int i = 0; i < n;i++) {
		for (int j = 0; j <= i; j++)
			cout << arr[i][j] << " ";
		cout << endl;

	}
	system("pause");
}
*/



//�ַ���ת����(����ת�ַ���)
/*
#include<sstream>
int main() {
	string a = "1314.523";

	double num1,num2;
	stringstream ss;
	ss << a;
	ss >> num1;
	cout << num1 << endl;
	num2 = atof(a.c_str());//c_str()��ȡ�ַ���ָ��
	cout << num2 << endl;
	//C++11�ṩ������תstring����to_string
	//c��׼���ṩ���ַ���ת����atoi, atof, atol, atoll��

}
*/



//����һ�����ַ�����ʾ�����֣������Ƴ�k���ַ���ʹ���Ƴ�֮����ַ�����ɵ����־�����С



//���м̳�ʵ��1����ȥ��point.hͷ�ļ���
/*
class Point {
	//����Point��Ķ���
public:
	//���к�����Ա
	void initPoint(float x = 0, float y = 0) {
		this->x = x;
		this->y = y;
	}
	void move(float offX, float offY) {
		x += offX;
		y += offY;
	}
	float getX() const { return x; }
	float getY() const { return y; }
private:
	//˽�����ݳ�Ա
	float x, y;
};

class Rectangle1 : public Point {
	//�����ඨ�岿��
public:
	//�������к�����Ա
	void initRectangle(float x, float y, float w, float h) {
		initPoint(x, y);              //���û��๫�г�Ա����
		this->w = w;
		this->h = h;
	}
	float getH() const { return h; }
	float getW() const { return w; }
private:
	//����˽�����ݳ�Ա
	float w, h;
};

int main() {

	Rectangle1 rect; //����Rectangle��Ķ���
	rect.initRectangle(2, 3, 20, 10);
	rect.move(3, 2); //�ƶ�����λ��
	cout << "The data of rect(x,y,w,h): " << endl;
	//������ε���������
	cout << rect.getX() << ", "
		<< rect.getY() << ", "
		<< rect.getW() << ", "

		<< rect.getH() << endl;
	return 0;
}
*/



//˽�м̳�ʵ��1
/*
class Point {   //����Point��Ķ���
public: //���к�����Ա
	void initPoint(float x = 0, float y = 0)
	{
		this->x = x; this->y = y;
	}
	void move(float offX, float offY)
	{
		x += offX; y += offY;
	}
	float getX() const { return x; }
	float getY() const { return y; }
private:    //˽�����ݳ�Ա
	float x, y;
};

class Rectangle1 : private Point {    //�����ඨ�岿��
public: //�������к�����Ա
	void initRectangle(float x, float y, float w, float h) {
		initPoint(x, y); //���û��๫�г�Ա����
		this->w = w;
		this->h = h;
	}
	void move(float offX, float offY) { Point::move(offX, offY); }//point��move��Ա�����������޷�ֱ�ӵ��ã����������п��Ա����ã����ôӻ���̳й����ĳ�Ա����
	float getX() const { return Point::getX(); }
	float getY() const { return Point::getY(); }
	float getH() const { return h; }
	float getW() const { return w; }
private:    //����˽�����ݳ�Ա
	float w, h;
};

int main() {
	Rectangle1 rect; //����Rectangle��Ķ���
	rect.initRectangle(2, 3, 20, 10);   //���þ��ε�����
	rect.move(3, 2); //�ƶ�����λ�ã�point���г�Ա����move��Ϊ˽�У�����ֱ�ӷ���
	cout << "The data of rect(x,y,w,h): " << endl;
	cout << rect.getX() << ", "  //������ε���������
		<< rect.getY() << ", "
		<< rect.getW() << ", "
		<< rect.getH() << endl;
	return 0;
}*/




//�����̳�ʵ��1
/*
class A {
protected:
	int x;
};

int main() {
	A a;
	a.x = 5;//����
}

class B : public A {
public:
	void function();
};
void B::function() {
	x = 5;   //��ȷ
}
*/



//��̳�ʵ��1
/*
class A {
public:
	void setA(int);
	void showA() const { cout << a << endl; };
private:
	int a;
};

class B {
public:
	void setB(int);
	void showB() const { cout << b << endl; };
private:
	int b;
};

class C : public A, private B {
public:
	void setC(int, int, int);
	void showC() const { cout << c << endl; };
	void showB() const { B::showB(); }//ȥ��������ע�ʹ�����
	void setB(int m) { B::setB(m); }//ȥ��������ע�ʹ�����
private:
	int c;
};

void  A::setA(int x) {
	a = x;
}

void B::setB(int x) {
	b = x;
}

void C::setC(int x, int y, int z) {
	//�������Աֱ�ӷ��ʻ����
	//���г�Ա
	setA(x);
	setB(y);
	c = z;
}

//��������ʵ����

int main() {
	C obj;
	obj.setA(5);
	obj.showA();
	obj.setC(6, 7, 9);
	obj.showC();
	obj.setB(6);//����
	obj.showB();// ����
	return 0;
}
*/



//����ת��ʵ��1
/*
class Base1 { //����Base1����
public:
	virtual void display() const {//virtual���߱���������������display�����ĵ��ö���Ҫ�ڱ����ʱ����������
		cout << "Base1::display()" << endl;//���߱�������Ҫ����̬�󶨣�Ҫ�����н׶�����̬��
	}
};

class Base2 : public Base1 { //����������Base2����
public:
	virtual void display() const;
};
void Base2::display() const{ cout << "Base2::display()" << endl; }

class Derived : public Base2 { //����������Derived����
public:
	virtual void display() const {
		cout << "Derived::display()" << endl;
	}
};

void fun(Base1 *ptr) {  //����Ϊָ���������ָ��
	ptr->display();     //"����ָ��->��Ա��"
}

int main() {    //������
	Base1 base1;    //����Base1�����
	Base2 base2;    //����Base2�����
	Derived derived;    //����Derived�����
	fun(&base1);    //��Base1�����ָ�����fun����
	fun(&base2);    //��Base2�����ָ�����fun����
	fun(&derived); //��Derived�����ָ�����fun����

	return 0;
}
*/



//���̳й��캯��ʵ��
/*
class B {
public:
	B();
	B(int i);
	~B();
	void print() const;
private:
	int b;
};

B::B() {
	b = 0;
	cout << "B's default constructor called." << endl;
}

B::B(int i) {
	b = i;
	cout << "B's constructor called." << endl;
}

B::~B() {
	cout << "B's destructor called." << endl;
}

void B::print() const {
	cout << b << endl;
}

class C : public B {
public:
	C();
	C(int i, int j);
	~C();
	void print() const;
private:
	int c;
};

C::C() {
	c = 0;
	cout << "C's default constructor called." << endl;
}

C::C(int i, int j) : B(i), c(j) {
	cout << "C's constructor called." << endl;
}

C::~C() {
	cout << "C's destructor called." << endl;
}

void C::print() const {
	B::print();
	cout << c << endl;
}

int main() {
	C obj(5, 6);
	obj.print();
	return 0;
}
*/



//��̳�+��ϵĹ���
/*
class Base1 {//����Base1�����캯���в���
public:
	Base1(int i)
	{
		cout << "Constructing Base1 " << i << endl;
	}
	~Base1() {
		cout << "Destructing Base1" << endl;
	}
};
class Base2 {//����Base2�����캯���в���
public:
	Base2(int j)
	{
		cout << "Constructing Base2 " << j << endl;
	}
	~Base2() {
		cout << "Destructing Base2" << endl;
	}
};
class Base3 {//����Base3�����캯���޲���
public:
	Base3()
	{
		cout << "Constructing Base3 *" << endl;
	}
	~Base3() {
		cout << "Destructing Base3" << endl;
	}
};

class Derived : public Base2, public Base1, public Base3 {//���ݼ̳�˳���ʼ������
public:
	Derived(int a, int b, int c, int d) : Base1(a), member2(d), member1(c), Base2(b)
		//�˴��Ĵ����빹�캯����ִ�д����޹�
	{
		cout << "Constructing Derived" << endl;
	}
	~Derived() {
		cout << "Destructing Derived" << endl;
	}
private:
	Base1 member1;//��Ա�ڹ���ʱ���մ���˳��

	Base3 member3;
	Base2 member2;
};

int main() {
	Derived obj(1, 2, 3, 4);
	return 0;
}
*/



//��̳�ͬ������1     
/*
class Base1 {
public:
	int var;
	void fun() { cout << "Member of Base1" << endl; }
};

class Base2 {
public:
	int var;
	void fun() { cout << "Member of Base2" << endl; }
};

class Derived : public Base1, public Base2 {
public:
	int var;
	void fun() { cout << "Member of Derived" << endl; }
};

int main() {
	Derived d;
	Derived *p = &d;

	//����Derived���Ա
	d.var = 1;
	d.fun();

	//����Base1�����Ա
	d.Base1::var = 2;
	d.Base1::fun();

	//����Base2�����Ա
	p->Base2::var = 3;
	p->Base2::fun();



	
	return 0;
}
*/



//�����̳ж��������
/*
class A {
public:
	void  f() { cout << "Member of A" << endl; };
};

class B {
public:
	void f() { cout << "Member of B" << endl; };
	void g() { cout << "Member of B gm" << endl; }
};

class C : public A, public B {
public:
	void g() { cout << "Member of C gm" << endl; };
	void h() { cout << "Member of C" << endl; };
};

class Base0 {   //�������Base0
public:
	int var0;
	void fun0() { cout << "Member of Base0" << endl; }
};

class Base1 : public Base0 { //����������Base1
public: //�����ⲿ�ӿ�
	int var1;
};

class Base2 : public Base0 { //����������Base2
public: //�����ⲿ�ӿ�
	int var2;
};

class Derived : public Base1, public Base2 {
public:
	int var;
	void fun()
	{
		cout << "Member of Derived" << endl;
	}
};

int main() {    //����������
	//�������C c,��c.f()�ж�����
	Derived d;
	d.Base1::var0 = 2;
	d.Base1::fun0();
	cout << d.Base1::var0 << endl;
	cout << d.Base2::var0 << endl;

	d.Base2::var0 = 3;
	d.Base2::fun0();
	
	cout << d.Base1::var0 << endl;
	cout << d.Base2::var0 << endl;
	return 0;
}
*/


//�����1
/*
class Base0 {
public:
	int var0;
	void fun0() { cout << "Member of Base0" << endl; }
};
class Base1 : virtual public Base0 {
public:
	int var1;
};

class Base2 : virtual public Base0 {
public:
	int var2;
};


class Derived : public Base1, public Base2 {
	//����������Derived
public:
	int var;
	void fun() {
		cout << "Member of Derived" << endl;
	}
};

int main() {
	Derived d;
	d.var0 = 2; //ֱ�ӷ������������ݳ�Ա
	d.fun0();     //ֱ�ӷ��������ĺ�����Ա
	cout << d.var0 << endl;
	return 0;
}
*/



//�����2�����캯����
/*
class Base0 {
public:
	Base0(int var) : var0(var) { cout << "constructing Base0" << endl; }
	int var0;
	void fun0() { cout << "Member of Base0" << endl; }
};

class Base1 : virtual public Base0 {
public:
	Base1(int var) : Base0(var) { cout << "constructing Base1" << endl; }
	int var1;
};

class Base2 : virtual public Base0 {
public:
	Base2(int var) : Base0(var) { cout << "constructing Base2" << endl; }
	int var2;
};

class Derived : public Base1, public Base2 {
public:
	Derived(int var) : Base1(var), Base0(var), Base2(var)
	{
		cout << "constructing Derived" << endl;
	}
	int var;
	void fun()
	{
		cout << "Member of Derived" << endl;
	}
};

int main() {    //����������
	Derived d(1);
	cout << d.var0 << endl;

	d.var0 = 2; //ֱ�ӷ������������ݳ�Ա
	cout << d.var0 << endl;
	d.fun0();   //ֱ�ӷ��������ĺ�����Ա
	return 0;
}
*/



//���ÿ�
/*
int main() {
	Date date(2008, 11, 1);	//��ʼ����
	//���������˻�
	SavingsAccount sa1(date, "S3755217", 0.015);
	SavingsAccount sa2(date, "02342342", 0.015);
	CreditAccount ca(date, "C5392394", 10000, 0.0005, 50);
	//11�·ݵļ�����Ŀ
	sa1.deposit(Date(2008, 11, 5), 5000, "salary");
	ca.withdraw(Date(2008, 11, 15), 2000, "buy a cell");
	sa2.deposit(Date(2008, 11, 25), 10000, "sell stock 0323");
	//�������ÿ�
	ca.settle(Date(2008, 12, 1));
	//12�·ݵļ�����Ŀ
	ca.deposit(Date(2008, 12, 1), 2016, "repay the credit");
	sa1.deposit(Date(2008, 12, 5), 5500, "salary");
	//���������˻�
	sa1.settle(Date(2009, 1, 1));
	sa2.settle(Date(2009, 1, 1));
	ca.settle(Date(2009, 1, 1));
	//��������˻���Ϣ
	cout << endl;
	sa1.show(); cout << endl;
	sa2.show(); cout << endl;
	ca.show(); cout << endl;
	cout << "Total: " << Account::getTotal() << endl;
	return 0;
}
*/



//��̳�2
/*
class Account
{
	string userName;
public:
	Account() {};
	Account(string name);
	void  PrintUserName();
};

class CreditAccount : public Account
{
public:
	CreditAccount(string name, int credit);
	void PrintInfo();
private:
	int credit;
};

Account::Account(string name) :userName(name) {}
void Account::PrintUserName() { cout << userName << endl; }

CreditAccount::CreditAccount(string name, int credit) : Account(name), credit(credit) {}
void CreditAccount::PrintInfo() {
	PrintUserName();
	cout << credit << endl;
}

//��ʵ��Account���캯��Account(char *name)
//��ʵ��Account��PrintUserName()����
//��ʵ��CreditAccount��Ĺ��캯��CreditAccount(char* name, long number)
//��ʵ��CreditAccount���PrintInfo()����

int main()
{
	CreditAccount a("I Love CPP", 10000);
	a.PrintInfo();
	return 0;
}
*/



//��̳�3
/*
class Base1
{
public:
	Base1(int x);
	Base1();
	~Base1();
};

class Base2
{
public:
	Base2(int x);
	Base2();
	~Base2();
};
class Base3
{
public:
	Base3(int x);
	Base3();
	~Base3();
};

class Derived :public Base2, public Base1, public Base3//�̳�����3����
{
public:
	Derived(int x1, int x2, int x3, int x4);
	~Derived();

private:
	Base3 a;
	Base2 b;
	Base1 c;
};

Base1::Base1()
{
	cout << "Base1 constructor called " << endl;
}
Base2::Base2()
{
	cout << "Base2 constructor called " << endl;
}
Base3::Base3()
{
	cout << "Base3 constructor called " << endl;
}



Base1::Base1(int x)
{
	cout << "Base1 constructor called " << x << endl;
}

Base1::~Base1()
{
	cout << "Base1 destructor called" << endl;
}

Base2::Base2(int x)
{
	cout << "Base2 constructor called " << x << endl;
}

Base2::~Base2()
{
	cout << "Base2 destructor called" << endl;
}

Base3::Base3(int x)
{
	cout << "Base3 constructor called " << x << endl;
}

Base3::~Base3()
{
	cout << "Base3 destructor called" << endl;
}

Derived::Derived(int x1, int x2, int x3, int x4):Base2(x3),Base1(x2),Base3(x4){
	cout << "Derived constructor called " << x1 << endl;
}

Derived::~Derived(){
	cout << "Derived destructor called" << endl;
}
//����Base1���еĴ���ʵ��������Ĺ��캯������������


int main()
{
	int x[4] = {1,2,3,4};
	
	Derived d(x[0], x[1], x[2], x[3]);
	return 0;
}
*/



//�ṹ��2��ʵ�ּӷ���
/*
struct Base1
{
	int x;
	Base1(int x);
};

struct Base2
{
	int x;
	Base2(int x);
};

struct Derived :public Base1, public Base2
{
	int x;
	Derived(Base1& a, Base2& b);
};

Base1::Base1(int x) {
	this->x = x;
}

Base2::Base2(int x) {
	this->x = x;
}

Derived::Derived(Base1& a, Base2& b):Base1(a.x),Base2(b.x),x(a.x+b.x){}

//��ʵ��Base1��Base2, Derived�Ĺ��캯��

int main()
{
	int x, y;
	cin >> x >> y;
	Base1 a(x);
	Base2 b(y);
	Derived d(a, b);
	cout << d.Base1::x << "+" << d.Base2::x << "=" << d.x << endl;
	return 0;
}
*/



//��̳�4
/*
class BaseClass {
public:
	int Number;
	int getNumber() { return Number; }
	BaseClass() { cout << "BaseClass Construct" << endl; }
	~BaseClass() { cout << "BaseClass Destruct" << endl; }
};

class DerivedClass :BaseClass {
public:
	DerivedClass() {
		Number = 0;
		Number++;
		cout << "DerivedClass Construction.Number=" << getNumber() << endl;
	}
	~DerivedClass() {
		Number--;
		cout << "DerivedClass Destruction.Number=" << getNumber() << endl;
	}
};

int main() {
	DerivedClass d;
	
	return 0;
}
*/



//��̳�5
/*
class vehicle {
public:
	vehicle();
	int MaxSpeed;
	int Weight;
	void Run() { cout << "Vehicle run" << endl; };
	void Stop() { cout << "Vehichle stop" << endl; };
	static void getNum() {
		cout << "Vehicle numer:" << num << endl;
	}
private:
	static int num;
};

int vehicle::num = 0;
vehicle::vehicle() {
	cout << "construct a vehicle" << endl;
	num++;
}
class bicycle :virtual public vehicle {
public:
	bicycle() {
		cout << "Construct a bicycle" << endl;
	}
	int Height;
};

class  motorcar :virtual public vehicle {
public:
	motorcar() {
		cout << "Construct a motorcar" << endl;
	}
	int SeatNum;
};

class motorcycle :public bicycle, public motorcar {
public:
	motorcycle() {
		cout << "Construct a motorcycle" << endl;

	}

};

int main() {
	motorcycle m;
	m.Height = 1;
	m.SeatNum = 4;
	m.SeatNum = 100;
	m.MaxSpeed = 70;

	m.Run();
	m.Stop();
	m.getNum();
	return 0;
}
*/



//˫Ŀ���������
/*
class Complex {
public:
	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }
	//�����+���س�Ա����
	Complex operator + (Complex & c2) const;
	Complex operator - (Complex & c2) const;
	Complex operator * (Complex & c2) const;
	Complex operator / (Complex & c2) const;
	//�����-���س�Ա����

	void display() const;
private:
	double real;
	double imag;
};

Complex Complex::operator + ( Complex &c2) const {
	//����һ����ʱ����������Ϊ����ֵ
	return Complex(real + c2.real, imag + c2.imag);
}

Complex Complex::operator - ( Complex &c2) const {
	//����һ����ʱ����������Ϊ����ֵ
	return Complex(real - c2.real, imag - c2.imag);
}

Complex Complex::operator * (Complex &c2) const {
	return Complex(real*c2.real - imag * c2.imag, real*c2.imag + imag * c2.real);
}

Complex Complex::operator / (Complex &c2) const {
	return Complex((real*c2.real + imag * c2.imag) / (c2.real*c2.real + c2.imag*c2.imag),
		(imag*c2.real - real * c2.imag) / (c2.real*c2.real + c2.imag*c2.imag));
}

void Complex::display() const {
	cout << "(" << real << ", " << imag << "i)" << endl;
}


int main() {
	Complex c1(5, 2), c2(2,5), c3;
	cout << "c1 = "; c1.display();
	cout << "c2 = "; c2.display();
	c3 = c1 - c2;
	cout << "c3 = c1 - c2 = "; c3.display();
	c3 = c1 + c2;
	cout << "c3 = c1 + c2 = "; c3.display();
	c3 = c1 * c2;
	cout << "c3 = c1 * c2 = "; c3.display();
	c3 = c1 / c2;
	cout << "c3 = c1 / c2 = "; c3.display();
	return 0;
}
*/



//��Ŀ���������(ǰ������)
/*
class Clock {//ʱ���ඨ��
public:
	Clock(int hour = 0, int minute = 0, int second = 0);
	void showTime() const;
	//ǰ�õ�Ŀ���������
	Clock & operator ++ ();
	//���õ�Ŀ���������
	Clock operator ++ (int);
private:
	int hour, minute, second;
};

Clock::Clock(int hour, int minute, int second) {
	if (0 <= hour && hour < 24 && 0 <= minute && minute < 60
		&& 0 <= second && second < 60) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
	else
		cout << "Time error!" << endl;
}
void Clock::showTime() const {  //��ʾʱ��
	cout << hour << ": " << minute << ": " << second << endl;
}


Clock & Clock::operator ++ () {
	second++;
	if (second >= 60) {
		second -= 60;  minute++;
		if (minute >= 60) {
			minute -= 60; hour = (hour + 1) % 24;
		}
	}
	return *this;
}

Clock Clock::operator ++ (int) {
	//ע���βα��е����Ͳ���
	Clock old = *this;
	++(*this);  //����ǰ�á�++�������
	return old;

	//��һ�ַ���
	//Clock new_ = ++(*this);
	//return new_;
}

int main() {
	Clock myClock(23, 59, 59);
	cout << "First time output: ";
	myClock.showTime();
	cout << "Show myClock++:    ";
	(myClock++).showTime();
	cout << "Show ++myClock:    ";
	(++myClock).showTime();
	return 0;
}
*/



//����complex�ļӼ�����<<�����Ϊ�ǳ�Ա����
/*
class Complex {
public:
	Complex(double r=0.0,double i=0.0):real(r),imag(i){}
	friend Complex operator+(const Complex &c1, const Complex &c2);
	friend Complex operator-(const Complex &c1, const Complex &c2);
	friend ostream & operator<<(ostream &out,const Complex &c);
private:
	double real;
	double imag;
};

Complex operator +(const Complex &c1, const Complex &c2) {
	return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

Complex operator -(const Complex &c1, const Complex &c2) {
	return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

ostream & operator<<(ostream &out, const Complex &c) {
	return out << "(" << c.real << "," << c.imag << ")";

}

int main() {
	Complex c1(5, 4), c2(2, 10), c3;
	cout << "c1=" << c1 << endl;
	cout << "c2=" << c2 << endl;
	c3 = c1 - c2;
	cout << "c3=c1-c2=" << c3 << endl;
	c3 = c1 + c2;
	cout << "c3=c1+c2=" << c3 << endl;
	return 0;
}
*/



//
/*
class Animal {

public:

	virtual void Name() = 0;

};

class Koala : public Animal {

public:

	void Name() { }

};

int main() {
	Animal a;
}

*/


//���ݽṹ��Self-Learning��








/*
int check(string &a) {
	int num = 0;
	int CA = 0;
	int sm = 0;
	int sign = 0;
	if (a.size() < 8 || a.size() > 120)
		return 1;
	else {
		for (int i = 0; i < a.size(); i++) {
			if (a[i] >= 48 && a[i] <= 57)
				num++;
			if (a[i] >= 65 && a[i] <= 90)
				CA++;
			if (a[i] >= 97 && a[i] <= 122)
				sm++;
			if (a[i] >= 32 && a[i] <= 47 || a[i] >= 58 && a[i] <= 64 || a[i] >= 91 && a[i] <= 96 || a[i] >= 123 && a[i] <= 126)
				sign++;

		}
		if (num != 0 && CA != 0 && sm != 0 && sign != 0)
			return 0;
		else
			return 2;
	}
}

int main() {
	string a;
	int b;
	while (cin >> a) {
		b = check(a);
		cout << b << endl;
	}

}
*/



//unsigned int ת�ַ���ָ��
/*
int itoa_bin(unsigned int data, char *str)
{
	if (str == NULL)
		return -1;

	char *start = str;

	while (data)
	{
		if (data & 0x1)
			*str++ = 0x31;
		else
			*str++ = 0x30;

		data >>= 1;
	}

	*str = 0;

	//reverse the order
	char *low, *high, temp;
	low = start, high = str - 1;

	while (low < high)
	{
		temp = *low;
		*low = *high;
		*high = temp;

		++low;
		--high;
	}

	return 0;
}
*/


//EE658����
/*
int main() {
	cout << "S0:";
	float S0[30];
	cin >> S0[0];
	cout << endl;
	cout << "S1:";
	float S1[30];
	cin >> S1[0];
	cout << endl;
	cout << "SD:";
	float SD[30];
	cin >> SD[0];
	cout << endl;
	cout << "p0:";
	float p0;
	cin >> p0;
	cout << endl;
	cout << "p1:";
	float p1;
	cin >> p1;
	cout << endl;
	cout << "pr:";
	float pr;
	cin >> pr;
	int i;
	for (i = 1; i < 30; i++) {
		S0[i] = S0[i - 1] * (1 - p1) + S1[i - 1] * p0;
		S1[i] = S0[i - 1] * p1 + S1[i - 1] * (1 - p0 - pr);
		SD[i] = SD[i - 1] * 1 + S1[i - 1] * pr;
	}
	for (i = 0; i < 30; i++) {
		cout << "S0." << i << "probability=" << S0[i] << endl;

		cout << "S1." << i << "probability=" << S1[i] << endl;

		cout << "SD." << i << "probability=" << SD[i] << endl;
	}
	system("pause");


	}
*/



//�麯��ѧϰ1
/*
class Base1 {
public:
	void display() const {
		cout << "Base1::display()" << endl;
	}
};


class Base2 :public Base1 {
public:
	void display() const {
		cout << "Base2::display()" << endl;
	}
};

class Derived :public Base2 {
public:
	void display() const {
		cout << "Derived::display()" << endl;
	}
};



class Base1 {
public:
	virtual void display() const;  //virtual �����н׶�����̬��
		//��������̬�󶨣����Բ����ڱ���׶ξͶ�display�������б��룬����display����д������
};
void Base1::display() const{
	cout << "Base1::display()" << endl;
}

class Base2:public Base1 {
public:
	virtual void display() const;
};
void Base2::display() const {
	cout << "Base2::display()" << endl;
}

class Derived :public Base2 {
public:
	virtual void display() const;
};
void Derived::display() const {
	cout << "Derived::display()" << endl;
}

void fun(Base1 *ptr) {
	ptr->display();
}

int main() {
	Base1 base1;
	Base2 base2;
	Derived derived;
	fun(&base1);
	fun(&base2);
	fun(&derived);
	return 0;
}
*/

//�麯��ѧϰ2
/*
///////////////////////////////////////////////////////////////////
class A{
public:
	void foo() {
		printf("1\n");
	}
	virtual void fuu() {
		printf("2\n");
	}
};

class B :public A {
public:
	void foo()	{
		printf("3\n");
	}
	void fuu()	{
		printf("4\n");
	}	
	void kkk() {
		printf("kkk\n");
	}
	int j = 10;
};

int main(){//fuu()Ϊ�麯��
	A a;									//����
	B b;									//������
	A *p = &a;								//������ָ��ָ�����
	cout << "p->foo()---"; p->foo();		//pָ�������󣬻���ָ���޷�����������ָ�룬����ֱ�ӵ��û����Ա����foo()
	cout << "p->fuu()---"; p->fuu();		//ͬ��
	cout << "-------����ת��-----------" << endl;

	p = &b;									//������ָ��ָ�����������	
	cout << "p->foo()---"; p->foo();		//������ָ������Ա�������������ж����ͬ����Ա�����������á�foo�����麯������ֱ�ӵ����������(����)��λ��
	cout << "p->fuu()---"; p->fuu();		//����fuu���麯����ָ���ָ���������ж���ĳ�Ա�麯��
	
	cout << "--------����ת��----------" << endl;
	//B *pt = &a;							//����������ָ�벻��ָ����࣬�������ǿ��ת��
	B *ptr = (B *)&a;						//��һ��������ָ��ָ��һ����ָ���������ָ��ǿ��ת��Ϊָ��������ָ���ָ�롣
											//���÷��������Ϊһ���������ģ��ָ���˻�����ڴ�ռ䡣����ģ��ʱΪ�����࣬���ʿռ���������ָ���˻��ࡣ���ã�������
											//�ر���������ڴ�����ϵĴ��������������ж�����һ���³�Ա,����������û�У�������һ��λ�õĿռ䣻
											//�����οռ��ǲ���ϵͳռ�õģ�����ͻ����
	cout << "ptr->foo()----"; ptr->foo();	//???3
	cout << "ptr->fuu()----"; ptr->fuu();	//???2
	cout << "j: " << ptr->j << endl;

	cout << "++++++++++++++++" << endl;
	B *pt = &b;
	pt->foo();
	pt->fuu();
	pt->kkk();
	
	return 0;
}
*/

//�麯������
/*
class Base {
public:
	virtual ~Base();
};
Base::~Base() {
	cout << "Base destructor" << endl;
}
class Derived :public Base {
public:
	Derived();
	virtual ~Derived();
private:
	int *p;
};
Derived::Derived() {
	p = new int(0);
}
Derived::~Derived() {
	cout << "Derived destructor" << endl;
	delete p;
}
void fun(Base *b) {
	delete b;
}
int main() {
	Base *b = new Derived();
	fun(b);//��������������Զ����û������������
	return 0;
}
*/


//������
/*
class Base1 {
public:
	virtual void display() = 0;
};

class Base2:public Base1{
public:
	virtual void display();
};

void Base2::display() {
	cout << "Base2::display()" << endl;
}

class Derived :public Base2 {
public:
	virtual void display();
};

void Derived::display() {
	cout << "Derived::display()" << endl;
}
void fun(Base1 *ptr) {
	ptr->display();
}
int main() {
	Base2 base2;
	Derived derived;
	fun(&base2);
	fun(&derived);
	return 0;
}
*/




//final
/*
class Base1 final {
	void display(){
		cout << "Base1::display()" << endl;
	}
};

class Base2 :public Base1 {

};

class Base3 {
	virtual void display() final {
		cout << "Base3::display()" << endl;
	}
};

class Derived :public Base3 {
	void display() {

	}
};
*/

/*
class Base1 {
	void display() {
		cout << "Base1::display()" << endl;
	}
};

class Base2  final :public Base1 {

};

class derive :public Base2 {

};
class Base3 {
	virtual void display() final {
		cout << "Base3::display()" << endl;
	}
};

class Derived :public Base3 {
	virtual void display() final {
		cout << "Derived::display()" << endl;
	}
	
};
*/

//���������2
/*
class Point {
	int _x, _y;
public:
	Point(int x=0,int y=0):_x(x),_y(y){}
	Point& operator++();
	Point operator++(int);
	Point& operator--();
	Point operator--(int);
	friend ostream& operator << (ostream& o, Point& p);
};
Point& Point::operator++() {
	_x++;
	_y++;
	return *this;
}
Point Point::operator++(int) {
	Point temp = *this;
	++*this;
	return temp;
}
Point& Point::operator--() {
	_x--;
	_y--;
	return *this;
}
Point Point::operator--(int) {
	Point temp = *this;
	--*this;
	return temp;
}
ostream& operator<<(ostream& o, Point& p) {
	o << '(' << p._x << ',' << p._y << ')';
	return o;
}
int main() {
	Point p(1, 2);
	cout << p << endl;
	//cout << p++ << endl;
	cout << ++p << endl;
	//cout << p-- << endl;
	cout << --p << endl;
}
*/




//�麯���Ķ�̬��2
/*
class Vehicle {
public:
	int MaxSpeed;
	int Weight;
	//void Run() { cout << "vehicle run" << endl; }
	//void Stop() { cout << "vehicle stop" << endl; }
	virtual void Run() { cout << "vehicle run" << endl; }
	virtual void Stop() { cout << "vehicle stop" << endl; }

};
class Bicycle :virtual public Vehicle {
public:
	int Height;
	virtual void Run() { cout << "bicycle run" << endl; }
	virtual void Stop() { cout << "bicycle stop" << endl; }

};
class Motocar :virtual public Vehicle {
public:
	int SeatNum;
	virtual void Run() { cout << "motocar run" << endl; }
	virtual void Stop() { cout << "motocar stop" << endl; }
};
class Motorcycle :public Bicycle, public Motocar {
public:
	virtual void Run() { cout << "motocycle run" << endl; }
	virtual void Stop() { cout << "motocycle stop" << endl; }
};
int main() {
	Vehicle v;
	v.Run();
	v.Stop();
	Bicycle b;
	b.Run();
	b.Stop();
	Motocar m;
	m.Run();
	m.Stop();
	Motorcycle mc;
	mc.Run();
	mc.Stop();
	cout << "###########" << endl;
	Vehicle *vp = &v;
	vp->Run();
	vp->Stop();
	vp = &b;
	vp->Run();
	vp->Stop();
	vp = &mc;
	vp->Run();
	vp->Stop();
	cout << mc.MaxSpeed << endl;
	return 0;

}
*/




//~~~~~~~~~~~ģ��~~~~~~~~~~~~~~~//



//ģ���Զ�����1
/*
template<typename T>
T abs(T x) {
	return x < 0 ? -x: x;
}
int main() {
	int n = 5;
	double q = -5.5;
	cout << abs(n) << endl;
	cout << abs(q) << endl;
	return 0;
}
*/



//ģ������2
/*
template <class T>
void outputArray(const T *array, int count) {
	for (int i = 0; i < count; i++)
		cout << array[i] << " ";
	cout << endl;
}
int main() {
	const int A_COUNT = 8, B_COUNT = 8, C_COUNT = 20;
	int a[A_COUNT] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	double b[B_COUNT] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8 };
	char c[C_COUNT] = "Welcome!";

	cout << " a array contains:" << endl;
	outputArray(a, A_COUNT);
	cout << " b array contains:" << endl;
	outputArray(b, B_COUNT);
	cout << " c array contains:" << endl;
	outputArray(c, C_COUNT);
	return 0;
}
*/



//��ģ��
/*
struct Student {
	int id;
	float gpa;
};

template <class T>
class Store {
private:
	T item;
	bool haveValue;
public:
	Store();
	T &getElem();
	void putElem(const T &x);
};

template <class T>
Store<T>::Store():haveValue(false){}//���캯����ʼ��

template <class T>
T &Store<T>::getElem() {
	if (!haveValue) {
		cout << "No item present!" << endl;
		exit(1);
	}
	return item;
}

template<class T>
void Store<T>::putElem(const T &x) {
	haveValue = true;
	item = x;
}

int main() {
	Store<int> s1, s2;
	s1.putElem(3);
	s2.putElem(-7);
	cout << s1.getElem() << " " << s2.getElem() << endl;

	Student g = { 1000,23 };
	Store<Student> s3;
	s3.putElem(g);
	cout << "The Student id is " << s3.getElem().id << endl;

	Store<double> d;
	cout << "Retrieving object D...";
	cout << d.getElem() << endl;
	return 0;
}
*/


//������ģ��
/*
#ifndef ARRAY_H
#define ARRAY_H

template <class T> class Array {
private:
	T* list;
	int size;
public:
	Array(int sz = 50);
	Array(const Array<T> &a);
	~Array();

	Array<T> &operator=(const Array<T> &rhs);//���ء�=��
	T & operator [] (int i);
	const T & operator[](int i)const;
	operator T*();
	operator const T*()const;
	int getSize() const;
	void resize(int sz);
};

template<class T> Array<T>::Array(int sz) {//���캯��
	assert(sz >= 0);
	size = sz;
	list = new T[size];
}

template<class T> Array<T>::~Array() {//��������
	delete[] list;
}

template<class T> Array<T>::Array(const Array<T> &a) {//���ƹ��캯��
	size = a.size;
	list = new T[size];
	for (int i = 0; i < size; i++)
		list[i] = a.list[i];
}

template<class T> Array<T> &Array<T>::operator=(const Array<T> &rhs) {//���ء�=���������������rhs��ֵ��������ʵ�ֶ���֮������帳ֵ
	if (&rhs != this) { //�����ų�����ֵ
		if (size != rhs.size) {//�жϴ�С�Ƿ�һ�£������һ������ɾ��ָ��ռ��ٴ����µĿռ䲢��ֵ�����һ����ֱ�Ӹ�ֵ
			delete[] list;
			size = rhs.size;
			list = new T[size];
		}
		for (int i = 0; i < size; i++)
			list[i] = rhs.list[i];
	}
	return *this;//���ص�ǰ���������
}

template<class T> T &Array<T>::operator[] (int n) {//�����±������
	assert(n >= 0 && n < size);
	return list[n];
}

template<class T> const T &Array<T>::operator[] (int n) const {//�����ã�ֻ�ܶ�ȡ�±��Ӧ��Ԫ�ص��ǲ��ܸı�

		assert(n >= 0 && n < size);
		return list[n];

}

template<class T> Array<T>::operator T *() {//����ָ��ת������
	return list;
}

template<class T> Array<T>::operator const T*()const {
	return list;
}

template<class T> int Array<T>::getSize() const {//��ȡ��ǰ�����С
	return size;
}

template<class T> void Array<T>::resize(int sz) {
	assert(sz >= 0);
	if (sz == size)
		return;
	T* newList = new T[sz];
	int n = (sz < size) ? sz : size;
	for (int i = 0; i < n; i++)
		newList[i] = list[i];
	delete[] list;
	list = newList;
	size = sz;
}
#endif

int main() {//������������Array�ṹ��
	Array<int> a(10);
	int n, count = 0;
	cout << "Enter a value >=2 as upper limit for prime numbers:";
	cin >> n;

	for (int i = 2; i < n; i++) {
		bool isPrime = true;
		for (int j = 0; j < count; j++) {
			if (i%a[j] == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			if (count == a.getSize())
				a.resize(count * 2);
			a[count++] = i;
		}
	}
	for (int i = 0; i < count; i++)
		cout << setw(8) << a[i];
	cout << endl;
	return 0;

}
*/



//������
/*
template <class T>
class Node {
private:
	Node<T> *next;
public:
	T data;
	Node(const T& item, Node<T> *next = 0);
	void insertAfter(Node<T> *p);
	Node<T> *deleteAfter();
	Node<T> *nextNode() const;
	Node<T> *nextNode();
};

template <class T>
void Node<T>::insertAfter(Node<T> *p) {
	p->next = next;
	next = p;
}

template <class T>
Node<T> *Node<T>::deleteAfter() {
	Node<T> *tempPtr = next;
	if (next == 0)
		return 0;
	next = tempPtr->next;
	return tempPtr;
}

template <class T>
Node<T>::Node(const T& item, Node<T> *next):data(item),next(next) {
}

template <class T>
Node<T> *Node<T>::nextNode() const {
	return next;
}

template <class T>
Node<T> *Node<T>::nextNode(){
	return next;
}
*/



//ջ��ģ��   ��ʵ�ּ��������� 5 -3 + 6 * ^ 2
/*
template <class T,int SIZE=50>
class Stack {
private:
	T list[SIZE];
	int top;
public:
	Stack();
	void push(const T &item);
	T pop();
	void clear();
	const T &peek() const;
	bool isEmpty() const;
	bool isFull() const;
};

template<class T, int SIZE>
Stack<T,SIZE>::Stack():top(-1){}

template<class T,int SIZE>
void Stack<T, SIZE>::push(const T &item) {
	assert(!isFull());
	list[++top] = item;
}

template<class T,int SIZE>
T Stack<T, SIZE>::pop() {
	assert(!isEmpty());
	return list[top--];
}

template<class T, int SIZE>
void Stack<T, SIZE>::clear() {
	top = -1;
}

template<class T, int SIZE>
const T &Stack<T, SIZE>::peek() const {
	assert(!isEmpty());
	return list[top];
}

template<class T, int SIZE>
bool Stack<T, SIZE>::isEmpty() const {
	return top == -1;

}

template<class T, int SIZE>
bool Stack<T, SIZE>::isFull() const {
	return top == SIZE - 1;
}

class Calculator {
private:
	Stack<double> s;
	void enter(double num);
	bool getTwoOperands(double &opnd1, double &opnd2);
	void compute(char op);
public:
	void run();
	void clear();
};

inline double stringToDouble(const string &str) {//�ַ���תʵ��
	istringstream stream(str);
	double result;
	stream >> result;
	return result;
}

void Calculator::enter(double num) {
	s.push(num);
}

bool Calculator::getTwoOperands(double &opnd1, double &opend2) {
	if (s.isEmpty()) {
		cerr << "Missing operand" << endl;
		return false;
	}
	opnd1 = s.pop();
	if (s.isEmpty()) {
		cerr << "Missing operand" << endl;
		return false;
	}
	opend2 = s.pop();
	return true;
}

void Calculator::compute(char op) {
	double operand1, operand2;
	bool result = getTwoOperands(operand1, operand2);
	if (result) {
		switch (op) {
		case '+':
			s.push(operand1 + operand2);
			break;
		case'-':
			s.push(operand1 - operand2);
			break;
		case'*':
			s.push(operand1 * operand2);
			break;
		case'/':
			if (operand1 == 0) {
				cerr << "Divided by 0" << endl;
				s.clear();
			}
			else
				s.push(operand2 / operand1);
			break;

		case'^':
			s.push(pow(operand2, operand1));
			break;
		default:
			cerr << "Unrecognized operator" << endl;
			break;
		}
		cout << "=" << s.peek() << " ";
	}
	else
		s.clear();

}

void Calculator::run() {//�����׺���ʽ��������
	string str;
	while (cin >> str, str != "q") {
		switch (str[0]) {
		case 'c':s.clear(); break;
		case'-':str.size() > 1 ? enter(stringToDouble(str)) : compute(str[0]); break;
		case'+':
		case'*':
		case'/':
		case'^':
			compute(str[0]); break;
		default:
			enter(stringToDouble(str)); break;

		}
	}
}

void Calculator::clear() {
	s.clear();
}

int main() {
	Calculator c;
	c.run();
	return 0;
}
*/


//������ģ��
/*
template<class T,int SIZE=50>
class Queue {
private:
	int front, rear, count;
	T list[SIZE];
public:
	Queue();
	void insert(const T &item);
	T remove();
	void clear();
	const T &getFront() const;
	int getLength() const;
	bool isEmpty() const;
	bool isFull() const;
};

template<class T,int SIZE>
Queue<T,SIZE>::Queue():front(0),rear(0),count(0){}

template<class T, int SIZE>
void Queue<T, SIZE>::insert(const T &item) {
	assert(count != SIZE);
	count++;
	list[rear] = item;
	rear = (rear + 1) % SIZE;
}

template<class T, int SIZE>
T Queue<T, SIZE>::remove() {
	assert(count != 0);
	int temp = front;
	count--;
	front = (front + 1) % SIZE;
	return list[temp];
}

template<class T, int SIZE>
const T &Queue<T, SIZE>::getFront() const {
	return list[front];
}

template<class T, int SIZE>
int Queue<T, SIZE>::getLength() const {
	return count;
}

template<class T, int SIZE>
bool Queue<T, SIZE>::isEmpty() const {
	return count == 0;
}

template<class T, int SIZE>
bool Queue<T, SIZE>::isFull() const {
	return count == SIZE;
}

template<class T, int SIZE>
void Queue<T, SIZE>::clear() {
	count = 0;
	front = 0;
	rear = 0;
}
*/


//��������ģ��
/*
template<class T>
void insertionSort(T a[], int n) {
	int i, j;
	T temp;
	for (int i = 1; i < n; i++) {
		int j = i;
		T temp = a[j];
		while (j > 0 && temp < a[j - 1]) {
			a[j] = a[j - 1];
			j--;
		}
		a[j] = temp;
	}
}
int main() {
	float a[] = { 1.1,2.5,6.9,7.1,6.13,56.32,14.18,7.71,5.10,10.11,9.16,1.32,0.314,8.56,5.12 };
	bubbleSort(a, sizeof(a)/sizeof(float));
	for (int i = 0; i < sizeof(a) / sizeof(float); i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
*/



//ѡ������ģ��
/*
template <class T>
void mySwap(T &x,T &y) {
	T temp = x;
	x = y;
	y = temp;
}

template<class T>
void selectionSort(T a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int leastIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[leastIndex]) leastIndex = j;
		}
		mySwap(a[i], a[leastIndex]);
	}
}
int main() {
	float a[] = { 1.1,2.5,6.9,7.1,6.13,56.32,14.18,7.71,5.10,10.11,9.16,1.32,0.314,8.56,5.12 };
	bubbleSort(a, sizeof(a)/sizeof(float));
	for (int i = 0; i < sizeof(a) / sizeof(float); i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
*/



//��������ģ�壨ð������
/*
template<class T>
void mySwap(T &x, T &y) {
	T temp = x;
	x = y;
	y = temp;
}
template<class T>
void bubbleSort(T a[], int n) {
	int i = n - 1;
	while (i > 0) {//�н���������û�н����˳�whileѭ��
		int lastExchangeIndex = 0;
		for (int j = 0; j < i; j++) {
			if (a[j + 1] < a[j]) {
				mySwap(a[j], a[j + 1]);
				lastExchangeIndex = j;
			}
		}
		i = lastExchangeIndex;
	}
}
int main() {
	float a[] = { 1.1,2.5,6.9,7.1,6.13,56.32,14.18,7.71,5.10,10.11,9.16,1.32,0.314,8.56,5.12 };
	bubbleSort(a, sizeof(a)/sizeof(float));
	for (int i = 0; i < sizeof(a) / sizeof(float); i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
*/



//���ַ������㷨ģ��(������������Ҫ����˳���ź�)
/*
template <class T>
int binSearch(const T list[], int n, const T &key) {
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (key == list[mid])
			return mid;
		else if (key < list[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}
*/


//ʹ��STL��׼��ʵ�����ݵ���
/*
int main() {
	const int N = 5;
	vector<int> s(N);//container
	for (int i = 0; i < N; i++) {
		cin >> s[i];
	}
	transform(s.begin(), s.end(), ostream_iterator<int>(cout, " "), negate<int>());//transform is algorithm. begin, end and ostream_itrator is itrator, negate is function
	cout << endl;
	return 0;
}
*/



//�ӱ�׼������뼸��ʵ�����ֱ����ǵ�ƽ�����
/*
double square(double x) {
	return x * x;
}

int main() {
	transform(istream_iterator<double>(cin), istream_iterator<double>(), ostream_iterator<double>(cout, "\t"), square);//һ�δӼ���
	//�������ݣ�ֱ��������������λ�á���windows����ctrl+z��������linux����Ctrl+d��Ϊ����
	//ÿһ��������square��ƽ������������뵽������������У�cout��׼�����������tap��Ϊ�ָ�����
	cout << endl;
	return 0;
}
*/



//����������1
/*
template<class T,class InputIterator,class OutputItrator>
void mySort(InputIterator first, InputIterator last, OutputItrator result) {
	vector<T> s;//ͨ��������������������ݴ�����������s��
	for (; first != last; ++first)
		s.push_back(*first);

	sort(s.begin(), s.end());//��s��������sort�����Ĳ���������������ʵ�����
	copy(s.begin(), s.end(), result);//��s����ͨ��������������
}
int main() {
	double a[5] = { 1.2,2.4,0.8,3.3,3.2 };
	mySort<double>(a, a + 5, ostream_iterator<double>(cout, " "));
	cout << endl;
	mySort<int>(istream_iterator<int>(), istream_iterator<int>(), ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}
*/



//˳�������Ļ�������
/*
template<class T>
void printContainer(const char* msg, const T& s) {
	cout << msg << ":";
	copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}
int main() {
	deque<int> s;
	cout << "The input sequence:";
	for (int i = 0; i < 10; i++) {
		cout << i * 5 << " ";
		s.push_front(i*5);
	}
	cout << endl;
	printContainer("deque at first", s);

	list<int> l(s.rbegin(), s.rend());
	printContainer("list at first", l);

	//��l����Ԫ�ؽ���λ��
	list<int>::iterator iter = l.begin();
	while (iter != l.end()) {
		int v = *iter;
		iter = l.erase(iter);
		l.insert(++iter, v);
	}
	printContainer("list at last", l);

	s.assign(l.begin(), l.end());//��l��s��ֵ
	printContainer("deque at last", s);

	vector<int> v(s.begin(), s.end());
	printContainer("Vector at first", v);
	return 0;
}
*/


//�Ӵ�С˳������������ٴ�С����˳�����ż��
/*
int main() {
	istream_iterator<int> i1(cin), i2;//����һ�������������i1ָ���һ�����룬i2���һ������
	vector<int> s1(i1, i2);//ͨ��i1��i2����int��vector
	sort(s1.begin(), s1.end());
	deque<int> s2;
	for (vector<int>::iterator iter = s1.begin(); iter != s1.end(); ++iter) {
		if (*iter % 2 == 0)
			s2.push_back(*iter);
		else
			s2.push_front(*iter);
	}
	copy(s2.begin(), s2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}
*/



//�б�������splice����
/*
int main() {
	string names1[] = { "Alice", "Helen", "Lucy", "Susan" };
	string names2[] = { "Bob", "David", "Levin", "Mike" };
	//��names1��������ݹ����б�s1
	list<string> s1(names1, names1 + 4);
	//��names2��������ݹ����б�s2
	list<string> s2(names2, names2 + 4);

	//��s1�ĵ�һ��Ԫ�طŵ�s2�����
	s2.splice(s2.end(), s1, s1.begin());
	list<string>::iterator iter1 = s1.begin(); //iter1ָ��s1��
	advance(iter1, 2); //iter1ǰ��2��Ԫ�أ�����ָ��s1��3��Ԫ��
	list<string>::iterator iter2 = s2.begin();  //iter2ָ��s2��
	++iter2; //iter2ǰ��1��Ԫ�أ�����ָ��s2��2��Ԫ��
	list<string>::iterator iter3 = iter2; //��iter2��ʼ��iter3
	advance(iter3, 2); //iter3ǰ��2��Ԫ�أ�����ָ��s2��4��Ԫ��
	//��[iter2, iter3)��Χ�ڵĽ��ӵ�s1��iter1ָ��Ľ��ǰ
	s1.splice(iter1, s2, iter2, iter3);

	//�ֱ�s1��s2���
	copy(s1.begin(), s1.end(), ostream_iterator<string>(cout, " "));
	cout << endl;
	copy(s2.begin(), s2.end(), ostream_iterator<string>(cout, " "));
	cout << endl;
	return 0;
}
*/



//����ջ�����������
/*
int main() {
	stack<char> s;
	string str;
	cin >> str; //�Ӽ�������һ���ַ���
	//���ַ�����ÿ��Ԫ��˳��ѹ��ջ��
	for (string::iterator iter = str.begin(); iter != str.end(); ++iter)
		s.push(*iter);
	//��ջ�е�Ԫ��˳�򵯳������
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
	cout << endl;
	return 0;
}
*/


//ģ��ϸ������
/*
const int SPLIT_TIME_MIN = 500;
const int SPLIT_TIME_MAX = 2000;

priority_queue<class Cell> cellQueue;
class Cell {
private:
	static int count;
	int id;
	int time;
public:
	Cell(int birth) :id(count++) {
		time = birth + (rand() % (SPLIT_TIME_MAX - SPLIT_TIME_MIN)) + SPLIT_TIME_MIN;
	}
	int getId() const { return id; }
	int getSplitTime() const { return time; }

	bool operator < (const Cell &s) const{
		return time > s.time;
	}

	void split() {
		Cell child1(time), child2(time);
		cout << time << "s:Cell #" << id << " splits to #" << child1.getId() << " and #" << child2.getId() << endl;
		cellQueue.push(child1);
		cellQueue.push(child2);
	}
};

int Cell::count = 0;

int main() {
	srand(static_cast<unsigned>(time(0)));
	int t;
	cout << "Simulation time:";
	cin >> t;
	cellQueue.push(Cell(0));
	while (cellQueue.top().getSplitTime() <= t) {
		Cell tmp=cellQueue.top();
		tmp.split();
		cellQueue.pop();
	}
	return 0;
}
*/



//����һ��ʵ�������ظ���ȥ����ȡ������С�ߵ���ֵ���ֱ����С�ڵ��ڴ���ֵ�ʹ��ڵ��ڴ���ֵ��ʵ����0��Ϊ���������־��
/*
int main() {
	set<double> s;
	while (true) {
		double v;
		cin >> v;//�Ӽ��̲��϶�������
		if (v == 0) break;
		pair<set<double>::iterator, bool > r = s.insert(v);
		if (!r.second)
			cout << v << " is duplicated" << endl;
	}
	set<double>::iterator iter1 = s.begin();
	set<double>::iterator iter2 = s.end();
	double medium = (*iter1 + *(--iter2)) / 2;
	cout << "<=medium:";
	copy(s.begin(), s.upper_bound(medium), ostream_iterator<double>(cout, " "));
	cout << endl;
	cout << ">=meium: ";
	copy(s.lower_bound(medium), s.end(), ostream_iterator<double>(cout, " "));
	cout << endl;
	return 0;
}


int main() {
	set<int> a;
	while (1) {
		int tmp;
		cin >> tmp;
		if (tmp == 0)
			break;
		else {
			a.insert(tmp);
		}
	}
	cout << "total identical num: " << a.size() << endl;
	float mid = (*(a.begin()) + *(--a.end())) / 2;
	cout << "The mid is: " << mid << endl;
	cout << "Smaller than mid:" << endl;
	copy(a.begin(), a.upper_bound(mid), ostream_iterator<int>(cout, " "));
	cout << endl;
	cout << "Larger than mid:" << endl;
	copy(a.lower_bound(mid), a.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	cout << "xxxxxxxxxxxxxxxx" << endl;
	
}
*/



//map�ļ�ʹ��
/*
int main()
{
	map<string, int> m;//string Ϊ��һ������intΪ��ֵ���ͣ�m��Ϊ��ֵ
	m["abc"] = 5;
	m["cdf"] = 6;
	m["b"] = 1;
	m.insert(make_pair("ba", 6));//insert����
	m["a"] = 5;//ʹ���±����
	for (auto it = m.begin(); it != m.end(); it++)
		cout << it->first << " " << it->second << endl;
	return 0;
}
*/



//�����ſγ̣�ÿ�Ŷ�����Ӧѧ�֣�����ѡ�����ţ����ѧ���ܺ�
/*
int main() {
	map<string, int> courses;
	//���γ���Ϣ����coursesӳ����
	courses.insert(make_pair("CSAPP", 3));
	courses.insert(make_pair("C++", 2));
	courses.insert(make_pair("CSARCH", 4));
	courses.insert(make_pair("COMPILER", 4));
	courses.insert(make_pair("OS", 5));
	cout << courses["C++"] << endl;	
	int n = 3;      //ʣ�µĿ�ѡ����
	int sum = 0;    //ѧ���ܺ�
	while (n > 0) {
		string name;
		cin >> name;    //����γ�����
		map<string, int>::iterator iter = courses.find(name);//���ҿγ�
		if (iter == courses.end()) {    //�ж��Ƿ��ҵ�
			cout << name << " is not available" << endl;
		}
		else {
			sum += iter->second;    //�ۼ�ѧ��
			courses.erase(iter);    //����ѡ���Ŀγ̴�ӳ����ɾ��
			n--;
		}
	}
	cout << "Total credit: " << sum << endl;    //�����ѧ��
	return 0;
}
*/



//ͳ��һ�仰��ÿ����ĸ���ֵĴ���(ӳ��)
/*
int main() {
	map<char, int> s;   //�����洢��ĸ���ִ�����ӳ��
	char c;     //�洢�����ַ�
	do {
		cin >> c; //������һ���ַ�
		if (isalpha(c)) { //�ж��Ƿ�����ĸ
			c = tolower(c); //����ĸת��ΪСд
			s[c]++;      //������ĸ�ĳ���Ƶ�ʼ�1
		}
	} while (c != '.'); //������.�����������
	//���ÿ����ĸ���ִ���
	for (map<char, int>::iterator iter = s.begin(); iter != s.end(); ++iter)
		cout << iter->first << " " << iter->second << "  " << endl;
	cout << endl;
	return 0;
}
*/


//�Ͽ�ʱ���ѯ(���ؼ��������ӳ��)
/*
int main() {
	multimap<string, string> courses;
	typedef multimap<string, string>::iterator CourseIter;

	//���γ��Ͽ�ʱ�����coursesӳ����
	courses.insert(make_pair("C++", "2-6"));
	courses.insert(make_pair("COMPILER", "3-1"));
	courses.insert(make_pair("COMPILER", "5-2"));
	courses.insert(make_pair("OS", "1-2"));
	courses.insert(make_pair("OS", "4-1"));
	courses.insert(make_pair("OS", "5-5"));
	courses.insert(make_pair("COMPILER", "4-7"));
	courses.insert(make_pair("COMPILER", "5-6"));
	//����һ���γ�����ֱ���ҵ��ÿγ�Ϊֹ������ÿ���Ͽδ���
	string name;
	int count;
	do {
		cin >> name;
		count = courses.count(name);
		if (count == 0)
			cout << "Cannot find this course!" << endl;
	} while (count == 0);
	//���ÿ���Ͽδ������Ͽ�ʱ��
	cout << count << " lesson(s) per week: ";
	pair<CourseIter, CourseIter> range = courses.equal_range(name);

	for (CourseIter iter = range.first; iter != range.second; ++iter)
		cout << iter->second << " ";
	cout << endl;

	return 0;
}
*/



//��������
/*
int mult(int x, int y) {
	return x * y;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	const int N = sizeof(a) / sizeof(int);
	cout << "The result by multipling all elements in a is "
		<< accumulate(a, a + N, 1, mult) //mult��������Ϊ�������ȥ��1 Ϊ�۳˵ĳ�ʼֵ
		<< endl;
	return 0;
}
*/



//�ຯ������
/*
class MultClass {
public:
	int operator()(int x, int y) const { return x * y; }
};

int main() {
	int a[] = { 1,2,3,4,5 };
	const int N = sizeof(a) / sizeof(int);
	cout << "The result by multipling all elements in a is"
		<< accumulate(a, a + N, 1, MultClass())
		<< endl;
	return 0;
}
*/



//����STL��׼��������multipiesʵ�ֶ�Ԫ�ص����˲���
/*
int main() {
	int a[] = { 1,2,3,4,5 };
	const int N = sizeof(a) / sizeof(int);
	cout << "The result by multipling all elements in A is "
		<< accumulate(a, a + N, 1, multiplies<int>())
		<< endl;
	return 0;
}
*/



//����STL�еĶ�Ԫν�ʺ�������ʵ�������С����
/*
int main() {
	int intArr[] = { 30,90,10,40,70,50,20,80 };
	const int N = sizeof(intArr) / sizeof(int);
	vector<int> a(intArr, intArr + N);
	cout << "before sorting:" << endl;
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
	cout << endl;
	sort(a.begin(), a.end(), less<int>());
	cout << "after sorting:" << endl;
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));


	cout << "before sorting:" << endl;
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
	cout << endl;
	sort(a.begin(), a.end(), greater<int>());
	cout << "after sorting:" << endl;
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
	cout << endl;
	return 0;
}
*/


//�������������������е�һ������40��Ԫ��
/*
int main() {
	int intArr[] = { 30,90,10,40,70,50,20,80 };
	const int N = sizeof(intArr) / sizeof(int);
	vector<int> a(intArr, intArr + N);
	vector<int>::iterator p = find_if(a.begin(), a.end(), bind2nd(greater<int>(), 40));//���һ��������һ��һԪν�ʣ�������bind2nd����
	if (p == a.end())
		cout << "no element greater than 40" << endl;
	else
		cout << "first element greater than 40 is:" << *p << endl;
	return 0;
}
//find_if
//template<class A,class B>
//A find_if(A a, A b, C c);
//��������[first,last)�����е�һ��c(x)Ϊ���Ԫ��
*/



//ptr_fun, not1, not2��������������ʵ��
/*
bool g(int x, int y) {
	return x > y;
}
int main() {
	int intArr[] = { 30,90,10,40,70,50,20,80 };
	const int N = sizeof(intArr) / sizeof(int);
	vector<int> a(intArr, intArr + N);
	vector<int>::iterator p;
	p = find_if(a.begin(), a.end(), bind2nd(ptr_fun(g), 40));
	if (p == a.end())
		cout << "no element greater than 40" << endl;
	else
		cout << "first element greater than 40 is:" << *p << endl;

	p = find_if(a.begin(), a.end(), not1(bind2nd(greater<int>(), 15)));
	if (p == a.end())
		cout << "no element is not greater than 15" << endl;
	else
		cout << "first element that is not greater than 15 is" << *p << endl;

	p = find_if(a.begin(), a.end(), bind2nd(not2(greater<int>()), 15));
	if (p == a.end())
		cout << "no element is not greater than 15" << endl;
	else
		cout << "first element that is not greater than 15 is" << *p << endl;

	return 0;
}
*/



//��Ա����������ʵ��
/*
struct Car {
	int id;
	Car(int id) {
		this->id = id;
	}
	void display() const {
		cout << "car " << id << endl;
	}
};
int main() {
	vector<Car *>pcars;//���ָ��
	vector<Car> cars;//��Ŷ���
	for (int i = 0; i < 5; i++)
		pcars.push_back(new Car(i));
	for (int i = 5; i < 10; i++)
		cars.push_back(Car(i));
	cout << "elements in pcars: " << endl;
	for_each(pcars.begin(), pcars.end(), std::mem_fun(&Car::display));//�ӵ�һ���������ڶ���������������ڣ�ʹ�õ����������Ĺ���ȥ�����������ڵ�Ԫ��
	cout << endl;                                     //mem_fun����ͨ�ĳ�Ա�����������ͨ��������mem_fun��������ĺ��������Ĳ�����Ҫ���Ƕ���ָ��

	cout << "elements in cars: " << endl;
	for_each(cars.begin(), cars.end(), std::mem_fun_ref(&Car::display));
	cout << endl;                           //mem_fun_ref�����������������ĺ��������Ĳ���Ҫ���Ƕ��������

	for (size_t i = 0; i < pcars.size(); ++i)
		delete pcars[i];
	
	return 0;
}
*/


//ʹ��STLʵ�������ַ����ķ������
/*
int main() {
	queue<char> a;
	while (1) {
		char b=getchar();
		if (b == '\n')
			break;
		else
			a.push(b);
	}
	while (!a.empty()) {
		cout << a.front();
		a.pop();
	}
	cout << endl;
	return 0;
}
*/



//�����������飬�������ݣ�Ӧ�������㷨sort��ϱ�׼��������greater<T>�����ݽ�������ͽ�������
//STL��ѧϰ���˽���������ѧϰ��Ҫ��ѯSTL�ٷ��ĵ���վ
/*
int main() {
	int a[8] = { 3,2,5,6,4,1,9,8 };
	cout << "Ԫ��9�������ǣ�" << find(a, a + 9, 9) - a << endl;
	cout << "��������" << endl;
	sort(a, a + 8);//������Ĭ����������
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "�������У�" << endl;
	sort(a, a + 8, greater<int>());
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
*/




//ʹ��width����������
/*
int main() {
	/////////////////////
	double values[] = { 1.23, 35.36, 653.7, 4358.24 };
	for (int i = 0; i < 4; i++) {
		cout.width(7);
		cout << values[i] << endl;
	}
	cout << endl;
	//////////////////////
	double values2[] = { 1.23, 35.36, 653.7, 4358.24 };
	string names[] = { "Zoot", "Jimmy", "Al", "Stan" };
	for (int i = 0; i < 4; i++)
		cout << setw(6) << names[i]
		<< setw(10) << values2[i] << endl;

	cout << endl;
	/////////////////////////
	for (int i = 0; i < 4; i++)
		cout << setiosflags(ios_base::left)//�����,���ú�������������Ч������ʹ��resetiosflags����
		<< setw(6) << names[i]
		<< resetiosflags(ios_base::left)
		//<<setiosflags(ios_base::right)
		<< setw(10) << values2[i] << endl;
	cout << endl;
	////////////////////////
	int num[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	cout << setiosflags(ios_base::oct);
	for(int i=0;i<21;i++)
		cout<< num[i]<<" ";
	cout << endl;
	return 0;
}
*/



//�����������
/*
int main() {
	double values[] = { 1.23, 35.36, 653.7, 4358.24 };
	string names[] = { "Zoot", "Jimmy", "Al", "Stan" };
	cout << setiosflags(ios_base::fixed);
	//cout << setiosflags(ios_base::scientific);
	for (int i = 0; i < 4; i++)
		cout << setiosflags(ios_base::left)
		<< setw(6) << names[i]
		<< resetiosflags(ios_base::left)//������������
		<< setw(10) << setprecision(2) << values[i] << endl;//setprecision�в��������ı䡣���û��iOS::fixed��scientificָ�ľͲ�����Ч������һλ������˵С�������һλС��
	return 0;
}
*/



//��������ļ����
/*
struct Date {
	int mon, day, year;
};
int main() {
	Date dt = { 6,10,92 };
	ofstream file("date.txt", ios_base::binary);
	file.write(reinterpret_cast<char *>(&dt), sizeof(dt));//write��Ҫ��ʼд��ַ�������ݿ��С
	file.close();
	return 0;
}
*/



//����ֵת��Ϊ�ַ���
/*
template <class T>
inline string toString(const T &v) {
	ostringstream os;   //�����ַ��������
	os << v;        //������v��ֵд���ַ�����
	return os.str();    //������������ɵ��ַ���
}

int main() {
	string str1 = toString(5);
	cout << str1 << endl;
	string str2 = toString(1.23);
	cout << str2 << endl;
	return 0;
}
*/


//��istringstream���ַ���ת��Ϊ��ֵ
/*
template <class T>
inline T fromString(const string &str) {
	istringstream is(str);  //�����ַ���������
	T v;
	is >> v;    //���ַ����������ж�ȡ����v
	return v;   //���ر���v
}

int main() {
	int v1 = fromString<int>("5");
	cout << v1 << endl;
	double v2 = fromString<double>("1.2");
	cout << v2 << endl;
	return 0;
}
*/

/*
int main() {
	string a = "123.56 8";
	istringstream k(a);
	float n; int m;
	k >> n >> m;
	cout << n << " " << m << endl;
}
*/



//get����Ӧ�þ���
/*
int main() {
	char ch;
	while ((ch = cin.get()) != EOF)
		cout.put(ch);
	return 0;
}
*/



//Ϊ������ָ��һ����ֹ�ַ�
/*
int main() {
	string line;
	cout << "Type a line terminated by 't' " << endl;
	getline(cin, line, 't');//��һ������Ϊ�ı��ļ����������󣻵ڶ�������Ϊstring���������ַ���Ӧ�÷ŵ��������������Ϊָ���ָ�����Ĭ��Ϊ����
	cout << line << endl;
	return 0;
}
*/



//���ļ���һ�������Ƽ�¼���ṹ����
/*
struct SalaryInfo {
	unsigned id;
	double salary;
};
int main() {
	SalaryInfo employee1 = { 600001, 8000 };
	ofstream os("payroll", ios_base::out | ios_base::binary);
	os.write(reinterpret_cast<char *>(&employee1), sizeof(employee1));//write ��һ��������Ҫһ���ַ�ָ��
	os.close();
	
	ifstream is("payroll", ios_base::in | ios_base::binary);
	if (is) { 
		SalaryInfo employee2;
		is.read(reinterpret_cast<char *>(&employee2), sizeof(employee2));
		cout << employee2.id << " " << employee2.salary << endl;
	}
	else {
		cout << "ERROR: Cannot open file 'payroll'." << endl;
	}
	is.close();
	return 0;
}
*/


//��seekg��������λ��ָ��
/*
int main() {
	int values[] = { 3,7,0,5,4 };
	ofstream os("temp.txt");
	
	os.write(reinterpret_cast<char *>(values), sizeof(values));
	os.close();

	ifstream is("temp.txt");
	if (is) {
		is.seekg(3 * sizeof(int));
		int v;
		is.read(reinterpret_cast<char *>(&v), sizeof(int));
		cout << "The 4th integer in the file 'temp.txt' is" << v << endl;
	}
	else
		cout << "Error:cannot open file" << endl;
	return 0;
}
*/



//��һ���ļ�����ʾ������0Ԫ�ص�λ��
/*
int main() {
	ifstream file("temp.txt", ios_base::in | ios_base::binary);
	if (file) {
		while (file) {//�����ļ�βfileΪ0
			streampos here = file.tellg();//ȡ�ĵ�ǰ��ָ���λ��
			int v;
			file.read(reinterpret_cast<char *>(&v), sizeof(int));
			if (file && v == 7)
				cout << "Position " << here << " is 0" << endl;
		}
	}
	else {
		cout << "ERROR: Cannot open file 'temp.txt'." << endl;
	}
	file.close();
	return 0;
}
*/







//�����������ʽ����
/*
#define D(a) T<<#a<<endl; a
ofstream T("output.out");

int main() {
	D(int i = 53;)
	D(float f = 4700113.141593;)
	char s[] = "Is there any more?";
	D(T.setf(ios::unitbuf);)
		D(T.setf(ios::uppercase);)
		D(T.setf(ios::showpos);)
		D(T << i << endl;)
		D(T.setf(ios::hex, ios::basefield);)
		D(T << i << endl;)
		D(T.setf(ios::showbase);)
		D(T.setf(ios::basefield);)
		D(T.setf(ios::adjustfield);)
		D(T.fill('0');)

}
*/



//�ö����Ʒ�ʽ��ָ����һ���ļ�����ÿһ��ǰ���к�
/*
int main(int argc, char* argv[]) {
	ifstream in;
	in.open(argv[1], ios::binary);
	if (!in) {
		cout << "Cannot open file." << endl;
		return 1;
	}
	const int bsz = 1024;
	char buf[bsz];
	int line = 0;
	while (in.getline(buf, bsz)) {//����һ�����壬����������������С��getlineһ�����ܵõ�������ַ�����
		cout << ++line << ":" << buf << endl;
	}
	return 0;
}
*/



//�쳣�������
/*
int divide(int x, int y) {
	if (y == 0)
		throw x;//�׳��Ժ󣬺���ļ���Ͳ�����������ˣ����в���
	return x / y;
}


int main(){
	try {//����쳣û�г��֣������try�����catch���ᱻִ��
		cout << "5 / 2 = " << divide(5, 2) << endl;
		cout << "8 / 0 = " << divide(8, 0) << endl;
		cout << "7 / 1 = " << divide(7, 1) << endl;
	}	
	catch (int e) {
		cout << e << " is divided by zero!" << endl;
	}
	cout << "That is ok." << endl;
	return 0;
}
*/



//�쳣����Ĺ���������
/*
class MyException {
public:
	MyException(const string &message):message(message){}
	MyException(){}
	const string &getMessage() const {
		return message;
	}
private:
	string message;
};
class Demo {
public:
	Demo() {
		cout << "Constructor of Demo" << endl;
	}
	~Demo() {
		cout << "Destructor of Demo" << endl;
	}
};

void func() throw(MyException) {
	Demo d;
	cout << "Throw MyException in func()" << endl;
	throw MyException("exception thrown by func()");
}

int main() {
	cout << "In main function" << endl;
	try {
		func();
	}
	catch (MyException& e) {
		cout << "Caught an exception:" << e.getMessage() << endl;
	}
	cout << "Resume the execution of main()" << endl;
	return 0;

}
*/


//����������������������쳣�������
/*
double area(double a, double b, double c)  throw (invalid_argument)
{
	//�ж������α߳��Ƿ�Ϊ��
	if (a <= 0 || b <= 0 || c <= 0)
		throw invalid_argument("the side length should be positive");
	//�ж����߳��Ƿ��������ǲ���ʽ
	if (a + b <= c || b + c <= a || c + a <= b)
		throw invalid_argument("the side length should fit the triangle inequation");
	//��Heron��ʽ�������������
	double s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main() {
	double a, b, c; //���������߳�
	cout << "Please input the side lengths of a triangle: ";
	cin >> a >> b >> c;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	try {
		double s = area(a, b, c);   //���Լ������������,��Ϊ�п����׳��쳣������Ҫ����try����
		cout << "Area: " << s << endl;
	}
	catch (exception &e) {//exception��invalid_argument �Ļ��࣬���Կ��Է���
		cout << "Error: " << e.what() << endl;
	}
	return 0;
}
*/



//����һ���쳣��CException�����������д����쳣��
/*
class CException {
public:
	CException(){}
	virtual ~CException(){}
	void Reason() {
		cout << "CException" << endl;
	}
};
void fn1() {
	throw CException();
}

int main() {
	try {
		fn1();
	}
	catch (CException& ce) {
		ce.Reason();
	}
}
*/


///////////////////////////
///www.cplusplus.com/reference/

/*
ifstream &seekline(ifstream & in, int line) {
	char buf[1024];
	in.seekg(0, ios::beg);
	for (int i = 0; i < line; i++) {
		in.getline(buf, sizeof(buf));
	}
	return in;
}

int main() {
	ifstream file("topoinfo.txt");
	char buf0[1024], buf1[1024], buf2[1024], buf3[1024];
	seekline(file,28);
	file.getline(buf0, sizeof(buf0));
	seekline(file, 32);
	file.getline(buf1, sizeof(buf1));
	seekline(file, 36);
	file.getline(buf2, sizeof(buf2));
	seekline(file, 40);
	file.getline(buf3, sizeof(buf3));
	string tmp = "sudo /sbin/ifconfig nf2c";
	string n0, n1, n2, n3;
	n0 = tmp + buf0[64] + ' ' + buf0[32] + buf0[33] + buf0[34] + buf0[35] + buf0[36] + buf0[37] + buf0[38] + buf0[39] + "/24 up";

	n1 = tmp + buf1[64] + ' ' + buf1[32] + buf1[33] + buf1[34] + buf1[35] + buf1[36] + buf1[37] + buf1[38] + buf1[39] + "/24 up";

	n2 = tmp + buf2[64] + ' ' + buf2[32] + buf2[33] + buf2[34] + buf2[35] + buf2[36] + buf2[37] + buf2[38] + buf2[39] + "/24 up";

	n3 = tmp + buf3[64] + ' ' + buf3[32] + buf3[33] + buf3[34] + buf3[35] + buf3[36] + buf3[37] + buf3[38] + buf3[39] + "/24 up";
	file.close();
	ofstream output("ipconfig.sh");
	output << n0 << endl;
	output << "echo " << "\"" << n0 << " is done" << "\"" << endl;
	output << n1 << endl;
	output << "echo " << "\"" << n1 << " is done" << "\"" << endl;
	output << n2 << endl;
	output << "echo " << "\"" << n2 << " is done" << "\"" << endl;
	output << n3 << endl;
	output << "echo " << "\"" << n3 << " is done" << "\"" << endl;
	output.close();
	return 0;



}
*/

/*
int main() {
	int val1 = 1;
	float val2 = 2.2;
	auto val3 = val1 + val2;
	decltype(val3) k = 10.689;
	cout << typeid(k).name() << endl;
}*/




//Gupta Random Marchtest
/*
enum rw{
	r0, r1, w0, w1, non
};

enum updown {
	up, down
};

enum symbol {
	emp, com
};
struct block {
	updown up_down;//0 down, 1 up, -1 none
	rw type;//
	symbol emp_com;//0 empty, 1 coma, -1 none
};

class Randommt {
public:
	Randommt(long long int a) :blocksize(a) {};
	~Randommt() {};
	long long int getBlocksize(); //return blocksize
	void clr_mar();//clear marchtest


	string getMarchtest();//return valid final marchtest



	void sub_gen_mar(long long int match, long long int line); //generate all marchtest, including wrong one//match=1 com, match=0 other
	long long int gen_mar();


	bool val_mar();// filter wrong marchtest get the right one

	void sort_mar();//sort marchtest into correct format



private:
	int blocksize;
	vector<block> marchtest;//store marchtest

};

long long int Randommt::getBlocksize(){
	return blocksize;
}

void Randommt::clr_mar() {
	marchtest.clear();
}

void Randommt::sub_gen_mar(long long int match, long long int line) {
	block tmp;
	if (match == 1) {
		if (line == 1) {
			tmp.emp_com = com;
			tmp.type = non;
		}
		else {
			tmp.emp_com = emp;
			tmp.type = non;
		}
	}
	else {
		switch (line) {
		case 0:
			tmp.up_down = up;
			tmp.type = r0;
				break;
		case 1:
			tmp.up_down = up;
			tmp.type = r1;
				break;
		case 2:
			tmp.up_down = up;
			tmp.type = w0;
				break;
		case 3:
			tmp.up_down = up;
			tmp.type = w1;
				break;
		case 4:
			tmp.up_down = down;
			tmp.type = r0;
				break;
		case 5:
			tmp.up_down = down;
			tmp.type = r1;
				break;
		case 6:
			tmp.up_down = down;
			tmp.type = w0;
				break;
		case 7:
			tmp.up_down = down;
			tmp.type = w1;
				break;
		}
	}
	marchtest.push_back(tmp);
}


string match_type(rw a) {
	string tmp = {};
	switch (a) {
	case r0:
		tmp = "r0";
		break;
	case r1:
		tmp = "r1";
		break;
	case w1:
		tmp = "w1";
		break;
	case w0:
		tmp = "w0";
		break;
	default:
		exit(-1);
	}
	return tmp;
}

string match_updown(updown a) {
	string tmp = {};
	switch (a) {
	case up:
		tmp = "up";
		break;
	case down:
		tmp = "down";
		break;
	default:
		exit(-1);
	}
	return tmp;
}

string Randommt::getMarchtest() {
	string march_final = {};
	updown previous;
	for (long long int i = 0; i < marchtest.size(); i++) {
		if (i == 0) {
			march_final += match_updown(marchtest[0].up_down);
			march_final = march_final+" "+ match_type(marchtest[0].type);
		}
		else {
			if (marchtest[i].emp_com == com) {
				march_final = march_final + ", " + match_updown(marchtest[i + 1].up_down);
				}
			else {
				march_final = march_final + " " + match_type(marchtest[i].type);
			}
		}
	}
	return march_final;
}


long long int Randommt::gen_mar() {
	static vector<long long int> type1(blocksize-1);
	static vector<long long int> type0(blocksize);
	static long long int counter = 0;
	for (long long int i = 0; i < blocksize * 2 - 1; i++) {
		if (i % 2 == 0) {
			sub_gen_mar(0, type0[i / 2]);
		}
		else {
			sub_gen_mar(1, type1[i / 2]);
		}
	}
	type0[0]++;
	for (long long int n = 0; n < blocksize - 1; n++) {
		if (type0[n] == 8) {
			type1[n]++;
			type0[n] = 0;
		}
		if(type1[n] == 2) {
			type0[n + 1]++;
			type1[n] = 0;
		}
	}
	counter++;
	return counter;


}

bool Randommt::val_mar() {
	if(marchtest[0].type==r0 || marchtest[0].type == r1)//��һ����Ϊд,�Ǵ�
		return false;



	for (long long int i = 1; i < marchtest.size()/2+1; i++) {
		if (marchtest[i*2].type == r0 || marchtest[i*2].type == r1) {//�������һ�ε�д��ͬ���Ǵ�   //����Ϊ��
			long long int tmp = i-1;
			for (tmp; tmp >= 0; tmp--) {
				if (marchtest[tmp * 2].type == w0 || marchtest[tmp * 2].type == w1) {//Ѱ�������д,�ҵ���
					if ((marchtest[i * 2].type == r0 && marchtest[tmp * 2].type == w0) ||
						(marchtest[i * 2].type == r1 && marchtest[tmp * 2].type == w1))//��д������ͬ
						break;
					else
						return false;
				}
			}
		}

		if (marchtest[i * 2].up_down != marchtest[(i - 1) * 2].up_down) {//��ǰ��ǰһ���������Ͳ�ͬ
			if (marchtest[i * 2 - 1].emp_com != 1)//�м��� ��,���� ������һ��������Ϊ��
				return false;
		}
	}


	return true;

}

void Randommt::sort_mar() {
	vector<block> tmp;
	for (long long int i = 0; i < marchtest.size(); i++) {//ȥ���յ�com��
		if (marchtest[i].type == non && marchtest[i].emp_com == emp)
			continue;
		else
			tmp.push_back(marchtest[i]);
	}
	marchtest.swap(tmp);
}

template <class T>
inline string toString(const T &v) {
	ostringstream os;   //�����ַ��������
	os << v;        //������v��ֵд���ַ�����
	return os.str();    //������������ɵ��ַ���
}

int main() {

	long long int a,n=1,m=1;
	cout << "Please input the number of Marchtest Operation:" << endl;
	cin >> a;
	long long int sign = pow(8, a)*pow(2, a - 1);
	cout << sign << endl;
	Randommt creat(a);
	string str1 = "Marchtest_"+toString(a)+".txt";
	ofstream outfile(str1);
	while (creat.gen_mar() <= sign) {
		//n++;

		if (creat.val_mar()) {
			string tmp;
			creat.sort_mar();
			tmp=creat.getMarchtest();
			//cout << tmp << endl;
			outfile << tmp << endl;
			//cout << ".";
			//cout << "Total generated: " << n << "   Total Valid: " << m << endl;
			//m++;
		}
		creat.clr_mar();
	}
	outfile.close();
}

*/


//Gupta Random Insert
/*
string path = "D:\\Code\\VS\\Project2\\Project2\\best_8.txt";

template <class T>
inline string toString(const T &v) {
	ostringstream os;
	os << v;
	return os.str();
}

enum rw {
	r0, r1, w0, w1,nonop
};

enum updown {
	up, down,nonarr
};

enum symbol {
	emp, com,noncom
};

struct block {
	rw type;//
	updown up_down;//0 down, 1 up, 2 none
	symbol emp_com;//0 empty, 1 coma, 2 none
};

class Insert {
public:
	Insert(){
		com_ele.emp_com = com;
		com_ele.type = nonop;
		com_ele.up_down = nonarr;
	}
	~Insert(){}
	void readfile();

	void insert();
	void filter1();
	void add_arrow();
	void writefile();
	//void reset();
private:
	vector<vector<block> > marchtest_init;
	vector<vector<block> > marchtest_insert_elment;
	vector<vector<block> > marchtest_insert_comma;
	vector<vector<block> > marchtest_insert_arr;
	vector<vector<block> > marchtest_valid;
	vector<string> pre_mar;
	vector<int> comma;
	block element[4];
	block com_ele;
};




void Insert::readfile() {
	ifstream input(path);
	string read_str;
	vector<string> store;
	vector<int> comma_tmp;

	while (getline(input, read_str)) {
		string tmp = {};
		int symbol = 0;

		for (int i = 0; i < read_str.size(); i++) {//store the operations into tmp
			if ((read_str[i] == 'w' && (read_str[i + 1] == '0' || read_str[i + 1] == '1'))
				||(read_str[i] == 'r' && (read_str[i + 1] == '0' || read_str[i + 1] == '1'))){
				tmp.push_back(read_str[i]);
				tmp.push_back(read_str[i + 1]);
				i += 1;
			}

		}

		for (int i = 0; i < read_str.size(); i++) {//store the number of comma into comma_tmp
			if (read_str[i] == ',')
				symbol += 1;
		}

		store.push_back(tmp);
		comma_tmp.push_back(symbol);//original comma number
		comma_tmp.push_back(symbol+1);//there is a chance that one more comma exist

	}
	for (int i = 0; i < store.size(); i++) {//store the distinguish operation sequence into pre_mar
		if (pre_mar.size() == 0)
			pre_mar.push_back(store[i]);
		else {
			for (int j = 0; j < pre_mar.size(); j++) {
				if (j == pre_mar.size()-1 && store[i] != pre_mar[j])
					pre_mar.push_back(store[i]);
				else if (store[i] == pre_mar[j])
					break;
			}
		}
	}

	for (int i = 0; i < comma_tmp.size(); i++) {//store the distinguish comma number into pre_mar
		if (comma.size() == 0)
			comma.push_back(comma_tmp[i]);
		else {
			for (int j = 0; j < comma.size(); j++) {
				if (j == comma.size() - 1 && comma_tmp[i] != comma[j])
					comma.push_back(comma_tmp[i]);
				else if (comma_tmp[i] == comma[j])
					break;
			}
		}
	}



	for (int i = 0; i < 4; i++) {//initial elements
		element[i].emp_com = noncom;
		element[i].up_down = nonarr;
		element[i].type = static_cast<rw>(i);
	}

	block tmp;
	for (int i = 0; i < pre_mar.size(); i++) {//go through all pre_march
		vector<block> marchtmp;
		for (int j = 0; j < pre_mar[i].size(); j++) {//use one pre_march generate marchtest, add data structure into it
			tmp.emp_com = noncom;
			tmp.up_down = nonarr;
			if (pre_mar[i][j] == 'w' && pre_mar[i][j + 1] == '0') {
				tmp.type = w0;
			}
			if (pre_mar[i][j] == 'w' && pre_mar[i][j + 1] == '1') {
				tmp.type = w1;
			}
			if (pre_mar[i][j] == 'r' && pre_mar[i][j + 1] == '0') {
				tmp.type = r0;
			}
			if (pre_mar[i][j] == 'r' && pre_mar[i][j + 1] == '1') {
				tmp.type = r1;
			}
			j++;
			marchtmp.push_back(tmp);
		}
		marchtest_init.push_back(marchtmp);
	}

	input.close();

}

void Insert::insert() {
	//insert element
	for (int i = 0; i < marchtest_init.size(); i++) {
		for (int j = 0; j < marchtest_init[i].size()+1; j++) {
			for (int m = 0; m < 4; m++) {
				vector<block> tmp(marchtest_init[i]);
				tmp.insert(tmp.begin() + j, element[m]);
				marchtest_insert_elment.push_back(tmp);

			}
		}
	}

	//insert comma
		int min_com = comma[0], max_com = comma[0];
		for (int i = 0; i < comma.size(); i++) {
			if (comma[i] < min_com)
				min_com = comma[i];
			if (comma[i] > max_com)
				max_com = comma[i];
		}
		vector<int> sign;
		sign.push_back(0);

		for (int k = 0; k < max_com; k++) {
			if (k == 0) {
				for (int j = 0; j < marchtest_insert_elment.size(); j++) {//insert one comma
					for (int m = 1; m < marchtest_insert_elment[j].size(); m++) {
						vector<block> tmp(marchtest_insert_elment[j]);
						tmp.insert(tmp.begin() + m, com_ele);
						marchtest_insert_comma.push_back(tmp);
					}
				}
				sign.push_back(marchtest_insert_comma.size());
			}
			else {
				for (int j = sign[k-1]; j < sign[k]; j++) {//insert two comma
					for (int m = 1; m < marchtest_insert_comma[j].size(); m++) {
						vector<block> tmp(marchtest_insert_comma[j]);
						tmp.insert(tmp.begin() + m, com_ele);
						marchtest_insert_comma.push_back(tmp);
					}
				}
				sign.push_back(marchtest_insert_comma.size());
			}
		}
		for (int j = 0; j < sign.size(); j++)
			cout << sign[j] << " ";
		cout << endl;
		marchtest_insert_comma.erase(marchtest_insert_comma.begin(), marchtest_insert_comma.begin()+sign[min_com-1]);
		cout << endl;








		vector<vector<block> >tmp;
		marchtest_init.swap(tmp);
		marchtest_insert_elment.swap(tmp);

}

void Insert::filter1() {
	int sign = marchtest_insert_comma.size();

	for (int i = 0; i < sign; i++) {
		for (int j = 0; j < marchtest_insert_comma[i].size(); j++) {
			if ((j == 0 && (marchtest_insert_comma[i][j].type == r0 || marchtest_insert_comma[i][j].type == r1)) //#1 first element is read or #2 two consistence comma, then elimilate
				|| (marchtest_insert_comma[i][j].emp_com==com && marchtest_insert_comma[i][j-1].emp_com == com))
				break;

			int sign_break = 0;
			if (marchtest_insert_comma[i][j].type == r0 || marchtest_insert_comma[i][j].type == r1) {//#3 current is read option
				for (int find = j-1;find>=0; find--) {//find the neareast write option
					if (marchtest_insert_comma[i][find].type == w0 || marchtest_insert_comma[i][find].type == w1) { //find
						if ((marchtest_insert_comma[i][find].type == w0 && marchtest_insert_comma[i][j].type == r0) ||  //does match, break without error
							(marchtest_insert_comma[i][find].type == w1 && marchtest_insert_comma[i][j].type == r1)) {
							sign_break = 0;
							break;
						}
						else {												//doesn't match, break with error
							sign_break = 1;
							break;
						}

					}
				}

				if (sign_break == 1)       //if with error, break j
					break;
			}


			if(j== marchtest_insert_comma[i].size() - 1)
				marchtest_insert_comma.push_back(marchtest_insert_comma[i]);

		}
	}
	marchtest_insert_comma.erase(marchtest_insert_comma.begin(), marchtest_insert_comma.begin() + sign);
}

void Insert::add_arrow() {
	for (int i = 0; i < marchtest_insert_comma.size(); i++) {
		vector<int> adder;  //counter function,, determine up or down arrow. 0 up, 1 down
		vector<int> local;  //record the operation location that needs add arrow
		adder.push_back(0);
		adder.push_back(0);//reserve one extra bit to prevent overflow
		local.push_back(0);
		for (int j = 0; j < marchtest_insert_comma[i].size(); j++) {
			if (marchtest_insert_comma[i][j].emp_com == com) {
				local.push_back(j+1);
				adder.push_back(0);
			}
		}
		for (int m = 0; m < pow(2, local.size()); m++) {   //if there are 3 arrows need to insert, then 2^3 cases exist
			vector<block> tmp(marchtest_insert_comma[i]);
			for (int n = 0; n < local.size(); n++) {
				if (adder[n] == 0) {
					tmp[local[n]].up_down = up;
				}
				else {
					tmp[local[n]].up_down = down;
				}
			}
			marchtest_insert_arr.push_back(tmp);

			adder[0] ++;
			for (int k = 0; k < adder.size(); k++) {
				if (adder[k] == 2) {
					adder[k] = 0;
					adder[k + 1]++;
				}
			}
		}
	}

	vector<vector<block> >tmp;
	marchtest_insert_comma.swap(tmp);
}

void Insert::writefile() {
	int k = 0;
	for (int i = 0; i < marchtest_insert_arr[0].size(); i++) {
		if (marchtest_insert_arr[0][i].emp_com != com)
			k++;
	}

	string filename = "grow_to_" + toString(k) + ".txt";
	ofstream output(filename);
	for (int i = 0; i < marchtest_insert_arr.size(); i++) {
		for (int j = 0; j < marchtest_insert_arr[i].size(); j++) {
			if (marchtest_insert_arr[i][j].up_down == up)
				output << "up";
			if (marchtest_insert_arr[i][j].up_down == down)
				output << "down";

			if (marchtest_insert_arr[i][j].emp_com == com)
				output << ", ";

			if (marchtest_insert_arr[i][j].type == w0)
				output << " w0";

			if (marchtest_insert_arr[i][j].type == w1)
				output << " w1";

			if (marchtest_insert_arr[i][j].type == r0)
				output << " r0";

			if (marchtest_insert_arr[i][j].type == r1)
				output << " r1";
		}
		output << endl;
	}
	output.close();


}

int main() {
	ifstream input(path);
	string re_str = {};
	Insert ak;
	ak.readfile();
	ak.insert();
	ak.filter1();
	ak.add_arrow();
	ak.writefile();
	return 0;
}
*/





//EE533 lab9 Extract machine code from assembly
/*
class machine_code {
public:
	machine_code(string type){
		(type == "hex") ? format = true : format = false;
	}
	~machine_code(){}
	void init_private();
	bool write_hex(string tmp);
	void hex_to_binary();
	void write_file(ofstream &tmp);



private:
	string hex;
	string binary;
	bool format;

};

void machine_code::init_private() {
	hex = {};
	binary = {};
}

void machine_code::hex_to_binary() {
	for (int i = 0; i < hex.size(); i++) {
		switch (hex[i]) {
		case '0':
			binary += "0000";
			break;
		case '1':
			binary += "0001";
			break;
		case '2':
			binary += "0010";
			break;
		case '3':
			binary += "0011";
			break;
		case '4':
			binary += "0100";
			break;
		case '5':
			binary += "0101";
			break;
		case '6':
			binary += "0110";
			break;
		case '7':
			binary += "0111";
			break;
		case '8':
			binary += "1000";
			break;
		case '9':
			binary += "1001";
			break;
		case 'a':
			binary += "1010";
			break;
		case 'b':
			binary += "1011";
			break;
		case 'c':
			binary += "1100";
			break;
		case 'd':
			binary += "1101";
			break;
		case 'e':
			binary += "1110";
			break;
		case 'f':
			binary += "1111";
			break;
		}
	}
}

string substring(string &tmp,int start,int end) {
	string mid = {};
	for (int i = start; i <= end; i++) {
		mid = mid + tmp[i];
	}
	return mid;
}

bool machine_code::write_hex(string tmp) {
	for (int i = 0; i < tmp.size(); i++) {
		if (tmp[i] == ':') {
			if ((tmp[i - 1] >= 48 && tmp[i - 1] <= 57) || (tmp[i - 1] >= 97 && tmp[i - 1] <= 102)
				&& tmp[i + 1] == '\t') {
				hex = substring(tmp, i + 2, i + 9);

				return true;
			}
			else
				break;

		}
	}
	return false;
}

void machine_code::write_file(ofstream &tmp) {
	if (format)
		tmp << hex << endl;
	else
		tmp << binary << endl;
}

int main() {
	ifstream instring("tmp.txt");
	if (!instring.is_open())
		cout << "Read tmp.txt file fail." << endl;
	ofstream outfile("machine_code.txt");
	cout<<"Machine code format \n"<<"hex type \"hex\""<< " otherwise binary"<<endl;
	string type;
	cin >> type;
	machine_code genr(type);
	string tmp;
	while (getline(instring, tmp)) {
		genr.init_private();
		if (genr.write_hex(tmp)) {
			genr.hex_to_binary();
			genr.write_file(outfile);
		}
		tmp = {};
	}
	instring.close();
	outfile.close();
	return 0;
}*/


//EE533 Generate test bench
/*
void main() {
	ifstream infile("machine_code_hex.txt");
	string tmp = {};
	ofstream outfile("bench.txt");
	while (getline(infile, tmp)) {
		outfile << "instrc=32'h" << tmp << ";" << endl;
		outfile << "downloading=1'b0;" << endl;
		outfile << "#50" << endl;
		outfile << "downloading=1'b1;" << endl;
		outfile << "#50" << endl;
		tmp = {};
	}
	infile.close();
	outfile.close();

}
*/


//EE533 final Recognize digit numbers
/*
#include <socket.h>

string path = "D:\\Code\\VS\\Project2\\Project2\\digits\\testDigits\\";

template <class T>
inline string toString(const T &v) {
	ostringstream os;   //�����ַ��������
	os << v;        //������v��ֵд���ַ�����
	return os.str();    //������������ɵ��ַ���
}

inline int fromString(const string &str) {
	istringstream is(str);
	int v;
	is >> v;
	return v;

}

class Recognize {
public:

	Recognize(bool a, int block, bool cs, string host, int p) :HW_SW(a), BLOCK(block), C_S(cs), hostname(host), port(p) {

	}
	~Recognize() {}

	bool initial();//initial each private element

	bool gen_filename();//generate filename

	void import_file();//read the generated filename initial matrix

	void algo_core();//the core algorithm that detect numbers

	void socket_send();
	//bool reset();

	//char get_result();


private:
	bool HW_SW;//0 HW, 1 SW
	int BLOCK;
	bool C_S;//0 client, 1 server
	string hostname;
	int port;

	int num1, num2;
	string filename;
	int matrix[32][32];
	char result;


	int matrix1[10][32][32];
	bool send; //generated by algo_core. In SW model, if match, send is false, otherwise send is true. In HW model, send always be true.


};

bool Recognize::initial() {
	num1 = 0;
	num2 = 0;
	filename = {};
	result = '\0';
	if (HW_SW) {
		for (int i = 0; i < 10; i++) {
			char k = '0';
			k = k + i;
			string filename = path + k + "_0.txt";
			string line = {};
			ifstream tmp(filename);
			//cout << filename << endl;
			int m = 0;
			while (getline(tmp, line)) {
				for (int j = 0; j < 32; j++) {
					matrix1[i][m][j] = line[j] - '0';
				}
				m++;
			}
			tmp.close();
		}
	}
	return true;
}

bool Recognize::gen_filename() {
	string n1 = toString(num1);
	string n2 = toString(num2);
	filename = path + n1 + "_" + n2 + ".txt";
	ifstream tmp;
	tmp.open(filename);
	if (tmp) {
		num2 += 1;
		tmp.close();
		return true;
	}
	else {
		//system("pause");
		filename = {};
		num1 += 1;
		num2 = 0;
		n1 = toString(num1);
		n2 = toString(num2);
		filename= path + n1 + "_" + n2 + ".txt";
		tmp.open(filename);
		if (tmp) {
			num2 += 1;
			tmp.close();
			return true;
		}
		else {
			if (num1 = 9) {
				tmp.close();
				return false;
			}
			else {

				num2 += 1;
				//n1 = toString(num1);
				n2 = toString(num2);
				filename = path + n1 + "_" + n2 + ".txt";
				tmp.close();
				return true;
			}
		}
	}

}

void Recognize::import_file() {
	ifstream tmp(filename);
	string line = {};
	int j = 0;
	while (getline(tmp, line)) {
		for (int i = 0; i < 32; i++) {
			matrix[j][i] = line[i] - '0';
		}
		j++;
	}

}

void Recognize::algo_core() {
	if (HW_SW) {//SW
		float distance[10] = { 0,0,0,0,0,0,0,0,0,0 };
		for (int i = 0; i < 10; i++) {
			for (int m = 0; m < 32; m++) {
				for (int n = 0; n < 32; n++) {
					distance[i] += pow((matrix1[i][m][n]-matrix[m][n]), 2);
				}
			}
		}
		for (int i = 0; i < 10; i++) {
			distance[i] = pow(distance[i], 0.5);
		}
		float* dis=distance;
		float z = distance[0]+1;
		for (int i = 0; i < 10; i++) {
			if (distance[i]<z) {
				z = distance[i];
				dis = &distance[i];
			}
		}
		result = dis - distance + '0';
		if (result == '0' + BLOCK) {

			send=false;
		}
		else {
			//cout << filename << endl;
			send=true;
		}



	}
	else {//HW
		send = true;
	}
}

void Recognize::socket_send() {
	if (send) {
		cout << filename << endl;
	}
}

int main() {
	string input1,input2,input3,input4;
	bool type;//HW or SW? HW type=0, SW type=1
	int block_num;
	bool C_S; //client or server, client 0, server 1
	string hostname = {};
	int port;
T1:	cout << "Input HW/SW model: ";
	cin >> input1;
	if (input1 == "HW" || input1 == "hw")
		type = 0;
	else if (input1 == "SW" || input1 == "sw")
		type = 1;
	else {
		cout << "Invalid Input, please try again." << endl;
		goto T1;
	}


T2:	cout << "Input block number: ";
	cin >> input2;
	if ((input2[0] - '0' >= 0 && input2[0] - '0' <= 9) && input2.size() == 1)
		block_num = input2[0] - '0';
	else {
		cout << "Invalid Input, please try again." << endl;
		goto T2;
	}


	cout << "If working as Client type 'client', otherwise working as Server: ";
	cin >> input3;
	if (input3 == "client") {
		C_S = 0;
		cout << "Type in the destination Server name here: ";
		cin >> hostname;
	}
	else {
		C_S = 1;
	}


T3:	cout << "Type in the Server working port number here(if you type 'default', port number is 51717): ";
	cin >> input4;
	if (input4 == "default")
		port = 51717;
	else {
		int sign = 0;
		for (int i = 0; i < input4.size(); i++) {
			if (input4[i] - '0' >= 0 && input4[i] - '0' <= 9)
				sign = 0;
			else {
				sign = 1;
				break;
			}
		}
		if (sign == 0)
			port = fromString(input4);
		else {
			cout << "Invalid input port number! The input should be number or 'default'. Please try again!" << endl;
			goto T3;
		}
	}





	clock_t start, end;
	start = clock();
	Recognize a(type, block_num, C_S, hostname, port);
	a.initial();
	while (a.gen_filename()) {
		a.import_file();
		a.algo_core();
		a.socket_send();
	}
	end = clock();
	cout <<"Total time is "<< end - start << "ms" << endl;


}
*/



//Gupta Random Insert
/*
string path = "./best/best13.txt";

template <class T>
inline string toString(const T &v) {
	ostringstream os;
	os << v;
	return os.str();
}

enum rw {
	r0, r1, w0, w1, nonop
};

enum updown {
	up, down, nonarr
};

enum symbol {
	emp, com, noncom
};

struct block {
	rw type;//
	updown up_down;//0 down, 1 up, 2 none
	symbol emp_com;//0 empty, 1 coma, 2 none
};



class Insert {
public:
	Insert() {
		com_ele.emp_com = com;
		com_ele.type = nonop;
		com_ele.up_down = nonarr;
	}

	~Insert() {}

	void readfile();//read from the best file and store the marchtest in the marchtest_init

	void insert_element();

	void comma_core(vector<int> &a, vector<int> &b, int l, int m, int M);

	void comma_();

	void gen_file();

	void insert_comma(int times);

	void filter1();

	void add_arrow();

	void writefile1(int x);

	int get_element_size() {
		return marchtest_insert_elment.size();
	}
	//void reset();

private:

	vector<vector<block> > marchtest_init;

	vector<vector<block> > marchtest_insert_elment;

	vector<vector<block> > marchtest_insert_comma;

	vector<vector<block> > marchtest_insert_arr;

	vector<vector<block> > marchtest_valid;

	vector<string> pre_mar;

	vector<int> comma;

	block element[4];

	block com_ele;

	string filename;

	vector<vector<int> > comma_location;//store all possible insert comma location

};

//read from the best file and store the marchtest in the marchtest_init
void Insert::readfile() {
	ifstream input(path);
	string read_str;
	vector<string> store;
	vector<int> comma_tmp;

	while (getline(input, read_str)) {
		string tmp = {};
		int symbol = 0;
		for (int i = 0; i < read_str.size(); i++) {//store the operations into tmp
			if ((read_str[i] == 'w' && (read_str[i + 1] == '0' || read_str[i + 1] == '1'))
				|| (read_str[i] == 'r' && (read_str[i + 1] == '0' || read_str[i + 1] == '1'))) {
				tmp.push_back(read_str[i]);
				tmp.push_back(read_str[i + 1]);
				i += 1;
			}
		}

		for (int i = 0; i < read_str.size(); i++) {//store the number of comma into comma_tmp
			if (read_str[i] == ',')
				symbol += 1;
		}

		store.push_back(tmp);
		comma_tmp.push_back(symbol);//original comma number
		comma_tmp.push_back(symbol + 1);//there is a chance that one more comma exist
	}

	for (int i = 0; i < store.size(); i++) {//store the distinguish operation sequence into pre_mar
		if (pre_mar.size() == 0)
			pre_mar.push_back(store[i]);
		else {
			for (int j = 0; j < pre_mar.size(); j++) {
				if (j == pre_mar.size() - 1 && store[i] != pre_mar[j])
					pre_mar.push_back(store[i]);
				else if (store[i] == pre_mar[j])
					break;
			}
		}
	}

	for (int i = 0; i < comma_tmp.size(); i++) {//store the distinguish comma number into pre_mar
		if (comma.size() == 0)
			comma.push_back(comma_tmp[i]);
		else {
			for (int j = 0; j < comma.size(); j++) {
				if (j == comma.size() - 1 && comma_tmp[i] != comma[j])
					comma.push_back(comma_tmp[i]);
				else if (comma_tmp[i] == comma[j])
					break;
			}
		}
	}

	for (int i = 0; i < 4; i++) {//initial elements
		element[i].emp_com = noncom;
		element[i].up_down = nonarr;
		element[i].type = static_cast<rw>(i);
	}

	block tmp;
	for (int i = 0; i < pre_mar.size(); i++) {//go through all pre_march
		vector<block> marchtmp;
		for (int j = 0; j < pre_mar[i].size(); j++) {//use one pre_march generate marchtest, add data structure into it
			tmp.emp_com = noncom;
			tmp.up_down = nonarr;
			if (pre_mar[i][j] == 'w' && pre_mar[i][j + 1] == '0') {
				tmp.type = w0;
			}
			if (pre_mar[i][j] == 'w' && pre_mar[i][j + 1] == '1') {
				tmp.type = w1;
			}
			if (pre_mar[i][j] == 'r' && pre_mar[i][j + 1] == '0') {
				tmp.type = r0;
			}
			if (pre_mar[i][j] == 'r' && pre_mar[i][j + 1] == '1') {
				tmp.type = r1;
			}
			j++;
			marchtmp.push_back(tmp);
		}
		marchtest_init.push_back(marchtmp);
	}
	input.close();
}

//use init insert one element, and retain all valid march bone
void Insert::insert_element() {
	//insert element
	cout << "Start insert one operation..." << endl;
	for (int i = 0; i < marchtest_init.size(); i++) {
		for (int j = 0; j < marchtest_init[i].size() + 1; j++) {
			for (int m = 0; m < 4; m++) {
				vector<block> tmp(marchtest_init[i]);
				tmp.insert(tmp.begin() + j, element[m]);
				marchtest_insert_elment.push_back(tmp);
			}
		}
	}

	for (int i = 0; i < marchtest_insert_elment.size(); i++) {
		for (int j = 0; j < marchtest_insert_elment[i].size(); j++) {
			if (marchtest_insert_elment[i][j].type == w0)
				cout << " w0";
			if (marchtest_insert_elment[i][j].type == w1)
				cout << " w1";
			if (marchtest_insert_elment[i][j].type == r0)
				cout << " r0";
			if (marchtest_insert_elment[i][j].type == r1)
				cout << " r1";
		}
		cout << endl;
	}
	cout << endl;

	//delete r0 r1, and w0 r1 or w1 r0
	vector<vector<block> > tmp_bone;
	vector<vector<block> > tmp_empty;
	for (int i = 0; i < marchtest_insert_elment.size(); i++) {
		if (marchtest_insert_elment[i][0].type == r0 || marchtest_insert_elment[i][0].type == r1)  //the first element is read
			continue;
		else {
			int sign_break;
			for (int j = 0; j < marchtest_insert_elment[i].size(); j++) {
				sign_break = 0;
				if (marchtest_insert_elment[i][j].type == r0 || marchtest_insert_elment[i][j].type == r1) {// current is read option
					for (int find = j - 1; find >= 0; find--) {//find the neareast write option
						if (marchtest_insert_elment[i][find].type == w0 || marchtest_insert_elment[i][find].type == w1) { //find
							if ((marchtest_insert_elment[i][find].type == w0 && marchtest_insert_elment[i][j].type == r0) ||  //does match, break without error
								(marchtest_insert_elment[i][find].type == w1 && marchtest_insert_elment[i][j].type == r1)) {
								sign_break = 0;
								break;
							}
							else {											//doesn't match, break with error
								sign_break = 1;
								break;
							}
						}
					}
					if (sign_break == 1)       //if with error, break j
						break;
				}
			}
			if (sign_break == 0)
				tmp_bone.push_back(marchtest_insert_elment[i]);
		}

	}
	marchtest_insert_elment.swap(tmp_empty);
	for (int i = 0; i < tmp_bone.size(); i++)
		marchtest_insert_elment.push_back(tmp_bone[i]);
	tmp_bone.swap(tmp_empty);

	for (int i = 0; i < marchtest_insert_elment.size(); i++) {
		for (int j = 0; j < marchtest_insert_elment[i].size(); j++) {
			if (marchtest_insert_elment[i][j].type == w0)
				cout << " w0";
			if (marchtest_insert_elment[i][j].type == w1)
				cout << " w1";
			if (marchtest_insert_elment[i][j].type == r0)
				cout << " r0";
			if (marchtest_insert_elment[i][j].type == r1)
				cout << " r1";
		}
		cout << endl;
	}
	cout << endl;

	//delete duplicate bone-operation in element
	vector<vector<block> > identical;
	for (int i = 0; i < marchtest_insert_elment.size(); i++) {
		if (i == 0)
			identical.push_back(marchtest_insert_elment[i]);
		else {
			int push = 0;
			for (int j = 0; j < identical.size(); j++) {
				for (int m = 0; m < identical[j].size(); m++) {
					if (identical[j][m].type != marchtest_insert_elment[i][m].type) {
						push = 1;
						break;
					}
					else {
						if (m == identical[j].size() - 1) {
							push = 0;
							break;
						}
					}

				}
				if (push == 0)
					break;
			}
			if (push == 1)
				identical.push_back(marchtest_insert_elment[i]);
		}
	}

	marchtest_insert_elment.erase(marchtest_insert_elment.begin(), marchtest_insert_elment.begin() + marchtest_insert_elment.size());
	for (int i = 0; i < identical.size(); i++)
		marchtest_insert_elment.push_back(identical[i]);
	identical.swap(tmp_empty);

	for (int i = 0; i < marchtest_insert_elment.size(); i++) {
		for (int j = 0; j < marchtest_insert_elment[i].size(); j++) {
			if (marchtest_insert_elment[i][j].type == w0)
				cout << " w0";
			if (marchtest_insert_elment[i][j].type == w1)
				cout << " w1";
			if (marchtest_insert_elment[i][j].type == r0)
				cout << " r0";
			if (marchtest_insert_elment[i][j].type == r1)
				cout << " r1";
		}
		cout << endl;
	}
	cout << endl;

	cout << "All identical march_bone has been generated." << endl;

}


//store all possible comma insert location into comma_location vector
void Insert::comma_core(vector<int> &a, vector<int> &b, int l, int m, int M) {//a->n; b store result; left location initial to 0; M-> m; m inital to M
	int N = a.size();
	vector<int> tmp;
	if (m == 0) {
		for (auto i : b) {
			cout << i << ' ';
			tmp.push_back(i);
		}
		cout << endl;
		comma_location.push_back(tmp);
		return;
	}
	for (int i = l; i < N; i++) {
		b[M - m] = a[i];
		comma_core(a, b, i + 1, m - 1, M);
	}
}

void Insert::comma_() {
	cout << "start finding comma insert location..." << endl;
	int element_size = marchtest_insert_elment[0].size();
	vector<int> tmp;//store all location. If there are 3 elements, then location 1,2 can insert comma
	for (int i = 1; i < element_size; i++)
		tmp.push_back(i);

	for (int i = 0; i < comma[i]; i++) {
		vector<int> tmp_location(comma[i]);
		comma_core(tmp, tmp_location, 0, comma[i], comma[i]);
	}
	cout << "All locations have found" << endl;
}

void Insert::gen_file() {
	cout << "Start insert up and down, and write to file" << endl;
	string name = "grow_to_" + toString(marchtest_insert_elment[0].size()) + ".txt";
	ofstream output(name);
	for (int i = 0; i < marchtest_insert_elment.size(); i++) {//go through all inserted march bone
		for (int j = 0; j < comma_location.size(); j++) {//go throuth all input comma location
			vector<block> tmp_comma(marchtest_insert_elment[i]);
			for (int k = 0; k < comma_location[j].size(); k++) {//go through each
				tmp_comma[comma_location[j][k]].emp_com = com; //insert comma
			}

			//insert up and down
			//initial insert up and down needed variables
			vector<int> adder;  //counter function,, determine up or down arrow. 0 up, 1 down
			vector<int> local;  //record the operation location that needs add arrow
			adder.push_back(0);
			adder.push_back(0);//reserve one extra bit to prevent overflow
			local.push_back(0);

			for (int l = 0; l < tmp_comma.size(); l++) {
				if (tmp_comma[l].emp_com == com) {
					local.push_back(l);
					adder.push_back(0);
				}
			}

			for (int m = 0; m < pow(2, local.size()); m++) {   //if there are 3 arrows need to insert, then 2^3 cases exist
				vector<block> tmp_updown(tmp_comma);
				for (int n = 0; n < local.size(); n++) {
					if (adder[n] == 0) {
						tmp_updown[local[n]].up_down = up;
					}
					else {
						tmp_updown[local[n]].up_down = down;
					}
				}
				adder[0] ++;
				for (int p = 0; p < adder.size(); p++) {
					if (adder[p] == 2) {
						adder[p] = 0;
						adder[p + 1]++;
					}
				}

				//marchtest_insert_arr.push_back(tmp);

				for (int q = 0; q < tmp_updown.size(); q++) {
					if (tmp_updown[q].emp_com == com)
						output << ", ";
					if (tmp_updown[q].up_down == up)
						output << "up";
					if (tmp_updown[q].up_down == down)
						output << "down";
					if (tmp_updown[q].type == w0)
						output << " w0";
					if (tmp_updown[q].type == w1)
						output << " w1";
					if (tmp_updown[q].type == r0)
						output << " r0";
					if (tmp_updown[q].type == r1)
						output << " r1";
				}
				output << endl;
			}
		}
	}
	output.close();
	cout << "File has been write. Done!" << endl;
}

void Insert::insert_comma(int times) {
	cout << "Insert comma to the " << times << "th march_bone..." << endl;
	int min_com = comma[0], max_com = comma[0];
	for (int i = 0; i < comma.size(); i++) {
		if (comma[i] < min_com)
			min_com = comma[i];
		if (comma[i] > max_com)
			max_com = comma[i];
	}
	vector<int> sign;
	sign.push_back(0);

	for (int k = 0; k < max_com; k++) {
		if (k == 0) {
			for (int m = 1; m < marchtest_insert_elment[times].size(); m++) {//insert one comma
				vector<block> tmp(marchtest_insert_elment[times]);
				tmp.insert(tmp.begin() + m, com_ele);
				marchtest_insert_comma.push_back(tmp);
			}

			sign.push_back(marchtest_insert_comma.size());
		}
		else {
			for (int j = sign[k - 1]; j < sign[k]; j++) {//insert two comma
				for (int m = 1; m < marchtest_insert_comma[j].size(); m++) {
					vector<block> tmp(marchtest_insert_comma[j]);
					tmp.insert(tmp.begin() + m, com_ele);
					marchtest_insert_comma.push_back(tmp);
				}
			}
			sign.push_back(marchtest_insert_comma.size());
		}
	}

	for (int j = 0; j < sign.size(); j++)
		cout << sign[j] << " ";

	cout << endl;
	marchtest_insert_comma.erase(marchtest_insert_comma.begin(), marchtest_insert_comma.begin() + sign[min_com - 1]);
	cout << "Insert comma to the " << times << "th march_bone has finished." << endl;
}

void Insert::filter1() {
	cout << "Start eliminate illegale March Tests..." << endl;
	int sign = marchtest_insert_comma.size();

	for (int i = 0; i < sign; i++) {
		for (int j = 0; j < marchtest_insert_comma[i].size(); j++) {
			if ((j == 0 && (marchtest_insert_comma[i][j].type == r0 || marchtest_insert_comma[i][j].type == r1)) //#1 first element is read or #2 two consistence comma, then elimilate
				|| (marchtest_insert_comma[i][j].emp_com == com && marchtest_insert_comma[i][j - 1].emp_com == com))
				break;

			int sign_break = 0;

			if (marchtest_insert_comma[i][j].type == r0 || marchtest_insert_comma[i][j].type == r1) {//#3 current is read option
				for (int find = j - 1; find >= 0; find--) {//find the neareast write option
					if (marchtest_insert_comma[i][find].type == w0 || marchtest_insert_comma[i][find].type == w1) { //find
						if ((marchtest_insert_comma[i][find].type == w0 && marchtest_insert_comma[i][j].type == r0) ||  //does match, break without error
							(marchtest_insert_comma[i][find].type == w1 && marchtest_insert_comma[i][j].type == r1)) {
							sign_break = 0;
							break;
						}
						else {											//doesn't match, break with error
							sign_break = 1;
							break;
						}
					}
				}

				if (sign_break == 1)       //if with error, break j
					break;
			}

			if (j == marchtest_insert_comma[i].size() - 1)
				marchtest_insert_comma.push_back(marchtest_insert_comma[i]);
		}
	}

	marchtest_insert_comma.erase(marchtest_insert_comma.begin(), marchtest_insert_comma.begin() + sign);

	cout << "Illegale March Tests have been eliminated." << endl;
}

void Insert::add_arrow() {
	cout << "Start adding up and down..." << endl;
	for (int i = 0; i < marchtest_insert_comma.size(); i++) {
		vector<int> adder;  //counter function,, determine up or down arrow. 0 up, 1 down
		vector<int> local;  //record the operation location that needs add arrow
		adder.push_back(0);
		adder.push_back(0);//reserve one extra bit to prevent overflow
		local.push_back(0);

		for (int j = 0; j < marchtest_insert_comma[i].size(); j++) {
			if (marchtest_insert_comma[i][j].emp_com == com) {
				local.push_back(j + 1);
				adder.push_back(0);
			}
		}

		for (int m = 0; m < pow(2, local.size() - 1); m++) {   //if there are 3 arrows need to insert, then 2^3 cases exist
			vector<block> tmp(marchtest_insert_comma[i]);
			for (int n = 0; n < local.size(); n++) {
				if (adder[n] == 0) {
					tmp[local[n]].up_down = up;
				}
				else {
					tmp[local[n]].up_down = down;
				}
			}

			marchtest_insert_arr.push_back(tmp);

			adder[0] ++;

			for (int k = 0; k < adder.size(); k++) {
				if (adder[k] == 2) {
					adder[k] = 0;
					adder[k + 1]++;
				}
			}
		}
	}

	vector<vector<block> >tmp;
	marchtest_insert_comma.swap(tmp);
	cout << "Up and Down have been added." << endl;
}

void Insert::writefile1(int x) {
	cout << "Start writting all march test to file..." << endl;
	ofstream output("tmp.txt");

	for (int i = 0; i < marchtest_insert_arr.size(); i++) {
		for (int j = 0; j < marchtest_insert_arr[i].size(); j++) {
			if (marchtest_insert_arr[i][j].up_down == up)
				output << "up";
			if (marchtest_insert_arr[i][j].up_down == down)
				output << "down";
			if (marchtest_insert_arr[i][j].emp_com == com)
				output << ", ";
			if (marchtest_insert_arr[i][j].type == w0)
				output << " w0";
			if (marchtest_insert_arr[i][j].type == w1)
				output << " w1";
			if (marchtest_insert_arr[i][j].type == r0)
				output << " r0";
			if (marchtest_insert_arr[i][j].type == r1)
				output << " r1";
		}
		output << endl;
	}
	output.close();

	cout << "Start eliminat duplicate March Test, and replace the file..." << endl;

	string system_s = "cat tmp.txt | sort | uniq > " + toString(x) + ".txt";
	char *kkk = (char *)system_s.c_str();
	system(kkk);
	vector<vector<block> >tmp;
	marchtest_insert_arr.swap(tmp);
	cout << "Identical March Test is stored in file." << endl;
}

int main() {
	Insert ak;
	cout << "Start reading seed..." << endl;

	ak.readfile();
	cout << "Seed is read." << endl;

	ak.insert_element();
	ak.comma_();
	ak.gen_file();

	return 0;
}
*/




/*
string path1 = "4.txt";//marchtest file name
string path2 = "tmp.txt";//subtype FC file name
string path3 = "data.txt";//output file path name

template <class T>
inline string toString(const T &v) {
	ostringstream os;
	os << v;
	return os.str();
}

int main() {
	ifstream file1(path1);
	ifstream file2(path2);
	ofstream file3(path3);

	file3<<"len,ID,direction 1,op 1,direction 2,op 2,direction 3,op 3,direction 4,op 4,direction 5,op 5,direction 6,op 6,direction 7,op 7,CFin UP,CFin DOWN,CFid UP0,CFid UP1,CFid DOWN0,CFid DOWN1,CFst 0_0,CFst 1_0,CFst 0_1,CFst 1_1,CFds 0r0_0,CFds 1r1_0,CFds 0r0_1,CFds 1r1_1,CFds 0w0_0,CFds 0w1_0,CFds 1w0_0,CFds 1w1_0,CFds 0w0_1,	CFds 0w1_1,CFds 1w0_1,CFds 1w1_1,CFtr 0_0,CFtr 1_0,CFtr 0_1,CFtr 1_1,CFwd 0_0,CFwd 1_0,CFwd 0_1,CFwd 1_1,CFrd 0_0,CFrd 1_0,CFrd 0_1,CFrd 1_1,CFdrd 0_0,CFdrd 1_0,CFdrd 0_1,CFdrd 1_1,CFir 0_0,CFir 1_0,CFir 0_1,CFir 1_1,SAFs 0,SAFs 1,TFs 0,TFs 1,WDFs 0,WDFs 1,RDFs 0,RDFs 1,IRFs 0,IRFs 1,DRDFs 0,DRDFs 1,total" << endl;
	string frm_mt;
	int ID = 0;
	int i;
	while(getline(file1,frm_mt)) {
		//deal with len

		string out_str;

		int len=0;
		int block = 1;
		for (i = 0; i < frm_mt.length(); i++) {
			if (frm_mt[i] == '0' || frm_mt[i] == '1') {
				len++;
			}
			if (frm_mt[i] == ',')
				block++;
		}
		out_str += toString(len);
		out_str += ",";

		//deal with ID
		ID++;
		out_str += toString(ID);
		out_str += ",";

		//deal with direction and op
		for (i = 0; i < frm_mt.length(); i++) {
			out_str += frm_mt[i];
			if (frm_mt[i] == 'p' || frm_mt[i] == 'n') {
				out_str += ',';
				i++;
			}
			if (frm_mt[i] == ',')
				i++;
		}
		for (i = 0; i < 7 - block; i++)
			out_str += ",,";

		out_str += ",";

		//deal with following items
		string tmp;
		getline(file2, tmp);
		out_str += tmp;
		file3 << out_str << endl;
	}
	file1.close();
	file2.close();
	file3.close();
	//system("rename data.txt data.csv");
	return 0;
}*/



//creat data
/*
string path1 = "2_4.txt";//marchtest file name
string path2 = "2_4_detail.txt";//subtype FC file name
string path3 = "data_2_4.csv";//output file path name

template <class T>
inline string toString(const T &v) {
	ostringstream os;
	os << v;
	return os.str();
}

int main() {
	//ifstream file1(path1);
	ifstream file2(path2);
	ofstream file3(path3);

	string tmp;
	string subtype = ",";
	int subtype_num = 0;
	string each_line = 'M' + toString(subtype_num / 54)+',';
	while (getline(file2, tmp)) {
		for (int it1 = 0; it1 < tmp.size();it1++) {
			if (tmp[it1] == '/') {
				subtype_num++;
				string b = "";
				//deal with subtype name
				if (subtype_num <= 54) {
					int index = 38;
					while (index < tmp.size()) {
						if (tmp[index] == 'i' && tmp[index + 1] == 's' && tmp[index + 2] == ' ')
							break;
						else
							b.push_back(tmp[index]);
						index++;
					}
					b = b.substr(0, b.size() - 1);
					subtype = subtype + b + ",,";

					if (subtype_num == 54) {
						cout << subtype << endl;
						file3 << subtype << endl;
					}
				}


				//deal with data
				if (subtype_num % 54 == 0 &&subtype_num>1) {

						stack<char> a0;
						for (int i = it1 - 2; (tmp[i] != ' ' || tmp[i - 1] != 's'); i--) {
							a0.push(tmp[i]);
						}
						while (!a0.empty()) {
							each_line.push_back(a0.top());
							a0.pop();
						}
						each_line.push_back(',');
						for (int i = it1 + 2; tmp[i] != ' '; i++)
							each_line.push_back(tmp[i]);


					cout << each_line << endl;
					file3 << each_line << endl;
					each_line = 'M'+toString(subtype_num/54)+',';
				}
				if (subtype_num%54!=0) {
					stack<char> a0;
					for (int i = it1 - 2; (tmp[i] != ' ' || tmp[i - 1] != 's'); i--) {
						a0.push(tmp[i]);
					}
					while (!a0.empty()) {
						each_line.push_back(a0.top());
						a0.pop();
					}
					each_line.push_back(',');
					for (int i = it1 + 2; tmp[i] != ' '; i++)
						each_line.push_back(tmp[i]);
					each_line.push_back(',');
				}

				break;
			}
		}

	}




	//file1.close();
	file2.close();
	file3.close();
	//system("rename data.txt data.csv");
	return 0;
}
*/



//find aggrassor and victim
#define mem_size 4 
string path1 = "2_4.txt";//marchtest file name
string path2 = "temp.txt";//subtype FC file name
string path3 = "agg_vic.csv";//output file path name
string path4 = "fault_list_single.csv"; //fault list file

template <class T>
inline string toString(const T &v) {
	ostringstream os;
	os << v;
	return os.str();
}


string convert(int i, int j) {//i which fault type, j which fault 
	ifstream file4(path4);
	int row = i * mem_size*(mem_size - 1) + j;
	static string agg_vic = {}, tmp;
	agg_vic = "(";
	int line_num = 0;
	while (1) {
		tmp = {};
		getline(file4, tmp);
		if (row == line_num)
			break;
		line_num++;
	}

	int col_2 = 2, col_3 = 3, col_5 = 5, col_6 = 6,col=0,slash=1;

	for (int k = 0; k < tmp.length(); k++) {
		if (tmp[k] == ',')
			col++;
		if (col == 2  && tmp[k] != ',') {
			agg_vic += tmp[k];
		}
		if (col == 5 && slash == 1) {
			agg_vic += '/';
			slash--;
		}
		if (col ==5 && tmp[k] != ',') {
			agg_vic += tmp[k];
		}
		if (col == 6)
			break;
	}
	agg_vic += ")";
	file4.close();
	cout << agg_vic << endl;
	return agg_vic;
}

struct each_MT {
	string MT;
	int arr[42][mem_size*(mem_size - 1)] = {};
};

int main() {
	//ifstream file1(path1);
	ifstream file2(path2);
	ofstream file3(path3);
	
	string tmp; //use to store each line from detail file
	string subtype = "MT,";//use to store all the subtype name, and print to the first line of output file
	int subtype_num = 0; //count all possible subtype number

	int element_num = -1;//record each circumistance's number
	vector<each_MT> arr; //use to store each_MT's detail
	each_MT MT;
	while (getline(file2, tmp)) {
		for (int it1 = 0; it1 < tmp.size(); it1++) {
			if (tmp[it1] == '/') {
				subtype_num++;
				string b = "";
				//deal with subtype name
				if (subtype_num <= 42) {
					int index = 38;
					while (index < tmp.size()) {
						if (tmp[index] == 'i' && tmp[index + 1] == 's' && tmp[index + 2] == ' ')
							break;
						else
							b.push_back(tmp[index]);
						index++;
					}
					b = b.substr(0, b.size() - 1);
					subtype = subtype + b + ",";

					if (subtype_num == 42) {
						cout << subtype << endl;
						file3 << subtype << endl;
					}
				}
			}
		}


		//read detail file, init the arr vector
		int vec, row, col;
		if (tmp[0] == '-'&&tmp[1] == '-') {
			element_num++;
			//cout << tmp << "xxxxx" << element_num << endl;			
			if (element_num % (42 * mem_size*(mem_size - 1)) == 0) {				
				MT.MT = "M" + toString(element_num / (42 * mem_size*(mem_size - 1)));
				arr.push_back(MT);
			}
		}
		vec = element_num / (42 * mem_size*(mem_size - 1));
		row = (element_num - vec * (42 * mem_size*(mem_size - 1))) / (mem_size * (mem_size - 1));
		col = element_num - vec * (42 * mem_size*(mem_size - 1)) - row * (mem_size * (mem_size - 1));
		
		if (tmp[0] == 'E'&&tmp[1] == 'r'&&tmp[2] == 'r'&&tmp[3] == 'o'&&tmp[4] == 'r') {			
			arr[vec].arr[row][col] = 1;
			cout << "vec:" << vec<<'\t' ;
			cout << "row:" << row<<'\t' ;
			cout << "col:" << col << '\t' << endl;
		}
	}


	for (int i = 0; i < arr.size(); i++) {
		string line = {};
		line = arr[i].MT + ',';
		for (int j = 0; j < 42; j++) {
			int sum = 0;
			for (int k = 0; k < mem_size*(mem_size - 1); k++) {
				sum += arr[i].arr[j][k];
			}
			if (sum != mem_size * (mem_size - 1) && sum != 0) {
				for (int k = 0; k < mem_size*(mem_size - 1); k++) {
					if(arr[i].arr[j][k]==1)
						line += convert(j,k);
				}				
			}
			else {
				line += "NA";
			}
			if (j != 41)
				line += ',';
		}
		file3 << line << endl;

	}

	file2.close();
	file3.close();



}




//n cell FC -> m cell FC
/*
int main() {
	double FC_N_T, FC_N_S, FC_N_C, FC_M_T;
	double n,m;
	
	cout << "Please put in:" << endl << "    (1) Current mem size: ";
	cin >> n;		
	cout<<	"    (2) The FC of single cell fault of "<<n<<"-location mem: ";
	cin >> FC_N_S;
	cout << "    (3) The FC of double cell(coupling) fault of " << n << "-location mem: ";
	cin >> FC_N_C;
	cout << "    (4) Target mem size: ";
	cin >> m;
	double k = m / n;
	double alf = (49 * k*n*FC_N_C - (10 * FC_N_S / n) + (35 * FC_N_C / n))/7;
	FC_N_T = (2 * FC_N_S + 7 * (n - 1)*FC_N_C) / (7 * n - 5);
	FC_M_T = FC_N_T * (2 * FC_N_S - 7 * FC_N_C - 5 * k*FC_N_C + alf) / (2 * FC_N_S*k - 7 * k*FC_N_C - 5 * FC_N_C + alf);
	cout << "The total FC of " << n << "-location mem: " << FC_N_T << endl;
	cout << "The total FC of " << m << "-location mem: " << FC_M_T << endl;
	return 0;
}
*/


//��ȡ�ļ���ͳ����ͬ�ַ����ĳ���Ƶ��
/*
int main() {
	
	ifstream input("input.txt");	
	map<string, int> k;
	string tmp;
	while (getline(input,tmp , ',')) {
		k[tmp]++;
	}
	int total=0;
	for (auto i = k.begin(); i != k.end(); ++i) {
		total += i->second;
	}
	cout << total << endl;
	for (map<string, int>::iterator i = k.begin(); i != k.end();++i) {
		
		cout << i->first << ":" << (float)i->second/total << endl;
	}

}
*/







//�˻ʺ�����
/*
ofstream outfile("queen.txt");
bool check(int(&queen)[8], int lev, int place) {
	bool sign = true;
	if (lev == 0)
		return sign;
	else {
		for (int j = 0; j < lev; j++) {
			if (queen[j] == place) {
				sign = false;
				break;
			}
			
			if ( (place-queen[j]==lev-j)||(queen[j] -place == lev -j) ) {
				sign = false;
				break;
			}

		}
		return sign;
	}
	
	
}
void print_place(int(&queen)[8]) {
	static int solutions = 1;
	
	outfile << "Solution " << solutions << ":";
	for (int i = 0; i < 8;i++) {
		outfile << " (" << queen[i] << "," << i << ")";
		//outfile << queen[i];
		if (i != 7)
			outfile << ",";
			//;
		else
			outfile << endl;
	}
	solutions++;
}
void place_queen(int (&queen)[8], int lev) {
	if (lev == 7) {
		for (int j = 0; j < 8; j++) {
			if (check(queen, lev, j)) {
				queen[lev] = j;
				print_place(queen);
			}
		}
	}
	else {
		for (int j = 0; j < 8; j++) {
			if (check(queen, lev, j)) {
				queen[lev] = j;
				place_queen(queen, lev + 1);
			}
		}
	}
}


int main() {
	
	int queen[8] = {};
	place_queen(queen, 0);
	
	return 0;
}
*/