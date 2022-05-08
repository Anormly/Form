#pragma once
#include "LoginForm.h"
#include "UserForm.h"
#include "AdminForm.h"

namespace WinFormsCpp {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ����;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->���� = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ����
			// 
			this->����->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->����->Location = System::Drawing::Point(150, 197);
			this->����->Name = L"����";
			this->����->Size = System::Drawing::Size(131, 62);
			this->����->TabIndex = 17;
			this->����->Text = L"����";
			this->����->UseVisualStyleBackColor = true;
			this->����->Click += gcnew System::EventHandler(this, &LoginForm::����_Click_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(121, 150);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(291, 22);
			this->textBox2->TabIndex = 16;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(121, 95);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(291, 22);
			this->textBox1->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(14, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 14;
			this->label3->Text = L"������:";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(14, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 13;
			this->label2->Text = L"�����:";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(115, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 60);
			this->label1->TabIndex = 12;
			this->label1->Text = L"�����������";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(426, 28);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::�����ToolStripMenuItem_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(426, 305);
			this->Controls->Add(this->����);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool admin_login(String^ login, String^ password) {
			bool admin_log = false;
			std::ifstream admin_read("Admin.txt");
			getline(admin_read, admin.login);
			getline(admin_read, admin.password);
			getline(admin_read, admin.name);
			std::string temp_login = msclr::interop::marshal_as< std::string >(login);
			std::string temp_password = msclr::interop::marshal_as< std::string >(password);
			if (temp_login == admin.login && temp_password == admin.password)
			{
				admin_log = true;
				admin_read.close();
			}
			return admin_log;
		}
		bool user_login(String^ login, String^ password) {
			std::ifstream user_read("USERS.txt");
			std::string temp_login = msclr::interop::marshal_as< std::string >(login);
			std::string temp_password = msclr::interop::marshal_as< std::string >(password);

			bool user_log = false;
			
			while (true) {
				getline(user_read, user.surname);
				getline(user_read, user.name);
				getline(user_read, user.mName);
				getline(user_read, user.number);
				getline(user_read, user.mail);
				getline(user_read, user.login);
				getline(user_read, user.password);
				if (user_read.eof()) { break; }
				else {
					if (user.login == temp_login && user.password == temp_password) {
						user_log = true;
					}
				}
			}
			user_read.close();
			return user_log;
		}
	private: System::Void ����_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ log = textBox1->Text;
		String^ pas = textBox2->Text;

		if (user_login(log, pas)) {
			UserForm^ user_form = gcnew UserForm(log, pas);
			this->Hide();
			user_form->Show();
		}

		else if (admin_login(log, pas)) {
			AdminForm^ admin_form = gcnew AdminForm(log, pas);
			this->Hide();
			admin_form->Show();
		}
		else { MessageBox::Show(this, "������������ �� ���������������", "���������", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
