#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<Windows.h>
#include<algorithm>
#include<string>
#include<vector>
#include <deque>
#include <stack>
#include <queue>
#include <list>
#include <set>
#include <map>
using namespace std;

int sleeptime = 500;
void stringlearning() {
    //construct
    string s1 = "aaaa";
    string s2("bbbb");
    string s3 = s2;
    string s4(10, 'a');
    cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl;
    cout << endl;
    //traverse
    string str("abcdefg");
    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << endl;
    }
    for (int i = 0; i < str.length(); i++) {
        cout << str.at(i) << endl;
    }
    for (string::iterator it = str.begin(); it != str.end(); it++) {
        cout << *it << endl;
    }
    cout << endl;
    //the conversion of string and char*
    string str1("aaaaaa");
    const char* p = str1.c_str();
    cout << p << endl;
    const char* p1 = "12345";
    string str2 = p1;
    cout << str2 << endl;
    char buf[128] = { 0 };
    str1.copy(buf, 3, 0);
    cout << buf << endl;
    cout << endl;
    //string concatenation
    s1 = "123456";
    s2 = "abcdef";
    s3 = s1 + s2;
    cout << s3 << endl;
    s4 = s1.append(s2);
    cout << s4 << endl;
    //find and replace in string
    s1 = "hello hello hello hello hello hello 1234 7876";
    size_t index1 = s1.find("hello", 0);
    cout << index1 << endl;
    size_t index2 = s1.find_first_of("hello");
    cout << index2 << endl;
    size_t index3 = s1.find_last_of("hello");
    cout << index3 << endl;
    int count = 0;
    size_t offindex = s1.find("hello", 0);
    while (offindex != string::npos) {
        cout << offindex << endl;
        count++;
        offindex++;
        offindex = s1.find("hello", offindex);
    }
    cout << count << endl;
    size_t offindex1 = s1.find("hello", 0);
    while (offindex1 != s1.npos) {
        s1.replace(offindex1, strlen("hello"), "welcome");
        offindex1 += strlen("welcome");
        offindex1 = s1.find("hello", offindex1);
    }
    cout << s1 << endl;
    cout << endl;
    s1 = "hello1 world!";
    string::iterator it = find(s1.begin(), s1.end(), '1');
    if (it != s1.end()) {
        s1.erase(it);
    }
    cout << s1 << endl;
    s1.erase(s1.begin(), s1.begin() + 3);
    cout << s1 << endl;
    s1.insert(0, "AAA");
    cout << s1 << endl;
    cout << endl;
    //string algorithm
    s1 = "abcdefg";
    s2 = "AEDLFLKJDLKJFL";
    transform(s1.begin(), s1.end(), s1.begin(), (int(*)(int))toupper);
    cout << s1 << endl;
    transform(s2.begin(), s2.end(), s2.begin(), (int(*)(int))tolower);
    cout << s2 << endl;
    Sleep(sleeptime);
    system("cls");
}

void vectorlearning() {
    //construct and traverse
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    vector<int>v2 = v1;
    for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    vector<int>v3(v1.begin(), v1.begin() + 1);
    for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    vector<int>v4(v1.begin(), v1.end());
    for (vector<int>::iterator it = v4.begin(); it != v4.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    vector<int>v5(3, 9);
    for (vector<int>::iterator it = v5.begin(); it != v5.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    //reverse traverse
    vector<int> reversetraverse;
    for (int i = 1; i < 6; i++) {
        reversetraverse.push_back(i);
    }
    for (vector<int>::reverse_iterator it = reversetraverse.rbegin(); it != reversetraverse.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    //enhance push_back
    vector<int>v(10);
    cout << v.size() << endl;
    v.push_back(100);
    cout << v.size() << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    //delete
    v.erase(v.begin(), v.begin() + 3);
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    v.erase(v.begin() + 3);
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    v.push_back(2);
    v.push_back(2);
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    vector<int>::iterator it = v.begin();
    while (it != v.end()) {
        if (*it == 2) {
            it = v.erase(it);
        }
        else {
            it++;
        }
    }
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    v.insert(v.begin(), 10);
    v.insert(v.begin(), 3, 11);
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    Sleep(sleeptime);
    system("cls");
}

void dequelearning() {
    deque<int>d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_front(1);
    d1.push_front(2);
    d1.push_front(3);
    d1.pop_back();
    d1.pop_front();
    d1.front() = 111;
    d1.back() = 222;
    deque<int>::iterator it = d1.begin();
    while (it != d1.end()) {
        if (*it == 1) {
            cout << distance(d1.begin(), it) << endl;
        }
        it++;
    }
    for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    Sleep(sleeptime);
    system("cls");
}

class Teacher {
public:
    char name[32];
    int age;
    void printT() {
        cout << age << endl;
    }
};

void stacklearning() {
    //simple
    stack<int>s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    while (!s1.empty()) {
        cout << s1.top() << endl;
        cout << s1.size() << endl;
        s1.pop();
    }
    //complex
    Teacher t1, t2, t3;
    t1.age = 22;
    t2.age = 33;
    t3.age = 44;
    stack<Teacher>s;
    s.push(t1);
    s.push(t2);
    s.push(t3);
    while (!s.empty()) {
        Teacher tmp = s.top();
        tmp.printT();
        s.pop();
    }
    Sleep(sleeptime);
    system("cls");
}

void queuelearning() {
    //simple
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.front() << endl;
    cout << q.size() << endl;
    while (!q.empty()) {
        int tmp = q.front();
        cout << tmp << " ";
        q.pop();
    }
    cout << endl;
    //complex
    Teacher t1, t2, t3;
    t1.age = 31;
    t2.age = 32;
    t3.age = 33;
    queue<Teacher>q1;
    q1.push(t1);
    q1.push(t2);
    q1.push(t3);
    while (!q1.empty()) {
        Teacher tmp = q1.front();
        tmp.printT();
        q1.pop();
    }
    Sleep(sleeptime);
    system("cls");
}

void listlearning() {
    list<int>l;
    for (int i = 0; i < 10; i++) {
        l.push_back(i);
    }
    l.push_front(111);
    for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    l.push_back(100);
    for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    //can not be visited randomly
    list<int>::iterator it = l.begin();
    it++;
    it++;
    it++;
    l.erase(l.begin(), it);
    for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    //remove all elements with value 100
    l.remove(100);
    for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    Sleep(sleeptime);
    system("cls");
}

void priority_queuelearning() {
    priority_queue<int>p1;
    priority_queue<int, vector<int>, less<int>>p2;
    priority_queue<int, vector<int>, greater<int>>p3;
    p1.push(33);
    p1.push(11);
    p1.push(55);
    p1.push(22);
    cout << p1.top() << endl;
    cout << p1.size() << endl;
    p3.push(33);
    p3.push(11);
    p3.push(55);
    p3.push(22);
    cout << p3.top() << endl;
    cout << p3.size() << endl;
    cout << endl;
    Sleep(sleeptime);
    system("cls");
}

class Student {
public:
    Student(const char* name, int age) {
        strcpy(this->name, name);
        this->age = age;
    }
    char name[64];
    int age;
};

struct FuncStudent {
    bool operator()(const Student& left, const Student& right) const {
        if (left.age < right.age)
            return true;
        else
            return false;
    }
};

void setlearning() {
    set<int>s1;
    for (int i = 0; i < 5; i++) {
        int tmp = rand();
        s1.insert(tmp);
    }
    s1.insert(100);
    s1.insert(100);
    s1.insert(100);
    s1.insert(100);
    for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    //delete the set
    while (!s1.empty()) {
        set<int>::iterator it = s1.begin();
        cout << *it << endl;
        s1.erase(s1.begin());
    }
    //complex
    Student st1("s1", 32);
    Student st2("s2", 22);
    Student st3("s3", 44);
    Student st4("s4", 11);
    Student st5("s5", 22);
    set<Student, FuncStudent>set1;
    set1.insert(st1);
    set1.insert(st2);
    set1.insert(st3);
    set1.insert(st4);
    //can not insert st5 because its age duplicates with st2
    //we can judge whether the element is inserted according to the return value of `insert`
    set1.insert(st5);
    for (set<Student>::iterator it = set1.begin(); it != set1.end(); it++) {
        cout << it->age << " " << it->name << endl;
    }
    //the find operation will be introduced in pairlearning function
    cout << endl;
    Sleep(sleeptime);
    system("cls");
}

void pairlearning() {
    //capture exception when insert element into a set
    Student st1("s1", 32);
    Student st2("s2", 22);
    Student st3("s3", 44);
    Student st4("s4", 11);
    Student st5("s5", 22);
    set<Student, FuncStudent>set1;
    pair<set<Student, FuncStudent>::iterator, bool>pair1 = set1.insert(st1);
    cout << (pair1.second ? "Success" : "Fail") << endl;
    set<int> set2;
    for (int i = 0; i < 10; i++) {
        set2.insert(i + 1);
    }
    for (set<int>::iterator it = set2.begin(); it != set2.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    //find element with value equals to 5, return iterator position
    set<int>::iterator it0 = set2.find(5);
    cout << *it0 << endl;
    //find element with value leq than 5, return iterator position
    set<int>::iterator it1 = set2.lower_bound(5);
    cout << *it1 << endl;
    //find element with value greater than 5, return iterator position
    set<int>::iterator it2 = set2.upper_bound(5);
    cout << *it2 << endl;
    //return a pair type item, in which the first property is the iterator position of geq than the given value, the second is g than the given value
    pair<set<int>::iterator, set<int>::iterator>pa = set2.equal_range(5);
    set<int>::iterator it3 = pa.first;
    set<int>::iterator it4 = pa.second;
    cout << *it3 << endl << *it4 << endl;
    cout << endl;
    Sleep(sleeptime);
    system("cls");
}

void multisetlearning() {
    multiset<int>set1;
    int tmp = 0;
    printf("Please input the value wants to be insert into the set: ");
    scanf("%d", &tmp);
    while (tmp) {
        set1.insert(tmp);
        scanf("%d", &tmp);
    }
    for (multiset<int>::iterator it = set1.begin(); it != set1.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    while (!set1.empty()) {
        multiset<int>::iterator it = set1.begin();
        cout << *it << " ";
        set1.erase(it);
    }
    cout << endl;
    Sleep(sleeptime);
    system("cls");
}

void maplearning() {
    map<int, string>map1;
    map1.insert(pair<int, string>(1, "chenhua"));
    map1.insert(make_pair(2, "mengna"));
    map1.insert(map<int, string>::value_type(3, "chenmeng"));
    map1[4] = "menghua";
    pair<map<int, string>::iterator, bool>pair1 = map1.insert(make_pair(2, "haha"));
    cout << (pair1.second ? "Success" : "Fail") << endl;
    //modify
    map1[2] = "haha";
    //delete a specific value
    for (map<int, string>::iterator it = map1.begin(); it != map1.end(); it++) {
        if (it->second.compare("haha") == 0) {
            it = map1.erase(it);
        }
    }
    //traverse
    for (map<int, string>::iterator it = map1.begin(); it != map1.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }
    //find by key and return recent position of iterator
    map<int, string>::iterator it = map1.find(100);
    cout << (it != map1.end() ? "Success" : "Fail") << endl;
    //find by key and return a pair in which the first represent the iterator positon of item with key leq the given key value, the second is g than the given key value
    pair<map<int, string>::iterator, map<int, string>::iterator>pa = map1.equal_range(100);
    cout << (pa.first != map1.end() ? "Success" : "Fail") << endl;
    cout << (pa.second != map1.end() ? "Success" : "Fail") << endl;
    Sleep(sleeptime);
    //system("cls");
}

class Person {
public:
    string name;
    int age;
    string tel;
    double sal;
};

void multimaplearning() {
    Person p1, p2, p3, p4, p5;
    p1.name = "王1";
    p1.age = 31;
    p2.name = "王2";
    p2.age = 31;
    p3.name = "张3";
    p3.age = 31;
    p4.name = "张4";
    p4.age = 31;
    p5.name = "钱5";
    p5.age = 31;
    multimap<string, Person>map2;
    map2.insert(make_pair("sale", p1));
    map2.insert(make_pair("sale", p2));
    map2.insert(make_pair("development", p3));
    map2.insert(make_pair("development", p4));
    map2.insert(make_pair("Financial", p5));
    //traverse
    for (multimap<string, Person>::iterator it = map2.begin(); it != map2.end(); it++) {
        cout << it->first << "-" << it->second.name << endl;
    }
}

int main()
{
    stringlearning();
    vectorlearning();
    dequelearning();
    stacklearning();
    queuelearning();
    listlearning();
    priority_queuelearning();
    setlearning();
    pairlearning();
    multisetlearning();
    maplearning();
    multimaplearning();
    return 0;
}
