#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, M;
    string scores;
    std::vector<string> tokens;
    std::vector<int> int_tokens;
    cin >> M >> n;
    cin.ignore();
    getline(cin, scores);
    istringstream iss(scores);
    // copy(istream_iterator<string>(iss),
    //      istream_iterator<string>(),
    //      back_inserter(tokens));

    int number;
    std::vector<int> myNumbers;
    while (iss >> number)
        myNumbers.push_back(number);
    
    sort(myNumbers.begin(), myNumbers.end(), greater_equal<int>());
    // sort(tokens.begin(), tokens.end(), greater_equal<string>());
    cout << myNumbers[n-1]<<endl;
    return 0;
}