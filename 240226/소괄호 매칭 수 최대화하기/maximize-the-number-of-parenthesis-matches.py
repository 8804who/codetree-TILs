from functools import cmp_to_key
n = int(input())
strings = [input() for _ in range(n)]


def get_score(string):
    count = 0
    score = 0
    for i in range(len(string)-1,-1,-1):
        if string[i] == ')':
            count += 1
        else:
            score += count
    return score


def compare(s1, s2):
    return get_score(s2+s1)-get_score(s1+s2)


strings.sort(key=cmp_to_key(compare))
print(get_score(''.join(strings)))