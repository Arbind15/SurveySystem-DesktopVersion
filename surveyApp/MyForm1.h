#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>
#include "sqlite3.h"
#include <msclr/marshal_cppstd.h>
#include <chrono>
#include <sstream>
#include <locale>
#include <cstring>
#include <codecvt>
#include <fstream>

using namespace System;
using namespace System::Text;
using namespace System::Security::Cryptography;
using namespace System::Text;

namespace surveyApp {

	using namespace System;
	using namespace std;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;


	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		Form^ log_form;
		int user_id, role;
		String^ lan;
		String^ username;
		String^ dob;
		float age;
		String^ exp_date;
		String^ gender;
		String^ prov;
		String^ dia;
		String^ nid;
		String^ pnid;
		String^ nationality;
		String^ school;
		String^ parent;
		String^ ther;
		String^ s_uuid;
		String^ f_title;
		String^ homes;
		String^ projects;
		String^ surveys;
		String^ manages;
		String^ actions;
		String^ logouts;
		String^ viewsurveys;
		String^ exports;
		String^ demographics;
		String^ accepts;
		String^ backs;
		String^ nexts;
		String^ submits;
		String^ cancels;
		String^ saves;
		String^ adds;
		String^ edits;
		String^ users;
		String^ pwds;
		String^ usrns;
		String^ rols;
		String^ dlts;
		String^ nids;
		String^ dobs;
		String^ gens;
		String^ pnids;
		String^ nations;
		String^ provs;
		String^ clins;
		String^ pids;
		String^ pars;
		String^ thers;
		String^ dias;
		String^ exps;
		String^ ques;
		String^ errs;
		String^ rslts;
		String^ sqcs;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ labelDemo;
	private: System::Windows::Forms::Label^ labelSurvey;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Button^ button1;


	public:
		List<String^>^ questions;
		//int* answers = new int[20]();
		String^ answers;
		List<String^>^ m_answers;
		String^ exePath = Application::ExecutablePath;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ buttonSB;
	private: System::Windows::Forms::Button^ buttonDB;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupSurvey;
	private: System::Windows::Forms::FlowLayoutPanel^ panel;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TabControl^ tabControl3;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::TabPage^ tabPage9;
	private: System::Windows::Forms::SplitContainer^ splitContainer2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::GroupBox^ groupBoxDemo;




	public:


	public:

	public:

	public:


	public:



	public:


	public:
	private: System::Windows::Forms::Label^ label1;
	public:
		MyForm1(Form^ f, int usr_id, String^ usr_n,int rol,String^ la)
		{
			log_form = f;
			user_id = usr_id;
			lan = la;
			username = usr_n;
			role = rol;
			questions = gcnew List<String^>();
			m_answers = gcnew List<String^>();
			InitializeComponent();
			//button1_Click(this, nullptr);
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
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
	private: System::Windows::Forms::TabPage^ tabPage3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>

		void InitializeComponent()
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->panel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->labelSurvey = (gcnew System::Windows::Forms::Label());
			this->buttonSB = (gcnew System::Windows::Forms::Button());
			this->buttonDB = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBoxDemo = (gcnew System::Windows::Forms::GroupBox());
			this->groupSurvey = (gcnew System::Windows::Forms::GroupBox());
			this->labelDemo = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			
			
			
			
			if (lan == "EN") {
				this->f_title = L"نظام المسح | ";
				this->homes = L"بيت";
				this->projects = L"تفاصيل المشروع";
				this->surveys = L"تفاصيل المشروع";
				this->manages = L"إدارة المستخدم";
				this->actions = L"فعل";
				this->logouts = L"تسجيل خروج";
				this->viewsurveys = L"عرض الاستطلاع";
				this->exports = L"تصدير بيانات المسح";
				this->demographics = L"التركيبة السكانية";
				this->accepts = L"يقبل";
				this->backs = L"خلف";
				this->nexts = L"التالي";
				this->submits = L"يُقدِّم";
				this->cancels = L"يلغي";
				this->saves = L"يحفظ";
				this->adds = L"إضافة مستخدم";
				this->edits = L"تحرير العضو";
				this->users = L"مستخدم";
				this->pwds = L"كلمة المرور:";
				this->usrns = L"اسم المستخدم:";
				this->rols = L"دور:";
				this->dlts = L"يمسح";
				this->pids = L"معرف المشارك:";
				this->dobs = L"تاريخ الميلاد:";
				this->nations = L"جنسية:";
				this->provs = L"مقاطعة:";
				this->clins = L"المدرسة/العيادة:";
				this->gens = L"جنس:";
				this->nids = L"الهوية الوطنية:";
				this->pnids = L"الهوية الوطنية للوالدين:";
				this->pars = L"اسم الوصي/الوالد:";
				this->thers = L"اسم المعالج:";
				this->dias = L"تم تشخيصه:";
				this->exps = L"تاريخ التجربة:";
				this->ques = L"أسئلة";
				this->errs = L"خطأ";
				this->rslts = L"نتيجة:";
				this->sqcs = L"نقاط مراقبة الجودة:";
			}
			else {
				this->f_title = L"Survey System | ";
				this->homes = L"Home";
				this->projects = L"Project Details";
				this->surveys = L"Survey";
				this->manages = L"Manage User";
				this->actions = L"Action";
				this->logouts = L"Logout";
				this->viewsurveys = L"View Survey";
				this->exports = L"Export Survey Data";
				this->demographics = L"Demographics";
				this->accepts = L"Accept";
				this->backs = L"Back";
				this->nexts = L"Next";
				this->submits = L"Submit";
				this->cancels = L"Cancel";
				this->saves = L"Save";
				this->adds = L"Add User";
				this->edits = L"Edit User";
				this->users = L"User";
				this->pwds = L"Password:";
				this->usrns = L"Username:";
				this->rols = L"Role:";
				this->dlts = L"Delete";
				this->pids = L"Participant ID:";
				this->dobs = L"Date of Birth:";
				this->nations = L"Nationality:";
				this->provs = L"Province:";
				this->clins = L"School/Clinic:";
				this->gens = L"Gender:";
				this->nids = L"National Id:";
				this->pnids = L"Parent National Id:";
				this->pars = L"Guardian/Parent Name:";
				this->thers = L"Therapist Name:";
				this->dias = L"Diagnosed:";
				this->exps = L"Experiment Date:";
				this->ques = L"Questions";
				this->errs = L"Error";
				this->rslts = L"Result:";
				this->sqcs = L"SQC Score:";
			}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(2, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(979, 946);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(971, 920);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = this->homes;
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(125, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = this->projects +L".....";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(64, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = this->projects;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->webBrowser1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(971, 920);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = this->surveys;
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->button2->Location = System::Drawing::Point(762, 863);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(76, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = this->accepts;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->webBrowser1->Location = System::Drawing::Point(121, 46);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(717, 787);
			this->webBrowser1->TabIndex = 0;

			this->exePath = this->exePath->Replace("surveyApp.exe", "");
			this->webBrowser1->Url = (gcnew System::Uri(L"file:///" + this->exePath->Replace("\\", "/") + L"concent.pdf", System::UriKind::Absolute));

			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tabControl2);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(971, 920);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = this->manages;
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl2->Location = System::Drawing::Point(0, 0);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(971, 920);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->groupBox2);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(963, 894);
			this->tabPage6->TabIndex = 0;
			this->tabPage6->Text = this->adds;
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->comboBox4);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Location = System::Drawing::Point(262, 170);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(467, 313);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = this->users;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(212)));
			this->button4->Location = System::Drawing::Point(136, 199);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = this->cancels;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->button3->Location = System::Drawing::Point(261, 200);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = this->saves;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Admin", L"User" });
			this->comboBox4->Location = System::Drawing::Point(197, 119);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 5;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(197, 150);
			this->textBox6->Name = L"textBox6";
			this->textBox6->PasswordChar = '*';
			this->textBox6->Size = System::Drawing::Size(139, 20);
			this->textBox6->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(197, 90);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(139, 20);
			this->textBox5->TabIndex = 3;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(135, 155);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(56, 13);
			this->label18->TabIndex = 2;
			this->label18->Text = this->pwds;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(159, 124);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(32, 13);
			this->label17->TabIndex = 1;
			this->label17->Text = this->rols;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(133, 94);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(58, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = this->usrns;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->splitContainer1);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(963, 894);
			this->tabPage7->TabIndex = 1;
			this->tabPage7->Text = this->edits;
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// splitContainer1
			// 
			this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 3);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->listBox1);
			this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::splitContainer1_Panel1_Paint);
			this->splitContainer1->Size = System::Drawing::Size(957, 888);
			this->splitContainer1->SplitterDistance = 319;
			this->splitContainer1->TabIndex = 0;
			// 
			// listBox1
			// 
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Margin = System::Windows::Forms::Padding(10);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(317, 886);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::listBox1_SelectedIndexChanged);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->tabControl3);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(971, 920);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = this->actions;
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage8);
			this->tabControl3->Controls->Add(this->tabPage9);
			this->tabControl3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl3->Location = System::Drawing::Point(0, 0);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(971, 920);
			this->tabControl3->TabIndex = 0;
			this->tabControl3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::tabControl3_SelectedIndexChanged);
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->splitContainer2);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(963, 894);
			this->tabPage8->TabIndex = 0;
			this->tabPage8->Text = this->viewsurveys;
			this->tabPage8->UseVisualStyleBackColor = true;
			this->tabPage8->Click += gcnew System::EventHandler(this, &MyForm1::tabPage8_Click);
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(3, 3);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->listBox2);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->flowLayoutPanel1);
			this->splitContainer2->Size = System::Drawing::Size(957, 888);
			this->splitContainer2->SplitterDistance = 221;
			this->splitContainer2->TabIndex = 0;
			// 
			// listBox2
			// 
			this->listBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(0, 0);
			this->listBox2->Margin = System::Windows::Forms::Padding(10);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(221, 888);
			this->listBox2->TabIndex = 0;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::listBox2_SelectedIndexChanged);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(732, 888);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// tabPage9
			// 
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(963, 894);
			this->tabPage9->TabIndex = 1;
			this->tabPage9->Text = this->exports;
			this->tabPage9->UseVisualStyleBackColor = true;
			this->tabPage9->Click += gcnew System::EventHandler(this, &MyForm1::tabPage9_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(971, 920);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = this->logouts;
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// panel
			// 
			this->panel->Location = System::Drawing::Point(0, 0);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(200, 100);
			this->panel->TabIndex = 0;
			// 
			// labelSurvey
			// 
			this->labelSurvey->Location = System::Drawing::Point(0, 0);
			this->labelSurvey->Name = L"labelSurvey";
			this->labelSurvey->Size = System::Drawing::Size(100, 23);
			this->labelSurvey->TabIndex = 0;
			// 
			// buttonSB
			// 
			this->buttonSB->Location = System::Drawing::Point(0, 0);
			this->buttonSB->Name = L"buttonSB";
			this->buttonSB->Size = System::Drawing::Size(75, 23);
			this->buttonSB->TabIndex = 0;
			// 
			// buttonDB
			// 
			this->buttonDB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->buttonDB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDB->Location = System::Drawing::Point(160, 390);
			this->buttonDB->Name = L"buttonDB";
			this->buttonDB->Size = System::Drawing::Size(75, 23);
			this->buttonDB->TabIndex = 23;
			this->buttonDB->Text = this->backs;
			this->buttonDB->UseVisualStyleBackColor = false;
			this->buttonDB->Click += gcnew System::EventHandler(this, &MyForm1::buttonDB_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->comboBox5);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Location = System::Drawing::Point(83, 287);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(467, 313);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = this->users;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->button7->Location = System::Drawing::Point(136, 200);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 2;
			this->button7->Text = this->dlts;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->button6->Location = System::Drawing::Point(261, 200);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 6;
			this->button6->Text =this->saves;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Admin", L"User" });
			this->comboBox5->Location = System::Drawing::Point(197, 119);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 21);
			this->comboBox5->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(197, 150);
			this->textBox7->Name = L"textBox7";
			this->textBox7->PasswordChar = '*';
			this->textBox7->Size = System::Drawing::Size(139, 20);
			this->textBox7->TabIndex = 4;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(197, 90);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(139, 20);
			this->textBox8->TabIndex = 3;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(135, 155);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(56, 13);
			this->label19->TabIndex = 2;
			this->label19->Text= this->pwds;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(159, 124);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(32, 13);
			this->label20->TabIndex = 1;
			this->label20->Text =this->rols;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(133, 94);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(58, 13);
			this->label21->TabIndex = 0;
			this->label21->Text =this->usrns;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->buttonDB);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(233, 162);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(513, 443);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text =this->surveys;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm1::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(260, 390);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = this->nexts;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Location = System::Drawing::Point(179, 339);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(279, 21);
			this->dateTimePicker2->TabIndex = 22;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes", L"No" });
			this->comboBox3->Location = System::Drawing::Point(179, 310);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(169, 23);
			this->comboBox3->TabIndex = 21;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(178, 283);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(170, 21);
			this->textBox4->TabIndex = 20;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(179, 256);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(169, 21);
			this->textBox3->TabIndex = 19;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown2->Location = System::Drawing::Point(179, 229);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -1304428545, 434162106, 542, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(172, 21);
			this->numericUpDown2->TabIndex = 18;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(178, 146);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 21);
			this->textBox2->TabIndex = 17;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Provience 1", L"Provience 2", L"Provience 3",
					L"Provience 4", L"Provience 5"
			});
			this->comboBox2->Location = System::Drawing::Point(178, 173);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(170, 23);
			this->comboBox2->TabIndex = 16;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(178, 202);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 21);
			this->textBox1->TabIndex = 15;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(178, 119);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -1304428545, 434162106, 542, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(172, 21);
			this->numericUpDown1->TabIndex = 14;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->comboBox1->Location = System::Drawing::Point(179, 90);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(169, 23);
			this->comboBox1->TabIndex = 13;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(178, 63);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(279, 21);
			this->dateTimePicker1->TabIndex = 1;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm1::dateTimePicker1_ValueChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(176, 38);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 15);
			this->label15->TabIndex = 12;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(68, 342);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(109, 16);
			this->label14->TabIndex = 11;
			this->label14->Text = this->exps;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(99, 314);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(77, 16);
			this->label13->TabIndex = 10;
			this->label13->Text = this->dias;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(69, 287);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(107, 16);
			this->label12->TabIndex = 9;
			this->label12->Text = this->thers;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(32, 259);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(140, 16);
			this->label11->TabIndex = 8;
			this->label11->Text =this->pars;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(55, 232);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(169, 16);
			this->label10->TabIndex = 7;
			this->label10->Text =this->pnids;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(88, 205);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 16);
			this->label9->TabIndex = 6;
			this->label9->Text = this->clins;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(105, 176);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 16);
			this->label8->TabIndex = 5;
			this->label8->Text =this->provs;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(103, 149);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 16);
			this->label7->TabIndex = 4;
			this->label7->Text = this->nations;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(100, 122);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 16);
			this->label6->TabIndex = 3;
			this->label6->Text =this->nids;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(121, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 16);
			this->label5->TabIndex = 2;
			this->label5->Text = this->gens;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm1::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(94, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = this->dobs;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(88, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = this->pids;
			// 
			// groupBoxDemo
			// 
			this->groupBoxDemo->Location = System::Drawing::Point(0, 0);
			this->groupBoxDemo->Name = L"groupBoxDemo";
			this->groupBoxDemo->Size = System::Drawing::Size(200, 100);
			this->groupBoxDemo->TabIndex = 0;
			this->groupBoxDemo->TabStop = false;
			// 
			// groupSurvey
			// 
			this->groupSurvey->Location = System::Drawing::Point(0, 0);
			this->groupSurvey->Name = L"groupSurvey";
			this->groupSurvey->Size = System::Drawing::Size(200, 100);
			this->groupSurvey->TabIndex = 0;
			this->groupSurvey->TabStop = false;
			// 
			// labelDemo
			// 
			this->labelDemo->Location = System::Drawing::Point(0, 0);
			this->labelDemo->Name = L"labelDemo";
			this->labelDemo->Size = System::Drawing::Size(100, 23);
			this->labelDemo->TabIndex = 0;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 961);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1000, 1000);
			this->MinimumSize = System::Drawing::Size(1000, 1000);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Survey System";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage8->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		//}

	private: String^ HashPassword(String^ password) {
		String^ hexString;
		for (int i = 0; i < password->Length; i++)
		{
			int b = password[i];
			hexString += String::Format("{0:X2}", b);
		}
		return hexString;
}

	private: System::Void LoadUserList() {
		listBox1->Items->Clear();
		sqlite3* db;
		int result = sqlite3_open("main.db", &db);

		if (result == SQLITE_OK) {
			// Define the SQL query to fetch all users
			const char* sql = "SELECT * FROM Users;";
			sqlite3_stmt* stmt;
			int rc = sqlite3_prepare(db, sql, -1, &stmt, NULL);

			if (rc == SQLITE_OK) {
				// Execute the statement and populate the ListBox
				while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
					//const char* username = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1)); // Assuming username is at index 1
					String^ usernameStr = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 1));
					listBox1->Items->Add(usernameStr);
				}

				sqlite3_finalize(stmt);
			}
			sqlite3_close(db);
		}
		else {
			// Handle database open error
			MessageBox::Show("Failed to open or create database!");
		}
	}


	private: System::Void LoadSurveyList() {
		listBox2->Items->Clear();
		sqlite3* db;
		int result = sqlite3_open("main.db", &db);
		msclr::interop::marshal_context context;
		if (result == SQLITE_OK) {
			const char* selectSurveyQuery = "SELECT * FROM survey;";
			sqlite3_stmt* stmt;
			int prepareResult = sqlite3_prepare(db, selectSurveyQuery, -1, &stmt, NULL);
			
			if (prepareResult == SQLITE_OK) {
				while (sqlite3_step(stmt) == SQLITE_ROW) {
					//const char* participant_id = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
					/*const char* dob = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
					double age = sqlite3_column_double(stmt, 3);
					const char* gender = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4));
					int national_id = sqlite3_column_int(stmt, 5);
					const char* nationality = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 6));
					const char* province = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 7));
					const char* School = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 8));
					int parent_national_id = sqlite3_column_int(stmt, 9);
					const char* parent_name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 10));
					const char* therapist_name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 11));
					const char* diagnosed = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 12));
					const char* experiment_date = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 13));
					const char* answers = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 14));
					const char* sqc = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 15));
					const char* result = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 16));
					int flag = sqlite3_column_int(stmt, 17);*/

					//String^ surveyItem = String::Format("Participant ID: {0}, Age: {1}, Gender: {2}", participant_id, age, gcnew String(gender));

					// Add the survey data to listBox2
					listBox2->Items->Add(ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 1)));
				}

				sqlite3_finalize(stmt);
			}
			else {
				String^ errorMsg = context.marshal_as<System::String^>(reinterpret_cast<const char*>(sqlite3_errmsg(db)));
				MessageBox::Show("Error: " + errorMsg, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			sqlite3_close(db);
		}
		else {
			String^ errorMsg = context.marshal_as<System::String^>(reinterpret_cast<const char*>(sqlite3_errmsg(db)));
			MessageBox::Show("Error: " + errorMsg, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
				
		this->Text = this->f_title + this->username;
		if (this->role != 0) {
			//this->tabControl1->Controls->Add(this->tabPage4);
			//this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Remove(this->tabPage4);
			this->tabControl1->Controls->Remove(this->tabPage5);
		}
		InitializeQuestions();
		LoadUserList();
		LoadSurveyList();
	}

	private: void ExportToCSV()
	{

		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "CSV File|*.csv";
		saveFileDialog1->Title = "Save CSV File";
		saveFileDialog1->FileName = "survey_data.csv";
		
		if (saveFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK)
			return;

		if (saveFileDialog1->FileName != "")
		{
			String^ filePath = saveFileDialog1->FileName;

			std::ofstream outputFile(msclr::interop::marshal_as<std::string>(filePath));

			// Write header
			outputFile << "ID,Participant ID,Date of Birth,Gender,National ID,Nationality,Province,School/Clinic,Parent National ID,Parent Name,Therapist Name,Diagnosed,Experiment Date,Q1,Q2,Q3,Q4,Q5,Q6,Q7,Q8,Q9,Q10,Q11,Q12,Q13,Q14,Q15,Q16,Q17,Q18,Q19,Q20,SQC Score,Result" << std::endl;

			const char* query = "SELECT * FROM Survey";
			
			sqlite3* db;
			int rc = sqlite3_open("main.db", &db);
			sqlite3_stmt* statement;

			int result = sqlite3_prepare(db, query, -1, &statement, nullptr);

			if (result == SQLITE_OK)
			{
				while (sqlite3_step(statement) == SQLITE_ROW)
				{
					for (int i = 0; i < sqlite3_column_count(statement); i++)
					{
						//MessageBox::Show(ConvertUTF8ToSystemString(sqlite3_column_text(statement, i)));
						if (i != 3 && i != 17) {
							if (i > 0 && i!=15)
								outputFile << ",";
							const char* columnText = ConvertStringToUTF8(ConvertUTF8ToSystemString(sqlite3_column_text(statement, i)));
							outputFile << columnText;
						}
					}
					outputFile << std::endl;
				}

				sqlite3_finalize(statement);
				MessageBox::Show("Survey Data Exported Successfully!", "Data Exported", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else
			{
				MessageBox::Show("Failed to prepare the database", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			outputFile.close();
			sqlite3_close(db);
		}
	}
	private: System::Void tabControl3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Check if the "Export Survey" tab is selected
		if (tabControl3->SelectedIndex == 1) { // Assuming the "Logout" tab is at index 2
			this->tabControl3->SelectedIndex = 0;
			ExportToCSV();
		}
	}

	private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Check if the "Logout" tab is selected
		if (tabControl1->SelectedIndex == 2 && this->role!=0) { // Assuming the "Logout" tab is at index 2
			// Close the current form
			this->Close();
			// Show the first form
			log_form->Show();
		}
		if (tabControl1->SelectedIndex == 4 && this->role == 0) { // Assuming the "Logout" tab is at index 2
			// Close the current form
			this->Close();
			// Show the first form
			log_form->Show();
		}
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonDB_Click(System::Object^ sender, System::EventArgs^ e) {
		this->groupBox1->Hide();
		this->webBrowser1->Show();
		this->button2->Show();

	}

	private: System::Void submitDB_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel->Hide();
		this->groupBox1->Show();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime selectedDate = dateTimePicker1->Value;
		dob = selectedDate.ToString("yyyy-MM-dd");
		DateTime selectedDate1 = dateTimePicker2->Value;
		exp_date = selectedDate1.ToString("yyyy-MM-dd");

		if (comboBox1->SelectedItem != nullptr) {
			gender = comboBox1->SelectedItem->ToString();
		}
		else
		{
			MessageBox::Show("Select Gender!");
			return;
		}
		if (comboBox2->SelectedItem != nullptr) {
			prov = comboBox2->SelectedItem->ToString();
		}
		else
		{
			MessageBox::Show("Select Provience!");
			return;
		}
		if (comboBox3->SelectedItem != nullptr) {
			dia = comboBox3->SelectedItem->ToString();
		}
		else
		{
			MessageBox::Show("Select Diagnosed!");
			return;
		}
		nid = numericUpDown1->Text;
		if (nid == "0" || nid->Length != 10) {
			MessageBox::Show("National ID must be a 10 digit number!");
			return;
		}
		pnid = numericUpDown2->Text;
		if (pnid == "0" || pnid->Length != 10) {
			MessageBox::Show("Gurdain/Parent National ID  must be a 10 digit number!");
			return;
		}
		nationality = textBox2->Text;
		if (nationality == "") {
			MessageBox::Show("Enter Nationality!");
			return;
		}
		school = textBox1->Text;
		if (school == "") {
			MessageBox::Show("Enter School/Clinic!");
			return;
		}
		parent = textBox3->Text;
		if (parent == "") {
			MessageBox::Show("Enter Parent/Gurdain Name!");
			return;
		}
		ther = textBox4->Text;
		if (ther == "") {
			MessageBox::Show("Enter Therapist Name!");
			return;
		}

		age = 23;

		this->groupBox1->Hide();
		//MessageBox::Show(this->panel->Controls->Count.ToString());
		if (this->panel->Controls->Count > 0) {
			this->panel->Show();
			return;
		}
		questions = gcnew List<String^>();
		// Initialize questions
		InitializeQuestions();
		// Create a FlowLayoutPanel to contain the GroupBoxes
		this->panel->AutoScroll = true;
		this->panel->Dock = DockStyle::Fill;
		this->panel->WrapContents = true; // Allow controls to flow in one direction
		//Add the FlowLayoutPanel to the form
	   //this->Controls->Add(panel);
		this->tabPage2->Controls->Add(panel);
		for (int i = 0; i < questions->Count; i++)
		{
			GroupBox^ groupBox = gcnew GroupBox();
			groupBox->Text = this->ques+" " + (i + 1);
			groupBox->Width = 600;
			groupBox->Height = 115;
			if (i == 0) // Add margin at the top of the first GroupBox
			{
				groupBox->Location = Point(groupBox->Location.X, 100); // Adjust the top margin as needed
			}

			//	// Create Label for the question
			Label^ label = gcnew Label();
			label->Text = questions[i];
			label->Dock = DockStyle::Top;
			label->AutoSize = true;
			label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			groupBox->Controls->Add(label);

			//	// Create RadioButtons for answers
			RadioButton^ radioButton1 = gcnew RadioButton();
			radioButton1->Name ="Yes" + (i + 1).ToString();
			radioButton1->Text = lan=="AR"?L"Yes":L"نعم";
			radioButton1->Location = Point(10, label->Bottom + 10);

			RadioButton^ radioButton2 = gcnew RadioButton();
			radioButton2->Name = "No" + (i + 1).ToString();
			radioButton2->Text = lan == "AR" ? L"No" : L"لا";
			radioButton2->Location = Point(10, radioButton1->Bottom + 5);

			groupBox->Controls->Add(radioButton1);
			groupBox->Controls->Add(radioButton2);

			//groupBox->Location = System::Drawing::Point(50, 50);
			if (i == 0) {
				groupBox->Margin = System::Windows::Forms::Padding(170, 30,0, 10);
			}
			else {
				groupBox->Margin = System::Windows::Forms::Padding(170, 0, 0, 10);
			}

			// Add the GroupBox to the FlowLayoutPanel
			this->panel->Controls->Add(groupBox);
		}

		GroupBox^ btnsC = gcnew GroupBox();
		//btnsC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;

		FlowLayoutPanel^ p1 = gcnew FlowLayoutPanel();
		p1->AutoScroll = true;
		p1->Dock = DockStyle::None;
		p1->WrapContents = false;
		p1->Width = 900;

		this->buttonSB->Text = this->backs;
		this->buttonSB->Margin = System::Windows::Forms::Padding(600, 0, 0, 0);
		this->buttonSB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
			static_cast<System::Int32>(static_cast<System::Byte>(239)));
		this->buttonSB->Click += gcnew System::EventHandler(this, &MyForm1::submitDB_Click);
		p1->Controls->Add(buttonSB);

		Button^ submitButton = gcnew Button();
		submitButton->Text = this->submits;
		submitButton->Margin= System::Windows::Forms::Padding(15, 0, 0, 0);
		submitButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
			static_cast<System::Int32>(static_cast<System::Byte>(239)));
		submitButton->Click += gcnew System::EventHandler(this, &MyForm1::submitButton_Click);
		//this->panel->Controls->Add(submitButton);
		p1->Controls->Add(submitButton);

		this->panel->Controls->Add(p1);

	}
	private:
		void InitializeQuestions()
		{
			questions = gcnew List<String^>();
			if (lan == "EN") {
				// Populate the questions list
				questions->Add(L"إذا كنت تشير إلى شي ما في الغرفة، هل ينظر طفلك إلى ذلك الشيء ؟ \n مثلا: عندما تشير إلى لعبة ما (عروس أو حيوان)، هل ينظر طفلك إلى هذه اللعبة ؟");
				questions->Add(L"هل تساءلت عما إذا كان طفلك أصم ؟");
				questions->Add(L"هل يتظاهر طفلك أثناء اللعب ليجعلك تعتقد أنه يمثل دور ما اللعب التخيلي؟ مثلا: التظاهر \n بالشرب من كوب فارغ، أو يدعي التحدث على الهاتف، أو يتظاهر بإطعام اللعبة ؟");
				questions->Add(L"هل يحب طفلك التسلق على الأشياء؟ مثلا: الأثاث، معدات وأجهزة الملاعب، أو الدرج ؟");
				questions->Add(L"هل يحرك طفلك أصابعه حركات غير عادية قرب عيونه؟ \n مثلا: يتلاعب بأصابعه أمام عينية بدون سبب ويستمر بالنظر الى أصابعه ويحركها ؟");
				questions->Add(L"هل يشير طفلك بإصبع واحد (السبابة) لكي يسأل عن شيء أو الحصول \n على مساعدة؟ مثلا: يشير الى وجبة خفيفة أو لعبة بعيدة عن متناول يده ؟");
				questions->Add(L"هل يشير طفلك بإصبع واحد (السبابة) ليظهر لك \n اهتمامه؟ مثلا: يومي الى طائرة في السماء أو شاحنة كبيرة على الطريق ؟");
				questions->Add(L"هل يهتم طفلك بالأطفال الأخرين؟ مثلا: هل \n طفلك يراقب الأطفال الأخرين، يبتسم لهم ، أو يذهب إليهم ؟");
				questions->Add(L"هل يستعرض طفلك الأشياء أمامك أو يقدمها لك أو يحملها للأعلى ليريك إياها لمشاركة الاهتمام \n وليس للحصول على مساعدة، فقط للمشاركة؟ مثلا: يريك وردة، أو لعبة (حيوان أو شاحنة) ؟");
				questions->Add(L"هل يستجيب طفلك عند مناداته باسمه/ اسمها؟ مثلا: عند مناداة اسمه \n هل ينظر للأعلى، يبربر أو يتكلم ، أو يتوقف عما يفعله عند مناداة اسمه ؟");
				questions->Add(L"عندما تبتسم لطفلك، هل يبادلك الابتسامة ؟");
				questions->Add(L"هل ينزعج طفلك من ضجيج الحياة اليومية؟ مثلا: المكنسة الكهربائية أو الموسيقى الصاخبة ؟");
				questions->Add(L"هل طفلك يستطيع المشي ؟");
				questions->Add(L"هل ينظر طفلك في عينك عندما تتحدث إليه، أو تلعب معه، أو عند تغيير ملابسة ؟");
				questions->Add(L"هل يحاول طفلك تقليد ما تفعله؟ \n مثلا: يلوح وداعا (باي-باي)، يصفق، أو يقلد الضجة المضحكة التي تؤديها أنت ؟");
				questions->Add(L"عندما تلتف برأسك وتنظر أو تحدق بشيء ما، هل يلتفت طفلك وينظر حوله ليرى ما تنظر إلية ؟");
				questions->Add(L"هل يحاول طفلك أن يجعلك تراقبه؟ مثلا: يلفت نظرك لتثني علية أو يقول لك أنظر إلي، أو راقبني ؟");
				questions->Add(L"هل طفلك يفهمك عندما تقول له أ ن يفعل شي ما؟ مثلا: هل يفهم طفلك \n ما تقول له بدون أن تستخدم الإشارة. مثل ضع الكتاب على الكرسي ، أو أحضر لي بطانية ؟");
				questions->Add(L"إذا حدث شيئا جديدا، هل ينظر طفلك في وجهك ليرى كيف تشعر \n حيال ذلك؟ مثلا: إذا سمع ضوضاء غريبة أو مضحكة، أو رأى لعبة جديدة ، هل ينظر الى وجهك ؟");
				questions->Add(L"هل يحب طفلك النشاط الحركي؟ مثلا: الأرجحه أو الوثب في حضنك على ركبتيه ؟");
				// Add more questions as needed
			}
			else
			{
				// Populate the questions list
				questions->Add("What is your favorite color?");
				questions->Add("How old are you?");
				questions->Add("What is your favorite color?");
				questions->Add("How old are you?");
				questions->Add("What is your favorite color?");
				questions->Add("How old are you?");
				questions->Add("What is your favorite color?");
				questions->Add("How old are you?");
				questions->Add("What is your favorite color?");
				questions->Add("How old are you?");
				questions->Add("What is your favorite color?");
				questions->Add("How old are you?");
				questions->Add("What is your favorite color?");
				questions->Add("How old are you?");
				questions->Add("What is your favorite color?");
				questions->Add("How old are you?");
				questions->Add("What is your favorite color?");
				questions->Add("How old are you?");
				questions->Add("What is your favorite color?");
				questions->Add("How old are you?");
				// Add more questions as needed
			}
			m_answers->Add("0");
			m_answers->Add("1");
			m_answers->Add("0");
			m_answers->Add("0");
			m_answers->Add("1");
			m_answers->Add("0");
			m_answers->Add("0");
			m_answers->Add("0");
			m_answers->Add("0");
			m_answers->Add("0");
			m_answers->Add("0");
			m_answers->Add("0");
			m_answers->Add("0");
			m_answers->Add("0");
			m_answers->Add("1");
			m_answers->Add("0");
			m_answers->Add("0");
			m_answers->Add("0");
			m_answers->Add("0");
			m_answers->Add("0");

		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		s_uuid = System::Convert::ToString(generateUniqueID());
		this->label15->Text = s_uuid;
		this->webBrowser1->Hide();
		this->button2->Hide();
		this->groupBox1->Show();
		this->tabPage2->Controls->Add(this->groupBox1);
	}

	private: Control^ FindControlRecursively(Control^ parent, String^ name) {
		Control^ foundControl = parent->Controls[name];
		if (foundControl != nullptr) {
			return foundControl;
		}
		for each (Control ^ child in parent->Controls) {
			foundControl = FindControlRecursively(child, name);

			if (foundControl != nullptr) {
				return foundControl;
			}
		}
		return nullptr;
	}

	private: unsigned long long generateUniqueID() {
		static unsigned long long counter = 0;
		auto now = std::chrono::high_resolution_clock::now();
		unsigned long long timestamp = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();

		return (timestamp << 16) | (counter++ & 0xFFFFFFFFFFFF);
	}

	private: void GeneratePDF() {
		
	}

	public: List<String^>^ ConvertStringToList(String^ input) {
		List<String^>^ resultList = gcnew List<String^>;
		//MessageBox::Show(input);
		int si = 0;
		int l = 1;
		for (int i = 0; i < input->Length; i++) {
			if (input[i] == ',') {
				resultList->Add(input->Substring(si,l-1));
				si = i+1;
				l = 0;
				//MessageBox::Show(input->Substring(si, l));
			}
			l++;
		}
		return resultList;
	}

	private: System::Void submitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		GeneratePDF();
		int total = 0;
		answers = u8"";
		for (int i = 0; i < questions->Count; i++) {
			//this->tabPage2->Controls->Add(panel);
			//this->tabControl1->Controls["tabPage2"]->Controls["panel"]->Controls["groupBox"]->Controls->Find((i + 1).ToString(), true);
			//RadioButton^ radioButton1 = dynamic_cast<RadioButton^>(this->Controls["tabControl1"]->Controls["tabPage2"]->Controls["panel"]->Controls["groupBox"]->Controls->Find((i + 1).ToString(), true)[0]);
			//RadioButton^ radioButton2 = dynamic_cast<RadioButton^>(this->Controls["tabControl1"]->Controls["tabPage2"]->Controls["panel"]->Controls["groupBox"]->Controls->Find((i + 1).ToString(), true)[1]);
			
			RadioButton^ radioButton1 = dynamic_cast<RadioButton^>(FindControlRecursively(this, "Yes" + (i + 1).ToString()));
			RadioButton^ radioButton2 = dynamic_cast<RadioButton^>(FindControlRecursively(this, "No" + (i + 1).ToString()));
			
			if (radioButton1->Checked) {
				if (lan == "EN") {
					answers += u8"نعم" + ", ";
				}
				else {
					answers += u8"Yes" + ", ";
				}
				if (m_answers[i] == "1") {
					total += 1;
				}
			}
			else if (radioButton2->Checked){
				if (lan == "EN") {
					answers += u8"لا" + ", ";
				}
				else {
					answers += u8"No" + ", ";
				}
				if (m_answers[i] == "0") {
					total += 1;
				}
			}
			else {
				MessageBox::Show("Please answer Question: " + (i + 1).ToString(), "Unanswered Question");
				return;
			}
		}

		String^ r_string;
		if (total <= 2) {
			r_string = "No Referral";
		}
		else if (total <= 7) {
			r_string = "Routine Referral";
		}
		else if (total <= 20) {
			r_string = "Urgent Referral";
		}

		//MessageBox::Show(answers+"  \n "+total.ToString()+ " \n" + s_uuid.ToString()+"\n" + dob);



		sqlite3* db;
		int result = sqlite3_open("main.db", &db);
		if (result == SQLITE_OK) {
			const char* insertParticipantQuery = "INSERT INTO survey ("
				"    participant_id, dob, age, gender, national_id, nationality, "
				"    province, School, parent_national_id, parent_name, therapist_name, "
				"    diagnosed, experiment_date, answers, SQC_Score, result, flag"
				") VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?);";

			sqlite3_stmt* stmt;
			int prepareResult = sqlite3_prepare(db, insertParticipantQuery, -1, &stmt, NULL);
			msclr::interop::marshal_context context;
			if (prepareResult == SQLITE_OK) {
				sqlite3_bind_text(stmt, 1, ConvertStringToUTF8(s_uuid), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 2, ConvertStringToUTF8(dob), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 3, ConvertStringToUTF8(age.ToString()), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 4, ConvertStringToUTF8(gender), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 5, ConvertStringToUTF8(nid), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 6, ConvertStringToUTF8(nationality), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 7, ConvertStringToUTF8(prov), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 8, ConvertStringToUTF8(school), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 9, ConvertStringToUTF8(pnid), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 10, ConvertStringToUTF8(parent), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 11, ConvertStringToUTF8(ther), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 12, ConvertStringToUTF8(dia), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 13, ConvertStringToUTF8(exp_date), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 14, ConvertStringToUTF8(answers), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 15, ConvertStringToUTF8(total.ToString()), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 16, ConvertStringToUTF8(r_string), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 17, ConvertStringToUTF8((20).ToString()), -1, SQLITE_STATIC); //flag=20

				int stepResult = sqlite3_step(stmt);

				if (stepResult == SQLITE_DONE) {
					MessageBox::Show("Survey Saved successfully!","Survey Saved", MessageBoxButtons::OK, MessageBoxIcon::Information);
					LoadSurveyList();
					this->panel->Hide();
					this->webBrowser1->Show();
					this->button2->Show();
				}
				else {
					String^ errorMessage = "Failed to execute query! \nError message: " + context.marshal_as<System::String^>(reinterpret_cast<const char*>(sqlite3_errmsg(db)))+" \nTry again!";
					MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				//sqlite3_finalize(stmt);
			}
			else {
				MessageBox::Show("Failed to prepare SQL statement!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			sqlite3_close(db);
		}
		else {
			MessageBox::Show("Failed to open or create database!");
		}



	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ un= this->textBox5->Text;
	String^ ps= this->textBox6->Text;
	String^ rol;
	if (un == "") {
		if (lan == "EN") {
			MessageBox::Show(L"الرجاء إدخال اسم المستخدم!", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			MessageBox::Show("Please enter Username!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		return;
	}
	if (ps == "") {
		if (lan == "EN") {
			MessageBox::Show(L"الرجاء إدخال كلمة المرور!", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			MessageBox::Show("Please enter Password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		return;
	}
	if (comboBox4->SelectedItem != nullptr) {
		rol = comboBox4->SelectedItem->ToString();
	}
	else
	{
		MessageBox::Show("Select Role!");
		return;
	}
	int ro;
	if (rol == "Admin") {
		ro = 0;
	}
	else
	{
		ro = 1;
	}

	sqlite3* db;
	int result = sqlite3_open("main.db", &db);
	if (result == SQLITE_OK) {
		char* errMsg;
		// Use parameterized query to prevent SQL injection
		String^ query = "INSERT INTO Users (Username, Password, Role) VALUES ('" + un + "', '" + HashPassword(ps) + "', '" + ro + "');";
		//const char* utf8Query = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(query)).ToPointer();

		int execResult = sqlite3_exec(db, ConvertStringToUTF8(query), 0, 0, &errMsg);

		sqlite3_free(errMsg);
		//sqlite3_free((void*)utf8Query);
		sqlite3_close(db);

		if (execResult != SQLITE_OK) {
			String^ errorMessage = "Failed to execute query! Error message: " + gcnew String(errMsg);
			MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			MessageBox::Show("User added successfully!");
			this->textBox5->Text="";
			this->textBox6->Text="";
			this->comboBox4->SelectedItem = nullptr;
			LoadUserList();
		}
	}
	else {
		MessageBox::Show("Failed to open or create database!");
	}

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox5->Text = "";
	this->textBox6->Text = "";
	this->comboBox4->SelectedItem = nullptr;
}
private:
	char* ConvertStringToUTF8(String^ inputString) {
		msclr::interop::marshal_context context;
		wstring_convert<codecvt_utf8<wchar_t>> utf8conv;
		wstring wstr = context.marshal_as<wstring>(inputString);
		string utf8str = utf8conv.to_bytes(wstr);
		char* result = new char[utf8str.length() + 1];
		strcpy(result, utf8str.c_str());
		return result;
	}
private:
	String^ ConvertUTF8ToSystemString(const unsigned char* utf8String) {
		wstring_convert<codecvt_utf8<wchar_t>> utf8conv;
		wstring wstr = utf8conv.from_bytes(reinterpret_cast<const char*>(utf8String));
		msclr::interop::marshal_context context;
		String^ result = context.marshal_as<String^>(wstr);
		return result;
	}
private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	// Get the selected username from the ListBox
	if (listBox1->SelectedItem != nullptr) {
		this->splitContainer1->Panel2->Controls->Remove(this->groupBox3);
		String^ selectedUsername = listBox1->SelectedItem->ToString();
		const char* utf8Username = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(selectedUsername)).ToPointer();
		sqlite3* db;
		int result = sqlite3_open("main.db", &db);
		if (result == SQLITE_OK) {
			// Define the SQL query to fetch user information
			String^ query = "SELECT * FROM Users WHERE username = '" + selectedUsername + "';";
			//const char* utf8Query = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(query)).ToPointer();
			sqlite3_stmt* stmt;
			int rc = sqlite3_prepare(db, ConvertStringToUTF8(query), -1, &stmt, NULL);
			if (rc == SQLITE_OK) {
				// Execute the statement
				if (sqlite3_step(stmt) == SQLITE_ROW) {
					// Access columns using sqlite3_column_XXX functions
					//const char* username = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1)); // Assuming username is at index 1
					//const char* password = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2)); // Assuming password is at index 2
					int role = sqlite3_column_int(stmt, 3); // Assuming role is at index 3

					// Convert to String^ and display or use the information
					String^ usernameStr = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 1));
					//String^ passwordStr = gcnew String(password);

					// Do something with the information (e.g., display in TextBoxes)
					this->textBox8->Text = usernameStr;
					this->comboBox5->SelectedIndex = role;
					this->splitContainer1->Panel2->Controls->Add(this->groupBox3);
				}
				sqlite3_finalize(stmt);
			}
			else {
				// Handle SQL preparation error
				MessageBox::Show("Failed to prepare SQL statement!");
			}

			// Close the database
			sqlite3_close(db);
		}
		else {
			// Handle database open error
			MessageBox::Show("Failed to open or create database!");
		}
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlite3* db;
	int result = sqlite3_open("main.db", &db);

	if (result == SQLITE_OK) {
		// Get the selected username from the ListBox
		String^ selectedUsername = listBox1->SelectedItem->ToString();
		const char* utf8Username = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(selectedUsername)).ToPointer();

		// Define the SQL query to delete the user
		String^ query = "DELETE FROM Users WHERE username = '" + selectedUsername + "';";
		//const char* utf8Query = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(query)).ToPointer();

		char* errMsg;
		int execResult = sqlite3_exec(db, ConvertStringToUTF8(query), 0, 0, &errMsg);

		//sqlite3_free((void*)utf8Query);

		if (execResult == SQLITE_OK) {
			// Remove the item from the ListBox
			listBox1->Items->Remove(selectedUsername);
			listBox1->SelectedItem = nullptr;
			this->splitContainer1->Panel2->Controls->Remove(this->groupBox3);
			LoadUserList();
		}
		else {
			// Handle SQL execution error
			MessageBox::Show("Failed to execute query! Error message: " + gcnew String(errMsg));
		}

		sqlite3_free(errMsg);
		sqlite3_close(db);
	}
	else {
		// Handle database open error
		MessageBox::Show("Failed to open or create database!");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ un = this->textBox8->Text;
	String^ ps = this->textBox7->Text;
	String^ rol;
	if (un == "") {
		if (lan == "EN") {
			MessageBox::Show(L"الرجاء إدخال اسم المستخدم!", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			MessageBox::Show("Please enter Username!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		return;
	}
	if (comboBox5->SelectedItem != nullptr) {
		rol = comboBox5->SelectedItem->ToString();
	}
	else
	{
		MessageBox::Show("Select Role!");
		return;
	}
	int ro;
	if (rol == "Admin") {
		ro = 0;
	}
	else
	{
		ro = 1;
	}


	sqlite3* db;
	int result = sqlite3_open("main.db", &db);
	String^ query;
	if (result == SQLITE_OK) {
		// Get the selected username from the ListBox
		String^ selectedUsername = listBox1->SelectedItem->ToString();
		const char* utf8Username = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(selectedUsername)).ToPointer();

		// Define the SQL query to update user information
		if (ps != "") {
			query = "UPDATE Users SET username = '" + un + "', password = '" + HashPassword(ps) + "', role = " + ro + " WHERE username = '" + selectedUsername + "';";
		}
		else {
			query = "UPDATE Users SET username = '" + un + "', role = " + ro + " WHERE username = '" + selectedUsername + "';";
		}
		//const char* utf8Query = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(query)).ToPointer();
		char* errMsg;
		int execResult = sqlite3_exec(db, ConvertStringToUTF8(query), 0, 0, &errMsg);
		//sqlite3_free((void*)utf8Query);
		if (execResult == SQLITE_OK) {
			// Update the ListBox item with the new username
			MessageBox::Show("User info updated successfully!");
			listBox1->SelectedItem = nullptr;
			this->splitContainer1->Panel2->Controls->Remove(this->groupBox3);
			LoadUserList();
		}
		else {
			// Handle SQL execution error
			MessageBox::Show("Failed to execute query! Error message: " + gcnew String(errMsg));
		}
		sqlite3_free(errMsg);
		sqlite3_close(db);
	}
	else {
		// Handle database open error
		MessageBox::Show("Failed to open or create database!");
	}

}
private: System::Void tabPage9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->listBox2->SelectedItem != nullptr) {
		this->groupBoxDemo->Controls->Remove(this->labelDemo);
		this->groupSurvey->Controls->Remove(this->labelSurvey);
		this->flowLayoutPanel1->Controls->Remove(this->groupBoxDemo);
		String^ selectedsur = this->listBox2->SelectedItem->ToString();
		const char* utf8sur = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(selectedsur)).ToPointer();
		sqlite3* db;
		int result = sqlite3_open("main.db", &db);
		if (result == SQLITE_OK) {
			// Define the SQL query to fetch user information
			String^ query = "SELECT * FROM Survey WHERE participant_id = " + selectedsur + ";";
			//String^ query = "SELECT * FROM Survey WHERE participant_id = '" + selectedsur + "';";
			//const char* utf8Query = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(query)).ToPointer();
			sqlite3_stmt* stmt;
			int rc = sqlite3_prepare(db, ConvertStringToUTF8(query), -1, &stmt, NULL);
			if (rc == SQLITE_OK) {
				// Execute the statement
				if (sqlite3_step(stmt) == SQLITE_ROW) {
					/*// Access columns using sqlite3_column_XXX functions
					const char* username = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1)); // Assuming username is at index 1
					//const char* password = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2)); // Assuming password is at index 2
					int role = sqlite3_column_int(stmt, 3); // Assuming role is at index 3

					// Convert to String^ and display or use the information
					String^ usernameStr = gcnew String(username);
					//String^ passwordStr = gcnew String(password);

					// Do something with the information (e.g., display in TextBoxes)
					this->textBox8->Text = usernameStr;
					this->comboBox5->SelectedIndex = role;
					this->splitContainer1->Panel2->Controls->Add(this->groupBox3);*/
					String^ participant_id = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 1));
					String^ dob = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 2));
					String^ age = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 3));
					String^ gender = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 4));
					String^ national_id = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 5));
					String^ nationality = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 6));
					String^ province = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 7));
					String^ School = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 8));
					String^ parent_national_id = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 9));
					String^ parent_name = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 10));
					String^ therapist_name = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 11));
					String^ diagnosed = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 12));
					String^ experiment_date = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 13));
					String^ answer = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 14));
					String^ sqc = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 15));
					String^ result = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 16));
					String^ flag = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 17));
					
					this->groupBoxDemo->Text =this->demographics;
					this->groupBoxDemo->Width = 600;
					this->groupBoxDemo->Height = 280;
					this->groupBoxDemo->Margin = System::Windows::Forms::Padding(40, 40, 0, 10);

					this->groupSurvey->Text = this->surveys;
					this->groupSurvey->Width = 600;
					this->groupSurvey->Height = 1200;
					this->groupSurvey->Margin = System::Windows::Forms::Padding(40, 40, 0, 10);

					String^ demoString;
					//demoString = "Participant ID: "+ participant_id.ToString()+"\nDate of Birth: "+gcnew String(dob)+"\nAge: "+age.ToString();
					demoString = this->pids+" " + participant_id+
								"\n"+this->dobs+" " + dob +
								//"\nAge: " + gcnew String(age)+
								"\n"+this->gens+" " + gender +
								"\n"+this->nids+" " + national_id +
								"\n"+this->nations+" " + nationality +
								"\n"+this->provs+" " + province +
								"\n"+this->clins+" " + School +
								"\n"+this->pnids+" " + parent_national_id +
								"\n"+this->pars+" " + parent_name +
								"\n"+this->thers+" " + therapist_name +
								"\n"+this->dias+" " + diagnosed +
								"\n"+this->exps+" " + experiment_date +
								"\n"+this->sqcs+" " + sqc +
								"\n"+this->rslts+" " + result;

					String^ surveyString = "";
					//MessageBox::Show(gcnew String(answer));
					List<String^>^ ansList = ConvertStringToList(gcnew String(answer));
					for (int i = 0; i < 20; i++) {
						//MessageBox::Show(questions->Count.ToString()+" \n"+ ansList[i]);
						surveyString += "Q." + (i + 1).ToString() + ". " + questions[i] + "\nAns: " + ansList[i] + "\n\n";
					}
					
					this->labelDemo->Text = demoString;
					this->labelDemo->Dock = DockStyle::Top;
					this->labelDemo->AutoSize = true;
					this->labelDemo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->labelDemo->Location = Point(10, 20);

					this->labelSurvey->Text = surveyString;
					this->labelSurvey->Dock = DockStyle::Top;
					this->labelSurvey->AutoSize = true;
					this->labelSurvey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->labelSurvey->Location = Point(10, 20);


					this->groupBoxDemo->Controls->Add(this->labelDemo);
					this->groupSurvey->Controls->Add(this->labelSurvey);
					this->flowLayoutPanel1->Controls->Add(this->groupBoxDemo);
					this->flowLayoutPanel1->Controls->Add(this->groupSurvey);
				}
				sqlite3_finalize(stmt);
			}
			else {
				// Handle SQL preparation error
				MessageBox::Show("Failed to prepare SQL statement!");
			}

			// Close the database
			sqlite3_close(db);
		}
		else {
			// Handle database open error
			MessageBox::Show("Failed to open or create database!");
		}
	}
}
};
}
