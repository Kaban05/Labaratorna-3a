//1.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <Windows.h>

void main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char* locale = setlocale(LC_ALL, "");

    float var1, var2;
    printf("������ ����� ����� (var1): ");
    scanf("%f", &var1);
    printf("������ ���� ����� (var2): ");
    scanf("%f", &var2);
    printf("varl > var2 �� %d\n", var1 > var2);
    printf("var1 <var2 �� %d\n", var1 < var2);
    printf("varl var2 �� %d\n", var1 = var2);
    printf("var1 >= var2 �� %d\n", var1 >= var2);
    printf("varl <= var2 �� %d\n", var1 <= var2);
    printf("varl != var2 �� %d\n", var1 != var2);
    printf("!var1 �� %d\n", !var1);
    printf("!var2 �� %d\n", !var2);
    printf("var1  var2 �� %d\n", var1 || var2);
    printf("varl && var2 �� %d\n", var1 && var2);

    return 0;
}

//2.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#define TRUE "������"
#define FALSE "���Ͳ���"

void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char* locale = setlocale(LC_ALL, "");

    float var1, var2;
    printf("Enter the first number (var1): ");
    scanf("%f", &var1);

    printf("Enter the second number (var2): ");
    scanf("%f", &var2);

    printf("var1 > var2 is %s\n", var1 > var2 ? TRUE : FALSE);
    printf("var1 < var2 is %s\n", var1 < var2 ? TRUE : FALSE);
    printf("var1 = var2 is %s\n", var1 == var2 ? TRUE : FALSE);
    printf("var1 >= var2 is %s\n", var1 >= var2 ? TRUE : FALSE);
    printf("var1 <= var2 is %s\n", var1 <= var2 ? TRUE : FALSE);
    printf("var1 != var2 is %s\n", var1 != var2 ? TRUE : FALSE);
    printf("var1 == var2 is %s\n", var1 == var2 ? TRUE : FALSE);
    printf("var1 && var2 is %s\n", var1 && var2 ? TRUE : FALSE);
    printf("!var1 is %s\n", !var1 ? TRUE : FALSE);
    printf("!var2 is %s\n", !var2 ? TRUE : FALSE);

}

//3. �����: �������� �������� ��� ��������� ����� �������� int x, y, z; x = 2; y = 1; z = 0; x = x && y  z; printf("%d\n", x); printf("%d\n", x  !y && z);

#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <Windows.h>
#define TRUE "������"
#define FALSE "���Ͳ���"
void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int x, y, z;
    x = 2;
    y = 1;
    z = 0;

    x = x && y || z;
    printf("%d\n", x);

    printf("%d\n", x || !y && z);

    return 0;
}


//4. zavdanna

//�)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void main()
{
    int a = 0, b = 3, c;

    c = b % 2 || (a >= 0) && (++b / 2 * a) == 0;

    printf("a=%d, c=%d\n", a, c); /* a=0, c=1 */
}


//�) 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 1, b = 0, c;
    c = b * 2 || (a >= 0) && (++b * a) == 0;
    printf("c=%d\n", c); /* c=0 */
}



//�)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void main()
{
    int x = 1, y = 2, z;
    z = (x / 2 * 7 <= 0) && (y < 0) || (y % x == 0);
    printf("z=%d\n", --z); /* z=0 */
}


  //  �)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

    void main()
{
    int x = 1, z, b = 0, y = 2;
    z = (x++ * y >= 0) || b++ || (x / y * 3 == 0);
    printf("z=%d\n", z); /* z=1 */
}



//�) 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void main()
{
    int x = 1, y = 0, z = 2, a = 0;

    z = ((a = x++) * y == 0 || a < 0 && z);

    printf("z=%d\n", z); /* z=1 */
}


    //�) 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

    void main()
{
    int x = 2, z, y = 0;
    z = (x = 0) && (y = x) || (y > 0);
    printf("z=%d\n", z); /* z=0 */
}



//�) 
#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include<stdio.h>
void main()
{
    int x = 0, y = 3, z; z = (++x > y || y-- && y > 0);
    printf("z=%d\n", z); /*z=1*/
}


//5 ��������
//���������� ��� :
#include <stdio.h>
#include <conio.h>
void main()
{
    unsigned int x = 2, y = 1, z = 3, res;
    char chx = 0xAF;
    printf("%u\n", x & y | z); x - y - z - 2; /*3*/
    printf("%u\n", xy & z); x = 3; y = 0; z = 1; /*2*/
    printf("x^y/~z=%u\n", x ^ y / ~z); /*65535*/
    printf("3/0^~1=%u\n", x | y ^ ~z); /*65535=11111111*/
    x = 1;y = 2;z = 0;
    printf("1&2/0=%u\n", x & y | z); /*0*/
    printf("~1^2&0=%u\n", ~x ^ y & z); /*65534-11111110*/
    printf("2|0&1=%u\n", y | z & x); /*2*/

    printf("2++&~0~1=%u\n", y++ & ~z~x);/*65534-11111110*/ printf("~3|1&++0=%u\n", ~y / x & ++z); /*65533=11111101*/ x = 0xAF; printf("%X\n", x >> 4); /*A*/ chx <<= 7; printf("0x=%X\n", chx); /*(FF)80=10000000*/
    getch();
}


//����������� ��� :
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#pragma warning(disable : 4996)
void main()
{
    unsigned int x = 2, y = 1, z = 3, res;
    char chx = 0xAF;

    printf("%u\n", x & y | z); // ����������: ����� x - y - z - 2 ������� �������� ���������
    res = x - y - z - 2; // ����������: ��������� x - y - z - 2 ���������� � ����� res
    printf("%u\n", res); // ���� ���������� res

    printf("%u\n", x * y & z); // ����������: �������� xy&z ������� �� x * y & z
    x = 3; // ����������: x ������ ���� �������� 3
    y = 0; // ����������: y ������ ���� �������� 0
    z = 1; // ����������: z ������ ���� �������� 1
    printf("x^y/~z=%u\n", x ^ y / ~z); // ����������: ~z ������� �� ~z
    printf("3/0^~1=%u\n", x | y ^ ~z); // ����������: ~z ������� �� ~z

    x = 1;
    y = 2;
    z = 0;
    printf("1&2/0=%u\n", x & y | z);
    printf("~1^2&0=%u\n", ~x ^ y & z); // ����������: ~z ������� �� ~z
    printf("2|0&1=%u\n", y | z & x);
    printf("2++&~0~1=%u\n", y++ & ~z & ~x); // ����������: y++&~z~x ������� �� y++ & ~z & ~x
    printf("~3|1&++0=%u\n", ~y / x & ++z); // ����������: ~y/x&++z ������� �� ~y / x & ++z

    x = 0xAF;
    printf("%X\n", x >> 4); // ���� ������� 4 ��� ����� x
    chx <<= 7; // ����������: ���� �� 7 ��� ����
    printf("0x=%X\n", chx); // ���� ����������
    getch();
}


//���������� ��� :
#include <stdio.h>
#include <conio.h>
void main()
{
    char x = 255, y = 0177; printf("%u\n", x & y);/*127*/ x = '(tm)'; y = 017; printf("%u\n", x & ~y);/*65424*/ y = 127; printf("%u\n", x & y);/*->*/
    y = 128;
    printf("%u\n", x | y);/*193*/
}


//����������� ��� :
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void main()
{
    char x = 255, y = 0177;
    printf("%u\n", (unsigned char)x & (unsigned char)y); /* 127 */

    x = '('; // ��������� ������ � ������ ASCII
    y = 017; // �������� ��������� (���������� ��������)
    printf("%u\n", (unsigned char)x & ~(unsigned char)y); /* 65424 */

    y = 127;
    printf("%u\n", (unsigned char)x & (unsigned char)y); /* 65 */

    y = 128;
    printf("%u\n", (unsigned char)x | (unsigned char)y); /* 193 */
}
