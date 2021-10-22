#pragma once
#include <time.h>
#include <windows.h>
#include <iostream>
#include <fstream>
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
	/// Summary for Statistic
	/// </summary>
	public ref class Statistic : public System::Windows::Forms::Form
	{
	public:
		static bool tstday = true ;
		static bool tstmonth = true ;
		static bool tstyear = true ;
		//charging ------------
		static  array<String^> ^GCD = gcnew	array<String^>(30);
		static  array<String^> ^GCM = gcnew	array<String^>(12);
		static  array<String^> ^GCY = gcnew	array<String^>(10);
		//lighting ------------
		static  array<String^> ^GLD = gcnew	array<String^>(30);
		static  array<String^> ^GLM = gcnew	array<String^>(12);
		static  array<String^> ^GLY = gcnew	array<String^>(10);

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
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
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::Label^  label65;
	private: System::Windows::Forms::Label^  label66;
	private: System::Windows::Forms::Label^  label67;
	private: System::Windows::Forms::Label^  label68;
	private: System::Windows::Forms::Label^  label69;
	private: System::Windows::Forms::Label^  label70;
	private: System::Windows::Forms::Label^  label71;
	private: System::Windows::Forms::Label^  label72;
	private: System::Windows::Forms::Label^  label73;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::Label^  label75;
	private: System::Windows::Forms::Label^  label76;
	private: System::Windows::Forms::Label^  label77;
	private: System::Windows::Forms::Label^  label78;
	private: System::Windows::Forms::Label^  label79;
	private: System::Windows::Forms::Label^  label80;
	private: System::Windows::Forms::Label^  label81;
	private: System::Windows::Forms::Label^  label82;
	private: System::Windows::Forms::Label^  label83;
	private: System::Windows::Forms::Label^  label84;
	private: System::Windows::Forms::Label^  label85;
	private: System::Windows::Forms::Label^  label86;
	private: System::Windows::Forms::Label^  label87;
	private: System::Windows::Forms::Label^  label88;
	private: System::Windows::Forms::Label^  label89;
	private: System::Windows::Forms::Label^  label90;
	private: System::Windows::Forms::Label^  label91;
	private: System::Windows::Forms::Label^  label92;
	private: System::Windows::Forms::Label^  label93;
	private: System::Windows::Forms::Label^  label94;
	private: System::Windows::Forms::Label^  label95;
	private: System::Windows::Forms::Label^  label96;
	private: System::Windows::Forms::Label^  label97;
	private: System::Windows::Forms::Label^  label98;
	private: System::Windows::Forms::Label^  label99;
	private: System::Windows::Forms::Label^  label100;
	private: System::Windows::Forms::Label^  label101;
	private: System::Windows::Forms::Label^  label102;
	private: System::Windows::Forms::Label^  label103;
	private: System::Windows::Forms::Label^  label104;
	private: System::Windows::Forms::Label^  label105;
	private: System::Windows::Forms::Label^  label106;










































	public: 


	

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
		public:
		Statistic(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			  

				this->chart1->Visible = false ;//Day
		        this->chart2->Visible = false;//Month
				this->chart3->Visible = false ;//Year
				this->chart4->Visible = true ;
								this->chart4->Series["Discharging"]->Points->AddXY( "00" , 0 );
								this->chart4->Series["Discharging"]->Points->AddXY( "10" , 0 );
								this->chart4->Series["Discharging"]->Points->AddXY( "20" , 0 );
								this->chart4->Series["Discharging"]->Points->AddXY( "30" , 0 );
								           		 tstday = true ;
		                                         tstmonth = true ;
		                                         tstyear = true ;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Statistic()
		{
			if (components)
			{
				delete components;
			}
		}





	protected: 
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Statistic::typeid));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
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
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart4))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->AxisX->LineWidth = 3;
			chartArea1->AxisX->Title = L"Days";
			chartArea1->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			chartArea1->AxisX->TitleForeColor = System::Drawing::Color::Blue;
			chartArea1->AxisY->LineWidth = 3;
			chartArea1->AxisY->Title = L"Wh";
			chartArea1->AxisY->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea1->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			chartArea1->AxisY->TitleForeColor = System::Drawing::Color::Red;
			chartArea1->BackColor = System::Drawing::Color::Linen;
			chartArea1->BackSecondaryColor = System::Drawing::Color::Red;
			chartArea1->BorderColor = System::Drawing::Color::Lime;
			chartArea1->BorderWidth = 5;
			chartArea1->Name = L"ChartArea1";
			chartArea1->ShadowColor = System::Drawing::Color::Yellow;
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			legend1->IsTextAutoFit = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(56, 73);
			this->chart1->Name = L"chart1";
			this->chart1->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			series1->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::BottomRight;
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::DarkGoldenrod;
			series1->Legend = L"Legend1";
			series1->Name = L"Charging";
			series1->ShadowColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::DodgerBlue;
			series2->EmptyPointStyle->Color = System::Drawing::Color::Fuchsia;
			series2->Legend = L"Legend1";
			series2->Name = L"Discharging";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(1057, 442);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea2->AxisX->LineWidth = 3;
			chartArea2->AxisX->Title = L"Months";
			chartArea2->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			chartArea2->AxisX->TitleForeColor = System::Drawing::Color::Blue;
			chartArea2->AxisY->LineWidth = 3;
			chartArea2->AxisY->Title = L"Wh";
			chartArea2->AxisY->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea2->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			chartArea2->AxisY->TitleForeColor = System::Drawing::Color::Red;
			chartArea2->BackColor = System::Drawing::Color::Linen;
			chartArea2->BackSecondaryColor = System::Drawing::Color::Red;
			chartArea2->BorderColor = System::Drawing::Color::Lime;
			chartArea2->BorderWidth = 5;
			chartArea2->Name = L"ChartArea1";
			chartArea2->ShadowColor = System::Drawing::Color::Yellow;
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold));
			legend2->IsTextAutoFit = false;
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(56, 73);
			this->chart2->Name = L"chart2";
			this->chart2->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			series3->BorderWidth = 3;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Color = System::Drawing::Color::DarkGoldenrod;
			series3->Legend = L"Legend1";
			series3->Name = L"Charging";
			series3->ShadowColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series4->BorderWidth = 3;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Color = System::Drawing::Color::DodgerBlue;
			series4->EmptyPointStyle->Color = System::Drawing::Color::Fuchsia;
			series4->Legend = L"Legend1";
			series4->Name = L"Discharging";
			this->chart2->Series->Add(series3);
			this->chart2->Series->Add(series4);
			this->chart2->Size = System::Drawing::Size(1057, 442);
			this->chart2->TabIndex = 3;
			this->chart2->Text = L"chart2";
			// 
			// chart3
			// 
			chartArea3->AxisX->LineWidth = 3;
			chartArea3->AxisX->Title = L"Years";
			chartArea3->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			chartArea3->AxisX->TitleForeColor = System::Drawing::Color::Blue;
			chartArea3->AxisY->LineWidth = 3;
			chartArea3->AxisY->Title = L"Wh";
			chartArea3->AxisY->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea3->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			chartArea3->AxisY->TitleForeColor = System::Drawing::Color::Red;
			chartArea3->BackColor = System::Drawing::Color::Linen;
			chartArea3->BackSecondaryColor = System::Drawing::Color::Red;
			chartArea3->BorderColor = System::Drawing::Color::Lime;
			chartArea3->BorderWidth = 5;
			chartArea3->Name = L"ChartArea1";
			chartArea3->ShadowColor = System::Drawing::Color::Yellow;
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold));
			legend3->IsTextAutoFit = false;
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(56, 73);
			this->chart3->Name = L"chart3";
			this->chart3->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			series5->BorderWidth = 3;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Color = System::Drawing::Color::DarkGoldenrod;
			series5->Legend = L"Legend1";
			series5->Name = L"Charging";
			series5->ShadowColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series6->BorderWidth = 3;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Color = System::Drawing::Color::DodgerBlue;
			series6->EmptyPointStyle->Color = System::Drawing::Color::Fuchsia;
			series6->Legend = L"Legend1";
			series6->Name = L"Discharging";
			this->chart3->Series->Add(series5);
			this->chart3->Series->Add(series6);
			this->chart3->Size = System::Drawing::Size(1057, 442);
			this->chart3->TabIndex = 4;
			this->chart3->Text = L"chart3";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(547, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"MONTH";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Statistic::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(701, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"YEAR";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Statistic::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(395, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"DAY";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Statistic::button4_Click);
			// 
			// chart4
			// 
			chartArea4->AxisX->LineWidth = 3;
			chartArea4->AxisX->Title = L"Time";
			chartArea4->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			chartArea4->AxisX->TitleForeColor = System::Drawing::Color::Blue;
			chartArea4->AxisY->LineWidth = 3;
			chartArea4->AxisY->Title = L"Wh";
			chartArea4->AxisY->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea4->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			chartArea4->AxisY->TitleForeColor = System::Drawing::Color::Red;
			chartArea4->BackColor = System::Drawing::Color::Linen;
			chartArea4->BackSecondaryColor = System::Drawing::Color::Red;
			chartArea4->BorderColor = System::Drawing::Color::Lime;
			chartArea4->BorderWidth = 5;
			chartArea4->Name = L"ChartArea1";
			chartArea4->ShadowColor = System::Drawing::Color::Yellow;
			this->chart4->ChartAreas->Add(chartArea4);
			legend4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold));
			legend4->IsTextAutoFit = false;
			legend4->Name = L"Legend1";
			this->chart4->Legends->Add(legend4);
			this->chart4->Location = System::Drawing::Point(56, 73);
			this->chart4->Name = L"chart4";
			this->chart4->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			series7->BorderWidth = 3;
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series7->Color = System::Drawing::Color::DarkGoldenrod;
			series7->Legend = L"Legend1";
			series7->Name = L"Charging";
			series7->ShadowColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series8->BorderWidth = 3;
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->Color = System::Drawing::Color::DodgerBlue;
			series8->EmptyPointStyle->Color = System::Drawing::Color::Fuchsia;
			series8->Legend = L"Legend1";
			series8->Name = L"Discharging";
			this->chart4->Series->Add(series7);
			this->chart4->Series->Add(series8);
			this->chart4->Size = System::Drawing::Size(1057, 442);
			this->chart4->TabIndex = 9;
			this->chart4->Text = L"chart4";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::OrangeRed;
			this->label1->Location = System::Drawing::Point(294, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(549, 32);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Statistics of charging and discharging by ....";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Honeydew;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
			this->tableLayoutPanel1->ColumnCount = 11;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.867172F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				7.874763F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel1->Controls->Add(this->label34, 10, 2);
			this->tableLayoutPanel1->Controls->Add(this->label33, 9, 2);
			this->tableLayoutPanel1->Controls->Add(this->label32, 8, 2);
			this->tableLayoutPanel1->Controls->Add(this->label31, 7, 2);
			this->tableLayoutPanel1->Controls->Add(this->label30, 6, 2);
			this->tableLayoutPanel1->Controls->Add(this->label29, 5, 2);
			this->tableLayoutPanel1->Controls->Add(this->label28, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->label27, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->label26, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->label25, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label24, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label23, 10, 1);
			this->tableLayoutPanel1->Controls->Add(this->label22, 9, 1);
			this->tableLayoutPanel1->Controls->Add(this->label21, 8, 1);
			this->tableLayoutPanel1->Controls->Add(this->label20, 7, 1);
			this->tableLayoutPanel1->Controls->Add(this->label19, 6, 1);
			this->tableLayoutPanel1->Controls->Add(this->label18, 5, 1);
			this->tableLayoutPanel1->Controls->Add(this->label17, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->label16, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->label15, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label14, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label13, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label12, 10, 0);
			this->tableLayoutPanel1->Controls->Add(this->label11, 9, 0);
			this->tableLayoutPanel1->Controls->Add(this->label10, 8, 0);
			this->tableLayoutPanel1->Controls->Add(this->label9, 7, 0);
			this->tableLayoutPanel1->Controls->Add(this->label8, 6, 0);
			this->tableLayoutPanel1->Controls->Add(this->label7, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->label6, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tableLayoutPanel1->Location = System::Drawing::Point(56, 521);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 46.49123F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 53.50877F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 52)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1057, 167);
			this->tableLayoutPanel1->TabIndex = 11;
			this->tableLayoutPanel1->Visible = false;
			// 
			// label34
			// 
			this->label34->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::MediumBlue;
			this->label34->Location = System::Drawing::Point(961, 128);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(89, 19);
			this->label34->TabIndex = 32;
			this->label34->Text = L"Discharging";
			// 
			// label33
			// 
			this->label33->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::MediumBlue;
			this->label33->Location = System::Drawing::Point(868, 118);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(81, 38);
			this->label33->TabIndex = 31;
			this->label33->Text = L"Discharging";
			// 
			// label32
			// 
			this->label32->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::MediumBlue;
			this->label32->Location = System::Drawing::Point(772, 118);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(81, 38);
			this->label32->TabIndex = 30;
			this->label32->Text = L"Discharging";
			// 
			// label31
			// 
			this->label31->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::MediumBlue;
			this->label31->Location = System::Drawing::Point(676, 118);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(81, 38);
			this->label31->TabIndex = 29;
			this->label31->Text = L"Discharging";
			// 
			// label30
			// 
			this->label30->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::MediumBlue;
			this->label30->Location = System::Drawing::Point(580, 118);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(81, 38);
			this->label30->TabIndex = 28;
			this->label30->Text = L"Discharging";
			// 
			// label29
			// 
			this->label29->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::MediumBlue;
			this->label29->Location = System::Drawing::Point(484, 118);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(81, 38);
			this->label29->TabIndex = 27;
			this->label29->Text = L"Discharging";
			// 
			// label28
			// 
			this->label28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::MediumBlue;
			this->label28->Location = System::Drawing::Point(388, 118);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(81, 38);
			this->label28->TabIndex = 26;
			this->label28->Text = L"Discharging";
			// 
			// label27
			// 
			this->label27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::MediumBlue;
			this->label27->Location = System::Drawing::Point(292, 118);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(81, 38);
			this->label27->TabIndex = 25;
			this->label27->Text = L"Discharging";
			// 
			// label26
			// 
			this->label26->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::MediumBlue;
			this->label26->Location = System::Drawing::Point(196, 118);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(81, 38);
			this->label26->TabIndex = 24;
			this->label26->Text = L"Discharging";
			// 
			// label25
			// 
			this->label25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::MediumBlue;
			this->label25->Location = System::Drawing::Point(131, 128);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(32, 19);
			this->label25->TabIndex = 23;
			this->label25->Text = L"Dis";
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::MediumBlue;
			this->label24->Location = System::Drawing::Point(9, 128);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(89, 19);
			this->label24->TabIndex = 22;
			this->label24->Text = L"Discharging";
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label23->Location = System::Drawing::Point(971, 71);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(70, 19);
			this->label23->TabIndex = 21;
			this->label23->Text = L"Charging";
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label22->Location = System::Drawing::Point(873, 71);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(70, 19);
			this->label22->TabIndex = 20;
			this->label22->Text = L"Charging";
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label21->Location = System::Drawing::Point(777, 71);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(70, 19);
			this->label21->TabIndex = 19;
			this->label21->Text = L"Charging";
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label20->Location = System::Drawing::Point(681, 71);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(70, 19);
			this->label20->TabIndex = 18;
			this->label20->Text = L"Charging";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label19->Location = System::Drawing::Point(585, 71);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(70, 19);
			this->label19->TabIndex = 17;
			this->label19->Text = L"Charging";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label18->Location = System::Drawing::Point(489, 71);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(70, 19);
			this->label18->TabIndex = 16;
			this->label18->Text = L"Charging";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label17->Location = System::Drawing::Point(393, 71);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(70, 19);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Charging";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label16->Location = System::Drawing::Point(297, 71);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(70, 19);
			this->label16->TabIndex = 14;
			this->label16->Text = L"Charging";
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label15->Location = System::Drawing::Point(201, 71);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(70, 19);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Charging";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label14->Location = System::Drawing::Point(126, 71);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(42, 19);
			this->label14->TabIndex = 12;
			this->label14->Text = L"Char";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label13->Location = System::Drawing::Point(18, 71);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(70, 19);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Charging";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Green;
			this->label12->Location = System::Drawing::Point(993, 17);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(25, 19);
			this->label12->TabIndex = 10;
			this->label12->Text = L"10";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Green;
			this->label11->Location = System::Drawing::Point(900, 17);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(17, 19);
			this->label11->TabIndex = 9;
			this->label11->Text = L"9";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Green;
			this->label10->Location = System::Drawing::Point(804, 17);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(17, 19);
			this->label10->TabIndex = 8;
			this->label10->Text = L"8";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Green;
			this->label9->Location = System::Drawing::Point(708, 17);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(17, 19);
			this->label9->TabIndex = 7;
			this->label9->Text = L"7";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Green;
			this->label8->Location = System::Drawing::Point(612, 17);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(17, 19);
			this->label8->TabIndex = 6;
			this->label8->Text = L"6";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Green;
			this->label7->Location = System::Drawing::Point(516, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 19);
			this->label7->TabIndex = 5;
			this->label7->Text = L"5";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Green;
			this->label6->Location = System::Drawing::Point(420, 17);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 19);
			this->label6->TabIndex = 4;
			this->label6->Text = L"4";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Green;
			this->label5->Location = System::Drawing::Point(324, 17);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 19);
			this->label5->TabIndex = 3;
			this->label5->Text = L"3";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Green;
			this->label4->Location = System::Drawing::Point(228, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 19);
			this->label4->TabIndex = 2;
			this->label4->Text = L"2";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Green;
			this->label3->Location = System::Drawing::Point(138, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 19);
			this->label3->TabIndex = 1;
			this->label3->Text = L"1";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Green;
			this->label2->Location = System::Drawing::Point(27, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 19);
			this->label2->TabIndex = 0;
			this->label2->Text = L"YEAR";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->BackColor = System::Drawing::Color::Honeydew;
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
			this->tableLayoutPanel2->ColumnCount = 13;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.203036F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				6.356736F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				6.83112F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				7.692307F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				7.692307F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				7.692307F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				7.692307F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				7.692307F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				7.692307F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				7.692307F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				7.692307F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				7.692307F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				7.692307F)));
			this->tableLayoutPanel2->Controls->Add(this->label35, 10, 2);
			this->tableLayoutPanel2->Controls->Add(this->label36, 9, 2);
			this->tableLayoutPanel2->Controls->Add(this->label37, 8, 2);
			this->tableLayoutPanel2->Controls->Add(this->label38, 7, 2);
			this->tableLayoutPanel2->Controls->Add(this->label39, 6, 2);
			this->tableLayoutPanel2->Controls->Add(this->label40, 5, 2);
			this->tableLayoutPanel2->Controls->Add(this->label41, 4, 2);
			this->tableLayoutPanel2->Controls->Add(this->label42, 3, 2);
			this->tableLayoutPanel2->Controls->Add(this->label43, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->label44, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->label45, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->label46, 10, 1);
			this->tableLayoutPanel2->Controls->Add(this->label47, 9, 1);
			this->tableLayoutPanel2->Controls->Add(this->label48, 8, 1);
			this->tableLayoutPanel2->Controls->Add(this->label49, 7, 1);
			this->tableLayoutPanel2->Controls->Add(this->label50, 6, 1);
			this->tableLayoutPanel2->Controls->Add(this->label51, 5, 1);
			this->tableLayoutPanel2->Controls->Add(this->label52, 4, 1);
			this->tableLayoutPanel2->Controls->Add(this->label53, 3, 1);
			this->tableLayoutPanel2->Controls->Add(this->label54, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->label55, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->label56, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label57, 10, 0);
			this->tableLayoutPanel2->Controls->Add(this->label58, 9, 0);
			this->tableLayoutPanel2->Controls->Add(this->label59, 8, 0);
			this->tableLayoutPanel2->Controls->Add(this->label60, 7, 0);
			this->tableLayoutPanel2->Controls->Add(this->label61, 6, 0);
			this->tableLayoutPanel2->Controls->Add(this->label62, 5, 0);
			this->tableLayoutPanel2->Controls->Add(this->label63, 4, 0);
			this->tableLayoutPanel2->Controls->Add(this->label64, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->label65, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->label66, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->label67, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label68, 11, 0);
			this->tableLayoutPanel2->Controls->Add(this->label69, 12, 0);
			this->tableLayoutPanel2->Controls->Add(this->label70, 11, 1);
			this->tableLayoutPanel2->Controls->Add(this->label71, 12, 1);
			this->tableLayoutPanel2->Controls->Add(this->label72, 11, 2);
			this->tableLayoutPanel2->Controls->Add(this->label73, 12, 2);
			this->tableLayoutPanel2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tableLayoutPanel2->Location = System::Drawing::Point(55, 521);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 46.49123F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 53.50877F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 52)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1057, 167);
			this->tableLayoutPanel2->TabIndex = 12;
			this->tableLayoutPanel2->Visible = false;
			// 
			// label35
			// 
			this->label35->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::MediumBlue;
			this->label35->Location = System::Drawing::Point(810, 118);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(69, 38);
			this->label35->TabIndex = 32;
			this->label35->Text = L"Discharging";
			// 
			// label36
			// 
			this->label36->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::MediumBlue;
			this->label36->Location = System::Drawing::Point(729, 118);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(69, 38);
			this->label36->TabIndex = 31;
			this->label36->Text = L"Discharging";
			// 
			// label37
			// 
			this->label37->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::MediumBlue;
			this->label37->Location = System::Drawing::Point(648, 118);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(69, 38);
			this->label37->TabIndex = 30;
			this->label37->Text = L"Discharging";
			// 
			// label38
			// 
			this->label38->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::MediumBlue;
			this->label38->Location = System::Drawing::Point(567, 118);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(69, 38);
			this->label38->TabIndex = 29;
			this->label38->Text = L"Discharging";
			// 
			// label39
			// 
			this->label39->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::Color::MediumBlue;
			this->label39->Location = System::Drawing::Point(486, 118);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(69, 38);
			this->label39->TabIndex = 28;
			this->label39->Text = L"Discharging";
			// 
			// label40
			// 
			this->label40->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::Color::MediumBlue;
			this->label40->Location = System::Drawing::Point(405, 118);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(69, 38);
			this->label40->TabIndex = 27;
			this->label40->Text = L"Discharging";
			// 
			// label41
			// 
			this->label41->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::Color::MediumBlue;
			this->label41->Location = System::Drawing::Point(324, 118);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(69, 38);
			this->label41->TabIndex = 26;
			this->label41->Text = L"Discharging";
			// 
			// label42
			// 
			this->label42->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::Color::MediumBlue;
			this->label42->Location = System::Drawing::Point(243, 118);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(69, 38);
			this->label42->TabIndex = 25;
			this->label42->Text = L"Discharging";
			// 
			// label43
			// 
			this->label43->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::Color::MediumBlue;
			this->label43->Location = System::Drawing::Point(171, 118);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(61, 38);
			this->label43->TabIndex = 24;
			this->label43->Text = L"Discharging";
			// 
			// label44
			// 
			this->label44->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::Color::MediumBlue;
			this->label44->Location = System::Drawing::Point(116, 128);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(32, 19);
			this->label44->TabIndex = 23;
			this->label44->Text = L"Dis";
			// 
			// label45
			// 
			this->label45->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::Color::MediumBlue;
			this->label45->Location = System::Drawing::Point(7, 129);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(86, 17);
			this->label45->TabIndex = 22;
			this->label45->Text = L"Discharging";
			// 
			// label46
			// 
			this->label46->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label46->Location = System::Drawing::Point(810, 71);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(70, 19);
			this->label46->TabIndex = 21;
			this->label46->Text = L"Charging";
			// 
			// label47
			// 
			this->label47->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label47->Location = System::Drawing::Point(729, 71);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(70, 19);
			this->label47->TabIndex = 20;
			this->label47->Text = L"Charging";
			// 
			// label48
			// 
			this->label48->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label48->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label48->Location = System::Drawing::Point(648, 71);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(70, 19);
			this->label48->TabIndex = 19;
			this->label48->Text = L"Charging";
			// 
			// label49
			// 
			this->label49->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label49->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label49->Location = System::Drawing::Point(567, 71);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(70, 19);
			this->label49->TabIndex = 18;
			this->label49->Text = L"Charging";
			// 
			// label50
			// 
			this->label50->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label50->Location = System::Drawing::Point(486, 71);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(70, 19);
			this->label50->TabIndex = 17;
			this->label50->Text = L"Charging";
			// 
			// label51
			// 
			this->label51->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label51->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label51->Location = System::Drawing::Point(405, 71);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(70, 19);
			this->label51->TabIndex = 16;
			this->label51->Text = L"Charging";
			// 
			// label52
			// 
			this->label52->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label52->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label52->Location = System::Drawing::Point(324, 71);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(70, 19);
			this->label52->TabIndex = 15;
			this->label52->Text = L"Charging";
			// 
			// label53
			// 
			this->label53->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label53->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label53->Location = System::Drawing::Point(243, 71);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(70, 19);
			this->label53->TabIndex = 14;
			this->label53->Text = L"Charging";
			// 
			// label54
			// 
			this->label54->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label54->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label54->Location = System::Drawing::Point(170, 61);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(62, 38);
			this->label54->TabIndex = 13;
			this->label54->Text = L"Charging";
			// 
			// label55
			// 
			this->label55->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label55->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label55->Location = System::Drawing::Point(111, 71);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(42, 19);
			this->label55->TabIndex = 12;
			this->label55->Text = L"Char";
			// 
			// label56
			// 
			this->label56->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label56->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label56->Location = System::Drawing::Point(15, 71);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(70, 19);
			this->label56->TabIndex = 11;
			this->label56->Text = L"Charging";
			// 
			// label57
			// 
			this->label57->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label57->ForeColor = System::Drawing::Color::Green;
			this->label57->Location = System::Drawing::Point(832, 17);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(25, 19);
			this->label57->TabIndex = 10;
			this->label57->Text = L"10";
			// 
			// label58
			// 
			this->label58->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label58->ForeColor = System::Drawing::Color::Green;
			this->label58->Location = System::Drawing::Point(755, 17);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(17, 19);
			this->label58->TabIndex = 9;
			this->label58->Text = L"9";
			// 
			// label59
			// 
			this->label59->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label59->ForeColor = System::Drawing::Color::Green;
			this->label59->Location = System::Drawing::Point(674, 17);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(17, 19);
			this->label59->TabIndex = 8;
			this->label59->Text = L"8";
			// 
			// label60
			// 
			this->label60->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label60->ForeColor = System::Drawing::Color::Green;
			this->label60->Location = System::Drawing::Point(593, 17);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(17, 19);
			this->label60->TabIndex = 7;
			this->label60->Text = L"7";
			// 
			// label61
			// 
			this->label61->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label61->ForeColor = System::Drawing::Color::Green;
			this->label61->Location = System::Drawing::Point(512, 17);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(17, 19);
			this->label61->TabIndex = 6;
			this->label61->Text = L"6";
			// 
			// label62
			// 
			this->label62->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label62->ForeColor = System::Drawing::Color::Green;
			this->label62->Location = System::Drawing::Point(431, 17);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(17, 19);
			this->label62->TabIndex = 5;
			this->label62->Text = L"5";
			// 
			// label63
			// 
			this->label63->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label63->ForeColor = System::Drawing::Color::Green;
			this->label63->Location = System::Drawing::Point(350, 17);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(17, 19);
			this->label63->TabIndex = 4;
			this->label63->Text = L"4";
			// 
			// label64
			// 
			this->label64->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label64->ForeColor = System::Drawing::Color::Green;
			this->label64->Location = System::Drawing::Point(269, 17);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(17, 19);
			this->label64->TabIndex = 3;
			this->label64->Text = L"3";
			// 
			// label65
			// 
			this->label65->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label65->ForeColor = System::Drawing::Color::Green;
			this->label65->Location = System::Drawing::Point(193, 17);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(17, 19);
			this->label65->TabIndex = 2;
			this->label65->Text = L"2";
			// 
			// label66
			// 
			this->label66->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label66->ForeColor = System::Drawing::Color::Green;
			this->label66->Location = System::Drawing::Point(123, 17);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(17, 19);
			this->label66->TabIndex = 1;
			this->label66->Text = L"1";
			// 
			// label67
			// 
			this->label67->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label67->ForeColor = System::Drawing::Color::Green;
			this->label67->Location = System::Drawing::Point(14, 17);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(71, 19);
			this->label67->TabIndex = 0;
			this->label67->Text = L"MONTH";
			// 
			// label68
			// 
			this->label68->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->label68->ForeColor = System::Drawing::Color::Green;
			this->label68->Location = System::Drawing::Point(914, 17);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(24, 19);
			this->label68->TabIndex = 33;
			this->label68->Text = L"11";
			// 
			// label69
			// 
			this->label69->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->label69->ForeColor = System::Drawing::Color::Green;
			this->label69->Location = System::Drawing::Point(998, 17);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(25, 19);
			this->label69->TabIndex = 34;
			this->label69->Text = L"12";
			// 
			// label70
			// 
			this->label70->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->label70->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label70->Location = System::Drawing::Point(897, 71);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(57, 19);
			this->label70->TabIndex = 35;
			this->label70->Text = L"label70";
			// 
			// label71
			// 
			this->label71->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->label71->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label71->Location = System::Drawing::Point(982, 71);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(57, 19);
			this->label71->TabIndex = 36;
			this->label71->Text = L"label71";
			// 
			// label72
			// 
			this->label72->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->label72->ForeColor = System::Drawing::Color::MediumBlue;
			this->label72->Location = System::Drawing::Point(897, 128);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(57, 19);
			this->label72->TabIndex = 37;
			this->label72->Text = L"label72";
			// 
			// label73
			// 
			this->label73->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->label73->ForeColor = System::Drawing::Color::MediumBlue;
			this->label73->Location = System::Drawing::Point(982, 128);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(57, 19);
			this->label73->TabIndex = 38;
			this->label73->Text = L"label73";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->BackColor = System::Drawing::Color::Honeydew;
			this->tableLayoutPanel3->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
			this->tableLayoutPanel3->ColumnCount = 11;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.867172F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				7.874763F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				9.090908F)));
			this->tableLayoutPanel3->Controls->Add(this->label74, 10, 2);
			this->tableLayoutPanel3->Controls->Add(this->label75, 9, 2);
			this->tableLayoutPanel3->Controls->Add(this->label76, 8, 2);
			this->tableLayoutPanel3->Controls->Add(this->label77, 7, 2);
			this->tableLayoutPanel3->Controls->Add(this->label78, 6, 2);
			this->tableLayoutPanel3->Controls->Add(this->label79, 5, 2);
			this->tableLayoutPanel3->Controls->Add(this->label80, 4, 2);
			this->tableLayoutPanel3->Controls->Add(this->label81, 3, 2);
			this->tableLayoutPanel3->Controls->Add(this->label82, 2, 2);
			this->tableLayoutPanel3->Controls->Add(this->label83, 1, 2);
			this->tableLayoutPanel3->Controls->Add(this->label84, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->label85, 10, 1);
			this->tableLayoutPanel3->Controls->Add(this->label86, 9, 1);
			this->tableLayoutPanel3->Controls->Add(this->label87, 8, 1);
			this->tableLayoutPanel3->Controls->Add(this->label88, 7, 1);
			this->tableLayoutPanel3->Controls->Add(this->label89, 6, 1);
			this->tableLayoutPanel3->Controls->Add(this->label90, 5, 1);
			this->tableLayoutPanel3->Controls->Add(this->label91, 4, 1);
			this->tableLayoutPanel3->Controls->Add(this->label92, 3, 1);
			this->tableLayoutPanel3->Controls->Add(this->label93, 2, 1);
			this->tableLayoutPanel3->Controls->Add(this->label94, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->label95, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->label96, 10, 0);
			this->tableLayoutPanel3->Controls->Add(this->label97, 9, 0);
			this->tableLayoutPanel3->Controls->Add(this->label98, 8, 0);
			this->tableLayoutPanel3->Controls->Add(this->label99, 7, 0);
			this->tableLayoutPanel3->Controls->Add(this->label100, 6, 0);
			this->tableLayoutPanel3->Controls->Add(this->label101, 5, 0);
			this->tableLayoutPanel3->Controls->Add(this->label102, 4, 0);
			this->tableLayoutPanel3->Controls->Add(this->label103, 3, 0);
			this->tableLayoutPanel3->Controls->Add(this->label104, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->label105, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->label106, 0, 0);
			this->tableLayoutPanel3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tableLayoutPanel3->Location = System::Drawing::Point(55, 520);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tableLayoutPanel3->RowCount = 3;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 46.49123F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 53.50877F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 52)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1057, 167);
			this->tableLayoutPanel3->TabIndex = 13;
			this->tableLayoutPanel3->Visible = false;
			// 
			// label74
			// 
			this->label74->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label74->AutoSize = true;
			this->label74->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label74->ForeColor = System::Drawing::Color::MediumBlue;
			this->label74->Location = System::Drawing::Point(961, 128);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(89, 19);
			this->label74->TabIndex = 32;
			this->label74->Text = L"Discharging";
			// 
			// label75
			// 
			this->label75->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label75->AutoSize = true;
			this->label75->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label75->ForeColor = System::Drawing::Color::MediumBlue;
			this->label75->Location = System::Drawing::Point(868, 118);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(81, 38);
			this->label75->TabIndex = 31;
			this->label75->Text = L"Discharging";
			// 
			// label76
			// 
			this->label76->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label76->ForeColor = System::Drawing::Color::MediumBlue;
			this->label76->Location = System::Drawing::Point(772, 118);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(81, 38);
			this->label76->TabIndex = 30;
			this->label76->Text = L"Discharging";
			// 
			// label77
			// 
			this->label77->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label77->ForeColor = System::Drawing::Color::MediumBlue;
			this->label77->Location = System::Drawing::Point(676, 118);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(81, 38);
			this->label77->TabIndex = 29;
			this->label77->Text = L"Discharging";
			// 
			// label78
			// 
			this->label78->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label78->ForeColor = System::Drawing::Color::MediumBlue;
			this->label78->Location = System::Drawing::Point(580, 118);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(81, 38);
			this->label78->TabIndex = 28;
			this->label78->Text = L"Discharging";
			// 
			// label79
			// 
			this->label79->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label79->ForeColor = System::Drawing::Color::MediumBlue;
			this->label79->Location = System::Drawing::Point(484, 118);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(81, 38);
			this->label79->TabIndex = 27;
			this->label79->Text = L"Discharging";
			// 
			// label80
			// 
			this->label80->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label80->AutoSize = true;
			this->label80->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label80->ForeColor = System::Drawing::Color::MediumBlue;
			this->label80->Location = System::Drawing::Point(388, 118);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(81, 38);
			this->label80->TabIndex = 26;
			this->label80->Text = L"Discharging";
			// 
			// label81
			// 
			this->label81->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label81->AutoSize = true;
			this->label81->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label81->ForeColor = System::Drawing::Color::MediumBlue;
			this->label81->Location = System::Drawing::Point(292, 118);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(81, 38);
			this->label81->TabIndex = 25;
			this->label81->Text = L"Discharging";
			// 
			// label82
			// 
			this->label82->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label82->AutoSize = true;
			this->label82->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label82->ForeColor = System::Drawing::Color::MediumBlue;
			this->label82->Location = System::Drawing::Point(196, 118);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(81, 38);
			this->label82->TabIndex = 24;
			this->label82->Text = L"Discharging";
			// 
			// label83
			// 
			this->label83->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label83->AutoSize = true;
			this->label83->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label83->ForeColor = System::Drawing::Color::MediumBlue;
			this->label83->Location = System::Drawing::Point(131, 128);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(32, 19);
			this->label83->TabIndex = 23;
			this->label83->Text = L"Dis";
			// 
			// label84
			// 
			this->label84->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label84->AutoSize = true;
			this->label84->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label84->ForeColor = System::Drawing::Color::MediumBlue;
			this->label84->Location = System::Drawing::Point(9, 128);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(89, 19);
			this->label84->TabIndex = 22;
			this->label84->Text = L"Discharging";
			// 
			// label85
			// 
			this->label85->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label85->AutoSize = true;
			this->label85->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label85->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label85->Location = System::Drawing::Point(971, 71);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(70, 19);
			this->label85->TabIndex = 21;
			this->label85->Text = L"Charging";
			// 
			// label86
			// 
			this->label86->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label86->AutoSize = true;
			this->label86->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label86->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label86->Location = System::Drawing::Point(873, 71);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(70, 19);
			this->label86->TabIndex = 20;
			this->label86->Text = L"Charging";
			// 
			// label87
			// 
			this->label87->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label87->AutoSize = true;
			this->label87->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label87->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label87->Location = System::Drawing::Point(777, 71);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(70, 19);
			this->label87->TabIndex = 19;
			this->label87->Text = L"Charging";
			// 
			// label88
			// 
			this->label88->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label88->AutoSize = true;
			this->label88->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label88->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label88->Location = System::Drawing::Point(681, 71);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(70, 19);
			this->label88->TabIndex = 18;
			this->label88->Text = L"Charging";
			// 
			// label89
			// 
			this->label89->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label89->AutoSize = true;
			this->label89->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label89->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label89->Location = System::Drawing::Point(585, 71);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(70, 19);
			this->label89->TabIndex = 17;
			this->label89->Text = L"Charging";
			// 
			// label90
			// 
			this->label90->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label90->AutoSize = true;
			this->label90->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label90->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label90->Location = System::Drawing::Point(489, 71);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(70, 19);
			this->label90->TabIndex = 16;
			this->label90->Text = L"Charging";
			// 
			// label91
			// 
			this->label91->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label91->AutoSize = true;
			this->label91->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label91->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label91->Location = System::Drawing::Point(393, 71);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(70, 19);
			this->label91->TabIndex = 15;
			this->label91->Text = L"Charging";
			// 
			// label92
			// 
			this->label92->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label92->AutoSize = true;
			this->label92->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label92->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label92->Location = System::Drawing::Point(297, 71);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(70, 19);
			this->label92->TabIndex = 14;
			this->label92->Text = L"Charging";
			// 
			// label93
			// 
			this->label93->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label93->AutoSize = true;
			this->label93->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label93->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label93->Location = System::Drawing::Point(201, 71);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(70, 19);
			this->label93->TabIndex = 13;
			this->label93->Text = L"Charging";
			// 
			// label94
			// 
			this->label94->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label94->AutoSize = true;
			this->label94->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label94->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label94->Location = System::Drawing::Point(126, 71);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(42, 19);
			this->label94->TabIndex = 12;
			this->label94->Text = L"Char";
			// 
			// label95
			// 
			this->label95->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label95->AutoSize = true;
			this->label95->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label95->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label95->Location = System::Drawing::Point(18, 71);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(70, 19);
			this->label95->TabIndex = 11;
			this->label95->Text = L"Charging";
			// 
			// label96
			// 
			this->label96->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label96->AutoSize = true;
			this->label96->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label96->ForeColor = System::Drawing::Color::Green;
			this->label96->Location = System::Drawing::Point(993, 17);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(25, 19);
			this->label96->TabIndex = 10;
			this->label96->Text = L"30";
			// 
			// label97
			// 
			this->label97->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label97->AutoSize = true;
			this->label97->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label97->ForeColor = System::Drawing::Color::Green;
			this->label97->Location = System::Drawing::Point(896, 17);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(25, 19);
			this->label97->TabIndex = 9;
			this->label97->Text = L"27";
			// 
			// label98
			// 
			this->label98->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label98->AutoSize = true;
			this->label98->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label98->ForeColor = System::Drawing::Color::Green;
			this->label98->Location = System::Drawing::Point(800, 17);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(25, 19);
			this->label98->TabIndex = 8;
			this->label98->Text = L"24";
			// 
			// label99
			// 
			this->label99->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label99->AutoSize = true;
			this->label99->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label99->ForeColor = System::Drawing::Color::Green;
			this->label99->Location = System::Drawing::Point(704, 17);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(25, 19);
			this->label99->TabIndex = 7;
			this->label99->Text = L"21";
			// 
			// label100
			// 
			this->label100->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label100->AutoSize = true;
			this->label100->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label100->ForeColor = System::Drawing::Color::Green;
			this->label100->Location = System::Drawing::Point(608, 17);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(25, 19);
			this->label100->TabIndex = 6;
			this->label100->Text = L"18";
			// 
			// label101
			// 
			this->label101->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label101->AutoSize = true;
			this->label101->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label101->ForeColor = System::Drawing::Color::Green;
			this->label101->Location = System::Drawing::Point(512, 17);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(25, 19);
			this->label101->TabIndex = 5;
			this->label101->Text = L"15";
			// 
			// label102
			// 
			this->label102->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label102->AutoSize = true;
			this->label102->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label102->ForeColor = System::Drawing::Color::Green;
			this->label102->Location = System::Drawing::Point(416, 17);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(25, 19);
			this->label102->TabIndex = 4;
			this->label102->Text = L"12";
			// 
			// label103
			// 
			this->label103->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label103->AutoSize = true;
			this->label103->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label103->ForeColor = System::Drawing::Color::Green;
			this->label103->Location = System::Drawing::Point(324, 17);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(17, 19);
			this->label103->TabIndex = 3;
			this->label103->Text = L"9";
			// 
			// label104
			// 
			this->label104->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label104->AutoSize = true;
			this->label104->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label104->ForeColor = System::Drawing::Color::Green;
			this->label104->Location = System::Drawing::Point(228, 17);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(17, 19);
			this->label104->TabIndex = 2;
			this->label104->Text = L"6";
			// 
			// label105
			// 
			this->label105->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label105->AutoSize = true;
			this->label105->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label105->ForeColor = System::Drawing::Color::Green;
			this->label105->Location = System::Drawing::Point(138, 17);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(17, 19);
			this->label105->TabIndex = 1;
			this->label105->Text = L"3";
			// 
			// label106
			// 
			this->label106->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label106->AutoSize = true;
			this->label106->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label106->ForeColor = System::Drawing::Color::Green;
			this->label106->Location = System::Drawing::Point(33, 17);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(41, 19);
			this->label106->TabIndex = 0;
			this->label106->Text = L"DAY";
			// 
			// Statistic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(1185, 700);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Statistic";
			this->Text = L"STATISTICS";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart4))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

}

static  array<String^> ^readgcd(){
	array<String^> ^gcd={"1","2","3","4","5","6","7","8","9","10","9","9","9","9","9","9","9","9","9","9","9","9","9","9","9","9","9","9","9","30"};
	try{
          String ^cont = "Server=127.0.0.1; Uid=root; Pwd=;Database=agamine;";
          MySqlConnection^ con=gcnew MySqlConnection(cont);  

	   //cmd-1-----------------------------------
		  try{
			  	
	            
		         MySqlCommand ^cmd = gcnew MySqlCommand("select GCD from profil",con);
				  con->Open();
				  MySqlDataReader ^dr;
		         dr= cmd->ExecuteReader();
				 //int gcd[30];
			
				 for(int i=0;i<30;i++){
					 dr->Read();
				 gcd[i]=dr->GetString(0);
				 }
		     	 con->Close();
		  }catch(Exception^ ex){   
			  con->Close();
		   MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
		  }

		  
	   }catch(Exception^ ex){
	    MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
	   }


	 return gcd;
			 }

static  array<String^> ^readgld(){
	array<String^> ^gld={"1","2","3","4","5","6","7","8","9","10","9","9","9","9","9","9","9","9","9","9","9","9","9","9","9","9","9","9","9","30"};
	try{
          String ^cont = "Server=127.0.0.1; Uid=root; Pwd=;Database=agamine;";
          MySqlConnection^ con=gcnew MySqlConnection(cont);  

	   //cmd-1-----------------------------------
		  try{
			  	
	            
		         MySqlCommand ^cmd = gcnew MySqlCommand("select GLD from profil",con);
				  con->Open();
				  MySqlDataReader ^dr;
		         dr= cmd->ExecuteReader();
				 //int gcd[30];
			
				 for(int i=0;i<30;i++){
					 dr->Read();
				 gld[i]=dr->GetString(0);
				 }
		     	 con->Close();
		  }catch(Exception^ ex){   
			  con->Close();
		   MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
		  }

		  
	   }catch(Exception^ ex){
	    MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
	   }


	 return gld;
			 }

static  array<String^> ^readgcm(){
	array<String^> ^gcm={"1","2","3","4","5","6","7","8","9","10","9","12"};
	try{
          String ^cont = "Server=127.0.0.1; Uid=root; Pwd=;Database=agamine;";
          MySqlConnection^ con=gcnew MySqlConnection(cont);  

	   //cmd-1-----------------------------------
		  try{
			  	
	            
		         MySqlCommand ^cmd = gcnew MySqlCommand("select GCM from profil",con);
				  con->Open();
				  MySqlDataReader ^dr;
		         dr= cmd->ExecuteReader();
				 //int gcd[30];
			
				 for(int i=0;i<12;i++){
					 dr->Read();
				 gcm[i]=dr->GetString(0);
				 }
		     	 con->Close();
		  }catch(Exception^ ex){   
			  con->Close();
		   MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
		  }

		  
	   }catch(Exception^ ex){
	    MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
	   }


	 return gcm;
			 }

static  array<String^> ^readglm(){
	array<String^> ^glm={"1","2","3","4","5","6","7","8","9","10","9","12"};
	try{
          String ^cont = "Server=127.0.0.1; Uid=root; Pwd=;Database=agamine;";
          MySqlConnection^ con=gcnew MySqlConnection(cont);  

	   //cmd-1-----------------------------------
		  try{
			  	
	            
		         MySqlCommand ^cmd = gcnew MySqlCommand("select GLM from profil",con);
				  con->Open();
				  MySqlDataReader ^dr;
		         dr= cmd->ExecuteReader();
				 //int gcd[30];
			
				 for(int i=0;i<12;i++){
					 dr->Read();
				 glm[i]=dr->GetString(0);
				 }
		     	 con->Close();
		  }catch(Exception^ ex){   
			  con->Close();
		   MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
		  }

		  
	   }catch(Exception^ ex){
	    MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
	   }


	 return glm;
			 }

static  array<String^> ^readgcy(){
	array<String^> ^gcy={"1","2","3","4","5","6","7","8","9","10"};
	try{
          String ^cont = "Server=127.0.0.1; Uid=root; Pwd=;Database=agamine;";
          MySqlConnection^ con=gcnew MySqlConnection(cont);  

	   //cmd-1-----------------------------------
		  try{
			  	
	            
		         MySqlCommand ^cmd = gcnew MySqlCommand("select GCY from profil",con);
				  con->Open();
				  MySqlDataReader ^dr;
		         dr= cmd->ExecuteReader();
				 //int gcd[30];
			
				 for(int i=0;i<10;i++){
					 dr->Read();
				 gcy[i]=dr->GetString(0);
				 }
		     	 con->Close();
		  }catch(Exception^ ex){   
			  con->Close();
		   MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
		  }

		  
	   }catch(Exception^ ex){
	    MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
	   }


	 return gcy;
			 }

static  array<String^> ^readgly(){
	array<String^> ^gly={"1","2","3","4","5","6","7","8","9","10"};
	try{
          String ^cont = "Server=127.0.0.1; Uid=root; Pwd=;Database=agamine;";
          MySqlConnection^ con=gcnew MySqlConnection(cont);  

	   //cmd-1-----------------------------------
		  try{
			  	
	            
		         MySqlCommand ^cmd = gcnew MySqlCommand("select GLY from profil",con);
				  con->Open();
				  MySqlDataReader ^dr;
		         dr= cmd->ExecuteReader();
				 //int gcd[30];
			
				 for(int i=0;i<10;i++){
					 dr->Read();
				 gly[i]=dr->GetString(0);
				 }
		     	 con->Close();
		  }catch(Exception^ ex){   
			  con->Close();
		   MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
		  }

		  
	   }catch(Exception^ ex){
	    MessageBox::Show(ex->Message, " ERROR.!!! ",MessageBoxButtons::OK, MessageBoxIcon::Error);
	   }


	 return gly;
			 }




///////////////////day
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
this->label1->Text = "Statistics of charging and discharging by DAYs";
			 this->chart1->Visible = true ;//Day
		this->chart2->Visible = false;//Month
		this->chart3->Visible = false ;//Year
		this->chart4->Visible = false ;
		this->button4->Enabled = false ;
		this->button2->Enabled = true ;
		this->button3->Enabled = true ;
				this->tableLayoutPanel1->Visible = false ;
				this->tableLayoutPanel2->Visible = false ;
				this->tableLayoutPanel3->Visible = true ;

		if(Statistic::tstday){
                                  Statistic::GCD = readgcd();
				                  Statistic::GLD = readgld();						
						String^ year,^R;
				int Crestest,Lrestest,Y;
			for(int i=0;i<30;i++){
					Y=i+1;
				year = Y.ToString();

				R = Statistic::GCD[i] ;///////////
				Crestest = Int32::Parse(R);
                 this->chart1->Series["Charging"]->Points->AddXY( year , Crestest );

				 R = Statistic::GLD[i] ;
				Lrestest = Int32::Parse(R);
				this->chart1->Series["Discharging"]->Points->AddXY( year , Lrestest );
			  }
//charging------------------
			this->label94->Text =   Statistic::GCD[2] ;
			this->label93->Text =   Statistic::GCD[5] ;
			this->label92->Text =   Statistic::GCD[8] ;
			this->label91->Text =   Statistic::GCD[11] ;
			this->label90->Text =   Statistic::GCD[14] ;
			this->label89->Text =   Statistic::GCD[17] ;
			this->label88->Text =   Statistic::GCD[20] ;
			this->label87->Text =   Statistic::GCD[23] ;
			this->label86->Text =   Statistic::GCD[26] ;
			this->label85->Text =   Statistic::GCD[29] ;
//discharging------------------
			this->label83->Text =   Statistic::GLD[2] ;
			this->label82->Text =   Statistic::GLD[5] ;
			this->label81->Text =   Statistic::GLD[8] ;
			this->label80->Text =   Statistic::GLD[11] ;
			this->label79->Text =   Statistic::GLD[14] ;
			this->label78->Text =   Statistic::GLD[17] ;
			this->label77->Text =   Statistic::GLD[20] ;
			this->label76->Text =   Statistic::GLD[23] ;
			this->label75->Text =   Statistic::GLD[26] ;
			this->label74->Text =   Statistic::GLD[29] ;

		


			
			Statistic::tstday = false;
		} 
		}

////////////////////////month
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
this->label1->Text = "Statistics of charging and discharging by MONTHs";
				this->chart1->Visible = false ;//Day
		        this->chart2->Visible = true;//Month
				this->chart3->Visible = false ;//Year
				this->chart4->Visible = false ;
				this->button2->Enabled = false ;
				this->button3->Enabled = true ;
				this->button4->Enabled = true ;
				this->tableLayoutPanel1->Visible = false ;
				this->tableLayoutPanel2->Visible = true ;
				this->tableLayoutPanel3->Visible = false ;

				if(Statistic::tstmonth){
				                   Statistic::GCM = readgcm();
			                       Statistic::GLM = readglm();
						String^ year,^R;
				int Crestest,Lrestest,Y;
			for(int i=0;i<12;i++){
					Y=i+1;
				year = Y.ToString();

				R = Statistic::GCM[i] ;/////////
				Crestest = Int32::Parse(R);
                 this->chart2->Series["Charging"]->Points->AddXY( year , Crestest );

				 R = Statistic::GLM[i] ;////////
				Lrestest = Int32::Parse(R);
				this->chart2->Series["Discharging"]->Points->AddXY( year , Lrestest );
			  }
//charging-----------------
			this->label55->Text =   Statistic::GCM[0] ;
			this->label54->Text =   Statistic::GCM[1] ;
			this->label53->Text =   Statistic::GCM[2] ;
			this->label52->Text =   Statistic::GCM[3] ;
			this->label51->Text =   Statistic::GCM[4] ;
			this->label50->Text =   Statistic::GCM[5] ;
			this->label49->Text =   Statistic::GCM[6] ;
			this->label48->Text =   Statistic::GCM[7] ;
			this->label47->Text =   Statistic::GCM[8] ;
			this->label46->Text =   Statistic::GCM[9] ;
			this->label70->Text =   Statistic::GCM[10] ;
			this->label71->Text =   Statistic::GCM[11] ;
//discharging---------
			this->label44->Text =   Statistic::GLM[0] ;
			this->label43->Text =   Statistic::GLM[1] ;
			this->label42->Text =   Statistic::GLM[2] ;
			this->label41->Text =   Statistic::GLM[3] ;
			this->label40->Text =   Statistic::GLM[4] ;
			this->label39->Text =   Statistic::GLM[5] ;
			this->label38->Text =   Statistic::GLM[6] ;
			this->label37->Text =   Statistic::GLM[7] ;
			this->label36->Text =   Statistic::GLM[8] ;
			this->label35->Text =   Statistic::GLM[9] ;
			this->label72->Text =   Statistic::GLM[10] ;
			this->label73->Text =   Statistic::GLM[11] ;



				Statistic::tstmonth = false;
				}
			 }

/////////////////////year
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->label1->Text = "Statistics of charging and discharging by YEARs";
			    this->chart1->Visible = false ;//Day
		        this->chart2->Visible = false;//Month
				this->chart3->Visible = true ;//Year
				this->chart4->Visible = false ;
				this->button3->Enabled = false ;
				this->button2->Enabled = true ;
				this->button4->Enabled = true ;
				this->tableLayoutPanel1->Visible = true ;
				this->tableLayoutPanel2->Visible = false ;
				this->tableLayoutPanel3->Visible = false ;


				if(Statistic::tstyear){
							       Statistic::GCY = readgcy();
							 	   Statistic::GLY = readgly();
						
					String ^year,^Rc,^Rl;
				int Crestest,Lrestest,Y;
			for(int i=0;i<10;i++){
					Y=i+1;
				year = Y.ToString();

				Rc = Statistic::GCY[i] ;
				Crestest = Int32::Parse(Rc);

			    Rl = Statistic::GLY[i] ;
				Lrestest = Int32::Parse(Rl);
                this->chart3->Series["Charging"]->Points->AddXY( year , Crestest );
				this->chart3->Series["Discharging"]->Points->AddXY( year , Lrestest );


			  }
	///Charging--------------------------------------------	
			this->label14->Text =   Statistic::GCY[0] ;
			this->label15->Text =   Statistic::GCY[1] ;
			this->label16->Text =   Statistic::GCY[2] ;
			this->label17->Text =   Statistic::GCY[3] ;
			this->label18->Text =   Statistic::GCY[4] ;
			this->label19->Text =   Statistic::GCY[5] ;
			this->label20->Text =   Statistic::GCY[6] ;
			this->label21->Text =   Statistic::GCY[7] ;
			this->label22->Text =   Statistic::GCY[8] ;
			this->label23->Text =   Statistic::GCY[9] ;
	///discharging-----------------------------------------
			this->label25->Text =   Statistic::GLY[0] ;
			this->label26->Text =   Statistic::GLY[1] ;
			this->label27->Text =   Statistic::GLY[2] ;
			this->label28->Text =   Statistic::GLY[3] ;
			this->label29->Text =   Statistic::GLY[4] ;
			this->label30->Text =   Statistic::GLY[5] ;
			this->label31->Text =   Statistic::GLY[6] ;
			this->label32->Text =   Statistic::GLY[7] ;
			this->label33->Text =   Statistic::GLY[8] ;
			this->label34->Text =   Statistic::GLY[9] ;


			Statistic::tstyear = false;
				}
		 }



private: System::Void tableLayoutPanel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}
