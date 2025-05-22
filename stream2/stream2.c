#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int nums[5] = { 1, 2, 3, 4, 5 };
	float f = 1.1;
	FILE* fp = fopen("numbers.dat", "wb");
	fwrite(nums, sizeof(int), 5, fp);
	fwrite(&f, sizeof(float), 1, fp);
	fclose(fp);
	int read_nums[5] = { 0 };
	float f2;
	fp = fopen("numbers.dat", "rb");
	fread(read_nums, sizeof(int), 5, fp);
	fread(&f2, sizeof(float), 1, fp);
	printf("%f ", f2);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", read_nums[i]);
	}
	fclose(fp);
	return 0;
}