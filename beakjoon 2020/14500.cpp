#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> inputData)
{
	int answer = 0;
	vector<int> sortList;
	// 恥 鷺薫税 莫殿澗 19亜走
	
	for (int i = 0; i < inputData.size(); i++)
	{
		for (int j = 0; j < inputData[i].size(); j++)
		{
			int temp;
			if ((j + 3) < inputData[i].size()) // 幻鉦 鷺薫戚 けけけけ 莫殿析凶
			{
				temp = inputData[i][j] + inputData[i][j + 1] + inputData[i][j + 2] + inputData[i][j + 3]; // 馬潅事 鷺薫 噺穿 照獣轍 井酔研 兜粧聖井酔
				sortList.push_back(temp);
			}
			else if ((i + 3) < inputData.size()) // 幻鉦 鷺薫戚 けけけけ聖 噺穿獣轍 莫殿析凶
			{
				temp = inputData[i][j] + inputData[i][j + 1] + inputData[i][j + 2] + inputData[i][j + 3];
				sortList.push_back(temp);
			}
			else if ((i + 2) < inputData.size() && (j + 2) < inputData[i].size()) // 葛空事 鷺薫 伊紫敗
			{																	  		
				temp = inputData[i][j] + inputData[i][j + 1] + inputData[i + 1][j] + inputData[i + 1][j + 1];
				sortList.push_back(temp);
			}
			else if ((i + 2) < inputData.size() && (j + 1) < inputData[i].size()) // 爽伐事, 段系事 鷺薫 噺穿 照獣轍 井酔 伊紫敗, 歳畠事 鷺薫 噺穿獣轍 井酔 伊紫敗.
			{
				// 爽伐事 鷺薫 噺穿照獣轍 井酔
				temp = inputData[i][j] + inputData[i][j + 1] + inputData[i][j + 2] + inputData[i + 1][j + 1];
				sortList.push_back(temp);

				// 段系事 鷺薫 噺穿 照獣轍 井酔
				temp = inputData[i][j] + inputData[i + 1][j] + inputData[i + 1][j + 1] + inputData[i + 1][j + 2];
				sortList.push_back(temp);

				// 歳畠事 鷺薫 疎噺穿 獣轍 井酔
				temp = inputData[i][j + 1] + inputData[i + 1][j + 1] + inputData[i + 1][j] + inputData[i + 2][j + 1];
				sortList.push_back(temp);

				// 歳畠事 鷺薫 酔噺穿 獣轍 井酔
				temp = inputData[i][j] + inputData[i + 1][j] + inputData[i + 2][j] + inputData[i + 1][j + 1];
				sortList.push_back(temp);

				// 歳畠事 鷺薫 企暢獣轍 井酔
				temp = inputData[i][j + 1] + inputData[i + 1][j] + inputData[i + 1][j + 1] + inputData[i + 1][j + 2];
				sortList.push_back(temp);
			}
			else if ((i + 1) < inputData.size() && (j + 2) < inputData[i].size()) // 歳畠事 鷺薫 噺穿 照獣轍 井酔 伊紫敗, 爽伐事, 段系事 鷺薫 噺穿獣轍 井酔 伊紫敗
			{
				// 歳畠事 鷺薫 噺穿照獣轍 井酔

				// 爽伐事 鷺薫 疎噺穿 獣轍 井酔

				// 爽伐事 鷺薫 酔噺穿 獣轍 井酔

				// 段系事 鷺薫 疎噺穿 獣轍 井酔

				// 段系事 鷺薫 酔噺穿 獣轍 井酔

		
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