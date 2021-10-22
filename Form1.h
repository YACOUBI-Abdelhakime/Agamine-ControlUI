#pragma once
#include <time.h>
#include<ctime> 
#include <windows.h>
#include <iostream>
#include <string>
#include <fstream>
#include "Statistic.h"
#include <msclr\marshal_cppstd.h>
#include "Data Base.h"

namespace part1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace std;
	using namespace MySql::Data::MySqlClient;



	/// <summary>
	/// Summary for Form1
	/// </summary>



	public ref class Form1 : public System::Windows::Forms::Form
	{
			public:
		array<String^> ^GVE ;
		array<String^> ^TSD ;
		String^ Light ;
		String^ DATE , ^ TIME;




	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  ComboBox2;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label71;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Label^  label70;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label69;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label68;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label67;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label66;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label65;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::TextBox^  textBox7;



	private: System::Windows::Forms::Label^  label58;




		



	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			findPorts();

			Form1::Light = "0 %";

			this->ovalShape2->Visible = false;
			this->ovalShape1->Visible = true;

			this->button2->Enabled = false;
			this->button8->Enabled = false;
			this->button9->Enabled = false;
			
			this->trackBar1->Enabled = false;
				this->groupBox1->Enabled = 0;
				this->groupBox2->Enabled = 0;

			

			this->ComboBox2->Items->Add("ATLOADER RESET FACTORY");
			this->ComboBox2->Items->Add("ATLOADER RESET RESTART");
			this->ComboBox2->Items->Add("ATLOADER RESET BOOT");
			this->ComboBox2->Items->Add("ATLOADER RESET BACKUP");
			this->ComboBox2->Items->Add("ATLOADER RESET RESCUE");
			this->ComboBox2->Items->Add("FORMAT EEPROM.!!!");

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
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::IO::Ports::SerialPort^  serialPort1;

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::TextBox^  textBox2;


	private: System::Windows::Forms::ProgressBar^  progressBar1;

	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Label^  label5;



	private: System::Windows::Forms::TrackBar^  trackBar1;






	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button6;

	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape3;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape2;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  button9;
private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape2;
private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape1;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button4;





	private: System::ComponentModel::IContainer^  components;
	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape4 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->ovalShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->rectangleShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->ComboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(141, 74);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(166, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// serialPort1
			// 
			this->serialPort1->ReadTimeout = 500;
			this->serialPort1->WriteTimeout = 500;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(30, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Select port";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(25, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 42);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Connect";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(217, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 42);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Disconnect";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->textBox2->Location = System::Drawing::Point(44, 760);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(736, 27);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Enter Here";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(23, 33);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(284, 28);
			this->progressBar1->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(44, 805);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(378, 20);
			this->textBox3->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::LightGray;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Enabled = false;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->Location = System::Drawing::Point(617, 610);
			this->label5->MinimumSize = System::Drawing::Size(100, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(119, 21);
			this->label5->TabIndex = 14;
			this->label5->Text = L" Lighting : 0%";
			// 
			// trackBar1
			// 
			this->trackBar1->BackColor = System::Drawing::Color::Gray;
			this->trackBar1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->trackBar1->Location = System::Drawing::Point(202, 636);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(952, 45);
			this->trackBar1->TabIndex = 18;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
			this->trackBar1->MouseLeave += gcnew System::EventHandler(this, &Form1::trackBar1_MouseLeave);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->textBox5->Location = System::Drawing::Point(44, 831);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(378, 27);
			this->textBox5->TabIndex = 25;
			this->textBox5->Text = L"Enter Here";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(121, 109);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 42);
			this->button6->TabIndex = 26;
			this->button6->Text = L"Refresh";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(6) {this->rectangleShape4, 
				this->ovalShape2, this->ovalShape1, this->rectangleShape3, this->rectangleShape2, this->rectangleShape1});
			this->shapeContainer1->Size = System::Drawing::Size(1370, 749);
			this->shapeContainer1->TabIndex = 28;
			this->shapeContainer1->TabStop = false;
			// 
			// rectangleShape4
			// 
			this->rectangleShape4->BorderColor = System::Drawing::Color::DarkBlue;
			this->rectangleShape4->BorderWidth = 3;
			this->rectangleShape4->FillColor = System::Drawing::SystemColors::AppWorkspace;
			this->rectangleShape4->Location = System::Drawing::Point(1004, 17);
			this->rectangleShape4->Name = L"rectangleShape4";
			this->rectangleShape4->SelectionColor = System::Drawing::SystemColors::MenuHighlight;
			this->rectangleShape4->Size = System::Drawing::Size(346, 579);
			// 
			// ovalShape2
			// 
			this->ovalShape2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ovalShape2.BackgroundImage")));
			this->ovalShape2->Location = System::Drawing::Point(52, 178);
			this->ovalShape2->Name = L"ovalShape2";
			this->ovalShape2->Size = System::Drawing::Size(31, 30);
			this->ovalShape2->Visible = false;
			// 
			// ovalShape1
			// 
			this->ovalShape1->BackColor = System::Drawing::Color::Red;
			this->ovalShape1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ovalShape1.BackgroundImage")));
			this->ovalShape1->Location = System::Drawing::Point(53, 178);
			this->ovalShape1->Name = L"ovalShape1";
			this->ovalShape1->Size = System::Drawing::Size(30, 31);
			// 
			// rectangleShape3
			// 
			this->rectangleShape3->BorderColor = System::Drawing::Color::DarkBlue;
			this->rectangleShape3->BorderWidth = 3;
			this->rectangleShape3->FillColor = System::Drawing::SystemColors::AppWorkspace;
			this->rectangleShape3->Location = System::Drawing::Point(13, 298);
			this->rectangleShape3->Name = L"rectangleShape3";
			this->rectangleShape3->SelectionColor = System::Drawing::SystemColors::MenuHighlight;
			this->rectangleShape3->Size = System::Drawing::Size(973, 298);
			// 
			// rectangleShape2
			// 
			this->rectangleShape2->BorderColor = System::Drawing::Color::DarkBlue;
			this->rectangleShape2->BorderWidth = 3;
			this->rectangleShape2->FillColor = System::Drawing::SystemColors::AppWorkspace;
			this->rectangleShape2->Location = System::Drawing::Point(352, 17);
			this->rectangleShape2->Name = L"rectangleShape2";
			this->rectangleShape2->SelectionColor = System::Drawing::SystemColors::MenuHighlight;
			this->rectangleShape2->Size = System::Drawing::Size(634, 217);
			// 
			// rectangleShape1
			// 
			this->rectangleShape1->BorderColor = System::Drawing::Color::DarkBlue;
			this->rectangleShape1->BorderWidth = 3;
			this->rectangleShape1->FillColor = System::Drawing::SystemColors::AppWorkspace;
			this->rectangleShape1->Location = System::Drawing::Point(13, 17);
			this->rectangleShape1->Name = L"rectangleShape1";
			this->rectangleShape1->SelectionColor = System::Drawing::SystemColors::MenuHighlight;
			this->rectangleShape1->Size = System::Drawing::Size(306, 217);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calisto MT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(20, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 18);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Connection Information";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Blue;
			this->label3->Location = System::Drawing::Point(109, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 32);
			this->label3->TabIndex = 30;
			this->label3->Text = L"#######";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calisto MT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label4->Location = System::Drawing::Point(360, 5);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 18);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Versions";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label7->Location = System::Drawing::Point(394, 47);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 19);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Serial N°            :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label8->Location = System::Drawing::Point(394, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(122, 19);
			this->label8->TabIndex = 33;
			this->label8->Text = L"Board Version   :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label9->Location = System::Drawing::Point(394, 115);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(120, 19);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Aux Version      :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label10->Location = System::Drawing::Point(394, 194);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(121, 19);
			this->label10->TabIndex = 35;
			this->label10->Text = L"Loader Version :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label11->Location = System::Drawing::Point(394, 153);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(120, 19);
			this->label11->TabIndex = 36;
			this->label11->Text = L"Aux Serial         :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label12->Location = System::Drawing::Point(540, 47);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(29, 19);
			this->label12->TabIndex = 37;
			this->label12->Text = L"\?.\?";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label13->Location = System::Drawing::Point(540, 194);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(29, 19);
			this->label13->TabIndex = 38;
			this->label13->Text = L"\?.\?";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label14->Location = System::Drawing::Point(540, 153);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(29, 19);
			this->label14->TabIndex = 39;
			this->label14->Text = L"\?.\?";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label15->Location = System::Drawing::Point(540, 115);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(29, 19);
			this->label15->TabIndex = 40;
			this->label15->Text = L"\?.\?";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label16->Location = System::Drawing::Point(540, 82);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(29, 19);
			this->label16->TabIndex = 41;
			this->label16->Text = L"\?.\?";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label17->Location = System::Drawing::Point(858, 82);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(29, 19);
			this->label17->TabIndex = 51;
			this->label17->Text = L"\?.\?";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label18->Location = System::Drawing::Point(858, 115);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(29, 19);
			this->label18->TabIndex = 50;
			this->label18->Text = L"\?.\?";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label19->Location = System::Drawing::Point(858, 153);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 19);
			this->label19->TabIndex = 49;
			this->label19->Text = L"\?.\?";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label20->Location = System::Drawing::Point(858, 194);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(29, 19);
			this->label20->TabIndex = 48;
			this->label20->Text = L"\?.\?";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label21->Location = System::Drawing::Point(858, 47);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(29, 19);
			this->label21->TabIndex = 47;
			this->label21->Text = L"\?.\?";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label22->Location = System::Drawing::Point(712, 153);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(140, 19);
			this->label22->TabIndex = 46;
			this->label22->Text = L"LEDC Serial          :";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label23->Location = System::Drawing::Point(712, 194);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(141, 19);
			this->label23->TabIndex = 45;
			this->label23->Text = L"LED Head Serial   :";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label24->Location = System::Drawing::Point(712, 115);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(140, 19);
			this->label24->TabIndex = 44;
			this->label24->Text = L"LEDC Version       :";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label25->Location = System::Drawing::Point(712, 82);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(138, 19);
			this->label25->TabIndex = 43;
			this->label25->Text = L"SLCC Version       :";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label26->Location = System::Drawing::Point(712, 47);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(140, 19);
			this->label26->TabIndex = 42;
			this->label26->Text = L"Firmware Version  :";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label27->Location = System::Drawing::Point(69, 325);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(173, 19);
			this->label27->TabIndex = 52;
			this->label27->Text = L"PV Voltage                     :";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Calisto MT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label28->Location = System::Drawing::Point(26, 286);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(122, 18);
			this->label28->TabIndex = 53;
			this->label28->Text = L"Test Sensor Data";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label29->Location = System::Drawing::Point(69, 361);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(172, 19);
			this->label29->TabIndex = 54;
			this->label29->Text = L"Battery Voltage             :";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label30->Location = System::Drawing::Point(69, 397);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(171, 19);
			this->label30->TabIndex = 55;
			this->label30->Text = L"Charging Current          :";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label31->Location = System::Drawing::Point(69, 435);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(173, 19);
			this->label31->TabIndex = 56;
			this->label31->Text = L"Temp of Charging Unit  :";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label32->Location = System::Drawing::Point(69, 476);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(171, 19);
			this->label32->TabIndex = 57;
			this->label32->Text = L"Battery Temperature    :";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label33->Location = System::Drawing::Point(69, 514);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(171, 19);
			this->label33->TabIndex = 58;
			this->label33->Text = L"Estim Battery                :";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label34->Location = System::Drawing::Point(69, 557);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(170, 19);
			this->label34->TabIndex = 59;
			this->label34->Text = L"Error Flags                    :";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label35->Location = System::Drawing::Point(576, 557);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(182, 19);
			this->label35->TabIndex = 66;
			this->label35->Text = L"Error Flags                       :";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label36->Location = System::Drawing::Point(576, 514);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(182, 19);
			this->label36->TabIndex = 65;
			this->label36->Text = L"Error Flags                       :";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label37->Location = System::Drawing::Point(576, 476);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(182, 19);
			this->label37->TabIndex = 64;
			this->label37->Text = L"Error Flags                       :";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label38->Location = System::Drawing::Point(576, 435);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(182, 19);
			this->label38->TabIndex = 63;
			this->label38->Text = L"Brightness Sensor Value :";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label39->Location = System::Drawing::Point(576, 397);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(179, 19);
			this->label39->TabIndex = 62;
			this->label39->Text = L"LED Power                      :";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label40->Location = System::Drawing::Point(576, 361);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(178, 19);
			this->label40->TabIndex = 61;
			this->label40->Text = L"LED Current                   :";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label41->Location = System::Drawing::Point(576, 325);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(177, 19);
			this->label41->TabIndex = 60;
			this->label41->Text = L"LED Voltage                   :";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label42->Location = System::Drawing::Point(312, 361);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(29, 19);
			this->label42->TabIndex = 71;
			this->label42->Text = L"\?.\?";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label43->Location = System::Drawing::Point(312, 397);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(29, 19);
			this->label43->TabIndex = 70;
			this->label43->Text = L"\?.\?";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label44->Location = System::Drawing::Point(312, 435);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(29, 19);
			this->label44->TabIndex = 69;
			this->label44->Text = L"\?.\?";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label45->Location = System::Drawing::Point(312, 476);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(29, 19);
			this->label45->TabIndex = 68;
			this->label45->Text = L"\?.\?";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label46->Location = System::Drawing::Point(312, 325);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(29, 19);
			this->label46->TabIndex = 67;
			this->label46->Text = L"\?.\?";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label47->Location = System::Drawing::Point(312, 514);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(29, 19);
			this->label47->TabIndex = 72;
			this->label47->Text = L"\?.\?";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label48->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label48->Location = System::Drawing::Point(312, 557);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(29, 19);
			this->label48->TabIndex = 73;
			this->label48->Text = L"\?.\?";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label49->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label49->Location = System::Drawing::Point(810, 557);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(29, 19);
			this->label49->TabIndex = 80;
			this->label49->Text = L"\?.\?";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label50->Location = System::Drawing::Point(810, 514);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(29, 19);
			this->label50->TabIndex = 79;
			this->label50->Text = L"\?.\?";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label51->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label51->Location = System::Drawing::Point(810, 361);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(29, 19);
			this->label51->TabIndex = 78;
			this->label51->Text = L"\?.\?";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label52->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label52->Location = System::Drawing::Point(810, 397);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(29, 19);
			this->label52->TabIndex = 77;
			this->label52->Text = L"\?.\?";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label53->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label53->Location = System::Drawing::Point(810, 435);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(29, 19);
			this->label53->TabIndex = 76;
			this->label53->Text = L"\?.\?";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label54->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label54->Location = System::Drawing::Point(810, 476);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(29, 19);
			this->label54->TabIndex = 75;
			this->label54->Text = L"\?.\?";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label55->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label55->Location = System::Drawing::Point(810, 325);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(29, 19);
			this->label55->TabIndex = 74;
			this->label55->Text = L"\?.\?";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Enabled = false;
			this->label57->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label57->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label57->Location = System::Drawing::Point(161, 639);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(38, 22);
			this->label57->TabIndex = 82;
			this->label57->Text = L"0%";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Enabled = false;
			this->label56->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label56->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label56->Location = System::Drawing::Point(1156, 639);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(58, 22);
			this->label56->TabIndex = 83;
			this->label56->Text = L"100%";
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(382, 246);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(81, 40);
			this->button8->TabIndex = 84;
			this->button8->Text = L"   Scan";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(530, 246);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(81, 40);
			this->button9->TabIndex = 85;
			this->button9->Text = L"   Seav";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(230, 244);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 40);
			this->button3->TabIndex = 86;
			this->button3->Text = L"    Statistic";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(677, 246);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(95, 40);
			this->button4->TabIndex = 87;
			this->button4->Text = L"   Data Base";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calisto MT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label6->Location = System::Drawing::Point(1016, 5);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 18);
			this->label6->TabIndex = 88;
			this->label6->Text = L"Settings";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label58);
			this->groupBox1->Controls->Add(this->ComboBox2);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Blue;
			this->groupBox1->Location = System::Drawing::Point(1012, 33);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(322, 82);
			this->groupBox1->TabIndex = 89;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Set System Command";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Calisto MT", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label58->ForeColor = System::Drawing::Color::Navy;
			this->label58->Location = System::Drawing::Point(16, 24);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(78, 17);
			this->label58->TabIndex = 90;
			this->label58->Text = L"Commands ";
			// 
			// ComboBox2
			// 
			this->ComboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ComboBox2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 9.75F, System::Drawing::FontStyle::Bold));
			this->ComboBox2->FormattingEnabled = true;
			this->ComboBox2->Location = System::Drawing::Point(105, 19);
			this->ComboBox2->Name = L"ComboBox2";
			this->ComboBox2->Size = System::Drawing::Size(211, 26);
			this->ComboBox2->TabIndex = 90;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(118, 48);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 28);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Execute";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(183, 28);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(107, 22);
			this->textBox6->TabIndex = 92;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label59->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label59->Location = System::Drawing::Point(39, 30);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(124, 19);
			this->label59->TabIndex = 105;
			this->label59->Text = L"Power Parameter";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->label71);
			this->groupBox2->Controls->Add(this->textBox16);
			this->groupBox2->Controls->Add(this->label70);
			this->groupBox2->Controls->Add(this->textBox15);
			this->groupBox2->Controls->Add(this->label69);
			this->groupBox2->Controls->Add(this->textBox14);
			this->groupBox2->Controls->Add(this->label68);
			this->groupBox2->Controls->Add(this->textBox13);
			this->groupBox2->Controls->Add(this->label67);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->label66);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label65);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->label64);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->label63);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label62);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->label59);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::Blue;
			this->groupBox2->Location = System::Drawing::Point(1012, 121);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(322, 461);
			this->groupBox2->TabIndex = 91;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Set and Get Day\'s Profile";
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(43, 370);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(90, 42);
			this->button10->TabIndex = 93;
			this->button10->Text = L"GET";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(193, 370);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(90, 42);
			this->button11->TabIndex = 94;
			this->button11->Text = L"SET";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label71->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label71->Location = System::Drawing::Point(39, 321);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(69, 19);
			this->label71->TabIndex = 129;
			this->label71->Text = L"Saturday";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(183, 319);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(107, 22);
			this->textBox16->TabIndex = 128;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label70->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label70->Location = System::Drawing::Point(39, 291);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(52, 19);
			this->label70->TabIndex = 127;
			this->label70->Text = L"Friday";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(183, 289);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(107, 22);
			this->textBox15->TabIndex = 126;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label69->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label69->Location = System::Drawing::Point(39, 262);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(72, 19);
			this->label69->TabIndex = 125;
			this->label69->Text = L"Thursday";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(183, 260);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(107, 22);
			this->textBox14->TabIndex = 124;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label68->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label68->Location = System::Drawing::Point(39, 233);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(86, 19);
			this->label68->TabIndex = 123;
			this->label68->Text = L"Wednesday";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(183, 231);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(107, 22);
			this->textBox13->TabIndex = 122;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label67->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label67->Location = System::Drawing::Point(39, 204);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(65, 19);
			this->label67->TabIndex = 121;
			this->label67->Text = L"Tuesday";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(183, 202);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(107, 22);
			this->textBox12->TabIndex = 120;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label66->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label66->Location = System::Drawing::Point(39, 175);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(65, 19);
			this->label66->TabIndex = 119;
			this->label66->Text = L"Monday";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(183, 173);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(107, 22);
			this->textBox11->TabIndex = 118;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label65->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label65->Location = System::Drawing::Point(39, 146);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(58, 19);
			this->label65->TabIndex = 117;
			this->label65->Text = L"Sunday";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(183, 144);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(107, 22);
			this->textBox10->TabIndex = 116;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label64->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label64->Location = System::Drawing::Point(42, 118);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(114, 19);
			this->label64->TabIndex = 115;
			this->label64->Text = L"Time Threshold";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(183, 115);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(107, 22);
			this->textBox9->TabIndex = 114;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label63->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label63->Location = System::Drawing::Point(39, 88);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(113, 19);
			this->label63->TabIndex = 113;
			this->label63->Text = L"Brightness Day";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(183, 86);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(107, 22);
			this->textBox8->TabIndex = 112;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label62->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label62->Location = System::Drawing::Point(39, 59);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(122, 19);
			this->label62->TabIndex = 111;
			this->label62->Text = L"Brightness Night";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(183, 57);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(107, 22);
			this->textBox7->TabIndex = 110;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->shapeContainer1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"CONTROL & TESTS";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



		// find available ports
	private: void findPorts(void)
			 {
			// get port names
		    array<Object^>^ objectArray = SerialPort::GetPortNames();
			// add string array to combobox
			this->comboBox1->Items->AddRange( objectArray );
			 
			 }
// conect----------------
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				if(this->comboBox1->Text==String::Empty){
				 //MessageBoxIcon::Error
				 MessageBox::Show("Please Select Port Settings", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Warning);}
				else {
					try{
					   // make sure port isn't open	
					if(!this->serialPort1->IsOpen){
						this->serialPort1->PortName=this->comboBox1->Text;
					
						this->serialPort1->BaudRate=9600;
				 this->button1->Enabled = false;
				 this->button2->Enabled = true;
				 this->button8->Enabled = true;
				 this->button3->Enabled = true;
				 this->groupBox1->Enabled = true;
				 this->groupBox2->Enabled = true;
				
				 ovalShape2->Visible = true;
				 ovalShape1->Visible = false;
				 this->trackBar1->Enabled = true;
					 //open serial port 
						this->serialPort1->Open();
			//this->progressBar1->Value=100;
						label3->Text = this->serialPort1->PortName;
					}else
					
					//MessageBoxIcon::Error
				 MessageBox::Show("Port is not opened", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					catch(UnauthorizedAccessException^){
						
						//MessageBoxIcon::Error
				 MessageBox::Show("Unauthorized Access Exception", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Warning);

					}
				//initialisation de comboBox3 ;

				 }

			 }

// close button
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 close();
}
void close(){
			 	//close serialPort
				 this->serialPort1->Close();
				 // update progress bar
				 label3->Text = "#######";
				 
				 
		 this->button1->Enabled = true;
		 this->button2->Enabled = false;
		  this->button8->Enabled = false;
		  this->button3->Enabled = false;
		 this->trackBar1->Enabled = false;
		         ovalShape1->Visible = true;
				 ovalShape2->Visible = false;
}



// scan-----------------------
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {

			 
			 if(this->serialPort1->IsOpen)
	{
		this->progressBar1->Value=10;
		String ^resgve,^restsd;
			  resgve = cmd_gve("gve");
			  this->progressBar1->Value=30;
           Sleep(500);			
			  restsd = cmd_tsd("tsd");
			  this->progressBar1->Value=50;
// splite --------------------------------
		//array<String^> ^tab_gve =resgve->Split('=' ,',');
		//array<String^> ^tab_tsd =restsd->Split('=' ,',');
Form1::GVE=resgve->Split('=' ,',');
Form1::TSD=restsd->Split('=' ,',');

//desply GVE------------------------------
		label21->Text= Form1::GVE[1];
		label16->Text= Form1::GVE[2];
		label12->Text= Form1::GVE[3];
		label15->Text= Form1::GVE[4];
		label14->Text= Form1::GVE[5];
		label13->Text= Form1::GVE[6];
		label17->Text= Form1::GVE[7];
		label18->Text= Form1::GVE[8];
		label19->Text= Form1::GVE[9];
		label20->Text= Form1::GVE[10];

//////-------------
       this->progressBar1->Value=100;
//desply TSD------------------------------

//converting------------------------
Form1::TSD[0]=Conv_mV_to_V(Form1::TSD[0]);
Form1::TSD[1]=Conv_mV_to_V(Form1::TSD[1]);
Form1::TSD[2]=Conv_mV_to_V(Form1::TSD[2]);
Form1::TSD[7]=Conv_mV_to_V(Form1::TSD[7]);
Form1::TSD[8]=Conv_mV_to_V(Form1::TSD[8]);
     double x =Convert::ToDouble(Form1::TSD[7]),y=Convert::ToDouble(Form1::TSD[8]),z=x*y;
Form1::TSD[9]=z.ToString();

//-------------
label46->Text=Form1::TSD[0]+" V";
label42->Text=Form1::TSD[1]+" V";
label43->Text=Form1::TSD[2]+" A";
label44->Text=Form1::TSD[3]+" °C";

if(Convert::ToDouble(Form1::TSD[4])>80){
	   Form1::TSD[4]="ERROR";
	   label45->Text=Form1::TSD[4]+".!!";
}else{
	   label45->Text=Form1::TSD[4]+" °C";
	 }

label47->Text=Form1::TSD[5]+" %";
label48->Text=Form1::TSD[6];
label55->Text=Form1::TSD[7]+" V";
label51->Text=Form1::TSD[8]+" A";
label52->Text=Form1::TSD[9]+" W";
label53->Text=Form1::TSD[10]+" Lux";
label54->Text=Form1::TSD[11];
label50->Text=Form1::TSD[12];
label49->Text=Form1::TSD[13];
//------done desplys------------------------------

//-----------get-time-and-date----------------------
            time_t tt;  
            struct tm *ti;   
          time (&tt); 
          ti = localtime(&tt); 
		  String^ strdt = gcnew String(asctime(ti));
			  array<String^> ^tabdt =strdt->Split(' ');


			  Form1::DATE = tabdt[2]+"/"+Month(tabdt[1])+"/"+tabdt[4];
			  Form1::TIME = tabdt[3];
     }else{
//MessageBoxIcon::Error
				 MessageBox::Show("Port is not opened", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Error);
					 }
		 
		  this->button9->Enabled = true;
		  	/*this->progressBar1->Size = System::Drawing::Size(291, 28);
			pictureBox1->Visible = false;*/
		 }
	//fin scan--------

String^ Month(String^ m){

	   if(m == "Jan"){
		return "01";
	}else if(m == "Feb"){
	     return "02";
	}else if(m == "Mar"){
	     return "03";
	}else if(m == "Apr"){
	     return "04";
	}else if(m == "May"){
	     return "05";
	}else if(m == "Jun"){
	     return "06";
	}else if(m == "Jul"){
	     return "07";
	}else if(m == "Aug"){
	     return "08";
	}else if(m == "Sep"){
	     return "09";
	}else if(m == "Oct"){
	     return "10";
	}else if(m == "Nov"){
	     return "11";
	}else if(m == "Dec"){
	     return "12";
	}
}


// save--------------------
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
int N°_S = Int32::Parse(Form1::GVE[3]);

       try{

          String ^cont = "Server=127.0.0.1; Uid=root; Pwd=;Database=agamine;";
          MySqlConnection^ con=gcnew MySqlConnection(cont);  

	   //cmd-1-----------------------------------
		  try{
		  //                                                                              2                      3              4                   5                    6                  7					8				9				10		           
		  MySqlCommand^ cmd= gcnew MySqlCommand("insert into poteau values("+N°_S+",'"+Form1::GVE[2]+"','"+Form1::GVE[1]+"','"+Form1::GVE[4]+"','"+Form1::GVE[5]+"','"+Form1::GVE[7]+"','"+Form1::GVE[8]+"','"+Form1::GVE[9]+"','"+Form1::GVE[6]+"','"+Form1::GVE[10]+"')",con);
		  		  MySqlDataReader^ dr;
				  con->Open();
		         dr= cmd->ExecuteReader();
		     	 con->Close();
		  }catch(Exception^ ex){   con->Close();}
	   //cmd-2-----------------------------------
		  try{
		  //                                                                         1             2             3              4                  5                  6                    7                     8                  9                    10                 11                     12               13                  14                     15               16                   17                   18                           
		  MySqlCommand^ cmd2= gcnew MySqlCommand("insert into test values('"+Form1::DATE+"','"+Form1::TIME+"',"+N°_S+",'"+Form1::Light+"','"+Form1::TSD[0]+" V"+"','"+Form1::TSD[1]+" V"+"','"+Form1::TSD[2]+" A"+"','"+Form1::TSD[3]+" °C"+"','"+Form1::TSD[4]+" °C"+"','"+Form1::TSD[5]+" %"+"','"+Form1::TSD[6]+"','"+Form1::TSD[7]+" V"+"','"+Form1::TSD[8]+" A"+"','"+Form1::TSD[9]+" W"+"','"+Form1::TSD[10]+" Lux"+"','"+Form1::TSD[11]+"','"+Form1::TSD[12]+"','"+Form1::TSD[13]+"')",con);
		 		  MySqlDataReader^ dr2;
				  con->Open();
		             dr2 = cmd2->ExecuteReader();
					 con->Close();
					 MessageBox::Show(" the test is saved  ", " Informatin ",MessageBoxButtons::OK, MessageBoxIcon::Information);
					 this->button9->Enabled = false ;
            }catch(Exception^ ex){
				con->Close();
	              MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
	        }
		  
	   }catch(Exception^ ex){
	    MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
	   }

			
		 }


//actualisé---refrech-----------
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 comboBox1->Items->Clear();
			 findPorts();
		 }


String^ cmd_tsd(String^ cmd){

	              

			 if(this->serialPort1->IsOpen){
				   this->serialPort1->ReadTimeout = 13000;
                   this->serialPort1->WriteTimeout = 2000;

					 this->serialPort1->WriteLine(cmd);
	Sleep(10000);//10s	 
			         String  ^result1, ^result2 ,^tmp , ^resFin;
         
			tmp=READ();
Sleep(500);
			result1=READ();
Sleep(500);
			result2=READ();
Sleep(500);
			tmp=READ();
Sleep(500);
			tmp=READ();
			 //label17->Text = "1 "+result1 ;
			 //label18->Text = "2 "+result2 ;
array<String^> ^Array1 =result1->Split('=' ,',');
array<String^> ^Array2 =result2->Split('=' ,',');
 

for(int i=2;i<9;i++){
 resFin += Array1[i]+",";
}
for(int i=2;i<9;i++){
		if(i!=8)
          resFin += Array2[i]+",";
		else
			resFin += Array2[i];
}






			  /*this->textBox4->Text=result1;
			  this->textBox1->Text=result2;
			  this->textBox2->Text=resFin;*/

			   return resFin;
			 }else{
			//MessageBoxIcon::Error
				 MessageBox::Show("Port is not opened", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Error);
					 }
			 //fin

		  
}


String^ READ(){
     
			 try{
			    return this->serialPort1->ReadLine();
			  
			   }
			  catch(TimeoutException^){
			   return "Timeout Exception";
				  
			  }

}


String^ cmd_X(String^ cmd){

			 if(this->serialPort1->IsOpen){
				 
					 this->serialPort1->WriteLine(cmd);
			String^ result3=READ(); 
	Sleep(1000);
	                result3=READ(); 

					return result3 ;

			 }else{
					 //MessageBoxIcon::Error
				 MessageBox::Show("Port is not opened", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }	  
		  
}

String^ cmd_gdp(String^ cmd){
        this->serialPort1->WriteLine(cmd);
			String^ result3=READ(); 
	Sleep(1000);
	                result3=READ(); 

					return result3 ;  
		  
}


void cmd_slb(String^ cmd){
	   if(this->serialPort1->IsOpen){
		   this->serialPort1->ReadTimeout = 2000;
					 this->serialPort1->WriteLine(cmd);

					String^ tmp=READ();
					 Sleep(50);
					 tmp=READ();
					 Sleep(50);
					 tmp=READ();
				 }else{
					 //MessageBoxIcon::Error
				 MessageBox::Show("Port is not opened", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Error);}
			 //fin-------------

}

String^ cmd_gve(String^ cmd){
	    if(this->serialPort1->IsOpen){
	                this->serialPort1->ReadTimeout = 5500;
                    this->serialPort1->WriteTimeout = 2000;
				this->serialPort1->WriteLine(cmd);
				String^ result3=READ();
Sleep(100);
				 result3=READ();

					return result3; /////////

					  
				 }else{
					 //MessageBoxIcon::Error
				 MessageBox::Show("Port is not opened", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Error);}

		//fin--------------
			
}

String^ cmd_ssc(String^ cmd){

			 	                //this->serialPort1->ReadTimeout = 00;
                                //this->serialPort1->WriteTimeout = 2000;
				 
 String^ result3;					 
             try{
                      this->serialPort1->WriteLine(cmd);
                    
                        Sleep(1000);
			   }
			  catch(TimeoutException^){
			   result3= "Timeout Exception";
                 }


					return result3 ;
	  
		  
}

String^ Conv_mV_to_V(String^ mv){
		   float x= Convert::ToDouble(mv);
			 x/=1000; 
		   return x.ToString();

}

private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 label5->Text = " Lighting : "+trackBar1->Value.ToString()+"%";
		 }

private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			if(MessageBox::Show(" If you want to close the application click YES"," Close ",MessageBoxButtons::OKCancel,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Cancel){
				  e->Cancel=true;
			 }else{
			
			 Application::Exit();
			 }
		 }


private: System::Void trackBar1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			   //this->progressBar1->Value=0;
			 String^ trkval = trackBar1->Value.ToString()+" %";

if(Form1::Light != trackBar1->Value+" %"){
	if(this->serialPort1->IsOpen){
		 this->progressBar1->Value=10;////////////
			 int val = trackBar1->Value; 
			 Form1::Light = val.ToString()+" %";
			  //this->progressBar1->Value=30;
			 String^ str ="slb"+"="+val.ToString();
			      cmd_slb(str);
				   this->progressBar1->Value=100;
			 Sleep(500);
			 				 }else{
					 //MessageBoxIcon::Error
				 MessageBox::Show("Port is not opened", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Error);}
		 }
	}



		 
//statistics----------------------
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(this->serialPort1->IsOpen){


			 progressBar1->Value = 10;
			 
			 String^ gcd = cmd_gdp("gcd");
Sleep(500);
			 String^ gcm = cmd_gdp("gcm");
			 progressBar1->Value = 30;
Sleep(500);
			 String^ gcy = cmd_gdp("gcy");
Sleep(500);
			 String^ gld = cmd_gdp("gld");
			 progressBar1->Value = 50;
Sleep(500);
			 String^ glm = cmd_gdp("glm");
Sleep(500);
			 String^ gly = cmd_gdp("gly");
			 progressBar1->Value = 70;


			 array<String^> ^tab_gcd =gcd->Split('=' ,',');
			 array<String^> ^tab_gcm =gcm->Split('=' ,',');
			 array<String^> ^tab_gcy =gcy->Split('=' ,',');
			 array<String^> ^tab_gld =gld->Split('=' ,',');
			 array<String^> ^tab_glm =glm->Split('=' ,',');
			 array<String^> ^tab_gly =gly->Split('=' ,','); 
progressBar1->Value = 100;

			 writetab(tab_gcd ,tab_gcm ,tab_gcy ,tab_gld ,tab_glm ,tab_gly );

			
			 


			  Statistic^ s = gcnew Statistic();
			 s->ShowDialog();
			 
			 		}else{
					 //MessageBoxIcon::Error
				 MessageBox::Show("Port is not opened", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
			
		 }

//data base -------------------------
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
					  DataBase^ D = gcnew DataBase();
			              D->ShowDialog();

				 }

/////////////writetab///////////////////////////////
void writetab(array<String^> ^gcd,array<String^> ^gcm,array<String^> ^gcy,array<String^> ^gld,array<String^> ^glm,array<String^> ^gly){
	       try{

          String ^cont = "Server=127.0.0.1; Uid=root; Pwd=;Database=agamine;";
          MySqlConnection^ con=gcnew MySqlConnection(cont);  

	   //cmd-1-----------------------------------
		  try{

			  MySqlCommand^ cmdd= gcnew MySqlCommand("delete from profil",con);
			  MySqlDataReader^ drd;
				  con->Open();
		         drd= cmdd->ExecuteReader();
		     	 con->Close();

			  MySqlCommand^ cmd ;
		  for(int i=1;i<=30;i++){
			  if(i<=10){
			         cmd= gcnew MySqlCommand("insert into profil values('"+gcd[i]+"','"+gcm[i]+"','"+gcy[i]+"','"+gld[i]+"','"+glm[i]+"','"+gly[i]+"')",con);
					 //MessageBox::Show(i.ToString(), " ERROR.1.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
			  }else if(i == 11 || i == 12 ){
			         cmd= gcnew MySqlCommand("insert into profil values('"+gcd[i]+"','"+gcm[i]+"','"+""+"','"+gld[i]+"','"+glm[i]+"','"+""+"')",con);
					 //MessageBox::Show(i.ToString(), " ERROR.2.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);

			  }else{
			         cmd= gcnew MySqlCommand("insert into profil values('"+gcd[i]+"','"+""+"','"+""+"','"+gld[i]+"','"+""+"','"+""+"')",con);
					// MessageBox::Show(i.ToString(), " ERROR.3.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);

			  }
			  MySqlDataReader^ dr;
				  con->Open();
		         dr= cmd->ExecuteReader();
		     	 con->Close();
		  }//fin for ;
		  }catch(Exception^ ex){   con->Close();
		  MessageBox::Show(ex->Message, " ERROR.in-for.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
		  }
		  
	   }catch(Exception^ ex){
	    MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
	   }

		 
		 }
//Execute--------------------
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		 
			 int index = this->ComboBox2->SelectedIndex ;
			 

			 switch(index){
			    
			       case 0:{// 0 HF6 ATLOADER_RESET_FACTORY
					     if(this->serialPort1->IsOpen){
				             String^ res = cmd_ssc("ssc=HF6");

					MessageBox::Show("  RESET FACTORY it was completed ", " Information ",MessageBoxButtons::OK, MessageBoxIcon::Information);
	                     close();
				       }else{
					 //MessageBoxIcon::Error
				        MessageBox::Show("Port is not opened", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Warning);}
						 break;
				   
				           }
					 case 1:{// 1 HF7 ATLOADER_RESET_RESTART
					     if(this->serialPort1->IsOpen){
				             String^ res = cmd_ssc("ssc=HF7");

					MessageBox::Show("  RESET RESTART it was completed ", " Information ",MessageBoxButtons::OK, MessageBoxIcon::Information);
	                     close();							 
				       }else{
					 //MessageBoxIcon::Error
				        MessageBox::Show("Port is not opened", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Warning);}
						 break;
				   
				           }
					 case 2:{// 2 HF8 ATLOADER_RESET_BOOT
					     if(this->serialPort1->IsOpen){
				             String^ res = cmd_ssc("ssc=HF8");

					MessageBox::Show("  RESET BOOT it was completed ", " Information ",MessageBoxButtons::OK, MessageBoxIcon::Information);
     	                     close();                
							 
				       }else{
					 //MessageBoxIcon::Error
				        MessageBox::Show("Port is not opened", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Warning);}
						 break;
				   
				           }
					 case 3:{// 3 HF9 ATLOADER_RESET_BACKUP
					     if(this->serialPort1->IsOpen){
				             String^ res = cmd_ssc("ssc=HF9");

					MessageBox::Show("  RESET BACKUP it was completed ", " Information ",MessageBoxButtons::OK, MessageBoxIcon::Information);
       	                     close();              
							 
				       }else{
					 //MessageBoxIcon::Error
				        MessageBox::Show("Port is not opened", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Warning);}
						 break;
				   
				           }
					 case 4:{//  4 HFA ATLOADER_RESET_RESCUE
					     if(this->serialPort1->IsOpen){
				             String^ res = cmd_ssc("ssc=HFA");

					MessageBox::Show("  RESET RESCUE it was completed ", " Information ",MessageBoxButtons::OK, MessageBoxIcon::Information);
                	                     close();     
							 
				       }else{
					 //MessageBoxIcon::Error
				        MessageBox::Show("Port is not opened", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Warning);}
						 break;
				   
				           }
					 case 5:{// 5 HFE Format EEPROM.
					     if(this->serialPort1->IsOpen){
				             String^ res = cmd_ssc("ssc=HFE");

					MessageBox::Show("  Format EEPROM it was completed ", " Information ",MessageBoxButtons::OK, MessageBoxIcon::Information);
 	 	                     close();
				       }else{
					 //MessageBoxIcon::Error
				        MessageBox::Show("Port is not opened", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Warning);}
						 break;
				   
				           }
					 default :{ MessageBox::Show("Select Command after Execute", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Warning);

						 break;
							  }

			 }

		 }

//get-------
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	if(this->serialPort1->IsOpen){
		progressBar1->Value = 10;
			 String^ gdp = cmd_gdp("gdp");
			 //textBox6->Text = gdp;
			 array<String^> ^GDP =gdp->Split('=' ,',');

			 textBox6->Text = GDP[1];
			 textBox7->Text = GDP[2];
			 textBox8->Text = GDP[3];
			 textBox9->Text = GDP[4];
			 textBox10->Text = GDP[5];
			 textBox11->Text = GDP[6];
			 textBox12->Text = GDP[7];
			 textBox13->Text = GDP[8];
			 textBox14->Text = GDP[9];
			 textBox15->Text = GDP[10];
			 textBox16->Text = GDP[11];
			 progressBar1->Value = 100;
			
			 }else{
					 //MessageBoxIcon::Error
				 MessageBox::Show("Port is not opened", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
		 }
//set-------
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	 if(this->serialPort1->IsOpen){
		  progressBar1->Value = 10;
			 String^ cmd="sdp=";
			 cmd +=textBox6->Text+",";
			 cmd +=textBox7->Text+",";
			 cmd +=textBox8->Text+",";
			 cmd +=textBox9->Text+",";
			 cmd +=textBox10->Text+",";
			 cmd +=textBox11->Text+",";
			 cmd +=textBox12->Text+",";
			 cmd +=textBox13->Text+",";
			 cmd +=textBox14->Text+",";
			 cmd +=textBox15->Text+",";
			 cmd +=textBox16->Text;
			
			 String^ res = cmd_gdp(cmd);
			  progressBar1->Value = 100;

			  textBox6->Text = "";textBox7->Text = ""; textBox8->Text = "";textBox9->Text = "";textBox10->Text = ""; textBox16->Text = "";
			  textBox11->Text = "";textBox12->Text = "";textBox13->Text = "";textBox14->Text = ""; textBox15->Text = "";

			 if(res == "sdp=H00"){
			       MessageBox::Show(" It was SET correctly ", " Information ",MessageBoxButtons::OK, MessageBoxIcon::Information);
			 }else{
			       MessageBox::Show(" There is a problem please repeat it again ", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
			 		}else{
					 //MessageBoxIcon::Error
				 MessageBox::Show("Port is not opened", " Warning ",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }

		 }
};
}