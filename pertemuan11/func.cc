import java.util.Scanner;
class Main{
	int statusTumbuh;
	int jumlahAir;
	int jumlahPupuk;
	
	public Main (){
		statusTumbuh=0;
		jumlahAir=0;
		jumlahPupuk=0;
	}
	public void beriAir(){
	jumlahAir++;
	cekKondisiTumbuh();

	}
	public void beriPupuk(){
	jumlahPupuk++;
	cekKondisiTumbuh();
	}
	public void cekKondisiTumbuh(){
	if(jumlahAir>=3&&jumlahPupuk>=1) {
	Tumbuh();
	}
	}
	public void Tumbuh (){
	if(statusTumbuh<4){
		jumlahAir = jumlahAir-3;
		jumlahPupuk=jumlahPupuk -1;
		statusTumbuh++;
	}
	} 
	public void displayPlant() {
	System.out.println(getStatusTumbuhText());
	System.out.println("Jumlah Air : " + jumlahAir);
	System.out.println("jumlah Pupuk : "+jumlahPupuk);
	System.out.println("  ");
	}


public String getStatusTumbuhText(){
    switch (statusTumbuh){
        case 0: return "Proses : Benih";
        case 1: return "Proses : Tunas";
        case 2: return "Proses : Tanaman Kecil";
        case 3: return "Proses : Tanaman Dewasa";
    }
    return "Proses : Berbunga";
}
public int getStatusTumbuh(){
	return statusTumbuh;
	}
	
    public static void main(String[] args) {
        Main p = new Main();
        Scanner sc = new Scanner (System.in);
        int inp = 0;
        do {
            System.out.println ("Pilihan :");
            System.out.println ("0 Untuk memberi air  <=>  1 Untuk memberi pupuk");
            System.out.print ("Masukkan :");
            
            inp = sc.nextInt();
            switch(inp){
                case 0: p.beriAir();
                    break;
                case 1: p.beriPupuk();
                    break;
            }
            p.displayPlant();
            
        }while (inp!=999);
    }
}