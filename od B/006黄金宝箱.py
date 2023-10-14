def calculate_maximum_sum(numbers, k_value):
    """
    获取连续k_value个宝箱数字和的最大值
    
    :param numbers: 宝箱数字列表
    :param k_value: 连续的宝箱数量
    :return: 连续k_value个宝箱数字和的最大值
    """
    
    # 初始化计算第一个窗口的和
    initial_sum = 0
    for i in range(k_value):
        initial_sum += numbers[i]
    
    # 设置初始的最大值为第一个窗口的和
    top_sum = initial_sum
    
    # 从第二个窗口开始，逐个计算
    for idx in range(1, len(numbers) - k_value + 1):
        # 移动窗口：移除旧的第一个值，加上新的最后一个值
        moving_sum = initial_sum - numbers[idx - 1] + numbers[idx + k_value - 1]
        
        # 更新initial_sum
        initial_sum = moving_sum
        
        # 比较moving_sum与top_sum
        if moving_sum > top_sum:
            top_sum = moving_sum

    return top_sum

if __name__ == '__main__':
    box_numbers = [int(num) for num in input().split(',')]
    magic_number = int(input())
    
    result = calculate_maximum_sum(box_numbers, magic_number)
    print(result)


