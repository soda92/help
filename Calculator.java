import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        int a, b;
        char c;
        Scanner reader = new Scanner(System.in);
        System.out.println("请输入第一个数:");
        a = reader.nextInt();
        System.out.println("请输入要进行的运算:");
        c = reader.next().charAt(0);
        System.out.println("请输入第二个数:");
        b = reader.nextInt();
        Cal cal = new Cal(a, b);
        reader.close();

        switch (c) {
            case '+':
                System.out.println(a + "+" + b + "=" + cal.add());
                break;
            case '-':
                System.out.println(a + "-" + b + "=" + cal.sub());
                break;
            case '*':
                System.out.println(a + "*" + b + "=" + cal.mul());
                break;
            case '/':
                if (0 == b) {
                    System.out.println("除数为0");
                } else {
                    System.out.println(a + "/" + b + "=" + cal.div());
                }
                break;
            default:
                System.out.println("输入错误");

        }
    }
}

class Cal {
    int x, y;

    Cal(int a, int b) {
        x = a;
        y = b;
    }

    int add() {
        return x + y;
    }

    int sub() {
        return x - y;
    }

    int mul() {
        return x * y;
    }

    int div() {
        return x / y;
    }
}