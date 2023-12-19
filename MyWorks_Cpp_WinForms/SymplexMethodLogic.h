#pragma once

void MethodMax(int size1, int size2, float* L, float** mas);

void InitSimplexMethod(int size1, int size2, float* L, float** mas)
{
	MethodMax(size1, size2, L, mas);
}

void MethodMax(int size1, int size2, float* L, float** mas)
{
	clock_t Time = clock();

	float* fx = new float[size2 + 2]; float* fxnull = new float[size2 + 2];

	float** Null = new float* [size2];
	for (int i = 0; i < size2; i++)
		Null[i] = new float[size1 + 3];

	ofstream out("Data.txt", ios::out);

	out << "\t\tСимплекс-метод линейного программирования (поиск максимума)" << endl << endl;

	out << "x = " << mas[0][size1 + 2] / (float)mas[0][0];
	out << "\ty = " << mas[0][size1 + 2] / (float)mas[0][1] << endl;
	out << "x = " << mas[1][size1 + 2] / (float)mas[1][0];
	out << "\ty = " << mas[1][size1 + 2] / (float)mas[1][1] << endl << endl;

	// Заполняем вспомогательные массивы
	for (int i = 0; i < size2; i++)
	{
		for (int j = 0; j < size1 + 3; j++)
		{
			Null[i][j] = mas[i][j];
			out << "\t" << mas[i][j];
		}
		out << "\n";
	}

	out << "\n\n";

	for (int i = 0; i < size1 + 2; i++)
	{
		fx[i] = i < size1 ? L[i] : 0;
		fxnull[i] = fx[i];

		out << "\t" << fx[i];
	}

	float max = 0, * vsp = new float[size2]; // vsp - для вычисления отношений
	int k1 = 0, k2 = 0, k = 1, sign = 0;
	bool flag = false;
	do
	{
		out << "\n\n\t\t Итерация - " << k << endl << endl;

		max = fx[0];
		for (int i = 0; i < size1 + 3; i++)
		{
			if (max <= fx[i])
			{
				max = fx[i];
				k1 = i; // Запоминаем индекс
			}
		}
		out << "\t\t max = " << max << endl << endl;

		out << "\t\t\t Отношение \n\n ";
		for (int i = 0; i < size2; i++)
		{
			vsp[i] = mas[i][size2 + 2] / mas[i][k1];
			out << "\tvsp = " << vsp[i];
		}

		max = vsp[0];
		for (int i = 0; i < size2; i++)
		{
			if (max <= vsp[i])
			{
				max = vsp[i];
				k2 = i; // Запоминаем индекс
			}
		}
		out << "\t\t max = " << max << "\n\n";

		if (mas[k2][k1] != 1)
			for (int j = 0; j < size1 + 3; j++)
				mas[k2][j] = Null[k2][j] / Null[k2][k1];
		for (int i = 0; i < size2; i++)
			for (int j = 0; j < size1 + 3; j++)
				Null[i][j] = mas[i][j];
		for (int i = 0; i < size2; i++)
		{
			if (Null[i][k1] > 0)
				sign = -1;
			else if (Null[i][k1] < 0)
				sign = 1;

			if (i == k2)
				continue;

			for (int j = 0; j < size1 + 3; j++)
				mas[i][j] = (Null[k2][j] * (sign * Null[i][k1])) + (-sign) * Null[i][j];
		}

		out << "\n\n";
		for (int i = 0; i < size2; i++)
		{
			for (int j = 0; j < size1 + 3; j++)
			{
				Null[i][j] = mas[i][j];
				out << "\t" << Null[i][j];
			}
			out << "\n";
		}

		for (int i = 0; i < size1 + 2; i++)
			fx[i] = (fxnull[k1] * (Null[k2][i])) - fxnull[i];
		for (int i = 0; i < size1 + 2; i++)
		{
			fxnull[i] = fx[i];
			out << "\t" << fx[i];
		}

		flag = false;
		for (int i = 0; i < size1 + 2; i++)
		{
			if (fxnull[i] > 0)
			{
				flag = true; //Если есть положительные элементы в целевой функции, то продолжаем работу
				break;
			}
		}
		k++;
	} while (flag != false);

	out << "\n\n\t\tОтвет\n\n";
	out << "\tx1 = " << mas[0][size2 + 2];
	out << "\tx2 = " << mas[1][size2 + 2];
	out << "\tx3 = " << 0;
	out << "\tx4 = " << 0;
	out << "\tf(x) = " << L[0] * mas[0][size2 + 2] + L[1] * mas[1][size2 + 2];

	for (int i = 0; i < size2; i++)
		delete[] Null[i];
	delete[] vsp;
	delete[] fx;
	delete[] fxnull;

	double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
	out << "\n\n\t\t Время выполнения: " << EndTime << endl;

	out.close();
}
