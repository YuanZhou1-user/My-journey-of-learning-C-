#include<iostream>;
using namespace std;
int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    int i = 0;

    cout << "分别输入张三、李四、王五三人分数:" << endl;
    cout << "张三 " << "数学：" << endl;
    cin >> a;
    cout << "语文：" << endl;
    cin >> b;
    cout << "英语：" << endl;
    cin >> c;
    cout << "李四 " << "数学：" << endl;
    cin >> d;
    cout << "语文：" << endl;
    cin >> e;
    cout << "英语：" << endl;
    cin >> f;
    cout << "王五 " << "数学：" << endl;
    cin >> g;
    cout << "语文：" << endl;
    cin >> h;
    cout << "英语：" << endl;
    cin >> i;

    int arr[3][3] = { {a,b,c},{d,e,f},{g,h,i} };
    for (int x = 0; x < 3; x++) {
        int sum = 0;
        for (int y = 0; y < 3; y++) {
            sum += arr[x][y];
        }
        cout << sum << endl;
    }
    cin.get();
    return 0;
}