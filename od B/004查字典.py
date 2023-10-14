def find_words_with_prefix(prefix, word_list):
    result = []
    for word in word_list:
        if word.startswith(prefix):
            result.append(word)
    return result

if __name__ == "__main__":
    input_data = input().split()
    prefix = input_data[0]
    n = int(input_data[1])
    word_list = input_data[2:]

    matched_words = find_words_with_prefix(prefix, word_list)

    if matched_words:
        for word in matched_words:
            print(word)
    else:
        print("-1")

