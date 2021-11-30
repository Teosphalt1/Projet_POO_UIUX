#pragma once
#include"GestionPayment.h"

namespace ProjetV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Form_payment
	/// </summary>
	public ref class Form_payment : public System::Windows::Forms::Form
	{
	public:
		Form_payment(void)
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
		~Form_payment()
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
	private: System::Windows::Forms::TextBox^ txt_payment_date;
	private: System::Windows::Forms::TextBox^ txt_payment_method;
	private: System::Windows::Forms::TextBox^ txt_ht_amount;
	private: System::Windows::Forms::TextBox^ txt_tva_amount;
	private: System::Windows::Forms::TextBox^ txt_id_order;




	private: NS_Comp_Svc::GestionPayment^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ Payment_date;
	private: System::Windows::Forms::Label^ Payment_method;
	private: System::Windows::Forms::Label^ HT_amount;
	private: System::Windows::Forms::Label^ TVA_amount;
	private: System::Windows::Forms::Label^ Id_order;
	private: System::Windows::Forms::Label^ Id_payment;
	private: System::Windows::Forms::TextBox^ txt_id_payment;
	private: System::Windows::Forms::Label^ Ttc_amount;
	private: System::Windows::Forms::TextBox^ txt_ttc_amount;


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
			this->txt_payment_date = (gcnew System::Windows::Forms::TextBox());
			this->txt_payment_method = (gcnew System::Windows::Forms::TextBox());
			this->txt_ht_amount = (gcnew System::Windows::Forms::TextBox());
			this->txt_tva_amount = (gcnew System::Windows::Forms::TextBox());
			this->Payment_date = (gcnew System::Windows::Forms::Label());
			this->Payment_method = (gcnew System::Windows::Forms::Label());
			this->HT_amount = (gcnew System::Windows::Forms::Label());
			this->TVA_amount = (gcnew System::Windows::Forms::Label());
			this->Id_order = (gcnew System::Windows::Forms::Label());
			this->txt_id_order = (gcnew System::Windows::Forms::TextBox());
			this->Id_payment = (gcnew System::Windows::Forms::Label());
			this->txt_id_payment = (gcnew System::Windows::Forms::TextBox());
			this->Ttc_amount = (gcnew System::Windows::Forms::Label());
			this->txt_ttc_amount = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(187, 12);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(594, 407);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form_payment::dgv_enr_CellContentClick);
			// 
			// btn_load
			// 
			this->btn_load->BackColor = System::Drawing::Color::LightGreen;
			this->btn_load->Location = System::Drawing::Point(96, 302);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(75, 129);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Load DB";
			this->btn_load->UseVisualStyleBackColor = false;
			this->btn_load->Click += gcnew System::EventHandler(this, &Form_payment::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_insert->Location = System::Drawing::Point(15, 302);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(75, 37);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"Insert";
			this->btn_insert->UseVisualStyleBackColor = false;
			this->btn_insert->Click += gcnew System::EventHandler(this, &Form_payment::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::Tomato;
			this->btn_delete->Location = System::Drawing::Point(15, 394);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(75, 37);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &Form_payment::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->BackColor = System::Drawing::Color::NavajoWhite;
			this->btn_update->Location = System::Drawing::Point(15, 348);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(75, 37);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"Update";
			this->btn_update->UseVisualStyleBackColor = false;
			this->btn_update->Click += gcnew System::EventHandler(this, &Form_payment::btn_update_Click);
			// 
			// txt_payment_date
			// 
			this->txt_payment_date->Location = System::Drawing::Point(15, 76);
			this->txt_payment_date->Name = L"txt_payment_date";
			this->txt_payment_date->Size = System::Drawing::Size(156, 20);
			this->txt_payment_date->TabIndex = 5;
			// 
			// txt_payment_method
			// 
			this->txt_payment_method->Location = System::Drawing::Point(15, 115);
			this->txt_payment_method->Name = L"txt_payment_method";
			this->txt_payment_method->Size = System::Drawing::Size(156, 20);
			this->txt_payment_method->TabIndex = 6;
			// 
			// txt_ht_amount
			// 
			this->txt_ht_amount->Location = System::Drawing::Point(15, 154);
			this->txt_ht_amount->Name = L"txt_ht_amount";
			this->txt_ht_amount->Size = System::Drawing::Size(156, 20);
			this->txt_ht_amount->TabIndex = 7;
			// 
			// txt_tva_amount
			// 
			this->txt_tva_amount->Location = System::Drawing::Point(15, 193);
			this->txt_tva_amount->Name = L"txt_tva_amount";
			this->txt_tva_amount->Size = System::Drawing::Size(156, 20);
			this->txt_tva_amount->TabIndex = 8;
			// 
			// Payment_date
			// 
			this->Payment_date->AutoSize = true;
			this->Payment_date->Location = System::Drawing::Point(12, 60);
			this->Payment_date->Name = L"Payment_date";
			this->Payment_date->Size = System::Drawing::Size(72, 13);
			this->Payment_date->TabIndex = 10;
			this->Payment_date->Text = L"Payment date";
			// 
			// Payment_method
			// 
			this->Payment_method->AutoSize = true;
			this->Payment_method->Location = System::Drawing::Point(12, 99);
			this->Payment_method->Name = L"Payment_method";
			this->Payment_method->Size = System::Drawing::Size(86, 13);
			this->Payment_method->TabIndex = 11;
			this->Payment_method->Text = L"Payment method";
			// 
			// HT_amount
			// 
			this->HT_amount->AutoSize = true;
			this->HT_amount->Location = System::Drawing::Point(12, 138);
			this->HT_amount->Name = L"HT_amount";
			this->HT_amount->Size = System::Drawing::Size(60, 13);
			this->HT_amount->TabIndex = 12;
			this->HT_amount->Text = L"HT amount";
			// 
			// TVA_amount
			// 
			this->TVA_amount->AutoSize = true;
			this->TVA_amount->Location = System::Drawing::Point(12, 177);
			this->TVA_amount->Name = L"TVA_amount";
			this->TVA_amount->Size = System::Drawing::Size(66, 13);
			this->TVA_amount->TabIndex = 13;
			this->TVA_amount->Text = L"TVA amount";
			// 
			// Id_order
			// 
			this->Id_order->AutoSize = true;
			this->Id_order->Location = System::Drawing::Point(12, 260);
			this->Id_order->Name = L"Id_order";
			this->Id_order->Size = System::Drawing::Size(45, 13);
			this->Id_order->TabIndex = 15;
			this->Id_order->Text = L"ID order";
			// 
			// txt_id_order
			// 
			this->txt_id_order->Location = System::Drawing::Point(15, 276);
			this->txt_id_order->Name = L"txt_id_order";
			this->txt_id_order->Size = System::Drawing::Size(156, 20);
			this->txt_id_order->TabIndex = 16;
			// 
			// Id_payment
			// 
			this->Id_payment->AutoSize = true;
			this->Id_payment->Location = System::Drawing::Point(12, 22);
			this->Id_payment->Name = L"Id_payment";
			this->Id_payment->Size = System::Drawing::Size(61, 13);
			this->Id_payment->TabIndex = 17;
			this->Id_payment->Text = L"ID payment";
			// 
			// txt_id_payment
			// 
			this->txt_id_payment->Location = System::Drawing::Point(15, 38);
			this->txt_id_payment->Name = L"txt_id_payment";
			this->txt_id_payment->Size = System::Drawing::Size(156, 20);
			this->txt_id_payment->TabIndex = 18;
			// 
			// Ttc_amount
			// 
			this->Ttc_amount->AutoSize = true;
			this->Ttc_amount->Location = System::Drawing::Point(15, 220);
			this->Ttc_amount->Name = L"Ttc_amount";
			this->Ttc_amount->Size = System::Drawing::Size(66, 13);
			this->Ttc_amount->TabIndex = 19;
			this->Ttc_amount->Text = L"TTC amount";
			// 
			// txt_ttc_amount
			// 
			this->txt_ttc_amount->Location = System::Drawing::Point(15, 237);
			this->txt_ttc_amount->Name = L"txt_ttc_amount";
			this->txt_ttc_amount->Size = System::Drawing::Size(156, 20);
			this->txt_ttc_amount->TabIndex = 14;
			// 
			// Form_payment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(793, 467);
			this->Controls->Add(this->txt_ttc_amount);
			this->Controls->Add(this->Ttc_amount);
			this->Controls->Add(this->txt_id_payment);
			this->Controls->Add(this->Id_payment);
			this->Controls->Add(this->txt_id_order);
			this->Controls->Add(this->Id_order);
			this->Controls->Add(this->HT_amount);
			this->Controls->Add(this->Payment_method);
			this->Controls->Add(this->Payment_date);
			this->Controls->Add(this->TVA_amount);
			this->Controls->Add(this->txt_ht_amount);
			this->Controls->Add(this->txt_payment_method);
			this->Controls->Add(this->txt_payment_date);
			this->Controls->Add(this->txt_tva_amount);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"Form_payment";
			this->Text = L"Form_payment";
			this->Load += gcnew System::EventHandler(this, &Form_payment::Form_payment_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectPayment("RSL");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "RSL";
	}
	private: System::Void Form_payment_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::GestionPayment();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int ht_amount = int::Parse(this->txt_ht_amount->Text);
		int tva_amount = int::Parse(this->txt_tva_amount->Text);
		int ttc_amount = int::Parse(this->txt_ttc_amount->Text);
		int id_order = int::Parse(this->txt_id_order->Text);
		this->oSvc->insertPayment(this->txt_payment_date->Text, this->txt_payment_method->Text, ht_amount, tva_amount, ttc_amount, id_order);
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id_payment = int::Parse(this->txt_id_payment->Text);
		this->oSvc->_deletePayment(id_payment);
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id_payment = int::Parse(this->txt_id_payment->Text);
		int ht_amount = int::Parse(this->txt_ht_amount->Text);
		int tva_amount = int::Parse(this->txt_tva_amount->Text);
		int ttc_amount = int::Parse(this->txt_ttc_amount->Text);
		int id_order = int::Parse(this->txt_id_order->Text);
		this->oSvc->updatePayment(id_payment, this->txt_payment_date->Text, this->txt_payment_method->Text, ht_amount, tva_amount, ttc_amount, id_order);
	}
	private: System::Void dgv_enr_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}