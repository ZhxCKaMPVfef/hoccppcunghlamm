#include <bits/stdc++.h>
using namespace std;
long long i,n,x,sum,tam;
vector <int> v;
vector <int>::iterator j;
long long mx = LONG_MIN;
queue <int> q;
priority_queue <int> pq;
stack <int> s;
char c;
string str;
struct data  {
    int stt;
    string name, birthday;
    float toan,van;
};
//vector subtask
void subtask1()
{
    vector <int> v;
    vector <int>::iterator j;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(j=v.begin();j!=v.end();j++) sum+=*j;
    cout<<sum;
}
void subtask2()
{

    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        v.push_back(x);
    }
   for(j=v.begin();j!=v.end();j++) {
   long long tam = *j;
    mx = max(mx,tam);
   }
    cout<<mx;
}
//queue subtask
void subtask3()
{
    cin>>n;

    for(i=1;i<=n;i++) {
        cin>>x;
        q.push(x);
    }
    long long m;
    cin>>m;
    for(i=1;i<=m;i++) {
        x = q.front();
        q.pop();
        q.push(x);
    }
    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
}
void subtask4(){
        cin>>n;
    for(i=1;i<=n;i++) {
        cin>>c;
       if (c == '+') {
            cin>>x;
            pq.push(x);
        } else
            if(!pq.empty())
             pq.pop();
    }
    while(!pq.empty()) {
        cout<<pq.top();
        pq.pop();
    }
}
//subtask stack
void subtask5()
{
    cin>>str;
    for(i=0;i<str.size();i++) {
        if(str[i] == 'C') s.push(12);
        if(str[i] == 'H') s.push(1);
        if(str[i] == 'O') s.push(16);
        if(str[i] == '(') s.push(0);
        if(str[i] >= '2' && str[i] <='9') {
            tam = s.top();
            s.pop();
            s.push(tam*(str[i]-'0'));
        }
        if (str[i] == ')') {
            while (!s.empty() && s.top() != 0) {
                int tam = s.top();
                s.pop();
                sum += tam;
            }
            if (!s.empty()) s.pop();
            s.push(sum);
            sum = 0;
        }
    }
    sum = 0;
    while(!s.empty()) {
        sum+=s.top();
        s.pop();
    }
    cout<<sum;
}
//struct subtask
void subtask6()
{
      data a[10001];
    cin>>n;
    cin.ignore();
    for(i=1;i<=n;i++) {
        a[i].stt = i;
        cout<<"Ho ten: ";
        getline(cin,a[i].name);
        cout<<"Ngay Sinh: ";
        getline(cin,a[i].birthday);
        cin.tie();
        cout<<"Toan: "<<endl;
        cin>>a[i].toan;
        cout<<"Van: "<<endl;
        cin>>a[i].van;
        cin.ignore();
    }
    for(i=1;i<=n;i++) {
        cout<<"STT: "<<a[i].stt<<endl;
        cout<<"Ho ten: "<<a[i].name<<endl;
        cout<<"Ngay sinh: "<<a[i].birthday<<endl;
        cout<<"Toan: "<<a[i].toan<<endl;
        cout<<"Van: "<<a[i].van<<endl;
    }
}
int main()
{
    subtask6();
}
