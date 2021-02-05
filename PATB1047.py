n = int(input())
hashmap = dict()
ans_x = 0
anx_score = 0
for i in range(n):
    t = input()
    # 队伍编号
    x = 0
    for c in t:
        if c == '-':
            break
        x = x * 10 + ord(c) - 48
    # 队员成绩
    score = int(t.split()[1])
    hashmap[x] = hashmap.get(x, 0) + score
    if hashmap[x] > anx_score:
        ans_x = x
        anx_score = hashmap[x]
print(ans_x,  anx_score)

