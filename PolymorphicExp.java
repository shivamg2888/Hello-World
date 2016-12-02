import static java.lang.System.out;
class Animal
{
	public Animal eat()
	{
		System.out.println("Animal can be veg/non-veg");
		return this;
	}
}
class Tiger extends Animal
{
	public Tiger eat(){
		System.out.println("Tiger only eats non-veg");		//static import works only in static methods only
		return this;
	}
}	
		
class PolymorphicExp
{
	public static void main(String p[]){
	out.println("co-varient example, overrind methods with different return type");
	Animal a= new Tiger();
	a.eat();
	
}
}