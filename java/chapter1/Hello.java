public class Hello{
	public static void main(String args[]){
		System.out.println ("hello every one!");
		System.out.println("nice to meet you ");
		Student stu = new Student();
		stu.speak("We are students");
	}	
}
	class Student{
	
		public void speak(String s){
			System.out.println(s);
		}
	}
		