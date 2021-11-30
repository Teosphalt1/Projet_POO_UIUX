#pragma once
#include "GestionClients.h"
namespace ProjetV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Form_clients
	/// </summary>
	public ref class Form_clients : public System::Windows::Forms::Form
	{
	public:
		Form_clients(void)
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
		~Form_clients()
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
	private: System::Windows::Forms::TextBox^ txt_name_client;
	private: System::Windows::Forms::TextBox^ txt_last_name_client;
	private: System::Windows::Forms::TextBox^ txt_birth_date;
	private: System::Windows::Forms::TextBox^ txt_first_purchase_date;
	private: System::Windows::Forms::TextBox^ txt_name_company;
	private: System::Windows::Forms::TextBox^ txt_id_adress;
	private: System::Windows::Forms::TextBox^ txt_id_adress_to_bill;


	private: NS_Comp_Svc::GestionClients^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ Name_client;
	private: System::Windows::Forms::Label^ Last_name_client;
	private: System::Windows::Forms::Label^ Birth_date;
	private: System::Windows::Forms::Label^ First_purchase_date;
	private: System::Windows::Forms::Label^ Name_company;


	private: System::Windows::Forms::Label^ Id_adress;
	private: System::Windows::Forms::Label^ Id_adress_to_bill;
	private: System::Windows::Forms::Label^ Id_client;
	private: System::Windows::Forms::TextBox^ txt_id_client;




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
			this->txt_name_client = (gcnew System::Windows::Forms::TextBox());
			this->txt_last_name_client = (gcnew System::Windows::Forms::TextBox());
			this->txt_birth_date = (gcnew System::Windows::Forms::TextBox());
			this->txt_first_purchase_date = (gcnew System::Windows::Forms::TextBox());
			this->txt_name_company = (gcnew System::Windows::Forms::TextBox());
			this->Name_client = (gcnew System::Windows::Forms::Label());
			this->Last_name_client = (gcnew System::Windows::Forms::Label());
			this->Birth_date = (gcnew System::Windows::Forms::Label());
			this->First_purchase_date = (gcnew System::Windows::Forms::Label());
			this->Name_company = (gcnew System::Windows::Forms::Label());
			this->txt_id_adress = (gcnew System::Windows::Forms::TextBox());
			this->Id_adress = (gcnew System::Windows::Forms::Label());
			this->txt_id_adress_to_bill = (gcnew System::Windows::Forms::TextBox());
			this->Id_adress_to_bill = (gcnew System::Windows::Forms::Label());
			this->Id_client = (gcnew System::Windows::Forms::Label());
			this->txt_id_client = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(177, 9);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(617, 483);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form_clients::dgv_enr_CellContentClick);
			// 
			// btn_load
			// 
			this->btn_load->BackColor = System::Drawing::Color::LightGreen;
			this->btn_load->Location = System::Drawing::Point(96, 363);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(75, 129);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Load DB";
			this->btn_load->UseVisualStyleBackColor = false;
			this->btn_load->Click += gcnew System::EventHandler(this, &Form_clients::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_insert->Location = System::Drawing::Point(15, 363);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(75, 37);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"Insert";
			this->btn_insert->UseVisualStyleBackColor = false;
			this->btn_insert->Click += gcnew System::EventHandler(this, &Form_clients::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::Tomato;
			this->btn_delete->Location = System::Drawing::Point(15, 455);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(75, 37);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &Form_clients::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->BackColor = System::Drawing::Color::NavajoWhite;
			this->btn_update->Location = System::Drawing::Point(15, 409);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(75, 37);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"Update";
			this->btn_update->UseVisualStyleBackColor = false;
			this->btn_update->Click += gcnew System::EventHandler(this, &Form_clients::btn_update_Click);
			// 
			// txt_name_client
			// 
			this->txt_name_client->Location = System::Drawing::Point(12, 72);
			this->txt_name_client->Name = L"txt_name_client";
			this->txt_name_client->Size = System::Drawing::Size(156, 20);
			this->txt_name_client->TabIndex = 5;
			// 
			// txt_last_name_client
			// 
			this->txt_last_name_client->Location = System::Drawing::Point(12, 110);
			this->txt_last_name_client->Name = L"txt_last_name_client";
			this->txt_last_name_client->Size = System::Drawing::Size(156, 20);
			this->txt_last_name_client->TabIndex = 6;
			// 
			// txt_birth_date
			// 
			this->txt_birth_date->Location = System::Drawing::Point(12, 149);
			this->txt_birth_date->Name = L"txt_birth_date";
			this->txt_birth_date->Size = System::Drawing::Size(156, 20);
			this->txt_birth_date->TabIndex = 7;
			// 
			// txt_first_purchase_date
			// 
			this->txt_first_purchase_date->Location = System::Drawing::Point(12, 188);
			this->txt_first_purchase_date->Name = L"txt_first_purchase_date";
			this->txt_first_purchase_date->Size = System::Drawing::Size(156, 20);
			this->txt_first_purchase_date->TabIndex = 8;
			// 
			// txt_name_company
			// 
			this->txt_name_company->Location = System::Drawing::Point(12, 230);
			this->txt_name_company->Name = L"txt_name_company";
			this->txt_name_company->Size = System::Drawing::Size(156, 20);
			this->txt_name_company->TabIndex = 9;
			// 
			// Name_client
			// 
			this->Name_client->AutoSize = true;
			this->Name_client->Location = System::Drawing::Point(9, 55);
			this->Name_client->Name = L"Name_client";
			this->Name_client->Size = System::Drawing::Size(63, 13);
			this->Name_client->TabIndex = 10;
			this->Name_client->Text = L"Name client";
			// 
			// Last_name_client
			// 
			this->Last_name_client->AutoSize = true;
			this->Last_name_client->Location = System::Drawing::Point(9, 94);
			this->Last_name_client->Name = L"Last_name_client";
			this->Last_name_client->Size = System::Drawing::Size(84, 13);
			this->Last_name_client->TabIndex = 11;
			this->Last_name_client->Text = L"Last name client";
			// 
			// Birth_date
			// 
			this->Birth_date->AutoSize = true;
			this->Birth_date->Location = System::Drawing::Point(9, 133);
			this->Birth_date->Name = L"Birth_date";
			this->Birth_date->Size = System::Drawing::Size(52, 13);
			this->Birth_date->TabIndex = 12;
			this->Birth_date->Text = L"Birth date";
			// 
			// First_purchase_date
			// 
			this->First_purchase_date->AutoSize = true;
			this->First_purchase_date->Location = System::Drawing::Point(12, 172);
			this->First_purchase_date->Name = L"First_purchase_date";
			this->First_purchase_date->Size = System::Drawing::Size(97, 13);
			this->First_purchase_date->TabIndex = 13;
			this->First_purchase_date->Text = L"First purchase date";
			// 
			// Name_company
			// 
			this->Name_company->AutoSize = true;
			this->Name_company->Location = System::Drawing::Point(12, 214);
			this->Name_company->Name = L"Name_company";
			this->Name_company->Size = System::Drawing::Size(81, 13);
			this->Name_company->TabIndex = 13;
			this->Name_company->Text = L"Name company";
			// 
			// txt_id_adress
			// 
			this->txt_id_adress->Location = System::Drawing::Point(12, 272);
			this->txt_id_adress->Name = L"txt_id_adress";
			this->txt_id_adress->Size = System::Drawing::Size(156, 20);
			this->txt_id_adress->TabIndex = 17;
			// 
			// Id_adress
			// 
			this->Id_adress->AutoSize = true;
			this->Id_adress->Location = System::Drawing::Point(12, 255);
			this->Id_adress->Name = L"Id_adress";
			this->Id_adress->Size = System::Drawing::Size(50, 13);
			this->Id_adress->TabIndex = 16;
			this->Id_adress->Text = L"Id adress";
			// 
			// txt_id_adress_to_bill
			// 
			this->txt_id_adress_to_bill->Location = System::Drawing::Point(12, 320);
			this->txt_id_adress_to_bill->Name = L"txt_id_adress_to_bill";
			this->txt_id_adress_to_bill->Size = System::Drawing::Size(156, 20);
			this->txt_id_adress_to_bill->TabIndex = 19;
			// 
			// Id_adress_to_bill
			// 
			this->Id_adress_to_bill->AutoSize = true;
			this->Id_adress_to_bill->Location = System::Drawing::Point(12, 303);
			this->Id_adress_to_bill->Name = L"Id_adress_to_bill";
			this->Id_adress_to_bill->Size = System::Drawing::Size(77, 13);
			this->Id_adress_to_bill->TabIndex = 18;
			this->Id_adress_to_bill->Text = L"Id adress to bill";
			// 
			// Id_client
			// 
			this->Id_client->AutoSize = true;
			this->Id_client->Location = System::Drawing::Point(9, 14);
			this->Id_client->Name = L"Id_client";
			this->Id_client->Size = System::Drawing::Size(44, 13);
			this->Id_client->TabIndex = 20;
			this->Id_client->Text = L"Id client";
			// 
			// txt_id_client
			// 
			this->txt_id_client->Location = System::Drawing::Point(12, 30);
			this->txt_id_client->Name = L"txt_id_client";
			this->txt_id_client->Size = System::Drawing::Size(156, 20);
			this->txt_id_client->TabIndex = 21;
			// 
			// Form_clients
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(805, 506);
			this->Controls->Add(this->txt_id_client);
			this->Controls->Add(this->Id_client);
			this->Controls->Add(this->txt_id_adress_to_bill);
			this->Controls->Add(this->Id_adress_to_bill);
			this->Controls->Add(this->txt_id_adress);
			this->Controls->Add(this->Id_adress);
			this->Controls->Add(this->Birth_date);
			this->Controls->Add(this->Last_name_client);
			this->Controls->Add(this->Name_client);
			this->Controls->Add(this->First_purchase_date);
			this->Controls->Add(this->Name_company);
			this->Controls->Add(this->txt_birth_date);
			this->Controls->Add(this->txt_last_name_client);
			this->Controls->Add(this->txt_name_client);
			this->Controls->Add(this->txt_first_purchase_date);
			this->Controls->Add(this->txt_name_company);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"Form_clients";
			this->Text = L"Form_clients";
			this->Load += gcnew System::EventHandler(this, &Form_clients::Form_clients_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectClients("RSL");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "RSL";
	}
	private: System::Void Form_clients_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::GestionClients();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id_adress = int::Parse(this->txt_id_adress->Text);
		int id_adress_to_bill = int::Parse(this->txt_id_adress_to_bill->Text);
		this->oSvc->insertClients(this->txt_name_client->Text, this->txt_last_name_client->Text, this->txt_birth_date->Text, this->txt_first_purchase_date->Text, this->txt_name_company->Text, id_adress, id_adress_to_bill);
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id_client = int::Parse(this->txt_id_client->Text);
		this->oSvc->_deleteClients(id_client);
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id_adress = int::Parse(this->txt_id_adress->Text);
		int id_adress_to_bill = int::Parse(this->txt_id_adress_to_bill->Text);
		int id_client = int::Parse(this->txt_id_client->Text);
		this->oSvc->updateClients(id_client, this->txt_name_client->Text, this->txt_last_name_client->Text, this->txt_birth_date->Text, this->txt_first_purchase_date->Text, this->txt_name_company->Text, id_adress, id_adress_to_bill);
	}
	private: System::Void dgv_enr_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}