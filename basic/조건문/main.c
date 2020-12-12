#include <stdio.h> // 이것은 무시하세요 

// 여기서는 한 걸음 걸었다라는 것을 알려주는 역할이라고 보면 됩니다.
int is_walking(){return 1;}
int is_60_sec(){return 1;}

int main (){       // 이것은 무시하세요
	
	// 1. 변수의 선언과 초기화
	const int target_steps = 5000;  // 사실 상수는 상수이기 때문에 선언과 동시에 초기화를 해줘야 합니다. 
	int today_steps = 0;
	double today_distance = 0.0;
	int calory = 0;
	int hours = 0;
	int minutes = 0;
	char name = 'A';
	
	// 2. 조건문: 만약 한 걸음 걸으면 걸음 수 + 1, 칼로리 + 0.5, 거리 + 1을 업데이트 합니다.
	if (is_walking()){
		today_steps      = today_steps + 1;      // 걸음 수 + 1
		calory           = calory + 0.5;         // 칼로리 + 0.5
		today_distance   = today_distance + 1;   // 거리 + 1
	}
	
	// 결과를 출력합니다. 
	printf("걸음 수 : %d 걸음\n", today_steps);
	printf("칼로리 : %d kcal\n", calory);
	printf("거리 : %lf m\n", today_distance);
	
	// 3. 조건문 3: 60초가 되면 분(min)을 1 증가.
	if (is_60_sec()){
		minutes = minutes + 1;
	}
	
	// 4. 조건문 4: 60분이 되면 시(hour)를 1 증가.
	if (minutes == 60){
		minutes = 0;
		hours = hours + 1;
	}

	return 0;      // 이것은 무시하세요
}                 
