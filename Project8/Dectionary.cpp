// ��������� ����
char* dectionary(
	int num,	// ����� ����� � ���������
	bool lag)	// ���� ���� true ����, ����� ���
{
	char safeWords[][201] =
	{
	"               ",
	"Hello          ",
	"������         ",
	"Cat            ",
	"���            ",
	"Dog            ",
	"������         ",
	"Table          ",
	"����           ",
	"Chair          ",
	"����           ",
	"Book           ",
	"�����          ",
	"Pen            ",
	"�����          ",
	"Pencil         ",
	"��������       ",
	"Window         ",
	"����           ",
	"Door           ",
	"�����          ",
	"Car            ",
	"������         ",
	"Bus            ",
	"�������        ",
	"Train          ",
	"�����          ",
	"Plane          ",
	"�������        ",
	"Computer       ",
	"���������      ",
	"Phone          ",
	"�������        ",
	"Music          ",
	"������         ",
	"Art            ",
	"���������      ",
	"Science        ",
	"�����          ",
	"Math           ",
	"����������     ",
	"School         ",
	"�����          ",
	"University     ",
	"�����������    ",
	"Hospital       ",
	"��������       ",
	"Restaurant     ",
	"��������       ",
	"Cinema         ",
	"���������      ",
	"Park           ",
	"����           ",
	"Beach          ",
	"����           ",
	"Mountain       ",
	"����           ",
	"River          ",
	"����           ",
	"Lake           ",
	"�����          ",
	"Summer         ",
	"����           ",
	"Winter         ",
	"����           ",
	"Spring         ",
	"�����          ",
	"Autumn         ",
	"�����          ",
	"Day            ",
	"����           ",
	"Night          ",
	"����           ",
	"Sun            ",
	"������         ",
	"Moon           ",
	"����           ",
	"Star           ",
	"������         ",
	"Cloud          ",
	"������         ",
	"Rain           ",
	"�����          ",
	"Snow           ",
	"����           ",
	"Wind           ",
	"�����          ",
	"Fire           ",
	"�����          ",
	"Earth          ",
	"�����          ",
	"Sky            ",
	"����           ",
	"Sea            ",
	"����           ",
	"Ocean          ",
	"�����          ",
	"Forest         ",
	"���            ",
	"Grass          ",
	"�����          ",
	"Flower         ",
	"������         ",
	"Tree           ",
	"������         ",
	"Bird           ",
	"�����          ",
	"Fish           ",
	"����           ",
	"Butterfly      ",
	"�������        ",
	"Bee            ",
	"�����          ",
	"Ant            ",
	"�������        ",
	"Elephant       ",
	"����           ",
	"Tiger          ",
	"����           ",
	"Lion           ",
	"���            ",
	"Monkey         ",
	"��������       ",
	"Giraffe        ",
	"�����          ",
	"Zebra          ",
	"�����          ",
	"Snake          ",
	"����           ",
	"Spider         ",
	"����           ",
	"Bear           ",
	"�������        ",
	"Wolf           ",
	"����           ",
	"Fox            ",
	"����           ",
	"Rabbit         ",
	"������         ",
	"Cow            ",
	"������         ",
	"Sheep          ",
	"����           ",
	"Chicken        ",
	"������         ",
	"Pig            ",
	"������         ",
	"Horse          ",
	"������         ",
	"Goat           ",
	"����           ",
	"Duck           ",
	"����           ",
	"Goose          ",
	"����           ",
	"Eagle          ",
	"����           ",
	"Owl            ",
	"����           ",
	"Fisherman      ",
	"�����          ",
	"Doctor         ",
	"������         ",
	"Teacher        ",
	"�������        ",
	"Engineer       ",
	"�������        ",
	"Lawyer         ",
	"�������        ",
	"Actor          ",
	"�����          ",
	"Singer         ",
	"�����          ",
	"Writer         ",
	"��������       ",
	"Painter        ",
	"��������       ",
	"Chef           ",
	"�����          ",
	"Waiter         ",
	"��������       ",
	"Driver         ",
	"��������       ",
	"Police         ",
	"�������        ",
	"Firefighter    ",
	"��������       ",
	"Soldier        ",
	"������         ",
	"Pilot          ",
	"�����          ",
	"Football       ",
	"������         ",
	"Basketball     ",
	"���������      ",
	"Tennis         ",
	"������         ",
	"Swimming       ",
	"��������       ",
	"Running        ",
	"���            ",
	};
	num *= 2;
	if ((lag) && (num))
		num--;

	return safeWords[num];
}