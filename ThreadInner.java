class Thread1 extends Thread
{
	int x=0, y=0;
	public void run(){
		for(int i=0;i<10;i++){
		System.out.println(Thread.currentThread().getName()+": "+addX()+" "+addY());
		}
	}
	int addX(){x++; return x;}
	int addY(){y++; return y;}
	
	
}
class ThreadInner
{
	public static void main(String p[])
	{
		Thread1 t1= new Thread1();
		t1.start();
		Thread1 t2= new Thread1();
		t2.start();
	}
}