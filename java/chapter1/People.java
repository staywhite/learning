public class People{
	int height;
	String ear;
	void speak (String s){
		System.out.println(s);
	}
}
class A {
	public static void main (String args[]){
		People zhubajie;
		zhubajie = new People();
		zhubajie.height = 170;
		zhubajie.ear = "Two big ears";
		System.out.println("height:"+zhubajie.height);相当于C里面的printf("height%d",zhubajie.height);
		System.out.println(zhubajie.ear);
		zhubajie.speak("Boss,we can't go to xi tianG,let's go to moon space!!");	
	}
}