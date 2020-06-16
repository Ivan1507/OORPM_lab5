#pragma once


namespace lab5OORPM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	int count=0;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			int count=0;
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
	private: System::Windows::Forms::CheckBox^  checkBox1;
	protected: 
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;

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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(17, 42);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(44, 20);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Да";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(79, 42);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(52, 20);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Нет";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(14, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"1)5+13=18\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"2)(26+49)*2\?";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(17, 96);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(100, 22);
			this->maskedTextBox1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 202);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"4)64/16\?";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(17, 225);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"3)225^(1/2)\?";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(21, 168);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(40, 20);
			this->radioButton1->TabIndex = 8;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"15";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(118, 169);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(40, 20);
			this->radioButton2->TabIndex = 9;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"14";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(206, 169);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(40, 20);
			this->radioButton3->TabIndex = 10;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"16";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->maskedTextBox1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(50, 92);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(455, 310);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Тестирование";
			this->groupBox1->Visible = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(149, 225);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 13;
			this->button4->Text = L"OK";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(149, 95);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(232, 271);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(204, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Завершить тестирование";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(50, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Введите ваше имя:";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(51, 57);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(116, 22);
			this->textBox2->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(185, 57);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(453, 420);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(94, 23);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Выход";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(618, 457);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Тест по математике";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox2->Text!=""){
				 textBox2->Enabled=false;
				 button1->Enabled=false;
				 groupBox1->Visible=true;
			 }
			 else MessageBox::Show("Пустое имя!");
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 count+=1;
			 checkBox1->Enabled=false;
			 checkBox2->Enabled=false;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Студент "+textBox2->Text+" правильно ответили на "+count+" вопрос(а)");
			 groupBox1->Visible=0;
			 button5->Visible=1;
		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 checkBox1->Enabled=false;
			 checkBox2->Enabled=false;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(maskedTextBox1->Text=="150") count+=1;
			 maskedTextBox1->Enabled=0;
			 button3->Enabled=0;
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox1->Text=="4") count+=1;
			 textBox1->Enabled=0;
			 button4->Enabled=0;
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 count+=1;
			 radioButton1->Enabled=0;
			 radioButton2->Enabled=0;
			 radioButton3->Enabled=0;
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}

