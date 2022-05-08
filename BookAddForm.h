#pragma once
#include "struct.h"

namespace WinFormsCpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для BookAddForm
	/// </summary>
	public ref class BookAddForm : public System::Windows::Forms::Form
	{
	public:
		BookAddForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~BookAddForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(137, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Добавление книги";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(110, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(302, 22);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(110, 97);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(302, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(110, 138);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(302, 22);
			this->textBox3->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(13, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Название";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(13, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Автор";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(13, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Цена";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(115, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 35);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BookAddForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(13, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Жанр";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(110, 175);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(302, 22);
			this->textBox4->TabIndex = 8;
			// 
			// BookAddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(440, 261);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"BookAddForm";
			this->Text = L"BookAddForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string book_name = msclr::interop::marshal_as < std::string >(textBox1->Text);
		std::string book_author = msclr::interop::marshal_as < std::string >(textBox2->Text);
		std::string book_cost = msclr::interop::marshal_as < std::string >(textBox3->Text);
		std::string book_genre = msclr::interop::marshal_as<std::string>(textBox4->Text);
		std::ofstream writer("Books.txt", std::ios_base::app);
		writer << book_name << std::endl;
		writer << book_author << std::endl;
		writer << book_cost << std::endl;
		writer << book_genre << std::endl;
		MessageBox::Show(this, "Книга успешно добавлена\nОбновите список", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}
