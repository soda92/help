public class ClassTest {
    public static child t1 = new child();
    public static void main(String[] args) {
        new child();
    }
}

class child {
    {
        System.out.println("a");
    }
    static {
        System.out.println("b");
    }
}