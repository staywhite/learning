import java.util.Scanner;

class Bank{
		
	    String id;
	    float balance;
		
	    //定义一个存款的方法
	    void cunkuan(float balance){
	    	
	    	Scanner in =new Scanner(System.in);
	    	float balance2;
	    	System.out.print("输入要存入的金额：");
	    	balance2=in.nextFloat();
	    	this.balance += balance2;
	    	 }
        
	    //定义一个取款方法；	   
	    public void qukuan(float balance){
	    	Scanner in =new Scanner(System.in);
	    	float balance2;
	    	System.out.print("输入要取出的金额：");
	    	balance2=in.nextFloat();
	    	this.balance -= balance2;
	    	}
	    //定义一个查询余额的方法:
	   public void check(float balance){
	    	System.out.println("该账户余额："+this.balance);
	   }
	  
	    
	   public void menu() {
			  
			System.out.println("***********请输入一个指令************");
			System.out.println("***********0.退出********************");
			System.out.println("***********1.存款********************");
			System.out.println("***********2.取款********************");
			System.out.println("***********3.查询余额****************");
			System.out.println("***********4.显示账号****************");
			}
	}


	class Account{
		 
		private String name;
		private String idcardNum;
		private String passWord;
	    //创建公开方法setter设置账户：
		public void setter(String name,String idcardNum, String passWord){
		    
	      	this.name = name;
	        this.idcardNum =idcardNum;
	        this.passWord = passWord;
	        return;
		}
		
		//创建公开方法 getter读取账户信息：
	    public void getter(Account acc ){
	    	System.out.println("该账户的名字："+this.name);
	    	System.out.println("该用户的身份证号："+this.idcardNum);
	    	System.out.println("该用户的密码："+passWord);
	    	return;
	      }
	    }
	    public class TestBankM {
		public static void main(String arg[]){
		Bank bank1 = new Bank();
	    Account acc1 = new Account();
		String name1="Jack";
		String password1 = "123456789";
		String idcardNum = "362502199802066613";
		acc1.setter(name1,password1,idcardNum);
		
		float balance1=0f;
		int code;
		
		Scanner in =new Scanner(System.in);
		for(;;) {
			bank1.menu();
			System.out.print("请输入一个指令：");
			code = in.nextInt();
			switch(code) {
			case 0:return;
			case 1:bank1.cunkuan(balance1);break;
			case 2:bank1.qukuan(balance1);break;
			case 3:bank1.check(balance1);break;
			case 4:acc1.getter(acc1);
			}
			
		}
	  }
	}
