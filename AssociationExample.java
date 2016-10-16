// Association in Java -- relationship between two classes by different types such as one to one, many to many, one to many.
// it is something like the third class uses the object of both class in it by accessing its properties. JOINS TWO SEPERATE ENTITIES
// example car driver
class Car
{
	String carName;
	double carSpeed;
	int carId;
	public Car(String carName, double carSpeed, int carId)
	{
		this.carName=carName;
		this.carSpeed=carSpeed;
		this.carId=carId;
	}
}

class Driver
{
	String driverName;
	int driverId;
	Driver(String driverName, int driverId)
	{
		this.driverName=driverName;
		this.driverId=driverId;
	}
}

class TravelAgency
{
	public static void main(String arg[]){
	Driver d= new Driver("Anil",123);
	Car c=new Car("Ferrari",150,007);
	System.out.println(d.driverName+" will be the driver of car "+c.carName);
	}
}