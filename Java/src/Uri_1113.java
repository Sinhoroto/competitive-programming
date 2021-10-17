import java.util.Scanner;

public class Uri_1113 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int aux=0;

        if(a>b){
            for(b=b;b<=a;b++){
                if(b%13!=0){
                    aux = aux +b;
                }
            }
        }else if(b>a){
            for(a=a;a<=b;a++){
                if(a%13!=0){
                    aux = aux +a;
                }
            }
        }else{
            if(a%13!=0){
                aux = aux +b;
            }
        }
        System.out.println(aux);
    }
}
