#pragma once
#include <Windows.h>

namespace MyWorksCppWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SimplexLinearProgrammingMethod
	/// </summary>
	public ref class SimplexLinearProgrammingMethod : public System::Windows::Forms::Form
	{
	public:
		SimplexLinearProgrammingMethod(void)
		{
			InitializeComponent();

			InitDefaultMassive();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SimplexLinearProgrammingMethod()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->ItemSize = System::Drawing::Size(90, 18);
			this->tabControl1->Location = System::Drawing::Point(12, 165);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(620, 513);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->dataGridView2);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(612, 487);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Исходные данные";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ограничения";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(6, 209);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(600, 272);
			this->dataGridView2->TabIndex = 3;
			this->dataGridView2->CellValidating += gcnew System::Windows::Forms::DataGridViewCellValidatingEventHandler(this, &SimplexLinearProgrammingMethod::dataGridView2_CellValidating);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Целевая функция (fx)";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 30);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(600, 150);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellValidating += gcnew System::Windows::Forms::DataGridViewCellValidatingEventHandler(this, &SimplexLinearProgrammingMethod::dataGridView1_CellValidating);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(612, 487);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Решение";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(6, 6);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(600, 475);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = L"";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->chart1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(612, 487);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"График";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(6, 6);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"Series2";
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(600, 475);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Размерность целевой функции";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Количество ограничений";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(9, 51);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->MinimumSize = System::Drawing::Size(1, 0);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(90, 20);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(9, 113);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(90, 20);
			this->numericUpDown2->TabIndex = 5;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(329, 88);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 50);
			this->button1->TabIndex = 6;
			this->button1->Text = L"СОЗДАТЬ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SimplexLinearProgrammingMethod::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(477, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 50);
			this->button2->TabIndex = 7;
			this->button2->Text = L"РЕШИТЬ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SimplexLinearProgrammingMethod::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(620, 147);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// SimplexLinearProgrammingMethod
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 690);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"SimplexLinearProgrammingMethod";
			this->Text = L"SimplexLinearProgrammingMethod";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (numericUpDown1->Value <= 0) 
		{
			MessageBox::Show("Вы не ввели размер целевой функциих", "ОШИБКА");
			numericUpDown1->Value = 1;
		}
		if (numericUpDown2->Value <= 0)
		{
			MessageBox::Show("Вы не ввели количество ограничений", "ОШИБКА");
			numericUpDown2->Value = 1;
		}

		int size1 = Convert::ToInt32(numericUpDown1->Value);
		int size2 = Convert::ToInt32(numericUpDown2->Value);

		//Создаем таблицу под массив
		dataGridView1->ColumnCount = size1;
		dataGridView1->RowCount = 1;
		dataGridView2->ColumnCount = size1 + 3;
		dataGridView2->RowCount = size2;

		dataGridView1->Rows[0]->HeaderCell->Value = "f(x)";
		for (int i = 0; i < size1; i++)
			dataGridView1->Columns[i]->HeaderCell->Value = "x" + Convert::ToString(i + 1);

		for (int i = 0; i < size2; i++)
			dataGridView2->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
		for (int i = 0; i < dataGridView2->Columns->Count - 1; i++)
			dataGridView2->Columns[i]->HeaderCell->Value = "x" + Convert::ToString(i + 1);
		dataGridView2->Columns[dataGridView2->Columns->Count - 1]->HeaderCell->Value = "b";

		//Выравниваем ячейки таблицы
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView1->AutoResizeColumns();
		dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView2->AutoResizeColumns();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int size1 = Convert::ToInt32(numericUpDown1->Value);
		int size2 = Convert::ToInt32(numericUpDown2->Value);

		float* L = new float[size1];
		float** mas = new float* [size2];
		for (int i = 0; i < size2; i++)
			mas[i] = new float[size1 + 3];

		for (int i = 0; i < dataGridView1->ColumnCount; i++)
			L[i] = Convert::ToDouble(dataGridView1->Rows[0]->Cells[i]->Value);
		for (int i = 0; i < size2; i++)
			for (int j = 0; j < size1 + 3; j++)
				mas[i][j] = Convert::ToDouble(dataGridView2->Rows[i]->Cells[j]->Value);

		chart1->Series["Series1"]->Points->Clear();
		chart1->Series["Series2"]->Points->Clear();
		float x, y;
		x = mas[0][size1 + 2] / (float)mas[0][0];
		y = mas[0][size1 + 2] / (float)mas[0][1];
		this->chart1->Series["Series1"]->Points->AddXY(0, y);
		this->chart1->Series["Series1"]->Points->AddXY(x, 0);
		x = mas[1][size1 + 2] / (float)mas[1][0];
		y = mas[1][size1 + 2] / (float)mas[1][1];
		this->chart1->Series["Series2"]->Points->AddXY(0, y);
		this->chart1->Series["Series2"]->Points->AddXY(x, 0);

		InitSimplexMethod(size1, size2, L, mas);

		richTextBox1->Clear();
		richTextBox1->Text = System::IO::File::ReadAllText("Data.txt", System::Text::Encoding::GetEncoding(1251));

		for (int i = 0; i < size2; i++)
			delete[] mas[i]; 
		delete[] L;
	}

	private: System::Void InitDefaultMassive()
	{
		int size1 = Convert::ToInt32(numericUpDown1->Value);
		int size2 = Convert::ToInt32(numericUpDown2->Value);

		dataGridView1->ColumnCount = size1;
		dataGridView1->RowCount = 1;
		dataGridView2->ColumnCount = size1 + 3;
		dataGridView2->RowCount = size2;

		//Название таблицы в верхнем левом углу
		dataGridView1->TopLeftHeaderCell->Value = "L";
		dataGridView2->TopLeftHeaderCell->Value = "Ограничения";

		float fxmas[2] = {150, 35};
		dataGridView1->Rows[0]->HeaderCell->Value = "f(x)";
		for (int i = 0; i < size1; i++)
		{
			dataGridView1->Columns[i]->HeaderCell->Value = "x" + Convert::ToString(i + 1);
			dataGridView1->Rows[0]->Cells[i]->Value = fxmas[i];

			dataGridView2->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
		}
		for (int i = 0; i < dataGridView2->Columns->Count - 1; i++)
			dataGridView2->Columns[i]->HeaderCell->Value = "x" + Convert::ToString(i + 1);
		dataGridView2->Columns[dataGridView2->Columns->Count - 1]->HeaderCell->Value = "b";

		float mas[2][5] = { { 150, 200, -1, 0, 200 }, { 14, 4, 0, 1, 4 } };

		for (int i = 0; i < dataGridView2->Rows->Count; i++)
			for (int j = 0; j < dataGridView2->Columns->Count; j++)
				dataGridView2->Rows[i]->Cells[j]->Value = mas[i][j];

		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView1->AutoResizeColumns();
		dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView2->AutoResizeColumns();
	}

	private: System::Void dataGridView1_CellValidating(System::Object^ sender, System::Windows::Forms::DataGridViewCellValidatingEventArgs^ e) 
	{
		if (dataGridView1->Rows[e->RowIndex]->IsNewRow)
			return;
		
		int newInteger;
		if (!Int32::TryParse(e->FormattedValue->ToString(), newInteger))
		{
			dataGridView1->Rows[e->RowIndex]->ErrorText = "Введите число в поле";
			e->Cancel = true;
		}
	}

	private: System::Void dataGridView2_CellValidating(System::Object^ sender, System::Windows::Forms::DataGridViewCellValidatingEventArgs^ e) 
	{
		if (dataGridView2->Rows[e->RowIndex]->IsNewRow)
			return;
	
		int newInteger;
		if (!Int32::TryParse(e->FormattedValue->ToString(), newInteger))
		{
			dataGridView2->Rows[e->RowIndex]->ErrorText = "Введите число в поле";
			e->Cancel = true;
		}
	}
};
}
