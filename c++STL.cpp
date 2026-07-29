#include <iostream>
#include <vector>
using namespace std;
// Pairs
void expPairs()
{
    // Normal Pair
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;
    // Pair in pair
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
    // Array pair
    pair<int, int> arr[] = {{11, 12}, {13, 14}};
    cout << arr[1].second << endl;
}

// Vectors
void expVectors()
{
    // Dynamic array
    vector<int> v;     // creates an empty array
    v.push_back(1);    // adds 1 to that array
    v.emplace_back(2); // similar to push_back but some what faster than push_back
    // vector array pair
    vector<pair<int, int>> vec; // declares a vector array pair
    vec.push_back({1, 2});      // adds a pair to that vector array pair
    vec.emplace_back(3, 4);     // it is also same as push_back but in this even if we don't add {} it takes that as pair
    // to declare array with already filled elements
    vector<int> v(5, 100); // here 5 is the size of the array and 100 is the elements that we wnat to add in that array
    // here the array is v[]={100,100,100,100,100}
    vector<int> v(5); // array with size 5 with all 0's in that
}

int main()
{
    expPairs();
    expVectors();
    return 0;
}