#pragma once
#include"GestionStat.h"
namespace ProjetV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormStat
	/// </summary>
	public ref class FormStat : public System::Windows::Forms::Form
	{
	public:
		FormStat(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FormStat()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private:NS_Comp_Svc::GestionStat^ oSvc;
	private: NS_Comp_Mappage::MapStat^ oMap;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ btn_simulation;
	private: System::Windows::Forms::Button^ btn_load;
	private: System::Windows::Forms::Label^ Stock_value;
	private: System::Windows::Forms::TextBox^ txt_stock_value;
	private: System::Windows::Forms::ComboBox^ comboBox_TVA;
	private: System::Windows::Forms::ComboBox^ comboBox_margin;
	private: System::Windows::Forms::ComboBox^ comboBox_discount;
	private: System::Windows::Forms::ComboBox^ comboBox_ub;





	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btn_simulation = (gcnew System::Windows::Forms::Button());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->Stock_value = (gcnew System::Windows::Forms::Label());
			this->txt_stock_value = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_TVA = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_margin = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_discount = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_ub = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MistyRose;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Calcul medium price order";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormStat::button1_Click);
			// 
			// dgv_enr
			// 
			this->dgv_enr->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(210, 12);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(586, 390);
			this->dgv_enr->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MistyRose;
			this->button2->Location = System::Drawing::Point(12, 41);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Turnover (month)";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormStat::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MistyRose;
			this->button3->Location = System::Drawing::Point(12, 70);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(192, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Low stock products";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FormStat::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::MistyRose;
			this->button4->Location = System::Drawing::Point(12, 99);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(192, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Stock Value";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FormStat::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::MistyRose;
			this->button5->Location = System::Drawing::Point(12, 128);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(192, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Stock purchase value";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &FormStat::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::MistyRose;
			this->button6->Location = System::Drawing::Point(12, 157);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(192, 23);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Total amount client";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &FormStat::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::MistyRose;
			this->button7->Location = System::Drawing::Point(12, 209);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(192, 23);
			this->button7->TabIndex = 8;
			this->button7->Text = L"10 Most popular items";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &FormStat::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::MistyRose;
			this->button8->Location = System::Drawing::Point(12, 238);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(192, 23);
			this->button8->TabIndex = 9;
			this->button8->Text = L"10 Less popular items";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &FormStat::button8_Click);
			// 
			// btn_simulation
			// 
			this->btn_simulation->BackColor = System::Drawing::Color::MistyRose;
			this->btn_simulation->Location = System::Drawing::Point(699, 419);
			this->btn_simulation->Name = L"btn_simulation";
			this->btn_simulation->Size = System::Drawing::Size(75, 23);
			this->btn_simulation->TabIndex = 10;
			this->btn_simulation->Text = L"Simulation";
			this->btn_simulation->UseVisualStyleBackColor = false;
			this->btn_simulation->Click += gcnew System::EventHandler(this, &FormStat::btn_simulation_Click);
			// 
			// btn_load
			// 
			this->btn_load->BackColor = System::Drawing::Color::MistyRose;
			this->btn_load->Location = System::Drawing::Point(699, 448);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(75, 23);
			this->btn_load->TabIndex = 11;
			this->btn_load->Text = L"Load DB";
			this->btn_load->UseVisualStyleBackColor = false;
			this->btn_load->Click += gcnew System::EventHandler(this, &FormStat::btn_load_Click);
			// 
			// Stock_value
			// 
			this->Stock_value->AutoSize = true;
			this->Stock_value->Location = System::Drawing::Point(12, 429);
			this->Stock_value->Name = L"Stock_value";
			this->Stock_value->Size = System::Drawing::Size(64, 13);
			this->Stock_value->TabIndex = 12;
			this->Stock_value->Text = L"Stock value";
			// 
			// txt_stock_value
			// 
			this->txt_stock_value->BackColor = System::Drawing::SystemColors::Window;
			this->txt_stock_value->Location = System::Drawing::Point(12, 451);
			this->txt_stock_value->Name = L"txt_stock_value";
			this->txt_stock_value->Size = System::Drawing::Size(100, 20);
			this->txt_stock_value->TabIndex = 13;
			// 
			// comboBox_TVA
			// 
			this->comboBox_TVA->FormattingEnabled = true;
			this->comboBox_TVA->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5", L"10", L"20" });
			this->comboBox_TVA->Location = System::Drawing::Point(150, 450);
			this->comboBox_TVA->Name = L"comboBox_TVA";
			this->comboBox_TVA->Size = System::Drawing::Size(121, 21);
			this->comboBox_TVA->TabIndex = 14;
			this->comboBox_TVA->Text = L"TVA";
			// 
			// comboBox_margin
			// 
			this->comboBox_margin->FormattingEnabled = true;
			this->comboBox_margin->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5", L"10", L"15" });
			this->comboBox_margin->Location = System::Drawing::Point(277, 450);
			this->comboBox_margin->Name = L"comboBox_margin";
			this->comboBox_margin->Size = System::Drawing::Size(121, 21);
			this->comboBox_margin->TabIndex = 15;
			this->comboBox_margin->Text = L"Margin";
			// 
			// comboBox_discount
			// 
			this->comboBox_discount->FormattingEnabled = true;
			this->comboBox_discount->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"5", L"6" });
			this->comboBox_discount->Location = System::Drawing::Point(404, 450);
			this->comboBox_discount->Name = L"comboBox_discount";
			this->comboBox_discount->Size = System::Drawing::Size(121, 21);
			this->comboBox_discount->TabIndex = 16;
			this->comboBox_discount->Text = L"Discount";
			// 
			// comboBox_ub
			// 
			this->comboBox_ub->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox_ub->FormattingEnabled = true;
			this->comboBox_ub->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2", L"3", L"5" });
			this->comboBox_ub->Location = System::Drawing::Point(532, 449);
			this->comboBox_ub->Name = L"comboBox_ub";
			this->comboBox_ub->Size = System::Drawing::Size(121, 21);
			this->comboBox_ub->TabIndex = 17;
			this->comboBox_ub->Text = L"Uknown Brand";
			// 
			// FormStat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(808, 502);
			this->Controls->Add(this->comboBox_ub);
			this->Controls->Add(this->comboBox_discount);
			this->Controls->Add(this->comboBox_margin);
			this->Controls->Add(this->comboBox_TVA);
			this->Controls->Add(this->txt_stock_value);
			this->Controls->Add(this->Stock_value);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->btn_simulation);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dgv_enr);
			this->Controls->Add(this->button1);
			this->Name = L"FormStat";
			this->Text = L"FormStat";
			this->Load += gcnew System::EventHandler(this, &FormStat::FormStat_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormStat_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::GestionStat();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->stat1("RSL1");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "RSL1";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->stat2("RSL2");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "RSL2";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->stat3("RSL3");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "RSL3";
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->stat4("RS4L");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "RSL4";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->stat5("RSL5");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "RSL5";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->stat6("RSL6");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "RSL6";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->stat7("RSL7");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "RSL7";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->stat8("RSL8");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "RSL8";
	}
	private: System::Void btn_simulation_Click(System::Object^ sender, System::EventArgs^ e) {
		float stock_value = float::Parse(this->txt_stock_value->Text);
		float tva = Convert::ToDouble(this->comboBox_TVA->SelectedItem->ToString());
			float margin = Convert::ToDouble(this->comboBox_margin->SelectedItem->ToString());
		float discount = Convert::ToDouble(this->comboBox_discount->SelectedItem->ToString());
		float uknown_brand = Convert::ToDouble(this->comboBox_ub->SelectedItem->ToString());
		float result;
		this->oSvc->stat9(stock_value, tva, margin, uknown_brand, discount, result);
	}
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectStock("RSL9");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "RSL9";
	}
};
}
