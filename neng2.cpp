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
    cin >> M >> n;
    cout << "Type your scores: ";
    cin.ignore();
    getline(cin, scores);
    cout << scores << endl;
    istringstream iss(scores);
    // copy(istream_iterator<string>(iss),
    //      istream_iterator<string>(),
    //      ostream_iterator<string>(cout, "\n"));
    copy(istream_iterator<string>(iss),
         istream_iterator<string>(),
         back_inserter(tokens));
    sort(tokens.begin(), tokens.end(), greater_equal<string>());
    for(int i = 0 ; i < tokens.size(); i ++)
    {
        cout<<"("<<tokens[i]<<")\n";
    }

    cout << tokens[n-1]<<endl;

 
    return 0;
}