//
//  FindDuplicateNumber.cpp
//  LeetCode
//
//  Created by Nguyen Van Nghia on 9/18/19.
//  Copyright © 2019 Nguyen Van Nghia. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

/*!
 Problem: https://leetcode.com/problems/find-the-duplicate-number/
 */

int findDuplicate(std::vector<int>& nums) {
    std::map<int, int> intMap;
    
    for(int i = 0; i < nums.size(); i++) {
        if(intMap.find(nums[i]) != intMap.end()) {
            return nums[i];
        } else {
            intMap[nums[i]] = 1;
        }
    }
    
    return -1;
}
