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

    vector<int>::iterator it = v.begin(); //the it will point to the first address.
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

    for(auto it = v.begin(); it != v.end(); it++) // auto matically adjust the datatype 
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

int main() 
{
    expainpair();
    explainvector();
    return 0;
}