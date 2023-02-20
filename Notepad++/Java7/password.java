import java.lang.Thread;
class myThread1 extends Thread{
    public void run(){
        for(int i=0; i<=10; i+=2){
            System.out.println(i);
             try {
                 Thread.sleep(10);
                 }

                 catch(Exception e)
                 {
                     System.out.println(e);
                 }
        }
    }

}
class myThread2 extends Thread {
    public void run(){
        for(int i=1; i<=10; i+=2){
            System.out.println(i);
             try {
                 Thread.sleep(20);
                 }

                 catch(Exception e)
                 {
                     System.out.println(e);
                 }
        }
    }

}
class exp8 {
    public static void main(String[] args) {
        myThread1 t1 = new myThread1();
        myThread2 t2 = new myThread2();

        t1.start();
        t2.start();


    }
}
