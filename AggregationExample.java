// Aggregation - it is  special form of association, one directional relationship, ONE WAY ASSOCIATION, HAS-A relationship
// example - money and wallet are two classes. wallet has money but money didn't need wallet.So it is one directional relationship.
// Address and Student

// composition - special case of Aggregation, without the existence of container object is called composition.



class Address
{
	int streetNo;
	String city, state, country;
	Address(int stNo, String city, String state, String country)
	{
		this.streetNo=stNo;
		this.city=city;
		this.state=state;
		this.country=country;
	}
}

class Student
{
	int studentId,age;
	Address ad;
	Student(int studentId,int age,Address ad)
	{
		this.studentId=studentId;
		this.age=age;
		this.ad=ad;
	}
	
	public static void main(String arg[])
	{
		Address add= new Address(101,"Shahabad","UP","india");
		Student sd= new Student(1101,14,add);
		System.out.println(sd.studentId+" "+sd.ad.city+" "+sd.ad.country);
	}
}