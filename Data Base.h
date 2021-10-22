#pragma once

namespace part1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for DataBase
	/// </summary>
	public ref class DataBase : public System::Windows::Forms::Form
	{
	public:
		DataBase(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			initcombo1();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DataBase()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	protected: 
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::BindingSource^  bindingSource2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::ComponentModel::IContainer^  components;

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
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 131);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1346, 265);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(33, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Select All";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DataBase::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->ForeColor = System::Drawing::Color::Blue;
			this->radioButton1->Location = System::Drawing::Point(11, 31);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(126, 23);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Date and Time";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->ForeColor = System::Drawing::Color::Blue;
			this->radioButton2->Location = System::Drawing::Point(143, 31);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(88, 23);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->Text = L"Serial N°";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(9, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 22);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Select the Informations of :";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::LimeGreen;
			this->groupBox1->Location = System::Drawing::Point(175, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(237, 73);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Order By";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(1254, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 34);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Select";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DataBase::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::LimeGreen;
			this->groupBox2->Location = System::Drawing::Point(460, 8);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(771, 87);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(597, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(153, 26);
			this->textBox2->TabIndex = 14;
			this->textBox2->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(597, 53);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(153, 25);
			this->comboBox2->TabIndex = 13;
			this->comboBox2->Visible = false;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->ForeColor = System::Drawing::Color::Blue;
			this->radioButton5->Location = System::Drawing::Point(245, 58);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(153, 23);
			this->radioButton5->TabIndex = 12;
			this->radioButton5->Text = L"Serial N° and Date";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &DataBase::radioButton5_CheckedChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(597, 29);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(153, 25);
			this->comboBox1->TabIndex = 11;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(597, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 26);
			this->textBox1->TabIndex = 8;
			this->textBox1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(360, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 22);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Choose the Date";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->ForeColor = System::Drawing::Color::Blue;
			this->radioButton3->Location = System::Drawing::Point(245, 34);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(88, 23);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->Text = L"Serial N°";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &DataBase::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Checked = true;
			this->radioButton4->ForeColor = System::Drawing::Color::Blue;
			this->radioButton4->Location = System::Drawing::Point(245, 12);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(60, 23);
			this->radioButton4->TabIndex = 2;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Date";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &DataBase::radioButton4_CheckedChanged);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(330, 443);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(646, 257);
			this->dataGridView2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::AntiqueWhite;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(452, 411);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(417, 24);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Software, Hardware and Client\'s Information ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::AntiqueWhite;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(559, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(173, 24);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Tests Informations";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(33, 57);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(92, 32);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Delete All";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DataBase::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(1254, 57);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 34);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &DataBase::button4_Click);
			// 
			// DataBase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 722);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"DataBase";
			this->Text = L"DATA BASE";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 //date----------
				 label2->Text = "Choose the Date ";
			     comboBox2->Visible = false ;
			     textBox2->Visible = false ;
				 comboBox1->Visible = true ;
			     textBox1->Visible = false ;
			 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 //Num_S--------------------
			 label2->Text = "Write the Serial N° ";
			     comboBox2->Visible = false ;
			     textBox2->Visible = false ;
				 comboBox1->Visible = false ;
			     textBox1->Visible = true ;

		 }

private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 			 label2->Text = "Complete the informations ";

				 comboBox2->Visible = true ;
			     textBox2->Visible = true ;
				 comboBox1->Visible = false ;
			     textBox1->Visible = false ;
				 
		 }

		 //select all------------------
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 
  try{

          String ^cont = "Server=127.0.0.1; Uid=root; Pwd=;Database=agamine;";
          MySqlConnection^ con=gcnew MySqlConnection(cont);  

		  try{
			  con->Open();
			  MySqlDataAdapter^ sda,^sda2;
		sda2 = gcnew MySqlDataAdapter("SELECT Num_S AS 'Serial N', Brd_V AS 'Board Version',Frmw AS 'Firmware Version',SLCC_V AS 'SLCC Version',LEDC_S AS 'LEDC Serial',LEDC_V AS 'LEDC Version' FROM poteau Order by Num_S",con);
			DataTable^ tab2 = gcnew DataTable();
			sda2->Fill(tab2);
			bindingSource2->DataSource = tab2 ;
			dataGridView2->DataSource = bindingSource2;


			  if(radioButton1->Checked){// order by date time++++++++++++++++++++++
				 sda  = gcnew MySqlDataAdapter("SELECT Date,Time,Num_S AS 'Serial N',Lighting,PV_V AS 'PV Voltage',Batry_V AS 'Battery Voltage',Chrg_C AS 'Charging',T_C_U AS 'Temp of Charging Unit',Batry_T AS 'Battery Temp',Estim_Batry AS 'Battery Capacity',LED_V AS 'LED Voltage',LED_Crnt AS 'LED Current',LED_Pwr AS 'LED Power',B_S_V AS 'Brightness Value' FROM test ORDER by Date , Time",con);
			    
			  }else{// order by Num_S++++++++++++++++++++++
				 sda  = gcnew MySqlDataAdapter("SELECT Date,Time,Num_S AS 'Serial N',Lighting,PV_V AS 'PV Voltage',Batry_V AS 'Battery Voltage',Chrg_C AS 'Charging',T_C_U AS 'Temp of Charging Unit',Batry_T AS 'Battery Temp',Estim_Batry AS 'Battery Capacity',LED_V AS 'LED Voltage',LED_Crnt AS 'LED Current',LED_Pwr AS 'LED Power',B_S_V AS 'Brightness Value' FROM test ORDER by Num_S",con);
			  }
		  
		   DataTable ^tab = gcnew DataTable();
		  	sda->Fill(tab);
			bindingSource1->DataSource = tab ;
			dataGridView1->DataSource = bindingSource1;



		     	 con->Close();
		  }catch(Exception^ ex){   con->Close(); MessageBox::Show(ex->Message, " WW.A.WW ",MessageBoxButtons::OK, MessageBoxIcon::Error);}

	}catch(Exception^ ex){
	             MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
	     }
}

		 //select kd , kd WHERE kd-------------------
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{

          String ^cont = "Server=127.0.0.1; Uid=root; Pwd=;Database=agamine;";
          MySqlConnection^ con=gcnew MySqlConnection(cont);  

		  try{
			  con->Open();
		MySqlDataAdapter^ sda,^sda2;
		sda2 = gcnew MySqlDataAdapter("SELECT Num_S AS 'Serial N', Brd_V AS 'Board Version',Frmw AS 'Firmware Version',SLCC_V AS 'SLCC Version',LEDC_S AS 'LEDC Serial',LEDC_V AS 'LEDC Version' FROM poteau Order by Num_S",con);
			DataTable^ tab2 = gcnew DataTable();
			sda2->Fill(tab2);
			bindingSource2->DataSource = tab2 ;
			dataGridView2->DataSource = bindingSource2;

			  
			  
			  if(radioButton1->Checked){// order by date time++++++++++++++++++++++
				  if(radioButton4->Checked){//date = ValBox----
					  String^ datBox = comboBox1->Text;
					  
				  sda  = gcnew MySqlDataAdapter("SELECT Date,Time,Num_S AS 'Serial N',Lighting,PV_V AS 'PV Voltage',Batry_V AS 'Battery Voltage',Chrg_C AS 'Charging',T_C_U AS 'Temp of Charging Unit',Batry_T AS 'Battery Temp',Estim_Batry AS 'Battery Capacity',LED_V AS 'LED Voltage',LED_Crnt AS 'LED Current',LED_Pwr AS 'LED Power',B_S_V AS 'Brightness Value' FROM test WHERE Date = '"+datBox+"' ORDER by Date , Time",con);
				  
				  }else if(radioButton5->Checked){ //date and Num_S

				       String^ ValBox = textBox2->Text;
					   String^ datBox = comboBox2->Text;
				  sda  = gcnew MySqlDataAdapter("SELECT Date,Time,Num_S AS 'Serial N',Lighting,PV_V AS 'PV Voltage',Batry_V AS 'Battery Voltage',Chrg_C AS 'Charging',T_C_U AS 'Temp of Charging Unit',Batry_T AS 'Battery Temp',Estim_Batry AS 'Battery Capacity',LED_V AS 'LED Voltage',LED_Crnt AS 'LED Current',LED_Pwr AS 'LED Power',B_S_V AS 'Brightness Value' FROM test WHERE Num_S = '"+ValBox+"' and Date = '"+datBox+"' ORDER by Date , Time",con);
				  }else{//Num_S = ValBox----
					  String^ ValBox = textBox1->Text;
				  sda  = gcnew MySqlDataAdapter("SELECT Date,Time,Num_S AS 'Serial N',Lighting,PV_V AS 'PV Voltage',Batry_V AS 'Battery Voltage',Chrg_C AS 'Charging',T_C_U AS 'Temp of Charging Unit',Batry_T AS 'Battery Temp',Estim_Batry AS 'Battery Capacity',LED_V AS 'LED Voltage',LED_Crnt AS 'LED Current',LED_Pwr AS 'LED Power',B_S_V AS 'Brightness Value' FROM test WHERE Num_S = '"+ValBox+"' ORDER by Date , Time",con);
				  
				  }
				 
			  }else{// order by Num_S++++++++++++++++++++++
				 if(radioButton4->Checked){
					 String^ datBox = comboBox1->Text;

				  sda  = gcnew MySqlDataAdapter("SELECT Date,Time,Num_S AS 'Serial N',Lighting,PV_V AS 'PV Voltage',Batry_V AS 'Battery Voltage',Chrg_C AS 'Charging',T_C_U AS 'Temp of Charging Unit',Batry_T AS 'Battery Temp',Estim_Batry AS 'Battery Capacity',LED_V AS 'LED Voltage',LED_Crnt AS 'LED Current',LED_Pwr AS 'LED Power',B_S_V AS 'Brightness Value' FROM test WHERE Date = '"+datBox+"' ORDER by Num_S",con);
				  
			  }else if(radioButton5->Checked){ //date and Num_S

				       String^ ValBox = textBox2->Text;
					   String^ datBox = comboBox2->Text;
				  sda  = gcnew MySqlDataAdapter("SELECT Date,Time,Num_S AS 'Serial N',Lighting,PV_V AS 'PV Voltage',Batry_V AS 'Battery Voltage',Chrg_C AS 'Charging',T_C_U AS 'Temp of Charging Unit',Batry_T AS 'Battery Temp',Estim_Batry AS 'Battery Capacity',LED_V AS 'LED Voltage',LED_Crnt AS 'LED Current',LED_Pwr AS 'LED Power',B_S_V AS 'Brightness Value' FROM test WHERE Num_S = '"+ValBox+"' and Date = '"+datBox+"' ORDER by  Num_S",con);
				  
				 }else{
				  String^ ValBox = textBox1->Text;
				  sda  = gcnew MySqlDataAdapter("SELECT Date,Time,Num_S AS 'Serial N',Lighting,PV_V AS 'PV Voltage',Batry_V AS 'Battery Voltage',Chrg_C AS 'Charging',T_C_U AS 'Temp of Charging Unit',Batry_T AS 'Battery Temp',Estim_Batry AS 'Battery Capacity',LED_V AS 'LED Voltage',LED_Crnt AS 'LED Current',LED_Pwr AS 'LED Power',B_S_V AS 'Brightness Value' FROM test WHERE Num_S = '"+ValBox+"' ORDER by Num_S",con);
			  }
			  }
		  
		   DataTable ^tab = gcnew DataTable();
		  	sda->Fill(tab);
			bindingSource1->DataSource = tab ;
			dataGridView1->DataSource = bindingSource1;



		     	 con->Close();
		  }catch(Exception^ ex){   con->Close();}

	}catch(Exception^ ex){
	             MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
	     }



		 }

	/////////////combo
void initcombo1(){
	try{

            String ^cont = "Server=127.0.0.1; Uid=root; Pwd=;Database=agamine;";
            MySqlConnection^ con=gcnew MySqlConnection(cont);  

		  try{
			  con->Open();
			  MySqlCommand^ cmd = gcnew MySqlCommand("select date from test",con);
			  MySqlDataReader^ dr ;
			  dr = cmd->ExecuteReader();
			  String^ res,^tmp=" ";
			  while(dr->Read()){
				  res = dr->GetString(0);
				  
				  if(res!=tmp){
				  comboBox1->Items->Add(res);
				  comboBox2->Items->Add(res);
				  }
				  tmp = res;
			  }
			  con->Close();
		  }catch(Exception ^ex){ con->Close(); }

	  }catch(Exception ^ex){ 
	    MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
if(MessageBox::Show("Are you accept to delete .???"," Confirmation ",MessageBoxButtons::OKCancel,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::OK){
	try{

          String ^cont = "Server=127.0.0.1; Uid=root; Pwd=;Database=agamine;";
          MySqlConnection^ con=gcnew MySqlConnection(cont);  
		 try{
			  con->Open();
			  MySqlCommand^ cmd ;

			  if(radioButton4->Checked){//date = ValBox----
					  
					  String^ datBox = comboBox1->Text;
				  cmd  = gcnew MySqlCommand("DELETE FROM test WHERE Date = '"+datBox+"' ",con);
				  
			  }else if(radioButton5->Checked){  //date and Nul_S
			        String^ datBox = comboBox2->Text;
					 String^ ValBox = textBox2->Text;
				  cmd  = gcnew MySqlCommand("DELETE FROM test WHERE Date = '"+datBox+"' and Num_S = '"+ValBox+"' ",con);

			  } else{//Num_S = ValBox----

					  String^ ValBox = textBox1->Text;
				  cmd  = gcnew MySqlCommand("DELETE FROM test WHERE Num_S = '"+ValBox+"' ",con);
				  
				  }
			  MySqlDataReader^ dr;
			  dr = cmd->ExecuteReader() ;
		  MessageBox::Show("It is deleted Correctly", " Information " ,MessageBoxButtons::OK, MessageBoxIcon::Information);
		 }catch(Exception^ ex){
		   con->Close();
		   MessageBox::Show(ex->Message, " ERROR.!!! " ,MessageBoxButtons::OK, MessageBoxIcon::Error);
		  }
		}catch(Exception^ ex){
			   MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
			  }


	comboBox1->Items->Clear();
	initcombo1();
}//fin if--
		 }//fin function 

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
if(MessageBox::Show("Are you accept to delete All .???"," Confirmation ",MessageBoxButtons::OKCancel,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::OK){
	try{

          String ^cont = "Server=127.0.0.1; Uid=root; Pwd=;Database=agamine;";
          MySqlConnection^ con=gcnew MySqlConnection(cont);  
		 try{
			  
			  MySqlCommand^ cmd ,^cmd2;

				  cmd  = gcnew MySqlCommand("DELETE FROM test ",con);
				  cmd2  = gcnew MySqlCommand("DELETE FROM poteau ",con);
				  MySqlDataReader^ dr,^dr2 ;
				  
		  con->Open();
			  dr = cmd->ExecuteReader() ;
		   con->Close();
		   con->Open();
			  dr2 = cmd2->ExecuteReader() ;
		   con->Close();


		  MessageBox::Show("It is deleted Correctly", " Information " ,MessageBoxButtons::OK, MessageBoxIcon::Information);
		 }catch(Exception^ ex){
		   con->Close();
		   MessageBox::Show(ex->Message, " ERROR.!!! " ,MessageBoxButtons::OK, MessageBoxIcon::Error);
		  }
		}catch(Exception^ ex){
			   MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
			  }


	comboBox1->Items->Clear();
	initcombo1();
}//fin if--

		 }


};
}
				  