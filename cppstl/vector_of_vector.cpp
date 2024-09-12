#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRow)
{
  vector<vector<int>> v;
  for(int i=0;i<numRow;i++)
  {
    // v.push_back(vector<int> (i+1,1));
    vector<int> temp(i+1,1);
    v.push_back(temp);
    for(int j=1; j<i; j++)
    {
      v[i][j] = v[i-1][j] + v[i-1][j-1];
    }
  }

  cout << "result" << endl;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<i+1;j++)
    {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  generate(5);

 

  cout << "vector of vector" << endl;

  int row;
  cout << "enter no of rows";
  cin >> row;
  int col;
  cout << "enter no of col";
  cin >> col;
  vector<vector<int>> v;  

  for(int i=0; i<row; i++)
  {
    vector<int> temp;
    for(int j=0; j<col; j++)
    {
      int x;
      cin >> x;
      temp.push_back(x);
    }
    v.push_back(temp);
  }

cout << "result" << endl;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}