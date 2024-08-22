#include "Finder1.h"

using namespace std;
/// look at trying to find

vector<int> Finder::findSubstrings(string s1, string s2)
{

    vector<int> result;
    currSub = 0;

    for (size_t i = 1; i <= s2.size(); i++)
    {                                                     /// iterates through string two
        size_t found = s1.find(s2.substr(0, i), currSub); /// iterates through string 1 to find string 2 substrings at 0 and i/returns index found
        currSub = found;                                  /// making current subsring the same as the index of where we found it in s1
        // return index of current substring
        if (found != string::npos)  /// kinda null maybe idfk
        { /// if its not outside the string
            result.push_back(found);
        }
        else
        {
            for (int j = i; j < s2.size(); j++)
            { // starts at i, loops through the rest of the things we didnt find, makes them -1
                result.push_back(-1);
            }
            break; /// no need to go back to the top of the for loop
        }
    }
    return result;
};
