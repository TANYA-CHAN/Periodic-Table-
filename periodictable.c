#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
struct element
{

char name[20];

char symbol[4];

int atomicnum;

float atomicwt;

}atom[118];


extern void table()
{

strcpy(atom[0].name,"HYDROGEN");

strcpy(atom[0].symbol,"H");

atom[0].atomicnum=1;

atom[0].atomicwt=1.008;


strcpy(atom[1].name,"HELIUM");

strcpy(atom[1].symbol,"He");

atom[1].atomicnum=2;

atom[1].atomicwt=4.00;

strcpy(atom[2].name,"LITHIUM");

strcpy(atom[2].symbol,"Li");

atom[2].atomicnum=3;

atom[2].atomicwt=6.94;
strcpy(atom[3].name,"BERYLLIUM");

strcpy(atom[3].symbol,"Be");

atom[3].atomicnum=4;

atom[3].atomicwt=9.01;
strcpy(atom[4].name,"BORON");

strcpy(atom[4].symbol,"B");

atom[4].atomicnum=5;

atom[4].atomicwt=10.81;
strcpy(atom[5].name,"CARBON");

strcpy(atom[5].symbol,"C");

atom[5].atomicnum=6;

atom[5].atomicwt=12.01;
strcpy(atom[6].name,"NITROGEN");

strcpy(atom[6].symbol,"N");

atom[6].atomicnum=7;

atom[6].atomicwt=14.00;
strcpy(atom[7].name,"OXYGEN");

strcpy(atom[7].symbol,"O");

atom[7].atomicnum=8;

atom[7].atomicwt=15.59;
strcpy(atom[8].name,"FLUORINE");

strcpy(atom[8].symbol,"F");

atom[8].atomicnum=9;

atom[8].atomicwt=18.99;

strcpy(atom[9].name,"NEON");

strcpy(atom[9].symbol,"Ne");

atom[9].atomicnum=10;

atom[9].atomicwt=20.18;
strcpy(atom[10].name,"SODIUM");

strcpy(atom[10].symbol,"Na");

atom[10].atomicnum=11;

atom[10].atomicwt=22.99;
strcpy(atom[11].name,"MAGNESIUM");

strcpy(atom[11].symbol,"Mg");

atom[11].atomicnum=12;

atom[11].atomicwt=24.30;
strcpy(atom[12].name,"ALUMINIUM");

strcpy(atom[12].symbol,"Al");

atom[12].atomicnum=13;

atom[12].atomicwt=1.008;


strcpy(atom[13].name,"SILICON");

strcpy(atom[13].symbol,"Si");

atom[13].atomicnum=14;

atom[13].atomicwt=28.08;
strcpy(atom[14].name,"PHOSPHOROUS");

strcpy(atom[14].symbol,"P");

atom[14].atomicnum=15;

atom[14].atomicwt=30.97;
strcpy(atom[15].name,"SULPHUR");

strcpy(atom[15].symbol,"S");

atom[15].atomicnum=16;

atom[15].atomicwt=32.06;
strcpy(atom[16].name,"CHLORINE");

strcpy(atom[16].symbol,"Cl");

atom[16].atomicnum=17;

atom[16].atomicwt=35.45;
strcpy(atom[17].name,"ARGON");

strcpy(atom[17].symbol,"Ar");

atom[17].atomicnum=18;

atom[17].atomicwt=39.94;
strcpy(atom[18].name,"POTASSIUM");

strcpy(atom[18].symbol,"K");

atom[18].atomicnum=19;

atom[18].atomicwt=39.09;
strcpy(atom[19].name,"CALICUM");

strcpy(atom[19].symbol,"Ca");

atom[19].atomicnum=20;

atom[19].atomicwt=40.07;
strcpy(atom[20].name,"SCANDIUM");

strcpy(atom[20].symbol,"Sc");

atom[20].atomicnum=21;

atom[20].atomicwt=44.95;

strcpy(atom[21].name,"TITANIUM");

strcpy(atom[21].symbol,"Ti");

atom[21].atomicnum=22;

atom[21].atomicwt=47.86;
strcpy(atom[22].name,"VANADIUM");

strcpy(atom[22].symbol,"V");

atom[22].atomicnum=23;

atom[22].atomicwt=50.94;
strcpy(atom[23].name,"CHROMIUM");

strcpy(atom[23].symbol,"Cr");

atom[23].atomicnum=24;

atom[23].atomicwt=51.99;
strcpy(atom[24].name,"MANGANESE");

strcpy(atom[24].symbol,"Mg");

atom[24].atomicnum=25;

atom[24].atomicwt=54.84;
strcpy(atom[25].name,"IRON");

strcpy(atom[25].symbol,"Fe");

atom[25].atomicnum=26;

atom[25].atomicwt=55.84;

strcpy(atom[26].name,"COBALT");

strcpy(atom[26].symbol,"Co");

atom[26].atomicnum=27;

atom[26].atomicwt=58.93;
strcpy(atom[27].name,"NICKEL");

strcpy(atom[27].symbol,"Ni");

atom[27].atomicnum=28;

atom[27].atomicwt=58.69;
strcpy(atom[28].name,"COPPER");

strcpy(atom[28].symbol,"Cu");

atom[28].atomicnum=29;
atom[28].atomicwt=63.54;
strcpy(atom[29].name,"ZINC");

strcpy(atom[29].symbol,"Zn");

atom[29].atomicnum=30;

atom[29].atomicwt=65.39;
strcpy(atom[30].name,"GALLIUM");

strcpy(atom[30].symbol,"Ga");

atom[30].atomicnum=31;

atom[30].atomicwt=69.72;

strcpy(atom[31].name,"GERMANIUM");

strcpy(atom[31].symbol,"Ge");

atom[31].atomicnum=32;

atom[31].atomicwt=72.64;
strcpy(atom[32].name,"ARSENIC");

strcpy(atom[32].symbol,"As");

atom[32].atomicnum=33;

atom[32].atomicwt=74.92;
strcpy(atom[33].name,"SELENIUM");

strcpy(atom[33].symbol,"Se");

atom[33].atomicnum=34;

atom[33].atomicwt=78.96;

strcpy(atom[34].name,"BROMINE");

strcpy(atom[34].symbol,"Br");

atom[34].atomicnum=35;

atom[34].atomicwt=79.90;

strcpy(atom[35].name,"KRYPTON");

strcpy(atom[35].symbol,"Kr");

atom[35].atomicnum=36;

atom[35].atomicwt=83.80;
strcpy(atom[36].name,"RUBIDIUM");

strcpy(atom[36].symbol,"Rb");

atom[36].atomicnum=37;

atom[36].atomicwt=85.46;
strcpy(atom[37].name,"STRONTIUM");

strcpy(atom[37].symbol,"Sr");

atom[37].atomicnum=38;

atom[37].atomicwt=87.62;
strcpy(atom[38].name,"YTTRIUM");

strcpy(atom[38].symbol,"Y");

atom[38].atomicnum=39;

atom[38].atomicwt=88.90;

strcpy(atom[39].name,"ZIRCONIUM");

strcpy(atom[39].symbol,"Zr");

atom[39].atomicnum=40;

atom[39].atomicwt=91.22;
strcpy(atom[40].name,"NIOBIUM");

strcpy(atom[40].symbol,"Nb");

atom[40].atomicnum=41;

atom[40].atomicwt=92.90;
strcpy(atom[41].name,"MOLYBDENUM");

strcpy(atom[41].symbol,"Mo");

atom[41].atomicnum=42;

atom[41].atomicwt=95.94;
strcpy(atom[42].name,"TECHNETIUM");

strcpy(atom[42].symbol,"Tc");

atom[42].atomicnum=43;

atom[42].atomicwt=98.00;
strcpy(atom[43].name,"RUTHENIUM");

strcpy(atom[43].symbol,"Ru");

atom[43].atomicnum=44;

atom[43].atomicwt=101.07;

strcpy(atom[44].name,"RHODIUM");

strcpy(atom[44].symbol,"Rh");

atom[44].atomicnum=45;

atom[44].atomicwt=102.90;
strcpy(atom[45].name,"PALLADIUM");

strcpy(atom[45].symbol,"Pd");

atom[45].atomicnum=46;

atom[45].atomicwt=106.42;

    strcpy(atom[46].name,"SILVER");

    strcpy(atom[46].symbol,"Ag");

    atom[46].atomicnum=47;

    atom[46].atomicwt=107.86;

    strcpy(atom[47].name,"CADMIUM");

    strcpy(atom[47].symbol,"Cd");

    atom[47].atomicnum=48;

    atom[47].atomicwt=112.41;

    strcpy(atom[48].name,"INDIUM");

    strcpy(atom[48].symbol,"In");

    atom[48].atomicnum=49;

    atom[48].atomicwt=114.81;

    strcpy(atom[49].name,"TIN");

    strcpy(atom[49].symbol,"Sn");

    atom[49].atomicnum=50;

    atom[49].atomicwt=118.71;

    strcpy(atom[50].name,"ANTIMONY");

    strcpy(atom[50].symbol,"Sb");

    atom[50].atomicnum=51;

    atom[50].atomicwt=121.76;

    strcpy(atom[51].name,"TELLURIUM");

    strcpy(atom[51].symbol,"Te");

    atom[51].atomicnum=52;

    atom[51].atomicwt=127.60;

    strcpy(atom[52].name,"IODINE");

    strcpy(atom[52].symbol,"I");

    atom[52].atomicnum=53;

    atom[52].atomicwt=126.90;

    strcpy(atom[53].name,"XENON");

    strcpy(atom[53].symbol,"Xe");

    atom[53].atomicnum=54;

    atom[53].atomicwt=131.29;

    strcpy(atom[54].name,"CESIUM");

    strcpy(atom[54].symbol,"Cs");

    atom[54].atomicnum=55;

    atom[54].atomicwt=132.906;

    strcpy(atom[55].name,"BARIUM");

    strcpy(atom[55].symbol,"Ba");

    atom[55].atomicnum=56;

    atom[55].atomicwt=137.372;

    strcpy(atom[56].name,"LANTHANUM");

    strcpy(atom[56].symbol,"La");

    atom[56].atomicnum=57;

    atom[56].atomicwt=138.906;

    strcpy(atom[57].name,"CERIUM");

    strcpy(atom[57].symbol,"Ce");

    atom[57].atomicnum=58;

    atom[57].atomicwt=140.116;

    strcpy(atom[58].name,"PRASEODYMIUM");

    strcpy(atom[58].symbol,"Pr");

	atom[58].atomicnum=59;

	atom[58].atomicwt=140.906;

	strcpy(atom[59].name,"NEODYMIUM");

	strcpy(atom[59].symbol,"Nd");

	atom[59].atomicnum=60;

	atom[59].atomicwt=144.240;

	strcpy(atom[60].name,"PROMETHIUM");

	strcpy(atom[60].symbol,"Pm");

	atom[60].atomicnum=61;

	atom[60].atomicwt=145.000;

	strcpy(atom[61].name,"SAMARIUM");

	strcpy(atom[61].symbol,"Sm");

	atom[61].atomicnum=62;

	atom[61].atomicwt=150.36;

	strcpy(atom[62].name,"EUROPIUM");

	strcpy(atom[62].symbol,"Eu");

	atom[62].atomicnum=63;

	atom[62].atomicwt=151.96;

	strcpy(atom[63].name,"GADOLINIUM");

	strcpy(atom[63].symbol,"Gd");

	atom[63].atomicnum=64;

	atom[63].atomicwt=157.25;

	strcpy(atom[64].name,"SAMARIUM");

	strcpy(atom[64].symbol,"Sm");

	atom[64].atomicnum=65;

	atom[64].atomicwt=150.36;

	strcpy(atom[65].name,"DYSPROSIUM");

	strcpy(atom[65].symbol,"Dy");

	atom[65].atomicnum=66;

	atom[65].atomicwt=162.50;

	strcpy(atom[66].name,"HOLMINM");

	strcpy(atom[66].symbol,"Ho");

	atom[66].atomicnum=67;

	atom[66].atomicwt=164.93;

	strcpy(atom[67].name,"ERBIUM");

	strcpy(atom[67].symbol,"Er");

	atom[67].atomicnum=68;

	atom[67].atomicwt=167.25;

	strcpy(atom[68].name,"THULIUM");

	strcpy(atom[68].symbol,"Tm");

	atom[68].atomicnum=69;

	atom[68].atomicwt=168.93;
	strcpy(atom[69].name,"YTTERBIUM");

	strcpy(atom[69].symbol,"Yb");

	atom[69].atomicnum=70;

	atom[69].atomicwt=173.04;

	strcpy(atom[70].name,"LUTETIUM");

	strcpy(atom[70].symbol,"Lu");

	atom[70].atomicnum=71;

	atom[70].atomicwt=174.96;
	strcpy(atom[71].name,"HAFNIUM");

	strcpy(atom[71].symbol,"Hf");

	atom[71].atomicnum=72;

	atom[71].atomicwt=178.49;

	strcpy(atom[72].name,"TANTALUM");

	strcpy(atom[72].symbol,"Ta");

	atom[72].atomicnum=73;

	atom[72].atomicwt=180.94;
	strcpy(atom[73].name,"TUNGSTEN");

	strcpy(atom[73].symbol,"Lu");

	atom[73].atomicnum=74;

	atom[73].atomicwt=174.96;

	strcpy(atom[74].name,"RHENIUM");

	strcpy(atom[74].symbol,"Re");

	atom[74].atomicnum=75;

	atom[74].atomicwt=186.84;

	strcpy(atom[75].name,"OSMIUM");

	strcpy(atom[75].symbol,"Os");

	atom[75].atomicnum=76;

	atom[75].atomicwt=190.23;

	strcpy(atom[76].name,"IRIDIUM");

	strcpy(atom[76].symbol,"Ir");

	atom[76].atomicnum=77;

	atom[76].atomicwt=192.21;

	strcpy(atom[77].name,"PLATINUM");

	strcpy(atom[77].symbol,"Pt");

	atom[77].atomicnum=78;

	atom[77].atomicwt=195.07;

	strcpy(atom[78].name,"GOLD");

	strcpy(atom[78].symbol,"Au");

	atom[78].atomicnum=79;

	atom[78].atomicwt=196.96;

	strcpy(atom[79].name,"MERCURY");

	strcpy(atom[79].symbol,"Hg");

	atom[79].atomicnum=80;

	atom[79].atomicwt=200.59;


	strcpy(atom[80].name,"THALLIUM");

	strcpy(atom[80].symbol,"Tl");

	atom[80].atomicnum=81;

	atom[80].atomicwt=201.38;

	strcpy(atom[81].name,"LEAD");

	strcpy(atom[81].symbol,"Pb");

	atom[81].atomicnum=82;

	atom[81].atomicwt=201.20;

	strcpy(atom[82].name,"BISMITH");

	strcpy(atom[82].symbol,"Bi");

	atom[82].atomicnum=83;

	atom[82].atomicwt=208.98;

	strcpy(atom[83].name,"POLONIUM");

	strcpy(atom[83].symbol,"Po");

	atom[83].atomicnum=84;

	atom[83].atomicwt=209.00;

	strcpy(atom[84].name,"Astatine");

	strcpy(atom[84].symbol,"At");

	atom[84].atomicnum=85;

	atom[84].atomicwt=210.00;

	strcpy(atom[85].name,"RADON");

	strcpy(atom[85].symbol,"Rn");

	atom[85].atomicnum=86;

	atom[85].atomicwt=222.00;

	strcpy(atom[86].name,"FRANCIUM");

	strcpy(atom[86].symbol,"Fr");

	atom[86].atomicnum=87;

	atom[86].atomicwt=223.00;

	strcpy(atom[87].name,"RADIUM");

	strcpy(atom[87].symbol,"Ra");

	atom[87].atomicnum=88;

	atom[87].atomicwt=226.00;

	strcpy(atom[88].name,"ACTINIUM");

	strcpy(atom[88].symbol,"Ac");

	atom[88].atomicnum=89;

	atom[88].atomicwt=227.00;

	strcpy(atom[89].name,"THORIUM");

	strcpy(atom[89].symbol,"Th");

	atom[89].atomicnum=90;

	atom[89].atomicwt=232.03;

	strcpy(atom[90].name,"PROTACTINIUM");

	strcpy(atom[90].symbol,"Pa");

	atom[90].atomicnum=91;

	atom[90].atomicwt=231.03;

	strcpy(atom[91].name,"URANIUM");

	strcpy(atom[91].symbol,"U");

	atom[91].atomicnum=92;

	atom[91].atomicwt=238.02;

	strcpy(atom[92].name,"NEPTUNIUM");

	strcpy(atom[92].symbol,"Np");

	atom[92].atomicnum=93;

	atom[92].atomicwt=237.00;

	strcpy(atom[93].name,"PLUTONIUM");

	strcpy(atom[93].symbol,"Pu");

	atom[93].atomicnum=94;

	atom[93].atomicwt=244.00;

	strcpy(atom[94].name,"AMERICIUM");

	strcpy(atom[94].symbol,"Am");

	atom[94].atomicnum=95;

	atom[94].atomicwt=243.00;

	strcpy(atom[95].name,"CURIUM");

	strcpy(atom[95].symbol,"Cm");

	atom[95].atomicnum=96;

	atom[95].atomicwt=247.00;

	strcpy(atom[96].name,"BERKELIUM");

	strcpy(atom[96].symbol,"Bk");

	atom[96].atomicnum=97;

	atom[96].atomicwt=247.00;

	strcpy(atom[97].name,"CALIFONIUM");

	strcpy(atom[97].symbol,"Cf");

	atom[97].atomicnum=98;

	atom[97].atomicwt=251.00;

	strcpy(atom[98].name,"EINSTEINIUM");

	strcpy(atom[98].symbol,"Es");

	atom[98].atomicnum=99;

	atom[98].atomicwt=252.00;

	strcpy(atom[99].name,"FERMIUM");

	strcpy(atom[99].symbol,"Fm");

	atom[99].atomicnum=257.00;

	atom[99].atomicwt=231.03;

	strcpy(atom[100].name,"MENDELEVIUM");

	strcpy(atom[100].symbol,"Md");

	atom[100].atomicnum=101;

	atom[100].atomicwt=258.00;

	strcpy(atom[101].name,"NOBELIUM");

	strcpy(atom[101].symbol,"Np");

	atom[101].atomicnum=102;

	atom[101].atomicwt=259.00;

	strcpy(atom[102].name,"LAWRENCIUM");

	strcpy(atom[102].symbol,"Lr");

	atom[102].atomicnum=103;

	atom[102].atomicwt=262.00;

	strcpy(atom[103].name,"RUTHERFORDIUM");

	strcpy(atom[103].symbol,"Rf");

	atom[103].atomicnum=104;

	atom[103].atomicwt=261.00;

	strcpy(atom[104].name,"DUBNIUM");

	strcpy(atom[104].symbol,"Db");

	atom[104].atomicnum=105;

	atom[104].atomicwt=262.00;
	strcpy(atom[105].name,"SEABORGIUM");

	strcpy(atom[105].symbol,"Sg");

	atom[105].atomicnum=106;

	atom[105].atomicwt=266.00;

	strcpy(atom[106].name,"BOHRIUM");

	strcpy(atom[106].symbol,"Bh");

	atom[106].atomicnum=107;

	atom[106].atomicwt=264.00;

	strcpy(atom[107].name,"HASSSIUM");

	strcpy(atom[107].symbol,"Hs");

	atom[107].atomicnum=108;

	atom[107].atomicwt=277.00;
	strcpy(atom[108].name,"Meinerium");

	strcpy(atom[108].symbol,"Mt");

	atom[108].atomicnum=109;

	atom[108].atomicwt=268.00;
}
int i;

void search();

void clrscr() {
    system("@cls||clear");
}

void newScreen() {
	clrscr();
	int width = 132;
	char str[] = "\033[31;1;51;4mPERIODIC TABLE\033[0m\n";
	int length = sizeof(str) - 1;
	int pad = (length >= width) ? 0 : (width - length) / 2;
	printf("%*.*s%s\n", pad, pad, " ", str);
	for(int i=0; i<10; i++){
		printf("\n");
	}
}

void quit() {
	newScreen();
	char ans[5];
	printf("\033[31mARE YOU SURE YOU WANT TO QUIT?\033[0m");
	scanf("%s",ans);
	if (tolower(ans[0])=='y'){
		printf("\n\n\n\n\033[35mTHANK YOU\033[0m\n\n");
	} else {
		main();
	}
}

void again() {
	char ans1[5];
	printf("\n\n\n\n\033[32mSEARCH FOR A DIFFERENT ELEMENT? : \033[0m");
	scanf("%s",ans1);
	if (tolower(ans1[0])=='y'){
		search();
	} else {
		quit();
	}
	printf("\n\n\n\n\n\n\n\n\n\n");
}

void info1() {
	newScreen();
	char ele[20];
	printf("\033[32mENTER THE ELEMENT'S NAME : \033[0m");
	scanf("%s",ele);
	for (i=0; i<118; i++) {
		if (strcmp(atom[i].name,ele)==0){
			printf("\033[34m\n\n\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[34m\n\n\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[34m\n\n\tATOMIC NUMBER : %d\033[0m\n",atom[i].atomicnum);
			printf("\033[34m\n\n\tATOMIC WEIGHT : %f\033[0m\n",atom[i].atomicwt);
			break;
		}
	}
	again();
}

void info2() {
	newScreen();
	char sym[1];
	printf("\033[32mENTER THE ELEMENT'S SYMBOL : \033[0m");
	scanf("%s",sym);
	for (i=0; i<118; i++) {
		if (strcmp(atom[i].symbol,sym)==0){
			printf("\033[34m\n\n\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[34m\n\n\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[34m\n\n\tATOMIC NUMBER : %d\033[0m\n",atom[i].atomicnum);
			printf("\033[34m\n\n\tATOMIC WEIGHT : %f\033[0m\n",atom[i].atomicwt);
			break;
		}
	}
	again();
}

void info3() {
	newScreen();
	int atn;
	printf("\033[32mENTER THE ELEMENT'S ATOMIC NUMBER : \033[0m");
	scanf("%d",&atn);
	for (i=0; i<118; i++) {
		if (atom[i].atomicnum==atn){
			printf("\033[34m\n\n\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[34m\n\n\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[34m\n\n\tATOMIC NUMBER : %d\033[0m\n",atom[i].atomicnum);
			printf("\033[34m\n\n\tATOMIC WEIGHT : %f\033[0m\n",atom[i].atomicwt);
			break;
		}
	}
	again();
}

void info4() {
	newScreen();
	float atwt;
	printf("\033[32mENTER THE ELEMENT'S ATOMIC WEIGHT : \033[0m");
	scanf("%f",&atwt);
	for (i=0; i<118; i++) {
		if (atom[i].atomicwt==atwt){
			printf("\033[34m\n\n\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[34m\n\n\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[34m\n\n\tATOMIC NUMBER : %d\033[0m\n",atom[i].atomicnum);
			printf("\033[34m\n\n\tATOMIC WEIGHT : %f\033[0m\n",atom[i].atomicwt);
			break;
		}
	}
	again();
}

void search() {
	newScreen();
	printf("\033[33mSREACH BY :- \033[0m\n\n");
	printf("\033[34m\t1 -> ELEMENT\033[0m\n");
	printf("\033[34m\t2 -> SYMBOL\033[0m\n");
	printf("\033[34m\t3 -> ATOMIC NUMBER\033[0m\n");
	printf("\033[34m\t4 -> ATOMIC WEIGHT\033[0m\n\n\n\n");
	int choice2;
	printf("\033[32mYOUR CHOICE : \033[0m");
	scanf("%d",&choice2);
	if (choice2==1){
		info1();
	} else if (choice2==2){
		info2();
	} else if (choice2==3){
		info3();
	} else if (choice2==4){
		info4();
	} else {
		search();
	}
}

void addele()
{
    int i=109;
    char newname[25],nsymbol[25];
    int natwt,natnum;
    printf("Enter the name of the new element\n");
    scanf("%s",newname);
    for(int j=0;j<118;j++)
    {
        if(strcmp(atom[i].name,newname)==0)
            printf("The element already exists\n");
        else
            break;
    }
    printf("Enter the symbol of the new element\n");
    scanf("%s",&nsymbol);
    for(int j=0;j<118;j++)
    {
        if(strcmp(atom[i].symbol,nsymbol)==0)
            printf("The element already exists\n");
        else
            break;
    }
    printf("Enter the atomic number\n");
    scanf("%d",&natnum);
    for(int j=0;j<118;j++)
    {
        if (atom[i].atomicnum==natnum)
            printf("The element already exists\n");
        else
            break;
    }
    printf("Enter the atomic weight\n");
    scanf("%d",&natwt);
    for (i=0; i<118; i++)
    {
		if (atom[i].atomicwt==natwt)
            printf("The element already exists\n");
        else
            break;
    }
    strcpy(atom[109].name,newname);
    strcpy(atom[109].symbol,nsymbol);
    atom[109].atomicnum=natnum;
    atom[109].atomicwt=natwt;
    printf("The element is successfully added\n");

}

void display()
{
    int i=0,n=0;
    while(i<2)
    {
        printf("%s",atom[i].symbol);
        for(int n=0;n<31;n++)
            printf("\t");
        printf("%s\n",atom[i+1].symbol);
        i=i+2;
    }
    while(i<10)
    {
       printf("%s\t",atom[i].symbol);
       i++;
       printf("%s",atom[i].symbol);
       for(int j=0;j<27;j++)
            printf("\t");
       for(i=4;i<10;i++)
       {
        printf("%s\t",atom[i].symbol);
       }
       printf("\n");

    }
    while(i<18)
    {
       printf("%s\t",atom[i].symbol);
       i++;
       printf("%s\t",atom[i].symbol);
       for(int j=0;j<27;j++)
            printf("\t");
       for(i=12;i<18;i++)
       {
        printf("%s\t",atom[i].symbol);
       }
       printf("\n");
    }
    while(i<54)
    {
        while(n<18)
        {
            printf("%s\t",atom[i].symbol);
            n++;
            i++;
        }
        n=0;
        printf("\n");
    }
    while(i<118)
    {
        printf("%s\t",atom[i].symbol);
        printf("%s\t",atom[i+1].symbol);
        printf("%s\t",atom[i+2].symbol);
        i=i+3;
        for(i=71;i<86;i++)
            {printf("%s\t",atom[i].symbol);}
        printf("\n");
        printf("%s\t",atom[i].symbol);
        printf("%s\t",atom[i+1].symbol);
        printf("%s\t",atom[i+2].symbol);
        i=i+3;
        for(i=103;i<118;i++)
            printf("%s\t",atom[i].symbol);
        printf("\n\n");
    }
    while(i<103)
    {
        for(i=57;i<71;i++)
            {printf("%s\t",atom[i].symbol);
            }
        printf("\n");
        {for(i=89;i<103;i++)
            printf("%s\t",atom[i].symbol);
        }
    }

}
int compare()
{
int ch;
printf("Element Atomic Number\n");
scanf("%d",&ch);
    if(ch==1 || ch==3 || ch==11 || ch==19 || ch==37 || ch==55 || ch==87)
  {
   printf("IT IS A METAL");
 }
   else if(ch==5 || ch==14 || ch==32 || ch==33 || ch==51 || ch==52 || ch==84)
       {
    printf("IT IS A METALLOID");
    }
     else if(ch==4 || ch==12 || ch==20 || ch==38 || ch==56 || ch==88)
         {
  printf("IT IS A METAL");
  }
  else if(ch==21 || ch==39 || ch==57 || ch==89)
 {
printf("IT IS A METAL");
 }
  else if(ch==22 || ch==40 || ch==72 || ch==104)
 {
  printf("IT IS A METAL");
       }
  else if(ch==23 || ch==41 || ch==73 || ch==105)
   {
          printf("IT IS A METAL,");
   }
      else if(ch==24 || ch==42 || ch==74 || ch==106)
  {
          printf("IT IS A METAL");
  }
   else if(ch==25 || ch==43 || ch==75 || ch==107)
   {
    printf("IT IS A METAL");
  }
     else if(ch==26 || ch==44 || ch==76 || ch==108)
     {
       printf("IT IS A METAL");
         }
   else if(ch==27 || ch==45 || ch==77 || ch==109)
    {
   printf("IT IS A METAL");
      }
  else if(ch==28 || ch==46 || ch==78 || ch==110)
  {
      printf("IT IS A METAL");
            }
     else if(ch==29 || ch==47 || ch==79 || ch==111)
  {
printf("IT IS A METAL");
}
else if(ch==30 || ch==48 || ch==80 || ch==112)
{
printf("IT IS A METAL");
}
else if(ch==5 || ch==13 || ch==31 || ch==49 || ch==81 || ch==113)
{
 printf("IT IS A NON-METAL");
  }
  else if(ch==6 || ch==14 || ch==32 || ch==50 || ch==82 || ch==114)
   {
   printf("IT IS A NON-METAL");
  }
  else if(ch==7 || ch==15 || ch==33 || ch==51 || ch==83 || ch==115)
 {
 printf("IT IS A NON-METAL");
}
else if(ch==8 || ch==16 || ch==34 || ch==52 || ch==84 || ch==116)
{
printf("IT IS A NON-METAL");
 }
   else if(ch==9 || ch==17 || ch==35 || ch==53 || ch==85 || ch==117)
{
 printf("IT IS A NON-METAL");
 }
  else if(ch==2 || ch==10 || ch==18 || ch==36 || ch==54 || ch==86 || ch==118)
 {
printf("IT IS A NON-METAL");
 }
}
int main() {
	newScreen();
	printf("\033[34m1 -> EXPLORE\033[0m\n");
	printf("\033[34m2 -> ADD NEW ELEMENT\n");
	printf("\033[34m3 -> COMPARE THE ELEMENT BASED ON ATOMIC NUMBER\n");
	printf("\033[34m4 -> DISPLAY PERIODIC TABLE\n");
	printf("\033[34m5 -> QUIT\033[0m\n\n\n\n");
	int choice1;
	printf("\033[32mYOUR CHOICE : \033[0m");
	scanf("%d",&choice1);
	table();
	if (choice1==1){
		search();
	}
	else if(choice1==2)
    {
        addele();
    }
    else if(choice1==3)
    {
        compare();
    }
	 else if(choice1==4)
    {
       display();
    }
    else if(choice1==5)
    {
        quit();
    }

	else{
		main();
	}
}