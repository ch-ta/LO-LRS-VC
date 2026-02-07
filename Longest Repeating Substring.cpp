#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "timer.h"

using namespace std;

string longest_repeating_substring(string);

int main()
{
	string s = "RNKyeacPFnLjIOfTSyXvQyjIXEIzoGapTBQtIlQWXdkyOQCEDrdrqeeVuXdMsNwVwxOQOTzgtgVJktofSKesmacwfgppnplOFfbhGBAIugGFCofWHmXcfTfWNJQzuokJMvmYHtmGELFchhyWgUBOHaUdEQOzbJBtDpGIYRWIWwUBqnhXsYKPWSpTOWGjzWGjKXmioeRBUvUOgQzfaQIdMaKYdsCcHkPVHgdgFrrTyAREOpIHnVqGINcqeXyFzkOKPxfqOJqeXJIsMfqLMqQhaWyJHWMyoNDJgBTfQyUMPOfBzePTNwxuVvvyrgxzrKjpZjxSPricYnohPxhDmnxeQuLKroMvxJPgtxPmGRcXcWduFqhzGHlauQbmgIPBNIUrYJcasxyTdFXGwEtTYzyIZjCCQHzKHAHrVvPuxfoKLjswSjDaxIassfWQsMAEqtraNMdlfDiKxztGneWHjinMMkOEWhXNSuasIOXVLjqtQGKJgPvhcbwabvKhEqdxSVLzNIkZHQcaAseZxpMvyPBbHVEKOwZRAXXgFIpzrxTRVEUBYNvJTzqBLWbWWktmZpKUeZLqaauMASmdvsJpWipMbaIHdprnQfrLZLEigcOJmJLAfzEGrFkfTtEooDAINkFXWRqKyjxgUxenXiNiXGERoFvAYzLVoWFzCZbrcEzNBQbHpxCJRwfmtwcOXVeOoOXEUPqsyMNfOdZOCpxUafQyaFQgQZMeVXYsEUWKnSNLTLzTEqQEZLLBTCwJZwGhuBEwOUruiLFIrAoDhhGIdyfPfLzyBizlXtQI";
	Timer timer_;

	cout << "Original string: " << s << endl;

	timer_.reset();
	cout << "Longest repeated substring: " << longest_repeating_substring(s) << endl;
	double time = timer_.elapsed();

	cout << "Time: " << time << " seconds" << endl;

	return 0;
}

string longest_repeating_substring(string s) {
	/* String cannot be empty */
	if (s.empty())
		return "";

	s.push_back('$');
	string temp = "";
	string result = "";
	vector<int> visited(s.length(), 0);

	for (int i = 0; i < s.length() - 1; i++) {
		bool consec = false;
		for (int j = i; j < s.length() - 1; j++) {
			for (int k = j + 1; k < s.length(); k++) {
				if (s[j] == s[k] && s[j + 1] == s[k + 1] && !consec) //&& visited[j] == 0) 
				{
					consec = true;
					temp.push_back(s[j]);
					//visited[j]++;
					//visited[k]++;
					j++;
					//cout << s[j] << endl;
				}
				else if (s[j] == s[k] && s[j + 1] == s[k + 1] && consec)// && visited[j] == 0) 
				{
					temp.push_back(s[j]);
					//visited[j]++;
					//visited[k]++;
					j++;
					//cout << s[j] << endl;
				}
				else if (s[j] == s[k] && s[j + 1] != s[k + 1] && consec) //&& visited[j] == 0) 
				{
					consec = false;
					temp.push_back(s[j]);
					//visited[j]++;
					//visited[k]++;
					//cout << s[j] << endl;
				}
				else if (s[j] == s[k] && s[j + 1] != s[k + 1] && !consec) //&& visited[j] == 0)
				{
					temp.push_back(s[j]);
					//visited[j]++;
					//visited[k]++;
					//cout << s[j] << endl;
				}
				else {
					if (temp.length() > result.length())
						result = temp;
					//for (int l = 0; l < visited.size(); l++)
					//	visited[l] = 0;
					temp = "";
				}
				//cout << temp << endl;
			}



		}
	}

	s.pop_back();

	return result;
}