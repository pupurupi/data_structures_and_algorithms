public class Main {
    public static void main(String[] args) {
        // Исходная строка
        String str = "AaBbCcDdEe";
        
        // Получаем заглавные буквы
        StringBuilder uppercase = new StringBuilder();
        for (int i = 0; i < str.length(); i += 2) {
            uppercase.append(str.charAt(i));
        }
        
        // Получаем строчные буквы
        StringBuilder lowercase = new StringBuilder();
        for (int i = 1; i < str.length(); i += 2) {
            lowercase.append(str.charAt(i));
        }
        
        // Выводим результаты
        System.out.println("Исходная строка: " + str);
        System.out.println("Заглавные буквы: " + uppercase.toString());
        System.out.println("Строчные буквы: " + lowercase.toString());
    }
}