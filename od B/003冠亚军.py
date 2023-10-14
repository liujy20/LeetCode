class Player:
    def __init__(self, pid, power):
        self.pid = pid
        self.power = power
    # 定义大于
    def __gt__(self, other):
        return (self.power > other.power) or (self.power == other.power and self.pid < other.pid)


def contest(participants):
    winners = []
    losers = []
    # 两两比较
    for i in range(0, len(participants), 2):
        if i + 1 < len(participants):
            if participants[i] > participants[i + 1]:
                winners.append(participants[i])
                losers.append(participants[i + 1])
            else:
                winners.append(participants[i + 1])
                losers.append(participants[i])
        # 奇数最后一个直接晋级
        else:
            winners.append(participants[i])

    return winners, losers


def get_top_three(participants):
    # print(participants)
    rounds = [participants]
    # print(rounds)
    while len(rounds[0]) > 1:
        # 从第一个中获取胜利和失败的成员
        winners, losers = contest(rounds[0])
        rounds.insert(0, winners)
        rounds.insert(1, losers)

    # print(rounds)

    champion = rounds[0][0]
    runner_up = rounds[1][0]
    # 剔除后面的冠军和亚军
    for lst in rounds[2:]:
        if champion in lst:
            lst.remove(champion)
        if runner_up in lst:
            lst.remove(runner_up)

    third_place_contestants = []
    # 添加所有剩下的成员
    for lst in rounds[1:]:
        third_place_contestants.extend(lst)

    # 获取亚军
    third_place = max(third_place_contestants, key=lambda x: x.power)

    return champion.pid, runner_up.pid, third_place.pid


if __name__ == "__main__":
    data = list(map(int, input().split()))
    participants = [Player(idx, power) for idx, power in enumerate(data)]
    result = get_top_three(participants)
    print(*result)

