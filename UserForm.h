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
	/// Сводка для UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public: String^ logined_user_name;
	public: String^ logined_user_surname;
	private: System::Windows::Forms::Label^ label4;
	public:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	public: String^ logined_user_m_name;
	public:
		UserForm(String^ log, String^ pas)
		{
			InitializeComponent();
			USER temp_user;
			USER logined_user;

			std::ifstream user_read("USERS.txt");
			std::string temp_login = msclr::interop::marshal_as< std::string >(log);
			std::string temp_password = msclr::interop::marshal_as< std::string >(pas);


			while (true) {
				getline(user_read, temp_user.surname);
				getline(user_read, temp_user.name);
				getline(user_read, temp_user.mName);
				getline(user_read, temp_user.number);
				getline(user_read, temp_user.mail);
				getline(user_read, temp_user.login);
				getline(user_read, temp_user.password);
				if (user_read.eof()) { break; }
				else {
					if (temp_user.login == temp_login && temp_user.password == temp_password) {
						logined_user_name = msclr::interop::marshal_as<String^>(temp_user.name);
						logined_user_surname = msclr::interop::marshal_as<String^>(temp_user.surname);
						logined_user_m_name = msclr::interop::marshal_as<String^>(temp_user.mName);
					}
				}
				this->label3->Text = logined_user_name;
			}
		}


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(15, 107);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(480, 511);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Список книг";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 624);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 54);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Сформировать ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выходToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(789, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &UserForm::выходToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(15, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Добро пожаловать,";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(194, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(529, 75);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Покупка книги";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(533, 98);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 22);
			this->textBox1->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(533, 127);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(189, 15);
			this->label5->TabIndex = 8;
			this->label5->Text = L"введите номер книги из списка";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(536, 162);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(210, 48);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Купить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UserForm::button2_Click);
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(789, 686);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"UserForm";
			this->Text = L"UserForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void ShowBooks(std::vector<Book> book_vec) {
		for (int i = 0; i < (int)book_vec.size(); i++) {
			dataGridView1->Columns[0]->HeaderCell->Value = "Название";
			dataGridView1->Columns[1]->HeaderCell->Value = "Автор";
			dataGridView1->Columns[2]->HeaderCell->Value = "Цена";
			dataGridView1->Columns[3]->HeaderCell->Value = "Жанр";
			dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			String^ name = msclr::interop::marshal_as<String^>(book_vec[i].name);
			String^ author = msclr::interop::marshal_as<String^>(book_vec[i].autor_name);
			String^ cost = msclr::interop::marshal_as<String^>(book_vec[i].cost);
			String^ genre = msclr::interop::marshal_as<String^>(book_vec[i].genre);
			dataGridView1->Rows[i]->Cells[0]->Value = name;
			dataGridView1->Rows[i]->Cells[1]->Value = author;
			dataGridView1->Rows[i]->Cells[2]->Value = cost;
			dataGridView1->Rows[i]->Cells[3]->Value = genre;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "ru");
		std::vector<Book> books;
		int cols_number = 4;
		//Считываем данные
		std::ifstream reader("Books.txt");
		Book temp_book;
		while (true) {
			
			getline(reader, temp_book.name);
			getline(reader, temp_book.autor_name);
			getline(reader, temp_book.cost);
			getline(reader, temp_book.genre);
			if (reader.eof()) { break; }
			books.push_back(temp_book);
		}
		reader.close();
		
		//Формируем таблицу
		dataGridView1->RowCount = books.size();
		dataGridView1->ColumnCount = 4;

		ShowBooks(books);
		//Выравниваем таблицу
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView1->AutoResizeColumns();
	}


	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int book_number = Convert::ToInt32(textBox1->Text);
		int index = 0;
		msclr::interop::marshal_context context;
		std::string write_name = context.marshal_as<std::string>(logined_user_name);
		std::string write_surname = context.marshal_as<std::string>(logined_user_surname);
		std::string write_m_name = context.marshal_as<std::string>(logined_user_m_name);
		std::ifstream reader("Books.txt");
		Book temp_book;
		while (index != book_number) {
			getline(reader, temp_book.name);
			getline(reader, temp_book.autor_name);
			getline(reader, temp_book.cost);
			getline(reader, temp_book.genre);
			if (reader.eof()) { break; }
			index += 1;
		}
		reader.close();
		std::ifstream stat_reader("Stat.txt");
		bool discount = false;
		std::vector <Order> orders;
		Order temp_order;
		while (true) {
			getline(stat_reader, temp_order.book_name);
			getline(stat_reader, temp_order.author_name);
			getline(stat_reader, temp_order.cost);
			getline(stat_reader, temp_order.genre);
			getline(stat_reader, temp_order.date);
			getline(stat_reader, temp_order.user_surname);
			getline(stat_reader, temp_order.user_name);
			getline(stat_reader, temp_order.user_m_name);
			if (stat_reader.eof()) { break; }
			orders.push_back(temp_order);
		}
		stat_reader.close();
		int count_of_same_orders = 0;
		std::string user_surname = context.marshal_as<std::string>(logined_user_surname);
		for (int i = 0; i < (int)orders.size(); i++) {
			int count_of_same_orders = std::count_if(orders.begin(), orders.end(), CompareFirstName(user_surname));
			if (count_of_same_orders >= 3) {
				discount = true;
			}
		}

		std::ofstream statistic_writer("Stat.txt", std::ios_base::app);
		SYSTEMTIME time;
		if (discount == true) {
			statistic_writer << temp_book.name << std::endl;
			statistic_writer << temp_book.autor_name << std::endl;
			statistic_writer << stoi(temp_book.cost) * 0.97 << std::endl;
			statistic_writer << temp_book.genre << std::endl;
			GetLocalTime(&time);
			statistic_writer << time.wDay << "." << time.wMonth << "." << time.wYear << std::endl;
			statistic_writer << write_surname << '\n' << write_name << '\n' << write_m_name << std::endl;
			statistic_writer.close();
			MessageBox::Show(this, "Спасибо за покупку!\nВам предоставлена скидка 3%!", "покупка книги", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			statistic_writer << temp_book.name << std::endl;
			statistic_writer << temp_book.autor_name << std::endl;
			statistic_writer << temp_book.cost << std::endl;
			statistic_writer << temp_book.genre << std::endl;
			GetLocalTime(&time);
			statistic_writer << time.wDay << "." << time.wMonth << "." << time.wYear << std::endl;
			statistic_writer << write_surname << '\n' << write_name << '\n' << write_m_name << std::endl;
			statistic_writer.close();
			MessageBox::Show(this, "Спасибо за покупку!", "покупка книги", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}
	; }
