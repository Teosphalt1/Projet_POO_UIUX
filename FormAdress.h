#pragma once
#include "GestionAdress.h"

namespace ProjetV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Form_adress
	/// </summary>
	public ref class Form_adress : public System::Windows::Forms::Form
	{
	public:
		Form_adress(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~Form_adress()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	protected:
	private: System::Windows::Forms::Button^ btn_load;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::TextBox^ txt_number;
	private: System::Windows::Forms::TextBox^ txt_street;
	private: System::Windows::Forms::TextBox^ txt_pc;
	private: System::Windows::Forms::TextBox^ txt_city;
	private: System::Windows::Forms::TextBox^ txt_floor;
	private: System::Windows::Forms::TextBox^ txt_id;




	private: NS_Comp_Svc::GestionAdress^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ Number;
	private: System::Windows::Forms::Label^ Street;
	private: System::Windows::Forms::Label^ Pc;
	private: System::Windows::Forms::Label^ City;
	private: System::Windows::Forms::Label^ Floor;
	private: System::Windows::Forms::Label^ Id;

	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->txt_number = (gcnew System::Windows::Forms::TextBox());
			this->txt_street = (gcnew System::Windows::Forms::TextBox());
			this->txt_pc = (gcnew System::Windows::Forms::TextBox());
			this->txt_city = (gcnew System::Windows::Forms::TextBox());
			this->txt_floor = (gcnew System::Windows::Forms::TextBox());
			this->Number = (gcnew System::Windows::Forms::Label());
			this->Street = (gcnew System::Windows::Forms::Label());
			this->Pc = (gcnew System::Windows::Forms::Label());
			this->City = (gcnew System::Windows::Forms::Label());
			this->Floor = (gcnew System::Windows::Forms::Label());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->Id = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(177, 12);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(604, 435);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form_adress::dgv_enr_CellContentClick);
			// 
			// btn_load
			// 
			this->btn_load->BackColor = System::Drawing::Color::LightGreen;
			this->btn_load->Location = System::Drawing::Point(96, 318);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(75, 129);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Load DB";
			this->btn_load->UseVisualStyleBackColor = false;
			this->btn_load->Click += gcnew System::EventHandler(this, &Form_adress::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_insert->Location = System::Drawing::Point(15, 318);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(75, 37);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"Insert";
			this->btn_insert->UseVisualStyleBackColor = false;
			this->btn_insert->Click += gcnew System::EventHandler(this, &Form_adress::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::Tomato;
			this->btn_delete->Location = System::Drawing::Point(15, 410);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(75, 37);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &Form_adress::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->BackColor = System::Drawing::Color::NavajoWhite;
			this->btn_update->Location = System::Drawing::Point(15, 364);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(75, 37);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"Update";
			this->btn_update->UseVisualStyleBackColor = false;
			this->btn_update->Click += gcnew System::EventHandler(this, &Form_adress::btn_update_Click);
			// 
			// txt_number
			// 
			this->txt_number->Location = System::Drawing::Point(12, 83);
			this->txt_number->Name = L"txt_number";
			this->txt_number->Size = System::Drawing::Size(156, 20);
			this->txt_number->TabIndex = 5;
			// 
			// txt_street
			// 
			this->txt_street->Location = System::Drawing::Point(12, 122);
			this->txt_street->Name = L"txt_street";
			this->txt_street->Size = System::Drawing::Size(156, 20);
			this->txt_street->TabIndex = 6;
			// 
			// txt_pc
			// 
			this->txt_pc->Location = System::Drawing::Point(12, 161);
			this->txt_pc->Name = L"txt_pc";
			this->txt_pc->Size = System::Drawing::Size(156, 20);
			this->txt_pc->TabIndex = 7;
			// 
			// txt_city
			// 
			this->txt_city->Location = System::Drawing::Point(12, 200);
			this->txt_city->Name = L"txt_city";
			this->txt_city->Size = System::Drawing::Size(156, 20);
			this->txt_city->TabIndex = 8;
			// 
			// txt_floor
			// 
			this->txt_floor->Location = System::Drawing::Point(12, 239);
			this->txt_floor->Name = L"txt_floor";
			this->txt_floor->Size = System::Drawing::Size(156, 20);
			this->txt_floor->TabIndex = 9;
			// 
			// Number
			// 
			this->Number->AutoSize = true;
			this->Number->Location = System::Drawing::Point(9, 67);
			this->Number->Name = L"Number";
			this->Number->Size = System::Drawing::Size(44, 13);
			this->Number->TabIndex = 10;
			this->Number->Text = L"Number";
			// 
			// Street
			// 
			this->Street->AutoSize = true;
			this->Street->Location = System::Drawing::Point(9, 106);
			this->Street->Name = L"Street";
			this->Street->Size = System::Drawing::Size(35, 13);
			this->Street->TabIndex = 11;
			this->Street->Text = L"Street";
			// 
			// Pc
			// 
			this->Pc->AutoSize = true;
			this->Pc->Location = System::Drawing::Point(9, 145);
			this->Pc->Name = L"Pc";
			this->Pc->Size = System::Drawing::Size(63, 13);
			this->Pc->TabIndex = 12;
			this->Pc->Text = L"Postal code";
			// 
			// City
			// 
			this->City->AutoSize = true;
			this->City->Location = System::Drawing::Point(9, 184);
			this->City->Name = L"City";
			this->City->Size = System::Drawing::Size(24, 13);
			this->City->TabIndex = 13;
			this->City->Text = L"City";
			// 
			// Floor
			// 
			this->Floor->AutoSize = true;
			this->Floor->Location = System::Drawing::Point(9, 223);
			this->Floor->Name = L"Floor";
			this->Floor->Size = System::Drawing::Size(30, 13);
			this->Floor->TabIndex = 13;
			this->Floor->Text = L"Floor";
			// 
			// txt_id
			// 
			this->txt_id->BackColor = System::Drawing::SystemColors::Window;
			this->txt_id->Location = System::Drawing::Point(12, 44);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(156, 20);
			this->txt_id->TabIndex = 14;
			// 
			// Id
			// 
			this->Id->AutoSize = true;
			this->Id->Location = System::Drawing::Point(9, 28);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(18, 13);
			this->Id->TabIndex = 15;
			this->Id->Text = L"ID";
			// 
			// Form_adress
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(793, 466);
			this->Controls->Add(this->Id);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->Pc);
			this->Controls->Add(this->Street);
			this->Controls->Add(this->Number);
			this->Controls->Add(this->City);
			this->Controls->Add(this->Floor);
			this->Controls->Add(this->txt_pc);
			this->Controls->Add(this->txt_street);
			this->Controls->Add(this->txt_number);
			this->Controls->Add(this->txt_city);
			this->Controls->Add(this->txt_floor);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"Form_adress";
			this->Text = L"Form_adress";
			this->Load += gcnew System::EventHandler(this, &Form_adress::Form_adress_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectAdress("RSL");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "RSL";
	}
	private: System::Void Form_adress_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::GestionAdress();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int number = int::Parse(this->txt_number->Text);
		int pc = int::Parse(this->txt_pc->Text);
		int floor = int::Parse(this->txt_floor->Text);
		this->oSvc->insertAdress(number, this->txt_street->Text, pc, this->txt_city->Text, floor);
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id = int::Parse(this->txt_id->Text);
		this->oSvc->_deleteAdress(id);
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id = int::Parse(this->txt_id->Text);
		int number = int::Parse(this->txt_number->Text);
		int pc = int::Parse(this->txt_pc->Text);
		int floor = int::Parse(this->txt_floor->Text);
		this->oSvc->updateAdress(id, number, this->txt_street->Text, pc, this->txt_city->Text, floor);
	}
	private: System::Void dgv_enr_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}