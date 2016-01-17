#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> dist;
int C;
int f(int x)
{
  int count = 1;
  long long lastplace = dist.at(0);
	for (size_t i = 1; i < dist.size(); i++)
	{
		
		
		if (dist[i] - lastplace >= x)
		{
			count++;
			if (count == C) return 1;
			lastplace = dist[i];
		}
	}
	return 0;
}

int binarysearch(int min, int max)
{
	while (min < max)
	{
	  //cout << min << " " << max << endl;
		int mid = (max + min) / 2;
		if (f(mid) == 1)
		{
			min = mid + 1;
		}
		else
		{
			max = mid;
		}
	}
	return min - 1;
	
}

int main(void)
{
	int T; cin >> T;
	while (T--)
	{
		int N; cin >>N >> C;
		dist.clear();
		for (int a = 0; a < N; a++)
		{
			int t; cin >> t;
			dist.push_back(t);
		}
		sort(dist.begin(), dist.end());
	
		cout << binarysearch(0, dist[N-1]) << endl;

	}
}