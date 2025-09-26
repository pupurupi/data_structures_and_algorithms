import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // Создаем список для хранения оценок
        List<Integer> grades = new ArrayList<>();
        
        // Добавляем оценки в список
        grades.add(5);
        grades.add(4);
        grades.add(3);
        grades.add(5);
        grades.add(4);
        
        // Вычисляем сумму оценок
        int sum = 0;
        for(int grade : grades) {
            sum += grade;
        }
        
        // Вычисляем средний балл
        double average = (double) sum / grades.size();
        
        // Выводим результаты
        System.out.println("Оценки: " + grades);
        System.out.println("Сумма: " + sum);
        System.out.println("Средний балл: " + average);
    }
}