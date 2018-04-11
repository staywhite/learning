package student2;

import student1.Student;//导入包student，得到访问权；
import java.util.Scanner;
public class Test {
	public static void main (String args[]){
	Student stu1;
    stu1=new Student();
	long num1;
	String name1;
	Scanner in =new Scanner(System.in);
	System.out.print("输入该学生的学号");
	num1=in.nextLong();
	System.out.print("输入该学生的名字");
	name1=in.next();
	stu1.setter(num1,name1);
    stu1.getter(stu1);
	
	}
}


---------------------------------------------------------------------------------------
package student1;

//把Student类放到包student1中

public class Student {
     
    private long   number;//定义私密数据number;
    private String  name;//定义私密数据name;
   //创建公开方法setter 
public void setter(long number,String name){
    
      	this.number = number;
        this.name =name;
        return;
    }	 
    //创建公开方法 getter
    public void getter(Student stu){
    	System.out.println("该学生的名字"+this.name);
    	System.out.println("该学生的学号"+this.number);
    	return;
   }
}
