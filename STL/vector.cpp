#include <iostream>
#include <vector>

// 函数声明，接受一个整型向量的引用
void func(std::vector<int>& a) {
    // 修改引用参数中的第一个元素的值
    a[0] = 100;
}

int main() {
    // 创建一个整型向量
    std::vector<int> nums = {10, 20, 30};

    // 调用函数，将整型向量的引用传递给函数
    func(nums);

    // 输出被修改后的整型向量的第一个元素的值
    for(int i=0; i<nums.size(); i++) std::cout << nums[i] << " ";

    return 0;
}
