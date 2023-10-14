# 找到一个滑动窗口和输入具有相同的单个数字个数
def compute_digit_counts(num_str):
    digit_stats = {str(i): 0 for i in range(10)}
    for char in num_str:
        if char in digit_stats:
            digit_stats[char] += 1
    return digit_stats

def min_sequence_number(shuffled_str, seq_len):
    input_digit_counts = compute_digit_counts(shuffled_str)
    print(input_digit_counts)
    
    # 初始化初始序列的数字统计
    init_sequence = ''.join([str(i) for i in range(1, seq_len + 1)])
    print(init_sequence)
    sequence_digit_counts = compute_digit_counts(init_sequence)
    print(sequence_digit_counts)

    # 如果初始序列与输入匹配，返回1
    if input_digit_counts == sequence_digit_counts:
        return 1
    
    for start_num in range(2, 1001 - seq_len + 2):
        # 移除滑动窗口的第一个数的数字统计
        for digit in str(start_num - 1):
            sequence_digit_counts[digit] -= 1

        # 增加滑动窗口的最后一个数的数字统计
        for digit in str(start_num + seq_len - 1):
            sequence_digit_counts[digit] += 1
        
        # 如果滑动窗口与输入匹配，返回滑动窗口的开始数字
        if input_digit_counts == sequence_digit_counts:
            return start_num

    return -1

# 测试
s, k = "19801211", 5
print(min_sequence_number(s, k))  # 输出: 8
