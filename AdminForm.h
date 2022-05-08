#pragma once
#include "BookAddForm.h"

namespace WinFormsCpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AdminForm
	/// </summary>
	/// 
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public: String^ logined_user_name;
	public: String^ logined_user_surname;
	private: System::Windows::Forms::Label^ label3;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	public: String^ logined_user_m_name;
	public:
		AdminForm(String^ log, String^ pas)
		{
			InitializeComponent();
			USER logined_user;
			USER temp_user;
			std::ifstream user_read("Admin.txt");
			std::string temp_login = msclr::interop::marshal_as< std::string >(log);
			std::string temp_password = msclr::interop::marshal_as< std::string >(pas);
			getline(user_read, temp_user.login);
			getline(user_read, temp_user.password);
			getline(user_read, temp_user.name);

			if (temp_user.login == temp_login && temp_user.password == temp_password) {
					logined_user_name = msclr::interop::marshal_as<String^>(temp_user.name);
					logined_user_surname = msclr::interop::marshal_as<String^>(temp_user.surname);
					logined_user_m_name = msclr::interop::marshal_as<String^>(temp_user.mName);
				}
			this->label3->Text = logined_user_name;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(193, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(14, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Добро пожаловать,";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выходToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1490, 28);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminForm::выходToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(18, 93);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(390, 415);
			this->dataGridView1->TabIndex = 9;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(414, 94);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(629, 415);
			this->dataGridView2->TabIndex = 10;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(1049, 93);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(429, 415);
			this->dataGridView3->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(411, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 16);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Список пользователей";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Список книг";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1046, 67);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 16);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Список заказов";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(414, 515);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 54);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Сформировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(18, 515);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 54);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Сформировать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1049, 515);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(168, 54);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Сформировать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminForm::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(187, 527);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(212, 16);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Удалить книгу (введите номер)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(188, 546);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(211, 22);
			this->textBox1->TabIndex = 19;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(18, 576);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(163, 35);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Добавить книгу";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AdminForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(188, 575);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(211, 36);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Удалить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AdminForm::button5_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1490, 633);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void ShowUsers(std::vector<USER> user_vec) {
			for (int i = 0; i < (int)user_vec.size(); i++) {
				dataGridView2->Columns[0]->HeaderCell->Value = "Фамилия";
				dataGridView2->Columns[1]->HeaderCell->Value = "Имя";
				dataGridView2->Columns[2]->HeaderCell->Value = "Отчество";
				dataGridView2->Columns[3]->HeaderCell->Value = "Номер";
				dataGridView2->Columns[4]->HeaderCell->Value = "Почта";
				dataGridView2->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
				String^ surname = msclr::interop::marshal_as<String^>(user_vec[i].surname);
				String^ name = msclr::interop::marshal_as<String^>(user_vec[i].name);
				String^ m_name = msclr::interop::marshal_as<String^>(user_vec[i].mName);
				String^ phone = msclr::interop::marshal_as<String^>(user_vec[i].number);
				String^ mail = msclr::interop::marshal_as<String^>(user_vec[i].mail);
				dataGridView2->Rows[i]->Cells[0]->Value = surname;
				dataGridView2->Rows[i]->Cells[1]->Value = name;
				dataGridView2->Rows[i]->Cells[2]->Value = m_name;
				dataGridView2->Rows[i]->Cells[3]->Value = phone;
				dataGridView2->Rows[i]->Cells[4]->Value = mail;
			}
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::vector<USER> users;
		int cols_number = 5;
		//Считываем данные
		std::ifstream reader("USERS.txt");
		USER temp_user;
		while (true) {
			getline(reader, temp_user.surname);
			getline(reader, temp_user.name);
			getline(reader, temp_user.mName);
			getline(reader, temp_user.number);
			getline(reader, temp_user.mail);
			getline(reader, temp_user.login);
			getline(reader, temp_user.password);
			if (reader.eof()) { break; }
			users.push_back(temp_user);
		}
		reader.close();
		//Формируем таблицу
		dataGridView2->RowCount = users.size();
		dataGridView2->ColumnCount = 5;

		ShowUsers(users);
		//Выравниваем таблицу
		dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView2->AutoResizeColumns();
	}

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
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "ru");
		std::vector<Book> books;
		books.clear();
		int cols_number = 4;
		//Считываем данные
		std::ifstream reader("Books.txt", std::ios_base::beg);
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
		dataGridView1->ColumnCount = cols_number;

		ShowBooks(books);
		//Выравниваем таблицу
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView1->AutoResizeColumns();
	}


private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
	private: void ShowOrders(std::vector<Order> order_vec) {
		for (int i = 0; i < (int)order_vec.size(); i++) {
			dataGridView3->Columns[0]->HeaderCell->Value = "Название";
			dataGridView3->Columns[1]->HeaderCell->Value = "Автор";
			dataGridView3->Columns[2]->HeaderCell->Value = "Цена";
			dataGridView3->Columns[3]->HeaderCell->Value = "Жанр";
			dataGridView3->Columns[4]->HeaderCell->Value = "Дата";
			dataGridView3->Columns[5]->HeaderCell->Value = "Фамилия";
			dataGridView3->Columns[6]->HeaderCell->Value = "Имя";
			dataGridView3->Columns[7]->HeaderCell->Value = "Отчество";
			dataGridView3->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			String^ name = msclr::interop::marshal_as<String^>(order_vec[i].book_name);
			String^ author = msclr::interop::marshal_as<String^>(order_vec[i].author_name);
			String^ cost = msclr::interop::marshal_as<String^>(order_vec[i].cost);
			String^ genre = msclr::interop::marshal_as<String^>(order_vec[i].genre);
			String^ date = msclr::interop::marshal_as<String^>(order_vec[i].date);
			String^ surname = msclr::interop::marshal_as<String^>(order_vec[i].user_surname);
			String^ user_name = msclr::interop::marshal_as<String^>(order_vec[i].user_name);
			String^ m_name = msclr::interop::marshal_as<String^>(order_vec[i].user_m_name);
			dataGridView3->Rows[i]->Cells[0]->Value = name;
			dataGridView3->Rows[i]->Cells[1]->Value = author;
			dataGridView3->Rows[i]->Cells[2]->Value = cost;
			dataGridView3->Rows[i]->Cells[3]->Value = genre;
			dataGridView3->Rows[i]->Cells[4]->Value = date;
			dataGridView3->Rows[i]->Cells[5]->Value = surname;
			dataGridView3->Rows[i]->Cells[6]->Value = user_name;
			dataGridView3->Rows[i]->Cells[7]->Value = m_name;
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(LC_ALL, "ru");
	std::vector<Order> orders;
	int cols_number = 8;
	std::ifstream reader("Stat.txt");
	Order temp_order;
	while (true) {

		getline(reader, temp_order.book_name);
		getline(reader, temp_order.author_name);
		getline(reader, temp_order.cost);
		getline(reader, temp_order.genre);
		getline(reader, temp_order.date);
		getline(reader, temp_order.user_surname);
		getline(reader, temp_order.user_name);
		getline(reader, temp_order.user_m_name);
		if (reader.eof()) { break; }
		orders.push_back(temp_order);
	}
	reader.close();
	dataGridView3->RowCount = orders.size();
	dataGridView3->ColumnCount = cols_number;

	ShowOrders(orders);

	dataGridView3->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView3->AutoResizeColumns();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int book_number = Convert::ToInt32(textBox1->Text);
	std::vector <Book> books;
	Book temp_book;
	std::ifstream reader("Books.txt", std::ios_base::beg);
	int i = 1;
	while (true) {
		getline(reader, temp_book.name);
		getline(reader, temp_book.autor_name);
		getline(reader, temp_book.cost);
		getline(reader, temp_book.genre);
		if (reader.eof()) { break; }
		if (i == book_number) {
			i += 1;
		}
		else {
			books.push_back(temp_book);
			i += 1;
		}
		
	}
	reader.close();
	std::ofstream writer("Books.txt", std::ios_base::trunc);
	for (int i = 0; i < (int)books.size(); i++) {
		writer << books[i].name << std::endl;
		writer << books[i].autor_name << std::endl;
		writer << books[i].cost << std::endl;
		writer << books[i].genre << std::endl;
	}
	writer.close();
	MessageBox::Show(this, "Книга удалена", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	BookAddForm^ book_add_form = gcnew BookAddForm();
	book_add_form->Show();
}
};
}
