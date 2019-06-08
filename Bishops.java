//https://www.spoj.com/problems/BISHOPS/
//@bl!nd_m0n3y


import java.math.BigInteger;
import java.util.Scanner;

class Main{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		while(in.hasNextBigInteger()){
			BigInteger n=in.nextBigInteger();
			BigInteger one=new BigInteger("1");
			if(n.equals(one)){
				System.out.println(n);
			}
			else{
				BigInteger ans=n.multiply(new BigInteger("2")).subtract(new BigInteger("2"));
				System.out.println(ans);
			}
		}
	}
}
