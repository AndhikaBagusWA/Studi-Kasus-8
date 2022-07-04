#include <iostream>
using namespace std;

class Array2D{
  public:
    void input();
		void tukar(string &a, string &b);
		void gabung();
    void sorting();
    void output();

  private:
		string Matriks[100][100],temp,a,b,arr[25];
    int i,j,k;
    int baris,kolom;
};

void Array2D::input(){
  cout<<"Masukkan banyak data pada baris : ";cin>>baris;
  cout<<"Masukkan banyak data pada kolom : ";cin>>kolom;

  for(int i=0;i<baris;i++){
    for(int j=0;j<kolom;j++){
      cout<<"Masukkan data pada baris ke-"<<i+1<<" kolom ke-"<<j+1<<" : ";
      cin.ignore();
      getline(cin, Matriks[i][j]);
    }
  }
}

void Array2D::tukar(string &a, string &b){
	temp = a;
	a = b;
	b = temp;
}

void Array2D::sorting(){
  // mengurutkan dari kecil ke besar
	for(i=0; i<k; i++){ // for utk baris
		for(j=0; j<k; j++)
			{
				if(arr[j] > arr[j+1] )
				{
					tukar(arr[j], arr[j+1]);
				}
			}
	}
}

void Array2D::gabung(){
	for(i=0; i<baris; i++){ // for utk baris
		for(j=0; j<kolom; j++) // for kolom
			{
				arr[k] = Matriks[i][j];
				k++;
			}
	}
}


void Array2D::output(){
  cout<<"\n\nJenis Buku\t\tKode Buku\t\tJudul Buku"<<endl;
  for(i=0; i<baris; i++){
    for(j=0; j<kolom; j++){
      cout<<Matriks[i][j]<<"\t";
    }
    cout<<endl;
  }
}

int main() {
  Array2D x;
  x.input();
  x.output();
  return 0;
}