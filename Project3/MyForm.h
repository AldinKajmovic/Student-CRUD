#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Data::OleDb;

	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



































	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBoxPretraga;
	private: System::Windows::Forms::TextBox^ textBoxIme;
	private: System::Windows::Forms::TextBox^ textBoxPrezime;
	private: System::Windows::Forms::TextBox^ textBoxAdresa;
	private: System::Windows::Forms::TextBox^ textBoxPostanski;
	private: System::Windows::Forms::TextBox^ textBoxTelefon;







	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;








	protected:

	protected:

	protected:

	protected:

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBoxPretraga = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIme = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrezime = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdresa = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPostanski = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTelefon = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(28, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Indeks studenta";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(28, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ime";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(28, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Prezime";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(28, 173);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Adresa";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(28, 211);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Poštanski kod";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(28, 246);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Broj telefona";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(31, 309);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(697, 112);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// textBoxPretraga
			// 
			this->textBoxPretraga->Location = System::Drawing::Point(269, 21);
			this->textBoxPretraga->Name = L"textBoxPretraga";
			this->textBoxPretraga->Size = System::Drawing::Size(319, 20);
			this->textBoxPretraga->TabIndex = 8;
			// 
			// textBoxIme
			// 
			this->textBoxIme->Location = System::Drawing::Point(269, 97);
			this->textBoxIme->Name = L"textBoxIme";
			this->textBoxIme->Size = System::Drawing::Size(319, 20);
			this->textBoxIme->TabIndex = 10;
			// 
			// textBoxPrezime
			// 
			this->textBoxPrezime->Location = System::Drawing::Point(269, 132);
			this->textBoxPrezime->Name = L"textBoxPrezime";
			this->textBoxPrezime->Size = System::Drawing::Size(319, 20);
			this->textBoxPrezime->TabIndex = 11;
			// 
			// textBoxAdresa
			// 
			this->textBoxAdresa->Location = System::Drawing::Point(269, 173);
			this->textBoxAdresa->Name = L"textBoxAdresa";
			this->textBoxAdresa->Size = System::Drawing::Size(319, 20);
			this->textBoxAdresa->TabIndex = 12;
			// 
			// textBoxPostanski
			// 
			this->textBoxPostanski->Location = System::Drawing::Point(269, 211);
			this->textBoxPostanski->Name = L"textBoxPostanski";
			this->textBoxPostanski->Size = System::Drawing::Size(319, 20);
			this->textBoxPostanski->TabIndex = 13;
			// 
			// textBoxTelefon
			// 
			this->textBoxTelefon->Location = System::Drawing::Point(269, 246);
			this->textBoxTelefon->Name = L"textBoxTelefon";
			this->textBoxTelefon->Size = System::Drawing::Size(319, 20);
			this->textBoxTelefon->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(653, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Pretraga";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(653, 59);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Unos";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gray;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(653, 97);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Izmjena";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gray;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(653, 132);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 20);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Obrisi";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(653, 173);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 20);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Resetuj";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gray;
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(653, 211);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 20);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Ispis";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(653, 259);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 32);
			this->button7->TabIndex = 21;
			this->button7->Text = L"Izlaz";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DodgerBlue;
			this->ClientSize = System::Drawing::Size(798, 573);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxTelefon);
			this->Controls->Add(this->textBoxPostanski);
			this->Controls->Add(this->textBoxAdresa);
			this->Controls->Add(this->textBoxPrezime);
			this->Controls->Add(this->textBoxIme);
			this->Controls->Add(this->textBoxPretraga);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Black;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Student CRUD App";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//Change this to your own path
		OleDbConnection^ konekcija = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=E:\\repos\\c\\dbStudent.accdb");
		
		
		Bitmap^ bitmapa;

	


#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		prikaziPodatke();
	}

private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	
		
}



void izvrsiUpit(String^ upit) {
		   try {
			   konekcija->Open();
			   OleDbCommand^ sqlKomanda = konekcija->CreateCommand();
			   sqlKomanda->CommandType = CommandType::Text;
			   sqlKomanda->CommandText = upit;
			   sqlKomanda->ExecuteNonQuery();
			   konekcija->Close();
		   }
		   catch (Exception^ izuzetak) {
			   MessageBox::Show(izuzetak->Message, "Izvrsenje upita nije bilo uspjesno!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   konekcija->Close();
		   }
	   }

void prikaziPodatke() {
	
	try {
		konekcija->Open();
		OleDbCommand^ sqLKomanda = konekcija->CreateCommand(); //DML naredba za fečovanje podataka iz baze
		sqLKomanda->CommandType = CommandType::Text;
		sqLKomanda->CommandText = "SELECT * FROM student ";//Ako 
		sqLKomanda->ExecuteNonQuery();
		DataTable^ tabela = gcnew DataTable;//pripremanje virtualne tabele za smještanje podataka iz ACCESS tabele STUDENT
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(sqLKomanda);//definisanje veze između Visaul C++ i ACCESS-a
		adapter->Fill(tabela);//popunjavanje virtalne tabele podacima iz tabele STUDENT 
		dataGridView1->DataSource = tabela;//prikazivanje podataka na formi pomoću tipa DataGridView
		konekcija->Close();
	}
	catch (Exception^ izuzetak) {
		MessageBox::Show(izuzetak->Message, "Konekcija izmedju Visual C++-a i ACCESS-a", MessageBoxButtons::OK, MessageBoxIcon::Error);
		konekcija->Close();
	}

	
	
}

void ocistiPolja() {
	textBoxPretraga->Text = ""; textBoxIme->Text = "";
	textBoxPrezime->Text = "";	textBoxAdresa->Text = "";
	textBoxPostanski->Text = "";	textBoxTelefon->Text = "";
	
}


private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) { //PRETRAGA
		try {
			konekcija->Open();
			OleDbCommand^ sqLKomanda = konekcija->CreateCommand(); //DML naredba za fečovanje podataka iz baze
			sqLKomanda->CommandType = CommandType::Text;
			sqLKomanda->CommandText = "SELECT * FROM student WHERE ID='" + textBoxPretraga->Text + "'";//Ako 
			//sqLKomanda->CommandText = "select * from student where ID='" + textBoxPretraga->Text + "' or Ime = '" + textBoxPretraga->Text + "' or Prezime like '%" + textBoxPretraga->Text + "%'";
			sqLKomanda->ExecuteNonQuery();
			DataTable^ tabela = gcnew DataTable;//pripremanje virtualne tabele za smještanje podataka iz ACCESS tabele STUDENT
			OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(sqLKomanda);//definisanje veze između Visaul C++ i ACCESS-a
			adapter->Fill(tabela);//popunjavanje virtalne tabele podacima iz tabele STUDENT 
			dataGridView1->DataSource = tabela;//prikazivanje podataka na formi pomoću tipa DataGridView			
			int brojSlogova = Convert::ToInt32(tabela->Rows->Count.ToString());		
			if (brojSlogova == 0) {
				MessageBox::Show("Slog nije pronadjen!", "CRUD - Visual C++ - ACCESS", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				textBoxPretraga->Text = "";
			}
			
			konekcija->Close();
		}
		catch (Exception^ izuzetak) {
			MessageBox::Show(izuzetak->Message, "Konekcija izmedju Visual C++-a i ACCESS-a", MessageBoxButtons::OK, MessageBoxIcon::Error);
			konekcija->Close();
		}
}


private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//INSERT PODATAKA
	izvrsiUpit(gcnew String("insert into student(ID, Ime, Prezime, Adresa, PostanskiBroj, Telefon) values('" +
		textBoxPretraga->Text + "','" + textBoxIme->Text + "','" + textBoxPrezime->Text + "','" + textBoxAdresa->Text + "','" +
		textBoxPostanski->Text + "','" + textBoxTelefon->Text + "')"));
	prikaziPodatke();

}



private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//UPDATE izmjena podataka
	izvrsiUpit(gcnew String("update student set " + "Ime='" + textBoxIme->Text + "', " + "Prezime='" + textBoxPrezime->Text + "', " +
		"Adresa='" + textBoxAdresa->Text + "', " + "PostanskiBroj='" + textBoxPostanski->Text + "', " + "Telefon='" + textBoxTelefon->Text + "' " +
		"where ID='" + textBoxPretraga->Text + "' "));
	prikaziPodatke();

}


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//DELETE
	izvrsiUpit(gcnew String("delete from student " + " where ID='" + textBoxPretraga->Text + "' "));
	prikaziPodatke();
	ocistiPolja();

}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {//RESET
	ocistiPolja();
	dataGridView1->Columns->Clear();
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {//PRINT
	try{
  int visina = dataGridView1->Height;
  dataGridView1->Height = dataGridView1->RowCount * dataGridView1->RowTemplate->Height * 2;
  bitmapa = gcnew Bitmap(dataGridView1->Width, dataGridView1->Height);
  dataGridView1->DrawToBitmap(bitmapa, System::Drawing::Rectangle(0, 0, dataGridView1->Width, dataGridView1->Height));
  printPreviewDialog1->PrintPreviewControl->Zoom = 1;
  printPreviewDialog1->ShowDialog();
  dataGridView1->Height = visina; //resetuj visinu
	}
		catch (Exception^ iz) {
		MessageBox::Show(iz->Message);
	}

}


private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		System::Windows::Forms::DialogResult zatvori;
		zatvori = MessageBox::Show("Da li zaista izlazite?", "CRUD - Visual C++ - ACCESS", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (zatvori == System::Windows::Forms::DialogResult::Yes)Close();
	}
	catch (Exception^ iz) {
		MessageBox::Show(iz->Message, "CRUD - Visual C++ - ACCESS", MessageBoxButtons::YesNo, MessageBoxIcon::Error);
	}

}


};
}
