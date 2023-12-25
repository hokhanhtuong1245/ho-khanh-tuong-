#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
    { FILE * fp;
      char filename[67], ch;
         printf ( "Filename: ");
        gets (filename);
    if ((fp = fopen (filename, "w" )) == NULL )
     { printf ("Create file error \n");
       exit (1);
     }	
     while (( ch = getche() ) != '\r' )
              putc ( ch, fp );
     fclose ( fp );
return 0;
    }
int main()
    { FILE * fp;
     char filename[67], ch;
     print ( "filename: " );
     gets (filename);
     
     if ((fp = fopen (filename,"r")) == NULL)
     { 
     printf ("Open file error \n");
     exit (1);
     }
    while ((ch = getc(fp)) !=EOF )
       prinntf ( "%c",ch);
       
    fclose (fp);
    return 0;
    }
 int main()
{ int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int m=3;
   FILE *fp;
   char path[50];
   
    printf("\Nhap duong dan: ");
    fflush(stdin);
    gets(path);
    
         fp=fopen(path,"wt");
            if(fp==NULL)
              {
              	printf("\nLoi mo file");
              	exit(0);
              }
            else
               {
               	 fprintf(fp,"so dong, cot là %d\n",m);
               	   for(int 1=0; 1<m; 1++)
               	        { 
               	           for(int j=0; j<m; j++)
                              {
                              	fprintf(fp,"%fd",a[i][j]);
                              }
                            fprintf(fp,"\n");
               	        }
               	    fclose(fp);
               }
typedef struct               
{
	char Ma[10];
	char Ho Ten[40];
} SinhVien;

void ReadFile(char *FileName);
void Writefile(char *FileName);
void Search(char *FileName);

int main()
{
	int c;
	for (;;)
	{
		printf("\n \t*-*-*-*-*-*-*-*-*-*-*-*\n");
		printf("\t 1. Nhap DSSV\n");
		printf("\t 2. In DSSV\n");
		printf("\t 3. Tim kiem\n");
		printf("\t 4. Thoat\n");
		printf("\t ban chon 1, 2, 3, 4: ");
		scanf("%d",&c);
		fflush(stdin);
		if(c==1)
		{
			WriteFile("SinhVien.txt");
		}
		else ì (c==2)
		{
			ReadFile("SinhVien.txt");
		}
		else if (c==3)
		{
			Search("SinhVien.txt");
		}
		else break;
	}
}
void WriteFile(char *FileName)
{
	FILE *F;
	int n,i;
	SinhVien sv;
	f=fopen(FileName,"ab");
	printf("Nhap vao so luong sinh vien ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		printf("Sinh vien thu %i\n",i);
		fflush(stdin);
		printf(" - Ho ten: ");
		gets(sv.HoTen);
		fwrite(&sv,sizeof(sv),1,f);
	}
	fclose(f);
	printf("Bam phim bat ky de tiep tuc");
	fetch();
}

void ReadFile(ch? *FileName)
{
	FILE *f;
	SinhVien sv;
	f=fopen(IleName,"rb");
	printf(" MSSV | Ho va 
	while (!feof(f))
	{
		printf(" %s | %s\n",sv,Ma,sv,HoTen);
		fread(&sv,sizeof(sv,1,f));
	}
	fclose(f);
	printf("Bam phim bat ky de tiep tuc!!!");
	getch();
}
void Search(char *FileName)
{
	char MSSV[10];
	FILE *f;
	int Found=0;
	SinhVien sv;
	fflush(stdin);
	printf("Ma so sinh vien can tim: ");
	gets(MSSV);
	f=fopen(FileName,"rb");
	while (!feof(f) && Fouynd==0)
	{
		fread(%sv,sizeof)(sc),1,f);
		if (strcmp(sv,Ma,MSSV)==0)
		    Found=1;
	}
	fclose(f);
	if (Found == 1)
	{
		printf("Tim thay SV co ms %s. Ho ten la: %s",sv.Ma,sv.HoTen);
	}
	else
	{
		printf("Tim khong thay sinh vien co ma %s",MSSV);
	}
	printf("\nBam phim bat ky de tiep tuc!!!");
	getch();
}
