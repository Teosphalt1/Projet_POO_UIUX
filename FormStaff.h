#pragma once
#include "GestionStaff.h"
namespace ProjetV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Form_staff
	/// </summary>
	public ref class Form_staff : public System::Windows::Forms::Form
	{
	public:
		Form_staff(void)
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
		~Form_staff()
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
	private: System::Windows::Forms::TextBox^ txt_name_staff;
	private: System::Windows::Forms::TextBox^ txt_last_name_staff;
	private: System::Windows::Forms::TextBox^ txt_hire_date;
	private: System::Windows::Forms::TextBox^ txt_name_supervisor;
	private: System::Windows::Forms::TextBox^ txt_last_name_supervisor;
	private: System::Windows::Forms::TextBox^ txt_id_adress;



	private: NS_Comp_Svc::GestionStaff^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ Name_staff;
	private: System::Windows::Forms::Label^ Last_name_staff;
	private: System::Windows::Forms::Label^ Hire_date;
	private: System::Windows::Forms::Label^ Name_supervisor;
	private: System::Windows::Forms::Label^ Last_name_supervisor;
	private: System::Windows::Forms::Label^ Id_adress;
	private: System::Windows::Forms::TextBox^ txt_id_staff;
	private: System::Windows::Forms::Label^ ID_staff;


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
			this->txt_name_staff = (gcnew System::Windows::Forms::TextBox());
			this->txt_last_name_staff = (gcnew System::Windows::Forms::TextBox());
			this->txt_hire_date = (gcnew System::Windows::Forms::TextBox());
			this->txt_name_supervisor = (gcnew System::Windows::Forms::TextBox());
			this->txt_last_name_supervisor = (gcnew System::Windows::Forms::TextBox());
			this->Name_staff = (gcnew System::Windows::Forms::Label());
			this->Last_name_staff = (gcnew System::Windows::Forms::Label());
			this->Hire_date = (gcnew System::Windows::Forms::Label());
			this->Name_supervisor = (gcnew System::Windows::Forms::Label());
			this->Last_name_supervisor = (gcnew System::Windows::Forms::Label());
			this->Id_adress = (gcnew System::Windows::Forms::Label());
			this->txt_id_adress = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_staff = (gcnew System::Windows::Forms::TextBox());
			this->ID_staff = (gcnew System::Windows::Forms::Label());
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
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form_staff::dgv_enr_CellContentClick);
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
			this->btn_load->Click += gcnew System::EventHandler(this, &Form_staff::btn_load_Click);
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
			this->btn_insert->Click += gcnew System::EventHandler(this, &Form_staff::btn_insert_Click);
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
			this->btn_delete->Click += gcnew System::EventHandler(this, &Form_staff::btn_delete_Click);
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
			this->btn_update->Click += gcnew System::EventHandler(this, &Form_staff::btn_update_Click);
			// 
			// txt_name_staff
			// 
			this->txt_name_staff->Location = System::Drawing::Point(12, 80);
			this->txt_name_staff->Name = L"txt_name_staff";
			this->txt_name_staff->Size = System::Drawing::Size(156, 20);
			this->txt_name_staff->TabIndex = 5;
			// 
			// txt_last_name_staff
			// 
			this->txt_last_name_staff->Location = System::Drawing::Point(12, 119);
			this->txt_last_name_staff->Name = L"txt_last_name_staff";
			this->txt_last_name_staff->Size = System::Drawing::Size(156, 20);
			this->txt_last_name_staff->TabIndex = 6;
			// 
			// txt_hire_date
			// 
			this->txt_hire_date->Location = System::Drawing::Point(12, 158);
			this->txt_hire_date->Name = L"txt_hire_date";
			this->txt_hire_date->Size = System::Drawing::Size(156, 20);
			this->txt_hire_date->TabIndex = 7;
			// 
			// txt_name_supervisor
			// 
			this->txt_name_supervisor->Location = System::Drawing::Point(12, 197);
			this->txt_name_supervisor->Name = L"txt_name_supervisor";
			this->txt_name_supervisor->Size = System::Drawing::Size(156, 20);
			this->txt_name_supervisor->TabIndex = 8;
			// 
			// txt_last_name_supervisor
			// 
			this->txt_last_name_supervisor->Location = System::Drawing::Point(12, 244);
			this->txt_last_name_supervisor->Name = L"txt_last_name_supervisor";
			this->txt_last_name_supervisor->Size = System::Drawing::Size(156, 20);
			this->txt_last_name_supervisor->TabIndex = 9;
			// 
			// Name_staff
			// 
			this->Name_staff->AutoSize = true;
			this->Name_staff->Location = System::Drawing::Point(9, 64);
			this->Name_staff->Name = L"Name_staff";
			this->Name_staff->Size = System::Drawing::Size(58, 13);
			this->Name_staff->TabIndex = 10;
			this->Name_staff->Text = L"Name staff";
			// 
			// Last_name_staff
			// 
			this->Last_name_staff->AutoSize = true;
			this->Last_name_staff->Location = System::Drawing::Point(9, 103);
			this->Last_name_staff->Name = L"Last_name_staff";
			this->Last_name_staff->Size = System::Drawing::Size(79, 13);
			this->Last_name_staff->TabIndex = 11;
			this->Last_name_staff->Text = L"Last name staff";
			// 
			// Hire_date
			// 
			this->Hire_date->AutoSize = true;
			this->Hire_date->Location = System::Drawing::Point(9, 142);
			this->Hire_date->Name = L"Hire_date";
			this->Hire_date->Size = System::Drawing::Size(50, 13);
			this->Hire_date->TabIndex = 12;
			this->Hire_date->Text = L"Hire date";
			// 
			// Name_supervisor
			// 
			this->Name_supervisor->AutoSize = true;
			this->Name_supervisor->Location = System::Drawing::Point(12, 181);
			this->Name_supervisor->Name = L"Name_supervisor";
			this->Name_supervisor->Size = System::Drawing::Size(86, 13);
			this->Name_supervisor->TabIndex = 13;
			this->Name_supervisor->Text = L"Name supervisor";
			// 
			// Last_name_supervisor
			// 
			this->Last_name_supervisor->AutoSize = true;
			this->Last_name_supervisor->Location = System::Drawing::Point(12, 228);
			this->Last_name_supervisor->Name = L"Last_name_supervisor";
			this->Last_name_supervisor->Size = System::Drawing::Size(107, 13);
			this->Last_name_supervisor->TabIndex = 13;
			this->Last_name_supervisor->Text = L"Last name supervisor";
			// 
			// Id_adress
			// 
			this->Id_adress->AutoSize = true;
			this->Id_adress->Location = System::Drawing::Point(12, 271);
			this->Id_adress->Name = L"Id_adress";
			this->Id_adress->Size = System::Drawing::Size(50, 13);
			this->Id_adress->TabIndex = 14;
			this->Id_adress->Text = L"Id adress";
			// 
			// txt_id_adress
			// 
			this->txt_id_adress->Location = System::Drawing::Point(12, 287);
			this->txt_id_adress->Name = L"txt_id_adress";
			this->txt_id_adress->Size = System::Drawing::Size(156, 20);
			this->txt_id_adress->TabIndex = 15;
			// 
			// txt_id_staff
			// 
			this->txt_id_staff->Location = System::Drawing::Point(12, 41);
			this->txt_id_staff->Name = L"txt_id_staff";
			this->txt_id_staff->Size = System::Drawing::Size(156, 20);
			this->txt_id_staff->TabIndex = 16;
			// 
			// ID_staff
			// 
			this->ID_staff->AutoSize = true;
			this->ID_staff->Location = System::Drawing::Point(12, 22);
			this->ID_staff->Name = L"ID_staff";
			this->ID_staff->Size = System::Drawing::Size(41, 13);
			this->ID_staff->TabIndex = 17;
			this->ID_staff->Text = L"ID staff";
			// 
			// Form_staff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(793, 466);
			this->Controls->Add(this->ID_staff);
			this->Controls->Add(this->txt_id_staff);
			this->Controls->Add(this->txt_id_adress);
			this->Controls->Add(this->Id_adress);
			this->Controls->Add(this->Hire_date);
			this->Controls->Add(this->Last_name_staff);
			this->Controls->Add(this->Name_staff);
			this->Controls->Add(this->Name_supervisor);
			this->Controls->Add(this->Last_name_supervisor);
			this->Controls->Add(this->txt_hire_date);
			this->Controls->Add(this->txt_last_name_staff);
			this->Controls->Add(this->txt_name_staff);
			this->Controls->Add(this->txt_name_supervisor);
			this->Controls->Add(this->txt_last_name_supervisor);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"Form_staff";
			this->Text = L"Form_staff";
			this->Load += gcnew System::EventHandler(this, &Form_staff::Form_staff_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectStaff("RSL");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "RSL";
	}
	private: System::Void Form_staff_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::GestionStaff();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id_adress = int::Parse(this->txt_id_adress->Text);
		this->oSvc->insertStaff(this->txt_name_staff->Text, this->txt_last_name_staff->Text, this->txt_hire_date->Text, this->txt_name_supervisor->Text, this->txt_last_name_supervisor->Text, id_adress);
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id_staff = int::Parse(this->txt_id_staff->Text);
		this->oSvc->_deleteStaff(id_staff);
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id_staff = int::Parse(this->txt_id_staff->Text);
		int id_adress = int::Parse(this->txt_id_adress->Text);
		this->oSvc->updateStaff(id_staff ,this->txt_name_staff->Text, this->txt_last_name_staff->Text, this->txt_hire_date->Text, this->txt_name_supervisor->Text, this->txt_last_name_supervisor->Text, id_adress);
	}
	private: System::Void dgv_enr_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}