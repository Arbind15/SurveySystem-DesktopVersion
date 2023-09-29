#pragma once
#include "MyForm1.h"
#include "sqlite3.h"
#include <msclr/marshal_cppstd.h>
#include <codecvt>
#include <locale>
#include <cstring>
#include <codecvt>


namespace surveyApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ label1;

	protected:

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"logo.png");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(170, 46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(281, 132);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(232, 213);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(162, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Username";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			this->textBox1->GotFocus += gcnew System::EventHandler(this, &MyForm::textBox1_GotFocus);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown);
			this->textBox1->LostFocus += gcnew System::EventHandler(this, &MyForm::textBox1_LostFocus);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(232, 250);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(162, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Password";
			this->textBox2->GotFocus += gcnew System::EventHandler(this, &MyForm::textBox2_GotFocus);
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox2_KeyDown);
			this->textBox2->LostFocus += gcnew System::EventHandler(this, &MyForm::textBox2_LostFocus);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(319, 289);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 27);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(232, 289);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(2);
			this->button2->Size = System::Drawing::Size(75, 27);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(556, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 15);
			this->label1->TabIndex = 5;
			this->label1->Text = L"AR";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->ClientSize = System::Drawing::Size(603, 404);
			this->Icon = gcnew System::Drawing::Icon("logo.ico");
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login | Survey System";
			this->Activated += gcnew System::EventHandler(this, &MyForm::MyForm_Activated);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();



			sqlite3* db;
			int result = sqlite3_open("main.db", &db);

			if (result == SQLITE_OK) {
				// Database opened successfully or already exists
				//MessageBox::Show("Database opened successfully!");

				// Perform any database operations here
				char* errMsg;
				sqlite3_exec(db, "PRAGMA encoding = 'UTF-8';", 0, 0, 0);
				sqlite3_exec(db, "CREATE TABLE IF NOT EXISTS Users ("
                             "ID INTEGER PRIMARY KEY AUTOINCREMENT,"
                             "Username TEXT NOT NULL UNIQUE,"
                             "Password TEXT NOT NULL,"
					"Role INTEGER NOT NULL);", 0, 0, &errMsg);
				//sqlite3_free(errMsg);
				//sqlite3_exec(db, "DROP TABLE IF EXISTS Users; ", 0, 0, &errMsg);

				const char* query = "SELECT COUNT(*) FROM Users WHERE Role = 0;";
				sqlite3_stmt* statement;
				msclr::interop::marshal_context context;
				if (sqlite3_prepare(db, query, -1, &statement, nullptr) == SQLITE_OK) {
					if (sqlite3_step(statement) == SQLITE_ROW) {
						int rowCount = sqlite3_column_int(statement, 0);
						if (rowCount == 0) {
							// The Users table has no rows or zero records for Role 0
							sqlite3_exec(db, "INSERT INTO Users (Username, Password, Role) VALUES ('hana', '68616E6140313233', '0');", 0, 0, &errMsg);
							//sqlite3_exec(db, "INSERT INTO Users (Username, Password, Role) VALUES ('هاناس', 'هاناس', '1');", 0, 0, &errMsg);

							
							
							
							/*const char* insertQuery = "INSERT INTO Users (Username, Password, Role) VALUES (?, ?, ?);";
							//const char* username = u8"استطلاعاستطلاعاستطلاعاستطلاع";
							//const char* password = u8"استطلاعarbind@1234!#@$%^&*(_+{}:><?|~";
							int role = 0;

							std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;

							wstring uss = L"هاناdddddddddسهاناus44sssuuسهاناس";
							//const char* usss = context.marshal_as<std::string>(uss).c_str();

							wstring_convert<codecvt_utf8<wchar_t>> utf8conv;
							std::string usss = utf8conv.to_bytes(uss);

							//char* usr = "هاناسهاناسه56هاddsssssناسهاناسه";
							const char* pwd = u8"هاناسهاناسهbbyy6اناس";

							sqlite3_stmt* stmt;
							if (sqlite3_prepare(db, insertQuery, -1, &stmt, NULL) == SQLITE_OK) {
								sqlite3_bind_text(stmt, 1, ConvertStringToUTF8(L"هاناسهاناسههاناسهان121اسهhdhdهاناسهاناسه"), -1, SQLITE_TRANSIENT);
								sqlite3_bind_text(stmt, 2, ConvertStringToUTF8(L"hpassdpsshdhdهاناسهاناسه"), -1, SQLITE_TRANSIENT);
								sqlite3_bind_int(stmt, 3, role);

								if (sqlite3_step(stmt) != SQLITE_DONE) {
									// Handle the error
								}

								sqlite3_finalize(stmt);
							}
							else {
								// Handle the error
							}*/



						}
					}
					sqlite3_finalize(statement);
				}

				//sqlite3_exec(db, "INSERT INTO Users (Username, Password, Role) VALUES ('hana', '68616E6140313233', '0');", 0, 0, &errMsg);
				
				sqlite3_exec(db, "CREATE TABLE IF NOT EXISTS Survey ("
									"ID INTEGER PRIMARY KEY AUTOINCREMENT, "
                                      "    participant_id TEXT UNIQUE,"
                                      "    dob TEXT,"
                                      "    age TEXT,"
                                      "    gender TEXT,"
                                      "    national_id TEXT UNIQUE,"
                                      "    nationality TEXT,"
                                      "    province TEXT,"
                                      "    School TEXT,"
                                      "    parent_national_id TEXT,"
                                      "    parent_name TEXT,"
                                      "    therapist_name TEXT,"
                                      "    diagnosed TEXT,"
                                      "    experiment_date TEXT,"
                                      "    answers TEXT,"
                                      "    SQC_Score TEXT,"
                                      "    result TEXT,"
                                      "    flag TEXT"
					");", 0, 0, &errMsg);

				//sqlite3_exec(db, "DROP TABLE IF EXISTS Survey; ", 0, 0, &errMsg);

				sqlite3_free(errMsg);
				sqlite3_close(db);
			}
			else {
				// Failed to open or create database
				MessageBox::Show("Failed to open or create database!");
			}
		}
#pragma endregion
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
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lang Toggle the button's state
		label1->Text = (label1->Text == "AR") ? "EN" : "AR";
		if (label1->Text=="EN") {
			this->button1->Text = L"تسجيل الدخول";
			this->button2->Text = L"مخرج";
		}
		else
		{
			this->button1->Text = "Login";
			this->button2->Text = "Exit";
		}
	}
	private: System::Void textBox1_GotFocus(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == L"Username") {
			textBox1->Text = "";
		}
	}
	private: System::Void textBox2_GotFocus(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "Password") {
			textBox2->PasswordChar = '*'; // This sets the PasswordChar to *
			textBox2->Text = "";
		}
	}
	private: System::Void textBox1_LostFocus(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "") {
			textBox1->Text = L"Username";
		}
	}
	private: System::Void textBox2_LostFocus(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "") {
			textBox2->Text = "Password";
			textBox2->PasswordChar = '\0'; // This sets the PasswordChar to *
		}
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ActiveControl = nullptr; // Set the active control to null
	}
	private: System::Void MyForm_Activated(System::Object^ sender, System::EventArgs^ e) {
		this->ActiveControl = nullptr; // Set the active control to null
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit(); // Close the application
	}
	private: String^ HashPassword(String^ password) {
		String^ hexString;

		for (int i = 0; i < password->Length; i++)
		{
			int b = password[i];
			hexString += String::Format("{0:X2}", b);
		}

		return hexString;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox1->Text == "" || this->textBox1->Text == "Username") {
			if (this->label1->Text == "EN") {
				MessageBox::Show(L"الرجاء إدخال اسم المستخدم!", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				MessageBox::Show("Please enter Username!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else if (this->textBox2->Text == "" || this->textBox2->Text == "Password") {
			if (this->label1->Text == "EN") {
				MessageBox::Show(L"الرجاء إدخال كلمة المرور!", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				MessageBox::Show("Please enter Password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else
		{
			sqlite3* db;
			int login_flag = 0;
			int result = sqlite3_open("main.db", &db);
			String^ retrievedUsername;
			int role, id;
			// Create a marshal_context object
			msclr::interop::marshal_context context;
			if (result == SQLITE_OK) {

				const char* sql = "SELECT * FROM users WHERE username = ? AND password = ?;";
				sqlite3_stmt* stmt;
				int rc = sqlite3_prepare(db, sql, -1, &stmt, NULL);

				if (rc == SQLITE_OK) {
					System::String^ usr = this->textBox1->Text;
					System::String^ pwd = HashPassword(this->textBox2->Text);
					//const char* username = context.marshal_as<const char*>(usr); // Replace with actual username
					//const char* password = context.marshal_as<const char*>(pwd); // Replace with actual password

					// Bind values to the placeholders
					sqlite3_bind_text(stmt, 1, ConvertStringToUTF8(usr), -1, SQLITE_STATIC);
					sqlite3_bind_text(stmt, 2, ConvertStringToUTF8(pwd), -1, SQLITE_STATIC);

					// Execute the statement
					while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
						// Access columns using sqlite3_column_XXX functions
						// For example, sqlite3_column_text(stmt, 0) to get the username
						// and sqlite3_column_text(stmt, 1) to get the password
						id= sqlite3_column_int(stmt, 0);
						retrievedUsername = ConvertUTF8ToSystemString(sqlite3_column_text(stmt, 1));
						role = sqlite3_column_int(stmt, 3);
						login_flag = 1;
					}
					sqlite3_finalize(stmt);
				}
				sqlite3_close(db);
			}
			else {
				MessageBox::Show("Failed to open or create database!");
			}
			
			if (login_flag==1) {
				this->Hide();
				MyForm1^ obj1= gcnew MyForm1(this, id, retrievedUsername, role, this->label1->Text);
				obj1->Show();
			}
			else
			{
				if (this->label1->Text == "EN") {
					MessageBox::Show(L"اسم المستخدم/كلمة المرور غير صالحة!", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
				{
					MessageBox::Show("Inavlid Username/Password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				
			}
		}
	}

	private:
		// Define a callback function to process the results
		static int callback(void* data, int argc, char** argv, char** azColName) {
			int i;
			for (i = 0; i < argc; i++) {
				MessageBox::Show("Here!");
			}
			return 0;
		}


	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			button1->PerformClick(); // Programmatically trigger the button click event
		}
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			textBox2->Focus(); // Set focus to textBox2
		}
	}
	private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			button1->PerformClick(); // Programmatically trigger the button click event
		}
	}
};
}
