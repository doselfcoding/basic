target_steps = 5000     # 목표 걸음 수   (정수형 - 상수)
today_steps = 0         # 오늘의 걸음 수  (정수형)
today_distances = 0.0   # 오늘 걸은 거리  (정수형)
calory = 0              # 칼로리         (정수형)
hours = 0               # 시간 (시)      (정수형)
minutes = 0             # 시간 (분)      (정수형)
name = 'A'              # 이름           (문자형)


# 여기서는 한 걸음 걸었다는 것을 알려주는 역할이라고 보시면 됩니다.
def is_walking():
    return True


# 여기서는 60초가 지났다는 것을 알려주는 역할이라고 보시면 됩니다.
def is_60_sec():
    return True


# 조건문 1과 조건문 2
if is_walking():
    today_steps = today_steps + 1
    calory = calory + 1
    total_distances = today_distances + 1

# 조건문 3
if is_60_sec():
    minutes = minutes + 1

# 조건문 4
if minutes == 60:
    minutes = 0
    minutes = minutes + 1

print("걸음 수: ", today_steps)
print("칼로리: ", calory)
print("거리: ", total_distances)
