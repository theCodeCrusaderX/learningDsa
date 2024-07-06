#include<bits/stdc++.h>
using namespace std;
void expainpair() 
{
    pair<int,int> p = {1,3};
    cout << p.first << " " << p.second;

    pair<int, pair<int,char>> q = {1,{2,3}};
    cout << q.first << " " << q.second.first;

    pair<int,int> arr[] ={{1,2},{2,5},{5,1}};
    cout << arr[1].second;
}

void explainvector()
{
    vector<int> v; //declearing vector
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2); //with help of this function we dont need to specify bracket

    vector<int> v1(5,100); //means vector of size 5 with element 100 in each section
    vector<int> v2(v1); //means copying the value of v2 in v1.



// vector iterator

    vector<int>::iterator it = v.begin(); //this will point to the first address.
    it++; // incrementing by 1 in address
    cout << *(it) << " "; //going to print the value.

    it = it +2;
    cout << *(it) << " " ;

    vector<int>::iterator it = v.end(); //it will point next to the last element.

    cout << v[0] << " " << v.at(0); //these also two way to print the element in a vector.

    cout << v.back() << " "; //it will print last element

    // printing the elements in vector
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++) // auto matically adjust the datatype since v.begin() function is an iterator datatype so datatype of it is type of iterator
    {
        cout << *(it) << " ";
    }
    
    for(auto it : v) //with the help of for each loop
    {
        cout << it << " ";
    }

    // deletion
    //{10,20,30,40}
    v.erase(v.begin()+1); //it will erase the 2nd element.{10,30,40}

    v.erase(v.begin()+2,v.begin()+4); //{10,40} means [start,end)

    //Insert Function

    vector<int> v(2,100); //{100,100}
    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.begin() + 1,2,10); //{300,10,10,100,100}

    //{10,20}
    cout << v.size(); //2
    v.pop_back();//{10}

    //v1 -> {10,20}
    //v2 -> {40,50}

    v1.swap(v2); //it will swap v1 with v2

    v.clear(); //erase the entire vector
    cout << v.empty(); //it will print boolean expresion if vector have zero elements it self then it will print true otherwise false.

}

void explainList()
{
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(5); // {2,5}
    // in vector we use inset function to inset element anywhere but that takes more and more time complexity.

    // in list we are having push_front

    ls.push_front(88); //{88,2,5}
    ls.emplace_front(44); //{44,88,2,5}

    //rest function same as vector 
    //begin end clear insert size swap rbegin rend
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(2); // {2}
    dq.emplace_back(5); // {2,5}
    dq.push_front(88); //{88,2,5}
    dq.emplace_front(44); //{44,88,2,5}

    dq.pop_back(); //{44,88,2}
    dq.pop_front(); //{88,2}

    dq.back(); //gives last element i.e 2
    dq.front(); //gives front element i.e 88

    //rest function same as vector 
    //begin end clear insert size swap rbegin rend
    
}

void explainStack()
{
    stack<int> st;

    //last in first out

    //main function push pop top having time complexity O(1).
    st.size(); //gives size of stack 
    st.empty(); //gives 1 for no elements in stack
    
}

void explainQueue()
{
    queue<int> q;

    //first in first out

    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(3); //{1,2,3}

    //back front pop  size swap empty same as stack.

    //all the operations are having O(1) time complexity.

}

void explain_priority_queue()
{
    priority_queue<int> pq;  //also called max heap

    pq.push(3); //{3}
    pq.emplace(2); //{3,2}
    pq.push(10); //{10,3,2}
    pq.push(1); // {10,3,2,1}

    cout << pq.top(); //10
    pq.pop(); //{3,2,1}

    //size swap empty function same as others

    priority_queue<int, vector<int>, greater<int>> pq; //min heap

    pq.push(11); //{11}
    pq.emplace(2); //{2,11}
    pq.push(10); //{2,10,11}

    //time complexity:-
    //push and pop = log n
    //top = O(1)
}

void explainSet() {

    //stores everything in sorted order and unique in nature

    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(13); //{1,2,13}
    st.insert(8); //{1,2,8,13}
    //functionality of insert in vector can be used also that only increases efficiency

    //begin() end() rbegin() rend() size() empty() and swap() are same as those of above

    // {1,2,3,4,5}
    auto it = st.find(3); //as find is an iterator function 

    // {1,2,3,4,5}
    auto it = st.find(6); //now it will point to st.end() which is right after 5

    //{1,4,5}
    st.erase(5); //erase 5 //takes logarithmic time

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it); //it takes constant time

    // {1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); //after erase {1,4,5} [first,last)


    //lower and upper bound
    //lower bound :- points to thats element if present if not then next to that element which is greater to that element

    auto it = st.lower_bound(2);

    // upper bound :- points to next to that which is greater to that element if present, if not then next to that element which is greater to that element

    auto it = st.upper_bound(4);


    //time complexity for all operation are log n
}
void explainMultiSet() {
    //everything is same as set only differ is that it can store diffrent value too..
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(2); //{1,2}
    ms.insert(1); //{1,1,2}

    ms.erase(1); //all 1's erased
    int cnt = ms.count(1);

    //only a single one erased
    ms.erase(ms.find(1));
}
void explainUnorderedSet() {

    //randamised order in unique way also

    unordered_set<int> st;

    //only lower and upper bound function not work rest are same as set

    //time complexity is O(1) most of the cases but in wrost case O(n)
}

void explainMap() {

    //unique key in sorted order.

    map<int,int> mpp;
    // map<int,pair<int,int>> mpp;
    // map<pair<int,int>, int> mpp;

    mpp[1] = 2;
    mpp.emplace({3,1});
    mpp.insert({2,4});
    mpp[{2,3}] = 10;

    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];


    auto it = mpp.find(3);
    cout << *(it).second;

    auto it mpp.find(5);

    // This is the syntax
    auto it mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    // erase, swap, size, empty, are same as above

    // time complexity:- log n
}

void explainMultimap() {
    //everything same as map, only it can store multiple keys
    //only mpp[key] cant be used here
}

void explainUnorderedMap() {
    //avareage and best O(1) and 
    //in wrost case O(n).  ->> if all the elements are maped with the same key
}
int main() 
{
    expainpair();
    explainvector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explain_priority_queue();
    explainSet();
    explainMultiSet();
    explainUnorderedSet();
    explainMap();
    explainMultimap();
    explainUnorderedMap();
    return 0;
}