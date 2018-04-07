【实验内容】
1、设计图书信息类Book，并应用主类BookMis去操作图书信息。
图书信息数据：图书名称、图书编著者、出版社、图书价格、订购数量
图书提供的操作：图书入库、图书查找、图书显示、图书借出、图书归还等
2、设计一个通讯录类AddressBook，并应用主类AddressMis去操作有关的功能。
通讯录数据：姓名、手机、电话、 email
提供的操作：添加联系人、 显示联系人、 按姓名查找联系人
1.源程序

import java.util.Scanner;
import java.util.Scanner;

//设计图书信息类Book，并应用主类BookMis去操作图书信息。
//	图书信息数据：图书名称、图书编著者、出版社、图书价格、订购数量
//图书提供的操作：图书入库、图书查找、图书显示、图书借出、图书归还等

class Book{
	String name;
	String author;
	String publish;
	float price;
	int on_hand;

	public
	void addBook(){
		System.out.print("请输入一本书的名字：");
		Scanner reader=new Scanner(System.in);
		name=reader.next();
		System.out.print("请输入书本的作者:");
		author=reader.next();
		System.out.print("请输入书本的出版社:");
		publish=reader.next();
		System.out.print("请输入书本的价格: ");
		price=reader.nextFloat();
		System.out.print("请输入书本的数量:");
		on_hand=reader.nextInt();
		}
	
	void menu(){
		  
		System.out.println("***********请输入一个指令************");
		System.out.println("***********1.书本入库****************");
		System.out.println("***********2.图书查找****************");
		System.out.println("***********3.图书显示****************");
		System.out.println("***********4.图书借出****************");
		System.out.println("***********5.图书归还****************");
	
	}
	void searchBook(Book book[]) {
		Scanner reader=new Scanner(System.in);
		System.out.print("请输入书名:");
		String inputName=reader.next();
		for(int i=0;i<book.length;i++) {
			if(inputName.equals(book[i].name))//数组元素为空的情况下要改成这种判断方式，位置调换；
			{
				System.out.println("书本已经被找到！！！");
			return;
			}
			    }
		System.out.println("这本书不在书库里！！！");
		}
	
	void printBook(Book book[]) {
		System.out.println("下面是书库的所有图书");
		for(int i=0;i<100;i++) {
			if (book[i].price==0)
			return;
			System.out.println("书本的名字："+book[i].name);
			System.out.println("书本的作者："+book[i].author);
			System.out.println("书本的出版社："+book[i].publish);
			System.out.println("书本的价格："+book[i].price);
			System.out.println("书本的数量："+book[i].on_hand);
			
		}
			
		
	}

	void borrowBook(Book book[]) {
		Scanner reader=new Scanner(System.in);
		System.out.print("输入要借的书名:");
		String borrowName=reader.next();
		for(int i=0;i<book.length;i++) {
			if(borrowName.equals(book[i].name))
			{		book[i].on_hand--;
				System.out.println("借书成功!!!");
				return;
			}
				System.out.println("对不起，书库里没有此书！！");
		
				
		}
			
	}
	void returnBook(Book book[]) {
		Scanner reader=new Scanner(System.in);
		System.out.print("输入归还的书名:");
		String returnName=reader.next();
		for(int i=0;i<book.length;i++) {
			if(returnName.equals(book[i].name))
				book[i].on_hand++;
		System.out.println("还书成功!!!");
		return;
		}
				
		
		
	}

} 

	
	

public class BookMis {
	public static void main(String args[]){
	
	Scanner in=new Scanner(System.in);
	Book book1[]= new Book[100];
	for(int i=0;i<100;i++)
	{
		book1[i]=new Book();
	}
	Book tester=new Book();
	Book add = new Book();
	Book use = new Book();
	
	
	int i=0;
		
	for(;;)
		{int code;
		tester.menu();
		
		System.out.print("输入一个命令:");
	Scanner reader=new Scanner(System.in);
	code = reader.nextInt();	
	switch (code) {
	case 0:	System.exit(1);
	case 1:
		book1[i].addBook();
		i++;
		break;
	case 2:add.searchBook(book1);break;
	case 3:use.printBook(book1);break;
	case 4:use.borrowBook(book1);break;
	case 5:use.returnBook(book1);break;
	
            	};
	   }
	
 }
	}

2.源程序
import java.util.Scanner;

/*设计一个通讯录类AddressBook，并应用主类AddressMis去操作有关的功能。
通讯录数据：姓名、手机、电话、 email
提供的操作：添加联系人、 显示联系人、 按姓名查找联系人
*/
class AddressBook{
	String name;
	String tel;
	String phone;
	String email;
	
	
	void search(AddressBook book[]) {
		
		
	}
	void add() {
		Scanner reader=new Scanner(System.in);
		System.out.print("请输入名字：");
		name=reader.next();
		System.out.print("手机号码:");
		tel=reader.next();
		System.out.print("电话:");
		phone=reader.next();
		System.out.print("Email: ");
		email=reader.next();
		
		
	}
	void print(AddressBook book[]) {
		
		Scanner reader=new Scanner(System.in);
		System.out.print("请输入名字:");
		String inputName=reader.next();
		for(int i=0;i<book.length;i++) {
			if(inputName.equals(book[i].name))//数组元素为空的情况下要改成这种判断方式，位置调换；
			{
				System.out.println("该联系人已经被找到！！！");
			return;
			}
			    }
		System.out.println("该联系人尚未存在！！！");
		}
	void menu() {
		  
				System.out.println("***********请输入一个指令************");
				System.out.println("***********1.添加联系人****************");
				System.out.println("***********2.查找联系人****************");
				System.out.println("***********3.显示联系人****************");
				}
	
	}
 
public class AddressMis {
	public static void main(String args[]){
	
	Scanner in=new Scanner(System.in);
	AddressBook book1[]=new AddressBook[100];
	AddressBook tester=new AddressBook();
	
	for(int i=0;i<100;i++)
	{
		book1[i]=new AddressBook();
	}
	int i=0;
	
	for(;;)
		{int code;
		tester.menu();
		
		System.out.print("输入一个命令:");
	Scanner reader=new Scanner(System.in);
	code = reader.nextInt();	
	switch (code) {
	case 0:	System.exit(1);
	case 1:
		book1[i].add();
		i++;
		break;
	case 2:tester.search(book1);break;
	case 3:tester.print(book1);break;
	
	
	
                     }
              }
	}
3.}