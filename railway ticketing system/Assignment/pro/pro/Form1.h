#pragma once

namespace pro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}


	protected: 

































	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  txtedit;
	private: System::Windows::Forms::TextBox^  txtTrainNO;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  txtRemove;

	private: System::Windows::Forms::Button^  btnadd;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  txtnoOfPessengers;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label14;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  des;
	private: System::Windows::Forms::TextBox^  sp;


	private: System::Windows::Forms::Label^  label16;





	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  txttotal;
	private: System::Windows::Forms::TextBox^  txtnoofTickets;
	private: System::Windows::Forms::TextBox^  txtpriceofTicket;
	private: System::Windows::Forms::TextBox^  txtdes;
	private: System::Windows::Forms::TextBox^  txtsp;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  cmbSP;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnCal;
	private: System::Windows::Forms::ComboBox^  cmbDestination;
	private: System::Windows::Forms::TextBox^  txtnot;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txttime;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->des = (gcnew System::Windows::Forms::TextBox());
			this->sp = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtedit = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtTrainNO = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtRemove = (gcnew System::Windows::Forms::Button());
			this->btnadd = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtnoOfPessengers = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtsp = (gcnew System::Windows::Forms::TextBox());
			this->txtdes = (gcnew System::Windows::Forms::TextBox());
			this->txtpriceofTicket = (gcnew System::Windows::Forms::TextBox());
			this->txtnoofTickets = (gcnew System::Windows::Forms::TextBox());
			this->txttotal = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->txttime = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtnot = (gcnew System::Windows::Forms::TextBox());
			this->cmbDestination = (gcnew System::Windows::Forms::ComboBox());
			this->btnCal = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbSP = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->des);
			this->groupBox2->Controls->Add(this->sp);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->txtedit);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->txtTrainNO);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->txtRemove);
			this->groupBox2->Controls->Add(this->btnadd);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->txtnoOfPessengers);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(36, 326);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(708, 248);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Form1::groupBox2_Enter);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(464, 193);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(157, 33);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Clear";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// des
			// 
			this->des->Location = System::Drawing::Point(210, 127);
			this->des->Name = L"des";
			this->des->Size = System::Drawing::Size(145, 22);
			this->des->TabIndex = 19;
			// 
			// sp
			// 
			this->sp->Location = System::Drawing::Point(210, 85);
			this->sp->Name = L"sp";
			this->sp->Size = System::Drawing::Size(145, 22);
			this->sp->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(464, 144);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 33);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Edit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txtedit
			// 
			this->txtedit->Location = System::Drawing::Point(295, 261);
			this->txtedit->Name = L"txtedit";
			this->txtedit->Size = System::Drawing::Size(75, 33);
			this->txtedit->TabIndex = 12;
			this->txtedit->Text = L"Edit";
			this->txtedit->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(464, 39);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(157, 33);
			this->button3->TabIndex = 15;
			this->button3->Text = L"ADD";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(464, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 34);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// txtTrainNO
			// 
			this->txtTrainNO->Location = System::Drawing::Point(210, 39);
			this->txtTrainNO->Name = L"txtTrainNO";
			this->txtTrainNO->Size = System::Drawing::Size(145, 22);
			this->txtTrainNO->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(54, 88);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(84, 16);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Start point";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(54, 42);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(70, 16);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Train no";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(54, 127);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(91, 16);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Destination";
			// 
			// txtRemove
			// 
			this->txtRemove->Location = System::Drawing::Point(189, 261);
			this->txtRemove->Name = L"txtRemove";
			this->txtRemove->Size = System::Drawing::Size(75, 33);
			this->txtRemove->TabIndex = 11;
			this->txtRemove->Text = L"Remove";
			this->txtRemove->UseVisualStyleBackColor = true;
			// 
			// btnadd
			// 
			this->btnadd->Location = System::Drawing::Point(93, 261);
			this->btnadd->Name = L"btnadd";
			this->btnadd->Size = System::Drawing::Size(75, 33);
			this->btnadd->TabIndex = 10;
			this->btnadd->Text = L"ADD";
			this->btnadd->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(54, 168);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(45, 16);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Time";
			// 
			// txtnoOfPessengers
			// 
			this->txtnoOfPessengers->Location = System::Drawing::Point(210, 210);
			this->txtnoOfPessengers->Name = L"txtnoOfPessengers";
			this->txtnoOfPessengers->Size = System::Drawing::Size(145, 22);
			this->txtnoOfPessengers->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(210, 168);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(145, 22);
			this->textBox1->TabIndex = 7;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(54, 210);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(129, 16);
			this->label14->TabIndex = 8;
			this->label14->Text = L"no of passengers";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label16->Location = System::Drawing::Point(121, 9);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(533, 32);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Welcome to Kelany Valley Railway Station";
			this->label16->Click += gcnew System::EventHandler(this, &Form1::label16_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->groupBox1->Controls->Add(this->txttotal);
			this->groupBox1->Controls->Add(this->txtnoofTickets);
			this->groupBox1->Controls->Add(this->txtpriceofTicket);
			this->groupBox1->Controls->Add(this->txtdes);
			this->groupBox1->Controls->Add(this->txtsp);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(390, 61);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(354, 241);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Train Ticket";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(25, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Start Point";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(25, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Destination";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(25, 114);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Price of a ticket";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(25, 150);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 16);
			this->label8->TabIndex = 9;
			this->label8->Text = L"No of tickets";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(25, 191);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 16);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Total Price";
			// 
			// txtsp
			// 
			this->txtsp->Enabled = false;
			this->txtsp->Location = System::Drawing::Point(179, 45);
			this->txtsp->Name = L"txtsp";
			this->txtsp->Size = System::Drawing::Size(160, 22);
			this->txtsp->TabIndex = 16;
			// 
			// txtdes
			// 
			this->txtdes->Enabled = false;
			this->txtdes->Location = System::Drawing::Point(179, 82);
			this->txtdes->Name = L"txtdes";
			this->txtdes->Size = System::Drawing::Size(160, 22);
			this->txtdes->TabIndex = 17;
			// 
			// txtpriceofTicket
			// 
			this->txtpriceofTicket->Enabled = false;
			this->txtpriceofTicket->Location = System::Drawing::Point(179, 115);
			this->txtpriceofTicket->Name = L"txtpriceofTicket";
			this->txtpriceofTicket->Size = System::Drawing::Size(160, 22);
			this->txtpriceofTicket->TabIndex = 18;
			// 
			// txtnoofTickets
			// 
			this->txtnoofTickets->Enabled = false;
			this->txtnoofTickets->Location = System::Drawing::Point(179, 155);
			this->txtnoofTickets->Name = L"txtnoofTickets";
			this->txtnoofTickets->Size = System::Drawing::Size(160, 22);
			this->txtnoofTickets->TabIndex = 19;
			// 
			// txttotal
			// 
			this->txttotal->Enabled = false;
			this->txttotal->Location = System::Drawing::Point(179, 188);
			this->txttotal->Name = L"txttotal";
			this->txttotal->Size = System::Drawing::Size(160, 22);
			this->txttotal->TabIndex = 20;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->cmbSP);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->btnCal);
			this->groupBox3->Controls->Add(this->cmbDestination);
			this->groupBox3->Controls->Add(this->txtnot);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->txttime);
			this->groupBox3->Location = System::Drawing::Point(32, 61);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(337, 241);
			this->groupBox3->TabIndex = 17;
			this->groupBox3->TabStop = false;
			this->groupBox3->Enter += gcnew System::EventHandler(this, &Form1::groupBox3_Enter);
			// 
			// txttime
			// 
			this->txttime->Location = System::Drawing::Point(122, 114);
			this->txttime->Name = L"txttime";
			this->txttime->Size = System::Drawing::Size(202, 20);
			this->txttime->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(17, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"No of tickets";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(17, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Time";
			// 
			// txtnot
			// 
			this->txtnot->Location = System::Drawing::Point(122, 155);
			this->txtnot->Name = L"txtnot";
			this->txtnot->Size = System::Drawing::Size(202, 20);
			this->txtnot->TabIndex = 9;
			// 
			// cmbDestination
			// 
			this->cmbDestination->FormattingEnabled = true;
			this->cmbDestination->Items->AddRange(gcnew cli::array< System::Object^  >(13) {L"Colombo Fort", L"Maradana", L"Narahenpita", 
				L"Nugegoda", L"Maharagam", L"Pannipitiya", L"Kottawa", L"Homagama", L"Meegoda", L"Padukka", L"Waga", L"Kosgama", L"Awissawella"});
			this->cmbDestination->Location = System::Drawing::Point(122, 70);
			this->cmbDestination->Name = L"cmbDestination";
			this->cmbDestination->Size = System::Drawing::Size(195, 21);
			this->cmbDestination->TabIndex = 5;
			// 
			// btnCal
			// 
			this->btnCal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnCal->Location = System::Drawing::Point(51, 191);
			this->btnCal->Name = L"btnCal";
			this->btnCal->Size = System::Drawing::Size(91, 35);
			this->btnCal->TabIndex = 10;
			this->btnCal->Text = L"Calculate";
			this->btnCal->UseVisualStyleBackColor = true;
			this->btnCal->Click += gcnew System::EventHandler(this, &Form1::btnSave_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Destination";
			// 
			// cmbSP
			// 
			this->cmbSP->FormattingEnabled = true;
			this->cmbSP->Items->AddRange(gcnew cli::array< System::Object^  >(13) {L"Colombo Fort", L"Maradana", L"Narahenpita", L"Nugegoda", 
				L"Maharagam", L"Pannipitiya", L"Kottawa", L"Homagama", L"Meegoda", L"Padukka", L"Waga", L"Kosgama", L"Awissawella"});
			this->cmbSP->Location = System::Drawing::Point(122, 25);
			this->cmbSP->Name = L"cmbSP";
			this->cmbSP->Size = System::Drawing::Size(195, 21);
			this->cmbSP->TabIndex = 3;
			this->cmbSP->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Start Point";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(167, 191);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 35);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Clear";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(775, 600);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label16);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"KALANEY VALLEY";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 double tot=0;
				 double priceOfTicket=float::Parse(txtnot->Text);
				 double price;
				 if(cmbSP->Text=="Colombo Fort")
				 {
					 if(cmbDestination->Text=="Maradana")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Narahenpita")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Nugegoda")
					 {
							price=15.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Maharagam")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Pannipitiya")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kottawa")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Homagama")
					 {
							price=30.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Meegoda")
					 {
							price=35.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Padukka")
					 {
							price=45.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Waga")
					 {
							price=55.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kosgama")
					 {
							price=60.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Awissawella")
					 {
							price=70.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }

				 }

				 if(cmbSP->Text=="Maradana")
				 {
					 if(cmbDestination->Text=="Colombo Fort")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Narahenpita")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Nugegoda")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Maharagam")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Pannipitiya")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kottawa")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Homagama")
					 {
							price=30.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Meegoda")
					 {
							price=35.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Padukka")
					 {
							price=45.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Waga")
					 {
							price=50.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kosgama")
					 {
							price=60.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Awissawella")
					 {
							price=70.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
				 }

				 if(cmbSP->Text=="Narahenpita")
				 {
					 if(cmbDestination->Text=="Colombo Fort")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maradana")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Nugegoda")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Maharagam")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Pannipitiya")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kottawa")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Homagama")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Meegoda")
					 {
							price=30.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Padukka")
					 {
							price=35.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Waga")
					 {
							price=45.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kosgama")
					 {
							price=50.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Awissawella")
					 {
							price=65.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
				 }

				 if(cmbSP->Text=="Nugegoda")
				 {
					 if(cmbDestination->Text=="Colombo Fort")
					 {
							price=15.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maradana")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Narahenpita")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Maharagam")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Pannipitiya")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kottawa")
					 {
							price=15.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Homagama")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Meegoda")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Padukka")
					 {
							price=30.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Waga")
					 {
							price=40.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kosgama")
					 {
							price=45.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Awissawella")
					 {
							price=60.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
				 }

				 if(cmbSP->Text=="Maharagam")
				 {
					 if(cmbDestination->Text=="Colombo Fort")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maradana")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Narahenpita")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Nugegoda")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Pannipitiya")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kottawa")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Homagama")
					 {
							price=15.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Meegoda")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Padukka")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Waga")
					 {
							price=35.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kosgama")
					 {
							price=40.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Awissawella")
					 {
							price=55.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
				 }

				 if(cmbSP->Text=="Pannipitiya")
				 {
					 if(cmbDestination->Text=="Colombo Fort")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maradana")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Narahenpita")
					 {
							price=15.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Nugegoda")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maharagam")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kottawa")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Homagama")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Meegoda")
					 {
							price=15.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Padukka")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Waga")
					 {
							price=30.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kosgama")
					 {
							price=40.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Awissawella")
					 {
							price=50.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
				 }

				 if(cmbSP->Text=="Kottawa")
				 {
					 if(cmbDestination->Text=="Colombo Fort")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maradana")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Narahenpita")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Nugegoda")
					 {
							price=15.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maharagam")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Pannipitiya")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Homagama")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Meegoda")
					 {
							price=15.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Padukka")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Waga")
					 {
							price=30.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kosgama")
					 {
							price=35.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Awissawella")
					 {
							price=45.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
				 }

				 if(cmbSP->Text=="Homagama")
				 {
					 if(cmbDestination->Text=="Colombo Fort")
					 {
							price=30.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maradana")
					 {
							price=30.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Narahenpita")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Nugegoda")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maharagam")
					 {
							price=15.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Pannipitiya")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kottawa")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Meegoda")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Padukka")
					 {
							price=15.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Waga")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kosgama")
					 {
							price=30.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Awissawella")
					 {
							price=40.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
				 }

				 if(cmbSP->Text=="Meegoda")
				 {
					 if(cmbDestination->Text=="Colombo Fort")
					 {
							price=35.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maradana")
					 {
							price=35.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Narahenpita")
					 {
							price=30.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Nugegoda")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maharagam")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Pannipitiya")
					 {
							price=15.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kottawa")
					 {
							price=15.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Homagama")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Padukka")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Waga")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kosgama")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Awissawella")
					 {
							price=35.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
				 }

				 if(cmbSP->Text=="Padukka")
				 {
					 if(cmbDestination->Text=="Colombo Fort")
					 {
							price=45.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maradana")
					 {
							price=40.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Narahenpita")
					 {
							price=35.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Nugegoda")
					 {
							price=30.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maharagam")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Pannipitiya")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kottawa")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Homagama")
					 {
							price=15.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Meegoda")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Waga")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kosgama")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Awissawella")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
				 }

				 if(cmbSP->Text=="Waga")
				 {
					 if(cmbDestination->Text=="Colombo Fort")
					 {
							price=55.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maradana")
					 {
							price=50.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Narahenpita")
					 {
							price=45.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Nugegoda")
					 {
							price=40.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maharagam")
					 {
							price=35.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Pannipitiya")
					 {
							price=30.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kottawa")
					 {
							price=30.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Homagama")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Meegoda")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Padukka")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kosgama")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Awissawella")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
				 }

				 if(cmbSP->Text=="Kosgama")
				 {
					 if(cmbDestination->Text=="Colombo Fort")
					 {
							price=60.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maradana")
					 {
							price=60.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Narahenpita")
					 {
							price=50.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Nugegoda")
					 {
							price=45.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maharagam")
					 {
							price=40.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Pannipitiya")
					 {
							price=40.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kottawa")
					 {
							price=35.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Homagama")
					 {
							price=30.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Meegoda")
					 {
							price=25.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Padukka")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Waga")
					 {
							price=10.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Awissawella")
					 {
							price=15.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
				 }

				 if(cmbSP->Text=="Awissawella")
				 {
					 if(cmbDestination->Text=="Colombo Fort")
					 {
							price=70.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maradana")
					 {
							price=70.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Narahenpita")
					 {
							price=65.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Nugegoda")
					 {
							price=60.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Maharagam")
					 {
							price=55.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Pannipitiya")
					 {
							price=50.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Kottawa")
					 {
							price=45.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Homagama")
					 {
							price=40.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Meegoda")
					 {
							price=35.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Padukka")
					 {
							price=30.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
					 if(cmbDestination->Text=="Waga")
					 {
							price=20.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot);  
					 }
					 if(cmbDestination->Text=="Kosgama")
					 {
							price=15.00;
							tot=price*priceOfTicket;
							txtsp->Text=cmbSP->Text;
							txtdes->Text=cmbDestination->Text;
							txtpriceofTicket->Text=Convert::ToString(price); 
							txtnoofTickets->Text=txtnot->Text;
							txttotal->Text=Convert::ToString(tot); 
					 }
				 }
			 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void lblSp_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnexit_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 
				 String^ constring=L"datasource=localhost;port=3306;username=root;password=Root123*";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("insert into Kalany_railway.train(txtTrainNO,Start_point,destination,Time,No_of_pessengers) values('"+this->txtTrainNO->Text+"','"+this->sp->Text+"','"+this->des->Text+"','"+this->textBox1->Text+"','"+this->txtnoOfPessengers->Text+"');",conDataBase);
				 MySqlDataReader^ myReader;
				 try
				 {
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();
					  MessageBox::Show("New train Added");
					 while(myReader->Read()){
						
					 }
				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
			 }
		 private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

					   String^ constring=L"datasource=localhost;port=3306;username=root;password=Root123*";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Delete from Kalany_railway.train where txtTrainNO='"+this->txtTrainNO->Text+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 try
				 {
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();
					  MessageBox::Show("Deleted");
					 while(myReader->Read()){
						
					 }
				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				  }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 
				 String^ constring=L"datasource=localhost;port=3306;username=root;password=Root123*";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update Kalany_railway.train set txtTrainNO='"+this->txtTrainNO->Text+"',Start_point='"+this->sp->Text+"',destination='"+this->des->Text+"',Time='"+this->textBox1->Text+"',No_of_pessengers='"+this->txtnoOfPessengers->Text+"' where txtTrainNO='"+this->txtTrainNO->Text+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 try
				 {
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();
					  MessageBox::Show("Updated");
					 while(myReader->Read()){
						
					 }
				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
		 }

private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 txtTrainNO->Text="";
			sp->Text="";
			des->Text="";
			txttime->Text="";
			txtnoOfPessengers->Text="";
		 }
private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
			//  DateTime dt=DateTime::Now;
			 //this->label15->Text=dt.ToString();
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			//  DateTime dt=DateTime::Now;
			// this->label15->Text=dt.ToString();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 cmbDestination->Text="";
			 cmbSP->Text="";
			 txttime->Text="";
			 txtnot->Text="";
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtTrainNO->Text="";
			sp->Text="";
			des->Text="";
			txttime->Text="";
			txtnoOfPessengers->Text="";
		 }
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

