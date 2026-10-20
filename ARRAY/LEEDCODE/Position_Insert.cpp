#include <iostream>
#include <vector>

int searchInsert(std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid; // Target found, return its index
        } else if (nums[mid] < target) {
            left = mid + 1; // Move to the right half
        } else {
            right = mid - 1; // Move to the left half
        }
    }

    // If the target is not found, left is the insert position
    return left;
}

int main() {
    std::vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    int position = searchInsert(nums, target);
    std::cout << "Insert position for " << target << " is: " << position << std::endl;

    target = 2;
    position = searchInsert(nums, target);
    std::cout << "Insert position for " << target << " is: " << position << std::endl;

    target = 7;
    position = searchInsert(nums, target);
    std::cout << "Insert position for " << target << " is: " << position << std::endl;

    target = 0;
    position = searchInsert(nums, target);
    std::cout << "Insert position for " << target << " is: " << position << std::endl;

    return 0;
}