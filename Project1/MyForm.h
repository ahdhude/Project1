#pragma once



namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  checkBox1;
	protected:
	private: System::Windows::Forms::CheckBox^  checkBox3;
	public: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::ComboBox^  combo_quantum;
	private: System::Windows::Forms::Button^  btn_start;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;



	protected:

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
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->combo_quantum = (gcnew System::Windows::Forms::ComboBox());
			this->btn_start = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(379, 62);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(107, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Shortest Job First";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(379, 85);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(89, 17);
			this->checkBox3->TabIndex = 0;
			this->checkBox3->Text = L"Round Robin";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(246, 62);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(80, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->Maximum = 10;
			// 
			// combo_quantum
			// 
			this->combo_quantum->FormattingEnabled = true;
			this->combo_quantum->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2", L"4", L"10", L"20" });
			this->combo_quantum->Location = System::Drawing::Point(57, 61);
			this->combo_quantum->Name = L"combo_quantum";
			this->combo_quantum->Size = System::Drawing::Size(139, 21);
			this->combo_quantum->TabIndex = 2;
			this->combo_quantum->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);

			//String^ x = this->combo_quantum->Text;
		
			// 
			// btn_start
			// 
			this->btn_start->Location = System::Drawing::Point(718, 79);
			this->btn_start->Name = L"btn_start";
			this->btn_start->Size = System::Drawing::Size(75, 23);
			this->btn_start->TabIndex = 3;
			this->btn_start->Text = L"START ";
			this->btn_start->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(520, 61);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(124, 17);
			this->checkBox2->TabIndex = 0;
			this->checkBox2->Text = L"Random Arrival Time";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::MenuText;
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->richTextBox1->Location = System::Drawing::Point(57, 143);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(736, 349);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(851, 540);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->btn_start);
			this->Controls->Add(this->combo_quantum);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		



					
		
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		

	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
