#include <iostream>
#include <vector>
using namespace std;

int prime[1000100];
bool check[1000100];
int primeNum = 0;

void erato()
{
	for(int i=2; i<= 1000000; i++)
	{
		if(check[i] == false)
		{
			prime[primeNum++] = i;
			for(int j = i+i ; j<= 1000000; j+=i)
			{
				check[j] = true;
			}
		}
	}
}



vector<vector<int>> solution(vector<int> inputData) //1000000 ������ ũ���� ���� �׽�Ʈ���̽��� ���´�. �׷� 1000000 ���ϱ��� �Ҽ��� �����佺�׳׽�ü�� ������! 
{
	vector<vector<int>> answers;
	vector<int> answer;

	for(int i = 0; i<inputData.size(); i++)
	{
		answer.push_back(inputData[i]);

		for(int g = 1; g<primeNum;g++)
		{
			if(check[inputData[i] - prime[g]] == false) // n�̶� � Ȧ���� �P���� ���� ���� Ȧ����� �װ��� �츮�� ���ϰ����ϴ� �ش�.
			{
				answer.push_back(prime[g]);
				answer.push_back(inputData[i] - prime[g]);
				break; // ã������ ���߸�� .. �̰� ���� ��Ÿ�ӿ�����
			}
		}

		answers.push_back(answer);
		answer.clear();
	}

	return answers;
}

int main()
{
	erato(); // �Ҽ� ���ϱ�	
	int input;
	vector<int> inputList;
	
	while(true)
	{
		cin >> input;
		if (input == 0)
			break;

		inputList.push_back(input);
	}
	
	vector<vector<int>> answers = solution(inputList);

	for(int i = 0; i<answers.size(); i++)
		cout << answers[i][0] << " = " << answers[i][1] << " + " << answers[i][2] << '\n';
	
	return 0;
}