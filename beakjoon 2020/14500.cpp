#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> inputData)
{
	int answer = 0;
	vector<int> sortList;
	// �� ���� ���´� 19����
	
	for (int i = 0; i < inputData.size(); i++)
	{
		for (int j = 0; j < inputData[i].size(); j++)
		{
			int temp;
			if ((j + 3) < inputData[i].size()) // ���� ���� �������� �����϶�
			{
				temp = inputData[i][j] + inputData[i][j + 1] + inputData[i][j + 2] + inputData[i][j + 3]; // �ϴû� �� ȸ�� �Ƚ�Ų ��츦 ���������
				sortList.push_back(temp);
			}
			else if ((i + 3) < inputData.size()) // ���� ���� ���������� ȸ����Ų �����϶�
			{
				temp = inputData[i][j] + inputData[i][j + 1] + inputData[i][j + 2] + inputData[i][j + 3];
				sortList.push_back(temp);
			}
			else if ((i + 2) < inputData.size() && (j + 2) < inputData[i].size()) // ����� �� �˻���
			{																	  		
				temp = inputData[i][j] + inputData[i][j + 1] + inputData[i + 1][j] + inputData[i + 1][j + 1];
				sortList.push_back(temp);
			}
			else if ((i + 2) < inputData.size() && (j + 1) < inputData[i].size()) // ��Ȳ��, �ʷϻ� �� ȸ�� �Ƚ�Ų ��� �˻���, ��ȫ�� �� ȸ����Ų ��� �˻���.
			{
				// ��Ȳ�� �� ȸ���Ƚ�Ų ���
				temp = inputData[i][j] + inputData[i][j + 1] + inputData[i][j + 2] + inputData[i + 1][j + 1];
				sortList.push_back(temp);

				// �ʷϻ� �� ȸ�� �Ƚ�Ų ���
				temp = inputData[i][j] + inputData[i + 1][j] + inputData[i + 1][j + 1] + inputData[i + 1][j + 2];
				sortList.push_back(temp);

				// ��ȫ�� �� ��ȸ�� ��Ų ���
				temp = inputData[i][j + 1] + inputData[i + 1][j + 1] + inputData[i + 1][j] + inputData[i + 2][j + 1];
				sortList.push_back(temp);

				// ��ȫ�� �� ��ȸ�� ��Ų ���
				temp = inputData[i][j] + inputData[i + 1][j] + inputData[i + 2][j] + inputData[i + 1][j + 1];
				sortList.push_back(temp);

				// ��ȫ�� �� ��Ī��Ų ���
				temp = inputData[i][j + 1] + inputData[i + 1][j] + inputData[i + 1][j + 1] + inputData[i + 1][j + 2];
				sortList.push_back(temp);
			}
			else if ((i + 1) < inputData.size() && (j + 2) < inputData[i].size()) // ��ȫ�� �� ȸ�� �Ƚ�Ų ��� �˻���, ��Ȳ��, �ʷϻ� �� ȸ����Ų ��� �˻���
			{
				// ��ȫ�� �� ȸ���Ƚ�Ų ���

				// ��Ȳ�� �� ��ȸ�� ��Ų ���

				// ��Ȳ�� �� ��ȸ�� ��Ų ���

				// �ʷϻ� �� ��ȸ�� ��Ų ���

				// �ʷϻ� �� ��ȸ�� ��Ų ���

		
			}
		}
	}

	sort(sortList.begin(), sortList.end());

	answer = sortList[0];

	return answer;
}


int main()
{
	int N, M, input;
	vector<vector<int>> matrix;
	
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		vector<int> inputList;
		for (int j = 0; j < M; j++)
		{
			cin >> input;
			inputList.push_back(input);
		}
		matrix.push_back(inputList);
	}

	cout << solution(matrix) << '\n';

	return 0;
}