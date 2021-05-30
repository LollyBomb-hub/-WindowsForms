#pragma once


#include "AskInfo.h"


#include <stdio.h>
#include <conio.h>
#include <string>
#include <malloc.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>


using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;


typedef struct
{
	unsigned long id;
	std::string name;
	std::string lastname;
	std::string surname;
	unsigned long salary;
	unsigned short experience;
	std::string birth;
	std::string passport;
	std::string responsible;
} field;


long sum = 0;
int NColor, len;
System::ConsoleColor Color;
map<string, field> ans3;
map<string, double> ans_last;
map<string, field> :: iterator it;
map<string, double> ::iterator itl;
vector<field> rows;
field ans1;
field ans2;


string str_convert(Object^ o)
{
	string res((char*)(void*)Marshal::StringToHGlobalAnsi(o->ToString()));
	return res;
}

int int_convert(Object^ o)
{
	return Int32::Parse((*o).ToString());
}

bool comp(field f1, field f2)
{
	string s1 = f1.name + f1.lastname + f1.surname;
	string s2 = f2.name + f2.lastname + f2.surname;
	return strcmp(s1.c_str(), s2.c_str()) <= 0;
}

bool comp_dates(string d1, string d2)
{
	int day1, mon1, year1;
	int day2, mon2, year2;
	int date1, date2;
	sscanf(d1.c_str(), "%d.%d.%d", &day1, &mon1, &year1);
	date1 = year1*10000 + mon1*100 + day1;
	sscanf(d2.c_str(), "%d.%d.%d", &day2, &mon2, &year2);
	date2 = year2*10000 + mon2*100 + day2;
	return date1 > date2;
}


namespace KR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  questionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Data::DataSet^  dataSet1;
	private: System::Data::DataTable^  dataTable1;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;









	private: System::Windows::Forms::DataGridViewTextBoxColumn^  idDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nameDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  lastnameDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  surnameDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  salaryDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  experienceinyearsDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dateofBirthDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  passportDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  responsibleDataGridViewTextBoxColumn;

	private: System::Data::DataColumn^  dataColumn1;
	private: System::Data::DataColumn^  dataColumn2;
	private: System::Data::DataColumn^  dataColumn3;
	private: System::Data::DataColumn^  dataColumn4;
	private: System::Data::DataColumn^  dataColumn5;
	private: System::Data::DataColumn^  dataColumn6;
	private: System::Data::DataColumn^  dataColumn7;
	private: System::Data::DataColumn^  dataColumn8;
	private: System::Data::DataColumn^  dataColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  _Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  _Lastname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  _Surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  _Salary;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  _Experience_in_years;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  _Date_of_Birth;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  _Passport;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  _Responsible;
	private: System::Windows::Forms::ToolStripMenuItem^  наибольшаяЗарплатаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  самыйСтарыйРаботникToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  списокСамыхзажиточныхСотрудниковПоОтделамToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  алфавитныйСписокВсехСотрудниковToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  алфавитныйСписокВОбратномПорядкеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  списокСотрудниковАдминистрацииToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  диаграммаРаспределененияЗпПоОтделамToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->questionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->наибольшаяЗарплатаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->самыйСтарыйРаботникToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->списокСамыхзажиточныхСотрудниковПоОтделамToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->алфавитныйСписокВсехСотрудниковToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->алфавитныйСписокВОбратномПорядкеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->списокСотрудниковАдминистрацииToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->диаграммаРаспределененияЗпПоОтделамToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->_Lastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->_Surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->_Salary = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->_Experience_in_years = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->_Date_of_Birth = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->_Passport = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->_Responsible = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->dataColumn4 = (gcnew System::Data::DataColumn());
			this->dataColumn5 = (gcnew System::Data::DataColumn());
			this->dataColumn6 = (gcnew System::Data::DataColumn());
			this->dataColumn7 = (gcnew System::Data::DataColumn());
			this->dataColumn8 = (gcnew System::Data::DataColumn());
			this->dataColumn9 = (gcnew System::Data::DataColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataTable1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->questionsToolStripMenuItem, this->exitToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(509, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->openToolStripMenuItem, 
				this->closeToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->closeToolStripMenuItem->Text = L"Close";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::closeToolStripMenuItem_Click);
			// 
			// questionsToolStripMenuItem
			// 
			this->questionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->наибольшаяЗарплатаToolStripMenuItem, 
				this->самыйСтарыйРаботникToolStripMenuItem, this->списокСамыхзажиточныхСотрудниковПоОтделамToolStripMenuItem, this->алфавитныйСписокВсехСотрудниковToolStripMenuItem, 
				this->алфавитныйСписокВОбратномПорядкеToolStripMenuItem, this->списокСотрудниковАдминистрацииToolStripMenuItem, this->диаграммаРаспределененияЗпПоОтделамToolStripMenuItem});
			this->questionsToolStripMenuItem->Enabled = false;
			this->questionsToolStripMenuItem->Name = L"questionsToolStripMenuItem";
			this->questionsToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->questionsToolStripMenuItem->Text = L"Questions";
			// 
			// наибольшаяЗарплатаToolStripMenuItem
			// 
			this->наибольшаяЗарплатаToolStripMenuItem->Name = L"наибольшаяЗарплатаToolStripMenuItem";
			this->наибольшаяЗарплатаToolStripMenuItem->Size = System::Drawing::Size(372, 22);
			this->наибольшаяЗарплатаToolStripMenuItem->Text = L"Наибольшая зарплата";
			this->наибольшаяЗарплатаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::наибольшаяЗарплатаToolStripMenuItem_Click);
			// 
			// самыйСтарыйРаботникToolStripMenuItem
			// 
			this->самыйСтарыйРаботникToolStripMenuItem->Name = L"самыйСтарыйРаботникToolStripMenuItem";
			this->самыйСтарыйРаботникToolStripMenuItem->Size = System::Drawing::Size(372, 22);
			this->самыйСтарыйРаботникToolStripMenuItem->Text = L"Самый старый работник в отделе";
			this->самыйСтарыйРаботникToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::самыйСтарыйРаботникToolStripMenuItem_Click);
			// 
			// списокСамыхзажиточныхСотрудниковПоОтделамToolStripMenuItem
			// 
			this->списокСамыхзажиточныхСотрудниковПоОтделамToolStripMenuItem->Name = L"списокСамыхзажиточныхСотрудниковПоОтделамToolStripMenuItem";
			this->списокСамыхзажиточныхСотрудниковПоОтделамToolStripMenuItem->Size = System::Drawing::Size(372, 22);
			this->списокСамыхзажиточныхСотрудниковПоОтделамToolStripMenuItem->Text = L"Список самых \"зажиточных\" сотрудников по отделам";
			this->списокСамыхзажиточныхСотрудниковПоОтделамToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::списокСамыхзажиточныхСотрудниковПоОтделамToolStripMenuItem_Click);
			// 
			// алфавитныйСписокВсехСотрудниковToolStripMenuItem
			// 
			this->алфавитныйСписокВсехСотрудниковToolStripMenuItem->Name = L"алфавитныйСписокВсехСотрудниковToolStripMenuItem";
			this->алфавитныйСписокВсехСотрудниковToolStripMenuItem->Size = System::Drawing::Size(372, 22);
			this->алфавитныйСписокВсехСотрудниковToolStripMenuItem->Text = L"Алфавитный список всех сотрудников";
			this->алфавитныйСписокВсехСотрудниковToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::алфавитныйСписокВсехСотрудниковToolStripMenuItem_Click);
			// 
			// алфавитныйСписокВОбратномПорядкеToolStripMenuItem
			// 
			this->алфавитныйСписокВОбратномПорядкеToolStripMenuItem->Name = L"алфавитныйСписокВОбратномПорядкеToolStripMenuItem";
			this->алфавитныйСписокВОбратномПорядкеToolStripMenuItem->Size = System::Drawing::Size(372, 22);
			this->алфавитныйСписокВОбратномПорядкеToolStripMenuItem->Text = L"Алфавитный список в обратном порядке";
			this->алфавитныйСписокВОбратномПорядкеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::алфавитныйСписокВОбратномПорядкеToolStripMenuItem_Click);
			// 
			// списокСотрудниковАдминистрацииToolStripMenuItem
			// 
			this->списокСотрудниковАдминистрацииToolStripMenuItem->Name = L"списокСотрудниковАдминистрацииToolStripMenuItem";
			this->списокСотрудниковАдминистрацииToolStripMenuItem->Size = System::Drawing::Size(372, 22);
			this->списокСотрудниковАдминистрацииToolStripMenuItem->Text = L"Список сотрудников \"Администрации\"";
			this->списокСотрудниковАдминистрацииToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::списокСотрудниковАдминистрацииToolStripMenuItem_Click);
			// 
			// диаграммаРаспределененияЗпПоОтделамToolStripMenuItem
			// 
			this->диаграммаРаспределененияЗпПоОтделамToolStripMenuItem->Name = L"диаграммаРаспределененияЗпПоОтделамToolStripMenuItem";
			this->диаграммаРаспределененияЗпПоОтделамToolStripMenuItem->Size = System::Drawing::Size(372, 22);
			this->диаграммаРаспределененияЗпПоОтделамToolStripMenuItem->Text = L"Диаграмма распределенения з.п. по отделам";
			this->диаграммаРаспределененияЗпПоОтделамToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::диаграммаРаспределененияЗпПоОтделамToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(509, 324);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(501, 298);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Contents";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {this->dataGridViewTextBoxColumn1, 
				this->_Name, this->_Lastname, this->_Surname, this->_Salary, this->_Experience_in_years, this->_Date_of_Birth, this->_Passport, 
				this->_Responsible});
			this->dataGridView1->DataMember = L"staff";
			this->dataGridView1->DataSource = this->dataSet1;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(501, 302);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->Visible = false;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->DataPropertyName = L"_id";
			this->dataGridViewTextBoxColumn1->HeaderText = L"_id";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// _Name
			// 
			this->_Name->DataPropertyName = L"_Name";
			this->_Name->HeaderText = L"_Name";
			this->_Name->Name = L"_Name";
			// 
			// _Lastname
			// 
			this->_Lastname->DataPropertyName = L"_Lastname";
			this->_Lastname->HeaderText = L"_Lastname";
			this->_Lastname->Name = L"_Lastname";
			// 
			// _Surname
			// 
			this->_Surname->DataPropertyName = L"_Surname";
			this->_Surname->HeaderText = L"_Surname";
			this->_Surname->Name = L"_Surname";
			// 
			// _Salary
			// 
			this->_Salary->DataPropertyName = L"_Salary";
			this->_Salary->HeaderText = L"_Salary";
			this->_Salary->Name = L"_Salary";
			// 
			// _Experience_in_years
			// 
			this->_Experience_in_years->DataPropertyName = L"_Experience_in_years";
			this->_Experience_in_years->HeaderText = L"_Experience_in_years";
			this->_Experience_in_years->Name = L"_Experience_in_years";
			// 
			// _Date_of_Birth
			// 
			this->_Date_of_Birth->DataPropertyName = L"_Date_of_Birth";
			this->_Date_of_Birth->HeaderText = L"_Date_of_Birth";
			this->_Date_of_Birth->Name = L"_Date_of_Birth";
			// 
			// _Passport
			// 
			this->_Passport->DataPropertyName = L"_Passport";
			this->_Passport->HeaderText = L"_Passport";
			this->_Passport->Name = L"_Passport";
			// 
			// _Responsible
			// 
			this->_Responsible->DataPropertyName = L"_Responsible";
			this->_Responsible->HeaderText = L"_Responsible";
			this->_Responsible->Name = L"_Responsible";
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"staff";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->dataTable1});
			// 
			// dataTable1
			// 
			this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(9) {this->dataColumn1, this->dataColumn2, 
				this->dataColumn3, this->dataColumn4, this->dataColumn5, this->dataColumn6, this->dataColumn7, this->dataColumn8, this->dataColumn9});
			cli::array< System::String^ >^ __mcTemp__1 = gcnew cli::array< System::String^  >(1) {L"_id"};
			this->dataTable1->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {(gcnew System::Data::UniqueConstraint(L"Constraint1", 
				__mcTemp__1, true))});
			this->dataTable1->PrimaryKey = gcnew cli::array< System::Data::DataColumn^  >(1) {this->dataColumn1};
			this->dataTable1->TableName = L"staff";
			// 
			// dataColumn1
			// 
			this->dataColumn1->AllowDBNull = false;
			this->dataColumn1->ColumnName = L"_id";
			// 
			// dataColumn2
			// 
			this->dataColumn2->ColumnName = L"_Name";
			// 
			// dataColumn3
			// 
			this->dataColumn3->ColumnName = L"_Lastname";
			// 
			// dataColumn4
			// 
			this->dataColumn4->ColumnName = L"_Surname";
			// 
			// dataColumn5
			// 
			this->dataColumn5->ColumnName = L"_Salary";
			// 
			// dataColumn6
			// 
			this->dataColumn6->ColumnName = L"_Experience_in_years";
			// 
			// dataColumn7
			// 
			this->dataColumn7->ColumnName = L"_Date_of_Birth";
			// 
			// dataColumn8
			// 
			this->dataColumn8->ColumnName = L"_Passport";
			// 
			// dataColumn9
			// 
			this->dataColumn9->ColumnName = L"_Responsible";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(501, 298);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"List";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(501, 298);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(501, 298);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Diagram";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT * FROM staff";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Александр\\Documents\\mydb.a" 
				L"ccdb";
			this->oleDbConnection1->InfoMessage += gcnew System::Data::OleDb::OleDbInfoMessageEventHandler(this, &Form1::oleDbConnection1_InfoMessage);
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = L"INSERT INTO `staff` (`_Name`, `_Lastname`, `_Surname`, `_Salary`, `_Experience_in" 
				L"_years`, `_Date_of_Birth`, `_Passport`, `_Responsible`) VALUES (\?, \?, \?, \?, \?, \?" 
				L", \?, \?)";
			this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(8) {(gcnew System::Data::OleDb::OleDbParameter(L"_Name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"_Name")), (gcnew System::Data::OleDb::OleDbParameter(L"_Lastname", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"_Lastname")), (gcnew System::Data::OleDb::OleDbParameter(L"_Surname", System::Data::OleDb::OleDbType::VarWChar, 0, L"_Surname")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"_Salary", System::Data::OleDb::OleDbType::Integer, 0, L"_Salary")), (gcnew System::Data::OleDb::OleDbParameter(L"_Experience_in_years", 
				System::Data::OleDb::OleDbType::Integer, 0, L"_Experience_in_years")), (gcnew System::Data::OleDb::OleDbParameter(L"_Date_of_Birth", 
				System::Data::OleDb::OleDbType::Date, 0, L"_Date_of_Birth")), (gcnew System::Data::OleDb::OleDbParameter(L"_Passport", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"_Passport")), (gcnew System::Data::OleDb::OleDbParameter(L"_Responsible", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"_Responsible"))});
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
			this->oleDbUpdateCommand1->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(25) {(gcnew System::Data::OleDb::OleDbParameter(L"_Name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"_Name")), (gcnew System::Data::OleDb::OleDbParameter(L"_Lastname", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"_Lastname")), (gcnew System::Data::OleDb::OleDbParameter(L"_Surname", System::Data::OleDb::OleDbType::VarWChar, 0, L"_Surname")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"_Salary", System::Data::OleDb::OleDbType::Integer, 0, L"_Salary")), (gcnew System::Data::OleDb::OleDbParameter(L"_Experience_in_years", 
				System::Data::OleDb::OleDbType::Integer, 0, L"_Experience_in_years")), (gcnew System::Data::OleDb::OleDbParameter(L"_Date_of_Birth", 
				System::Data::OleDb::OleDbType::Date, 0, L"_Date_of_Birth")), (gcnew System::Data::OleDb::OleDbParameter(L"_Passport", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"_Passport")), (gcnew System::Data::OleDb::OleDbParameter(L"_Responsible", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"_Responsible")), (gcnew System::Data::OleDb::OleDbParameter(L"Original__id", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"_id", System::Data::DataRowVersion::Original, 
				nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull__Name", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"_Name", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original__Name", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"_Name", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull__Lastname", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"_Lastname", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original__Lastname", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"_Lastname", System::Data::DataRowVersion::Original, 
				nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull__Surname", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"_Surname", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original__Surname", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"_Surname", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull__Salary", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"_Salary", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original__Salary", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"_Salary", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull__Experience_in_years", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"_Experience_in_years", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original__Experience_in_years", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"_Experience_in_years", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull__Date_of_Birth", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"_Date_of_Birth", 
				System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original__Date_of_Birth", 
				System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"_Date_of_Birth", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull__Passport", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"_Passport", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original__Passport", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"_Passport", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull__Responsible", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"_Responsible", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original__Responsible", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"_Responsible", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = resources->GetString(L"oleDbDeleteCommand1.CommandText");
			this->oleDbDeleteCommand1->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(17) {(gcnew System::Data::OleDb::OleDbParameter(L"Original__id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull__Name", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"_Name", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original__Name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"_Name", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull__Lastname", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"_Lastname", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original__Lastname", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"_Lastname", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull__Surname", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"_Surname", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original__Surname", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"_Surname", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull__Salary", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"_Salary", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original__Salary", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"_Salary", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull__Experience_in_years", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"_Experience_in_years", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original__Experience_in_years", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"_Experience_in_years", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull__Date_of_Birth", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"_Date_of_Birth", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original__Date_of_Birth", 
				System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"_Date_of_Birth", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull__Passport", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"_Passport", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original__Passport", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"_Passport", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull__Responsible", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"_Responsible", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original__Responsible", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"_Responsible", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__2 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(9) {(gcnew System::Data::Common::DataColumnMapping(L"_id", 
				L"_id")), (gcnew System::Data::Common::DataColumnMapping(L"_Name", L"_Name")), (gcnew System::Data::Common::DataColumnMapping(L"_Lastname", 
				L"_Lastname")), (gcnew System::Data::Common::DataColumnMapping(L"_Surname", L"_Surname")), (gcnew System::Data::Common::DataColumnMapping(L"_Salary", 
				L"_Salary")), (gcnew System::Data::Common::DataColumnMapping(L"_Experience_in_years", L"_Experience_in_years")), (gcnew System::Data::Common::DataColumnMapping(L"_Date_of_Birth", 
				L"_Date_of_Birth")), (gcnew System::Data::Common::DataColumnMapping(L"_Passport", L"_Passport")), (gcnew System::Data::Common::DataColumnMapping(L"_Responsible", 
				L"_Responsible"))};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"staff", __mcTemp__2))});
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			this->oleDbDataAdapter1->RowUpdated += gcnew System::Data::OleDb::OleDbRowUpdatedEventHandler(this, &Form1::oleDbDataAdapter1_RowUpdated);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(509, 351);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataTable1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void oleDbDataAdapter1_RowUpdated(System::Object^  sender, System::Data::OleDb::OleDbRowUpdatedEventArgs^  e) {
		 }
private: System::Void oleDbConnection1_InfoMessage(System::Object^  sender, System::Data::OleDb::OleDbInfoMessageEventArgs^  e) {
		 }
private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			String ^s;
			if(this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				s = this->openFileDialog1->FileName;
				this->oleDbConnection1->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + s;
				this->oleDbConnection1->Open();
				this->oleDbDataAdapter1 = gcnew System::Data::OleDb::OleDbDataAdapter("SELECT * FROM staff", this->oleDbConnection1);
				this->oleDbDataAdapter1->Fill(this->dataTable1);
				this->dataGridView1->Visible = true;
				this->questionsToolStripMenuItem->Enabled = true;
				for(int j = 0; j < this->dataSet1->Tables[0]->Rows->Count; j++)
				{
					array<Object^, 1> ^arr = this->dataSet1->Tables[0]->Rows[j]->ItemArray;
					field f;
					f.id = int_convert(arr[0]);
					f.name = str_convert(arr[1]);
					f.lastname = str_convert(arr[2]);
					f.surname = str_convert(arr[3]);
					f.salary = int_convert(arr[4]);
					f.experience = int_convert(arr[5]);
					f.birth = str_convert(arr[6]);
					f.birth = f.birth.erase(f.birth.find(" ", 0));
					f.passport = str_convert(arr[7]);
					f.responsible = str_convert(arr[8]);

					rows.push_back(f);

					if(ans1.salary < f.salary)
						ans1 = f;
				}
				sort(rows.begin(), rows.end(), comp);
				for(size_t i = 0; i < rows.size(); i++)
				{
					ans_last[rows[i].responsible] = (double)0.;
					ans3[rows[i].responsible] = rows[i];
				}
				for(size_t i = 0; i < rows.size(); i++)
				{
					ans_last[rows[i].responsible] += (double)rows[i].salary;
					if(ans3[rows[i].responsible].salary < rows[i].salary)
						ans3[rows[i].responsible] = rows[i];
				}
			}
			else
				return;
		}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			{
				this->Close();
			}
private: System::Void closeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			{
				this->Close();
			}
private: System::Void наибольшаяЗарплатаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			{
				String^ s;
				ostringstream res;
				res << ans1.name << ' ' << ans1.lastname << ' ' << ans1.surname;
				res << "\nSalary: " << ans1.salary;
				s = gcnew String(res.str().c_str());
				MessageBox::Show(s, "Самый высокооплачиваемый");
			}
private: System::Void самыйСтарыйРаботникToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			{
				AskInfo ^ai = gcnew AskInfo;
				ai->ShowDialog();
				ans2.birth = "99.99.9999";
				for(size_t i = 0; i < rows.size(); i++)
					if(strcmp(rows[i].responsible.c_str(), (char*)(void*)Marshal::StringToHGlobalAnsi(ai->a)) == 0)
						if(comp_dates(ans2.birth.c_str(), rows[i].birth.c_str()))
							ans2 = rows[i];
				if(ans2.birth == "99.99.9999")
				{
					MessageBox::Show("Нет такого отдела");
					return;
				}
				String^ s;
				ostringstream res;
				res << ans2.name << ' ' << ans2.lastname << ' ' << ans2.surname;
				res << "\nDate of birth: " << ans2.birth;
				s = gcnew String(res.str().c_str());
				MessageBox::Show(s, "Самый высокооплачиваемый");
			}
private: System::Void списокСамыхзажиточныхСотрудниковПоОтделамToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			{
				this->tabControl1->SelectTab(1);
				this->richTextBox1->Clear();
				this->richTextBox1->Text += "Алфавитный список самых зажиточных сотрудников\n";
				for(it = ans3.begin(); it != ans3.end(); it++)
				{
					String^ s;
					ostringstream res;
					res << "Отдел: " << it->second.responsible.c_str() << '\n';
					res << it->second.name.c_str() << ' ';
					res << it->second.lastname.c_str() << ' ';
					res << it->second.surname.c_str() << ' ';
					res << it->second.salary << '\n' << '\n';
					s = gcnew String(res.str().c_str());
					this->richTextBox1->Text += s;
				}
			}
private: System::Void алфавитныйСписокВсехСотрудниковToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			{
				this->tabControl1->SelectTab(1);
				this->richTextBox1->Clear();
				this->richTextBox1->Text += "Алфавитный список сотрудников\n";
				for(size_t i = 0; i < rows.size(); i++)
				{
					String^ s;
					ostringstream res;
					res << rows[i].name.c_str() << ' ';
					res << rows[i].lastname.c_str() << ' ';
					res << rows[i].surname.c_str() << ' ';
					res << rows[i].salary << '\n' << '\n';
					s = gcnew String(res.str().c_str());
					this->richTextBox1->Text += s;
				}
			}
private: System::Void алфавитныйСписокВОбратномПорядкеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			{
				this->tabControl1->SelectTab(1);
				this->richTextBox1->Clear();
				this->richTextBox1->Text += "Алфавитный список(Обратный) сотрудников\n";
				for(size_t i = 0; i < rows.size(); i++)
				{
					String^ s;
					ostringstream res;
					res << rows[rows.size() - 1 - i].name.c_str() << ' ';
					res << rows[rows.size() - 1 - i].lastname.c_str() << ' ';
					res << rows[rows.size() - 1 - i].surname.c_str() << ' ';
					res << rows[rows.size() - 1 - i].salary << '\n' << '\n';
					s = gcnew String(res.str().c_str());
					this->richTextBox1->Text += s;
				}
			}
private: System::Void списокСотрудниковАдминистрацииToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			{
				this->tabControl1->SelectTab(1);
				this->richTextBox1->Clear();
				this->richTextBox1->Text += "Алфавитный список сотрудников\n";
				for(size_t i = 0; i < rows.size(); i++)
				{
					if(rows[i].responsible == "Administration")
					{
						String^ s;
						ostringstream res;
						res << rows[i].name.c_str() << ' ';
						res << rows[i].lastname.c_str() << ' ';
						res << rows[i].surname.c_str() << ' ';
						res << rows[i].salary << '\n' << '\n';
						s = gcnew String(res.str().c_str());
						this->richTextBox1->Text += s;
					}
				}
			}
private: System::Void диаграммаРаспределененияЗпПоОтделамToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			{
				this->tabControl1->SelectTab(2);
				Pen ^myPen = gcnew Pen(System::Drawing::Color::Black, 3);
				SolidBrush ^myBrush = gcnew SolidBrush(Color::FromArgb(196,0,0,0));
				System::Drawing::Font ^myFont = gcnew System::Drawing::Font("Arial", 8);
				int i, k = 0;
				int iRed, iGreen, iBlue;
				int aStart, aEnd = 0;
				float xPos, yPos;
				double sum_of_all = 0;
				Graphics ^g = tabPage3->CreateGraphics();
				g->Clear(System::Drawing::Color::White);
				for(i = 0; (unsigned int)i < rows.size(); i++)
				{
					sum_of_all += (double)rows[i].salary;
					k++;
				}
				g->DrawEllipse(myPen, 25, 25, 185, 185);
				for(itl = ans_last.begin(), i = 0; itl != ans_last.end(); i++, itl++)
				{
					iRed = (((i+1)&4)>0)*255/(i/8+1);
					iGreen = (((i+1)&2)>0)*255/(i/8+1);
					iBlue = (((i+1)&1)>0)*255/(i/8+1);
					aStart = aEnd;
					aEnd += (int)(itl->second/sum_of_all*360);
					if (i == k-1)
					aEnd = 360;
					int portion = (int)(itl->second/sum_of_all*100);
					myBrush->Color::set(Color::FromArgb(255, iRed, iGreen, iBlue));
					g->FillPie(myBrush, 25, 25, 185, 185, aStart, aEnd-aStart);
					g->FillRectangle(myBrush, 300, 50+(i-1)*20, 20, 20);
					xPos = (float)30 + (float)(185-25)/2 + (float)((185-25)/1.5*Math::Cos(Math::PI*(aStart + aEnd)/360));
					yPos = (float)30 + (float)(185-25)/2 + (float)((185-25)/1.5*Math::Sin(Math::PI*(aStart + aEnd)/360));
					ostringstream s;
					s << itl->first.c_str() << ' ' << itl->second << "руб.";
					g->DrawString(gcnew String(s.str().c_str()), myFont, myBrush, (float)320, (float)55+(i-1)*20);
					g->DrawString(Convert::ToString(portion) + "%", myFont, myBrush, xPos, yPos);
				}
			}
};
}