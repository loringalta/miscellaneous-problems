#include <iostream>
#include <string>
#include <cstdio>
#include <vector>

using namespace std;

/*
As of late, your usually high-performance computer has been acting rather sluggish. 
You come to realize that while you have plenty of free disk space on your machine, 
it is split up over many hard drives. You decide that the secret to improving performance is 
to consolidate all the data on your computer onto as few hard drives as possible.
Given a vector <int> used, representing the amount of disk space used on each drive, and 
a corresponding vector <int> total, representing the total capacity of each drive mentioned 
in used, you should attempt to pack the data onto as few hard drives as possible. 
You may assume that the data consists of very small files, such that splitting it up and 
moving parts of it onto different hard drives never presents a problem. Return the minimum number of 
hard drives that still contain data after the consolidation is complete.
*/

class DiskSpace
{
	public: 
	int minDrives(vector<int> used, vector<int> total);
};


int DiskSpace::minDrives(vector<int> used, vector<int> total){
	int sum = 0;
	for (int i = 0; i < used.size(); i++){
		sum += used[i];
	}
	int totaldisk = 0;
	for (int j = 0; j < total.size(); j++){
		sum = sum-total[j];
		if (sum > 0){
			totaldisk++;
		}
		if(sum == 0 || sum < 0){
			return totaldisk+1;
		}
	}
	return totaldisk;
	
}