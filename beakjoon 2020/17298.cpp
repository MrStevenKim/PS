#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> inputData)
{
	vector<int> answer;

	


	// vector�� i���� ���Ƽ� ? ã�´�?

	// list�� ��ȸ�ؼ� ã�´�?

	// stack�� �Ἥ ���� �� ��� �� �� ? �̰� ���ܰ� ������?

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