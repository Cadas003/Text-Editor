#pragma once
#include <windows.h>
#include <iostream>
#include <fstream>


namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;
	using namespace System::Text;
	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			timer1->Start();
			LoadFonts();
			loadFontSettings();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ currentFilePath;
		   String^ FileName;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;


	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		bool unsavedChanges;
	private: System::Drawing::Printing::PrintDocument^ printDocument;

	private: System::Windows::Forms::PrintDialog^ printDialog1;


		   bool isChangingColor;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->printDocument = (gcnew System::Drawing::Printing::PrintDocument());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(406, 32);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(37, 23);
			this->button3->TabIndex = 13;
			this->button3->Text = L"�";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(363, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(37, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"�";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(182, 32);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 11;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			this->comboBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(55, 32);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 16;
			this->comboBox1->Text = L"�����";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(12, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(37, 23);
			this->button1->TabIndex = 10;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->����ToolStripMenuItem,
					this->������ToolStripMenuItem, this->������ToolStripMenuItem, this->�����ToolStripMenuItem, this->������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1130, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�������ToolStripMenuItem,
					this->���������ToolStripMenuItem, this->������������ToolStripMenuItem, this->�����ToolStripMenuItem, this->�����ToolStripMenuItem1
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->������������ToolStripMenuItem->Text = L"��������� ���";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->�����ToolStripMenuItem->Text = L"������";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem1
			// 
			this->�����ToolStripMenuItem1->Name = L"�����ToolStripMenuItem1";
			this->�����ToolStripMenuItem1->Size = System::Drawing::Size(154, 22);
			this->�����ToolStripMenuItem1->Text = L"�����";
			this->�����ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem1_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->����������ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->��������ToolStripMenuItem, this->��������ToolStripMenuItem
			});
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click_1);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����ToolStripMenuItem });
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->�����ToolStripMenuItem->Text = L"�����...";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(51, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(449, 32);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(37, 23);
			this->button4->TabIndex = 14;
			this->button4->Text = L"�";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Text files (*.txt)|*.txt|Doc files (*.docx)|*.docx|All files (*.*)|*.*";
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel3, this->toolStripStatusLabel4, this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 911);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1130, 22);
			this->statusStrip1->TabIndex = 18;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->AutoSize = false;
			this->toolStripStatusLabel1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(332, 17);
			this->toolStripStatusLabel1->Spring = true;
			this->toolStripStatusLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(118, 17);
			this->toolStripStatusLabel3->Text = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(332, 17);
			this->toolStripStatusLabel4->Spring = true;
			this->toolStripStatusLabel4->Text = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(332, 17);
			this->toolStripStatusLabel2->Spring = true;
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// richTextBox1
			// 
			this->richTextBox1->AcceptsTab = true;
			this->richTextBox1->Location = System::Drawing::Point(12, 61);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1106, 831);
			this->richTextBox1->TabIndex = 19;
			this->richTextBox1->Text = L"";
			this->richTextBox1->ContentsResized += gcnew System::Windows::Forms::ContentsResizedEventHandler(this, &MyForm::richTextBox1_ContentsResized);
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			this->richTextBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::richTextBox1_KeyDown);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(504, 32);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(37, 23);
			this->button5->TabIndex = 20;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(547, 32);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(37, 23);
			this->button6->TabIndex = 21;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(590, 32);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(37, 23);
			this->button7->TabIndex = 22;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(309, 32);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(48, 23);
			this->button8->TabIndex = 23;
			this->button8->Text = L"����";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// printDocument
			// 
			this->printDocument->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument_PrintPage);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1130, 933);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->button4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Text Reader";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void LoadFonts() {
			for each (FontFamily ^ fontFamily in FontFamily::Families) {
				comboBox1->Items->Add(fontFamily->Name);
			}
		}

	private: void saveFontSettings() {


		// ��������� ���� � ���������� ������������ �����
		String^ exePath = System::IO::Path::GetDirectoryName(System::Reflection::Assembly::GetExecutingAssembly()->Location);
		String^ filePath = System::IO::Path::Combine(exePath, "fontSettings.txt");

		try {
			StreamWriter^ writer = gcnew StreamWriter(filePath);

			// ���������� �������� ������
			writer->WriteLine(comboBox1->SelectedItem != nullptr ? comboBox1->SelectedItem->ToString() : "Arial");

			// ���������� ������� ������
			writer->WriteLine(!String::IsNullOrEmpty(comboBox2->Text) ? comboBox2->Text : "12");

			// ���������� ����� ������ (������, ������, �������������)
			System::Drawing::Font^ currentFont = richTextBox1->SelectionFont != nullptr ? richTextBox1->SelectionFont : richTextBox1->Font;
			writer->WriteLine(static_cast<int>(currentFont->Style));

			// ���������� ������������ ������
			writer->WriteLine(static_cast<int>(richTextBox1->SelectionAlignment));

			// ���������� ����� ������
			Color currentColor = richTextBox1->SelectionLength > 0 ? richTextBox1->SelectionColor : richTextBox1->ForeColor;
			String^ hexColor = String::Format("#{0:X2}{1:X2}{2:X2}", currentColor.R, currentColor.G, currentColor.B);
			writer->WriteLine(hexColor);

			writer->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("������ ���������� ��������: " + ex->Message, "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
		   bool CheckUnsavedChanges()
		   {
			   if (richTextBox1->Text->Trim()->Length == 0) {
				   return true;
			   }
			   if (this->unsavedChanges)
			   {
				   System::Windows::Forms::DialogResult result = MessageBox::Show("�� ������ ��������� ��������� � �����?", "��������� ��������", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);
				   if (result == System::Windows::Forms::DialogResult::Yes)
				   {
					   SaveAs();
					   return true;
				   }
				   else if
					   (result == System::Windows::Forms::DialogResult::No)
				   {
					   return true;
				   }
				   else { return false; }
			   } return true;
		   }

private: void loadFontSettings() {
	String^ exePath = System::IO::Path::GetDirectoryName(System::Reflection::Assembly::GetExecutingAssembly()->Location);
	String^ filePath = System::IO::Path::Combine(exePath, "fontSettings.txt");

	if (System::IO::File::Exists(filePath)) {
		try {
			StreamReader^ reader = gcnew StreamReader(filePath);

			// �������� ���������� �� �����
			String^ fontName = reader->ReadLine();
			String^ fontSizeStr = reader->ReadLine();
			int fontStyleInt = Int32::Parse(reader->ReadLine());
			int alignmentInt = Int32::Parse(reader->ReadLine());
			String^ hexColor = reader->ReadLine();

			reader->Close();

			// ���������� ��������
			float fontSize = System::Convert::ToSingle(fontSizeStr);
			FontStyle fontStyle = static_cast<FontStyle>(fontStyleInt);
			HorizontalAlignment alignment = static_cast<HorizontalAlignment>(alignmentInt);

			Color color = Color::FromArgb(
				System::Convert::ToInt32(hexColor->Substring(1, 2), 16),
				System::Convert::ToInt32(hexColor->Substring(3, 2), 16),
				System::Convert::ToInt32(hexColor->Substring(5, 2), 16));

			// ���������� ������ � �������� �� ����� ������
			richTextBox1->SelectAll();
			richTextBox1->SelectionFont = gcnew System::Drawing::Font(fontName, fontSize, fontStyle);
			richTextBox1->DeselectAll();
			richTextBox1->SelectAll();
			richTextBox1->SelectionAlignment = alignment;
			richTextBox1->SelectionColor = color;
			richTextBox1->ForeColor = color;
			richTextBox1->DeselectAll();

			// ���������� �����������
			comboBox1->SelectedItem = fontName;
			comboBox2->Text = fontSize.ToString();
		}
		catch (Exception^ ex) {
			MessageBox::Show("������ �������� ��������: " + ex->Message, "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		// ��������� �������� �� ���������, ���� ���� �������� �����������
		comboBox1->SelectedItem = "Arial";
		comboBox2->Text = "12";

		richTextBox1->SelectAll();
		richTextBox1->SelectionAlignment = HorizontalAlignment::Left;
		richTextBox1->SelectionFont = gcnew System::Drawing::Font("Arial", 12, FontStyle::Regular);
		richTextBox1->SelectionColor = Color::Black;
		richTextBox1->DeselectAll();

		saveFontSettings();
	}
}

		   //���������� ������ � �������� ����
	private: void save() {
		if (!String::IsNullOrEmpty(currentFilePath))
		{
			StreamWriter^ writer = gcnew StreamWriter(currentFilePath);
			writer->Write(richTextBox1->Text);
			writer->Close();
			this->toolStripStatusLabel1->Text = ("���� ��������: " + currentFilePath);
			this->unsavedChanges = false; // ������������� ���� ����� ����������
		}
		else
		{
			MessageBox::Show("���� �� ������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void SaveAs() {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		saveFileDialog1->Title = "Save a Text File";

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			currentFilePath = saveFileDialog1->FileName;
			try {
				// ���������� � ����
				StreamWriter^ sw = gcnew StreamWriter(currentFilePath);
				sw->Write(richTextBox1->Text);
				sw->Close();

				// �������� �����
				StreamReader^ sr = gcnew StreamReader(currentFilePath);
				richTextBox1->Text = sr->ReadToEnd();
				sr->Close();

				this->unsavedChanges = false; // ������������� ���� ����� ����������
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		loadFontSettings();
	}

		   //�������� �����
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (CheckUnsavedChanges()) // �������� �� ������������� ���������
		{
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				currentFilePath = openFileDialog1->FileName;
				StreamReader^ reader = gcnew StreamReader(currentFilePath);
				richTextBox1->Text = reader->ReadToEnd();
				reader->Close();
				this->toolStripStatusLabel1->Text = ("���� ������: " + currentFilePath);
				this->unsavedChanges = false; // ���������� ���� ����� ��������
				loadFontSettings();
			}

		
		}
		
	}


		// ������ ����������
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentFilePath != nullptr)
		{
			save();
			
		}
		else {
			
			SaveAs(); this->toolStripStatusLabel1->Text = ("���� ��������: " + currentFilePath);
		}
	}
	private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentFilePath != nullptr)
		{
			save();
		}
		else {
			SaveAs(); this->toolStripStatusLabel1->Text = ("���� ��������: " + currentFilePath);
		}
	}

//������ ��� ������ ���������


		   private: void UpdateZoomStatus() {
			   // ��������� �������� ��������
			   int zoomPercentage = richTextBox1->ZoomFactor * 100;
			   toolStripStatusLabel4->Text = "�������: " + zoomPercentage.ToString() + "%";
		   }


	private: void UpdateStatusStrip() {
	int wordCount = 0;
	int charCount = 0;

	// ��������� ������ �� richTextBox1
	String^ text = richTextBox1->Text;

	// ������� ��������
	charCount = text->Length;

	// ������� ����
	array<String^>^ words = text->Split(gcnew array<wchar_t> { ' ', '\n', '\t' }, StringSplitOptions::RemoveEmptyEntries);
	wordCount = words->Length;

	// ���������� StatusStrip
	toolStripStatusLabel3->Text = "����: " + wordCount + "  ��������: " + charCount;
}

	private: [DllImport("user32.dll", CharSet = CharSet::Auto)]
		static IntPtr GetKeyboardLayout(DWORD idThread);
		   String^ GetKeyboardLayoutName(String^ layoutId)
		   { // ��������� ������������� ��������� � �������� �������� 
			   if (layoutId == "0409") return "ENG";
			   else if (layoutId == "0419") return "RUS";
			   // �������� ����� ������ ��������� �� ���� ������������� else return "Unknown"; 
		   }
		   String^ GetCurrentKeyboardLayout()
		   {
			   IntPtr hkl = GetKeyboardLayout(0);
			   // �������� ������� ��������� 
			   int layoutId = (int)hkl & 0xFFFF;
			   // ��������� ������������� ��������� 
			   return GetKeyboardLayoutName(layoutId.ToString("X4"));
			   //����������� � ������ � ���������� �������� �������� 
		   }

		   System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
		   {
			   
			   toolStripStatusLabel2->Text = "������� ���������: " + GetCurrentKeyboardLayout();
		   }

	private: System::Void ������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveAs();
		saveFontSettings();
		loadFontSettings();

	}


	private: System::Void richTextBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Tab) {
			e->Handled = true;
			richTextBox1->SelectedText = "\t";
		}
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
		// ��������� �������� ������� ������
		float fontSize;
		if (richTextBox1->SelectionFont != nullptr) {
			fontSize = richTextBox1->SelectionFont->Size;
		}
		else {
			fontSize = richTextBox1->Font->Size;
		}
		// ��������� ���������� ������
		String^ selectedFont = comboBox1->SelectedItem->ToString();
		// ��������� ������ ��� richTextBox1 � ����������� �������
		richTextBox1->SelectAll();
		richTextBox1->SelectionFont = gcnew System::Drawing::Font(selectedFont, fontSize);
		richTextBox1->DeselectAll();
		// ���������� �������� ������
		saveFontSettings();
		//loadFontSettings();
	}

		   private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

			   // ��������� �������� ������� ������ �� comboBox2
			   String^ selectedSizeText = comboBox2->Text;
			   float selectedSize;

			   // �������� �� �������� �������� � ��������
			   if (float::TryParse(selectedSizeText, selectedSize)) {
				   if (selectedSize < 8 || selectedSize > 72) {
					   MessageBox::Show("������ ������ ������ ���� � ��������� �� 8 �� 72.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
					   return;
				   }
			   }
			   else {
				   MessageBox::Show("������� ���������� �������� �������� ��� ������� ������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return;
			   }

			   String^ fontName = richTextBox1->SelectionFont != nullptr ? richTextBox1->SelectionFont->FontFamily->Name : richTextBox1->Font->FontFamily->Name;

			   // ��������� ������� ������ ����� ������
			   richTextBox1->SelectAll();
			   richTextBox1->SelectionFont = gcnew System::Drawing::Font(fontName, selectedSize);
			   richTextBox1->DeselectAll();
			   saveFontSettings();
			   loadFontSettings();
		   }

	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		saveFontSettings();
		if (!this->CheckUnsavedChanges()) { e->Cancel = true; }
	}



	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// ���������� comboBox1 ������� ��������� �������
		for each (FontFamily ^ font in FontFamily::Families) {
			comboBox1->Items->Add(font->Name);
		}
		// ���������� comboBox2 ���������� �������� ������
		for (int i = 8; i <= 72; i += 2) { comboBox2->Items->Add(i.ToString()); }
		loadFontSettings();
		//saveFontSettings();
	}


private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdateStatusStrip();
	if (!this->isChangingColor) { this->unsavedChanges = true; }
}



	   //����������

	   private: void ToggleTextStyle(FontStyle style) {
		   // �������� ������� �����
		   System::Drawing::Font^ currentFont = richTextBox1->SelectionFont != nullptr ? richTextBox1->SelectionFont : richTextBox1->Font;

		   // ���������� ����� �����
		   FontStyle newStyle;
		   if ((currentFont->Style & style) == style) {
			   newStyle = currentFont->Style & ~style; // ������� �����
		   }
		   else {
			   newStyle = currentFont->Style | style; // ��������� �����
		   }

		   // ��������� ����� �� ����� ������
		   richTextBox1->SelectAll();
		   richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFont->FontFamily, currentFont->Size, newStyle);
		   richTextBox1->DeselectAll();

	   }

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ToggleTextStyle(FontStyle::Bold);
	saveFontSettings();
	loadFontSettings();
}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	ToggleTextStyle(FontStyle::Italic);
	saveFontSettings();
	loadFontSettings();
}


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	ToggleTextStyle(FontStyle::Underline);
	saveFontSettings();
	loadFontSettings();
}



private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	if (richTextBox1->SelectionLength > 0) {
		richTextBox1->Cut();
}

}
private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Clipboard::ContainsText()) {
		richTextBox1->Paste();
	}

}
private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->CanUndo) {
		richTextBox1->Undo();
	}
}
private: System::Void richTextBox1_ContentsResized(System::Object^ sender, System::Windows::Forms::ContentsResizedEventArgs^ e) {
	UpdateZoomStatus();
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->CanUndo) { richTextBox1->Undo(); }
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->CanRedo) { richTextBox1->Redo(); }
}



private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
	int margin = 13;
	richTextBox1->Width = this->ClientSize.Width - 2 * margin;
	richTextBox1->Height = this->ClientSize.Height - 7.5 * margin; 
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	FontDialog^ fontDialog = gcnew FontDialog();

	// ��������� �������� ������ � FontDialog
	fontDialog->Font = richTextBox1->SelectionFont != nullptr ? richTextBox1->SelectionFont : richTextBox1->Font;

	if (fontDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// ��������� ����� � ����������� ������ ��� �� ����� ������, ���� ������ �� ��������
		if (richTextBox1->SelectionLength > 0) {
			richTextBox1->SelectionFont = gcnew System::Drawing::Font(
				fontDialog->Font->FontFamily,
				Math::Round(fontDialog->Font->Size),
				fontDialog->Font->Style
			);
		}
		else {
			richTextBox1->SelectAll();
			richTextBox1->SelectionFont = gcnew System::Drawing::Font(
				fontDialog->Font->FontFamily,
				Math::Round(fontDialog->Font->Size),
				fontDialog->Font->Style
			);
			richTextBox1->DeselectAll();
		}

		// ��������� �������� � comboBox1 � comboBox2
		String^ fontName = fontDialog->Font->FontFamily->Name;
		float fontSize = Math::Round(fontDialog->Font->Size); // ��������� ������

		if (!comboBox1->Items->Contains(fontName)) {
			comboBox1->Items->Add(fontName);
		}
		comboBox1->SelectedItem = fontName;
		comboBox2->Text = fontSize.ToString(); // ������������� ���������� ��������
	}
}
	private: System::Void �����ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFontSettings();
		if (this->CheckUnsavedChanges()) // ��������� ������������� ���������
		{
			Application::Exit(); // ������� �� ��������� 
		}
	}

//������������

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		richTextBox1->SelectAll();
		richTextBox1->SelectionAlignment = HorizontalAlignment::Left; 
		richTextBox1->DeselectAll(); 
		saveFontSettings();

}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->SelectAll();
		richTextBox1->SelectionAlignment = HorizontalAlignment::Center;
		richTextBox1->DeselectAll();
		saveFontSettings();

	}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

		richTextBox1->SelectAll();
		richTextBox1->SelectionAlignment = HorizontalAlignment::Right;
		richTextBox1->DeselectAll();
		saveFontSettings();

}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	this->isChangingColor = true;
	ColorDialog^ colorDialog = gcnew ColorDialog();

	if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// ��������� ���� �� ����� ������
		richTextBox1->SelectAll();
		richTextBox1->SelectionColor = colorDialog->Color;
		richTextBox1->DeselectAll();

		// ������������� ���� ������ �� ��������� ��� ������ ������
		richTextBox1->ForeColor = colorDialog->Color;
		
	}
	this->isChangingColor = false;
	saveFontSettings();

}

	private: System::Void ����������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->SelectionLength > 0) {
			richTextBox1->Copy();
		}
	}


private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	printDialog1->Document = printDocument; // ����������� �������� � ������� ������

	// ��������� PrintDialog
	if (printDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// �������� ��������
		printDocument->Print();
	}
}
private: System::Void printDocument_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	// ������� ����� �� RichTextBox
	String^ textToPrint = richTextBox1->Text;

	// �������������� ������ � ����� � ������
	System::Drawing::Font^ printFont = richTextBox1->Font;
	System::Drawing::RectangleF printArea = e->MarginBounds;

	// ������ ������ �� ��������
	e->Graphics->DrawString(textToPrint, printFont, Brushes::Black, printArea);

	// ��������, ��� ��� ��������� ��������
	e->HasMorePages = false;
}
};
}
