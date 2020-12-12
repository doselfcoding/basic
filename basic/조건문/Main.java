package project;                                   // 이것은 무시하세요

public class Main {                                // 이것은 무시하세요
    
    // 여기서는 한 걸음 걸었다는 것을 알려주는 역할이라고 보면 됩니다.
    public static boolean is_walking(){return true;}
    // 여기서는 60초가 되었다고 알려주는 역할이라고 보면 됩니다.
    public static boolean is_60_sec(){return true;}
    
    public static void main(String[] args) {       // 이것은 무시하세요
        
        // 1. 변수를 선언합니다
        final int target_steps = 0;    // 목표 걸음 수   (정수형 - 상수)
        int today_steps = 0;           // 오늘의 걸음 수  (정수형)
        double today_distances = 0.0;  // 오늘 걸은 거리  (정수형)
        int calory = 0;                // 칼로리         (정수형)
        int hours = 0;                 // 시간 (시)      (정수형)
        int minutes = 0;               // 시간 (분)      (정수형)
        char name= 0 ;                 // 이름           (문자형)
        
        // 2. 조건문 1과 조건문 2
        if (is_walking()){
            today_steps = today_steps + 1;
            calory = calory + 1;
            today_distances = today_distances + 1;
        }
        
        // 3. 조건문 3
        if (is_60_sec()){
            minutes = minutes + 1;
        }
        // 4. 조건문 4
        if (minutes == 60){
            minutes = 0;
            hours = hours + 1;
        }
        System.out.printf("걸음 수: %d\n", today_steps);
        System.out.printf("칼로리: %d\n", calory);
        System.out.printf("거리: %f\n", today_distances);
    }
}
