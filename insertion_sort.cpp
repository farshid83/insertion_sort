/*
 * insertion_sort.cpp
 *
 */

#include <iostream>

using namespace std;

#define size 10
int sequence[size] = {20, 13, 3, 5, 15, 8, 34, 1, 7, 2};

void PrintSeq(int * seq)
{
	for(int i = 0; i < size; i++)
		cout << seq[i] << " ";
	cout << "\n";
}

void R_insertion(int* seq, int index)
{
	if(index == 0)
		return;
	else
	{
		R_insertion(seq, index-1);
		int i = index - 1;
		int key = seq[index];
		while((i >= 0) && (key < seq[i]))
		{
			seq[i+1] = seq[i];
			i--;
			PrintSeq(seq);
		}
		seq[i+1] = key;
	}
}

int main()
{
	//cout << "Enter the sequence: ";
	//cin <<

	// Make a copy
	int seq[size];
	for(int i = 0; i < size; i++)
		seq[i] = sequence[i];

	// Does insertion sort
	for(int j = 1; j < size; j++)
	{
		int key = seq[j];
		int i = j - 1;
		while((i >= 0) && (key < seq[i]))
		{
			seq[i+1] = seq[i];
			i--;
			PrintSeq(seq);
		}
		seq[i+1] = key;
	}

	// Make a copy
	cout << "Recursive insertion sort\n";
	for(int i = 0; i < size; i++)
		seq[i] = sequence[i];

	//Recursive insertion sort
	R_insertion(seq, size-1);
}


// T(n) = T(n-1) + n


