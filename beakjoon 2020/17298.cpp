#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <utility>

using namespace std;

stack<pair<int,int>> processStack;

vector<int> solution(vector<int> inputData)
{
	vector<int> answer;
	
	for (int i = 0; i < inputData.size(); i++)
	{
		if (processStack.size() == 1)
		{
			pair<int, int> temp = processStack.top();
		}
		else
		{

		}

	}

	// stack�� �Ἥ ���� �� ��� �� �� ? �̰� ���ܰ� ������? �̰� ó���ؾ��Ҷ�

	// �ϴ� �� ��������° ���� ��ū���� ������ -1�� ���̴�..

	return answer;
}

int main()
{
	int N, input;
	vector<int> A;

	cin >> N;

	for(int i = 0; i<N; i++)
	{
		cin >> input;
		A.push_back(input);
	}

	A = solution(A);

	for(int i =0 ;i<A.size(); i++)
	{
		cout << A[i] << " ";
	}


	return 0;
}