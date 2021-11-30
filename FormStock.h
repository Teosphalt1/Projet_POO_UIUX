#pragma once
#include"GestionStock.h"
namespace ProjetV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Form_stock
	/// </summary>
	public ref class Form_stock : public System::Windows::Forms::Form
	{
	public:
		Form_stock(void)
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
		~Form_stock()
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
	private: System::Windows::Forms::TextBox^ txt_name;
	private: System::Windows::Forms::TextBox^ txt_stored_quantity;
	private: System::Windows::Forms::TextBox^ txt_replenishment_threshold;
	private: System::Windows::Forms::TextBox^ txt_tva_rate;
	private: System::Windows::Forms::TextBox^ txt_nature;
	private: System::Windows::Forms::TextBox^ txt_color;
	private: System::Windows::Forms::TextBox^ txt_ht_amount;
	private: System::Windows::Forms::TextBox^ txt_tva_amount;
	private: System::Windows::Forms::TextBox^ txt_ttc_amount;


	private: NS_Comp_Svc::GestionStock^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ Name_product;

	private: System::Windows::Forms::Label^ Stored_quantity;
	private: System::Windows::Forms::Label^ Replenishment_threshold;
	private: System::Windows::Forms::Label^ TVA_rate;
	private: System::Windows::Forms::Label^ Nature;
	private: System::Windows::Forms::Label^ Color;
	private: System::Windows::Forms::Label^ HT_amount;
	private: System::Windows::Forms::Label^ TVA_amount;
	private: System::Windows::Forms::Label^ TTC_amount;
	private: System::Windows::Forms::TextBox^ txt_id_product;
	private: System::Windows::Forms::Label^ Id_product;




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
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_stored_quantity = (gcnew System::Windows::Forms::TextBox());
			this->txt_replenishment_threshold = (gcnew System::Windows::Forms::TextBox());
			this->txt_tva_rate = (gcnew System::Windows::Forms::TextBox());
			this->txt_nature = (gcnew System::Windows::Forms::TextBox());
			this->Name_product = (gcnew System::Windows::Forms::Label());
			this->Stored_quantity = (gcnew System::Windows::Forms::Label());
			this->Replenishment_threshold = (gcnew System::Windows::Forms::Label());
			this->TVA_rate = (gcnew System::Windows::Forms::Label());
			this->Nature = (gcnew System::Windows::Forms::Label());
			this->Color = (gcnew System::Windows::Forms::Label());
			this->txt_color = (gcnew System::Windows::Forms::TextBox());
			this->txt_ht_amount = (gcnew System::Windows::Forms::TextBox());
			this->HT_amount = (gcnew System::Windows::Forms::Label());
			this->txt_tva_amount = (gcnew System::Windows::Forms::TextBox());
			this->TVA_amount = (gcnew System::Windows::Forms::Label());
			this->TTC_amount = (gcnew System::Windows::Forms::Label());
			this->txt_ttc_amount = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_product = (gcnew System::Windows::Forms::TextBox());
			this->Id_product = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(187, 12);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(710, 568);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form_stock::dgv_enr_CellContentClick);
			// 
			// btn_load
			// 
			this->btn_load->BackColor = System::Drawing::Color::LightGreen;
			this->btn_load->Location = System::Drawing::Point(95, 451);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(75, 129);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Load DB";
			this->btn_load->UseVisualStyleBackColor = false;
			this->btn_load->Click += gcnew System::EventHandler(this, &Form_stock::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_insert->Location = System::Drawing::Point(14, 451);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(75, 37);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"Insert";
			this->btn_insert->UseVisualStyleBackColor = false;
			this->btn_insert->Click += gcnew System::EventHandler(this, &Form_stock::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::Tomato;
			this->btn_delete->Location = System::Drawing::Point(14, 543);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(75, 37);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &Form_stock::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->BackColor = System::Drawing::Color::NavajoWhite;
			this->btn_update->Location = System::Drawing::Point(14, 497);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(75, 37);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"Update";
			this->btn_update->UseVisualStyleBackColor = false;
			this->btn_update->Click += gcnew System::EventHandler(this, &Form_stock::btn_update_Click);
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(14, 81);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(156, 20);
			this->txt_name->TabIndex = 5;
			// 
			// txt_stored_quantity
			// 
			this->txt_stored_quantity->Location = System::Drawing::Point(14, 119);
			this->txt_stored_quantity->Name = L"txt_stored_quantity";
			this->txt_stored_quantity->Size = System::Drawing::Size(156, 20);
			this->txt_stored_quantity->TabIndex = 6;
			// 
			// txt_replenishment_threshold
			// 
			this->txt_replenishment_threshold->Location = System::Drawing::Point(14, 158);
			this->txt_replenishment_threshold->Name = L"txt_replenishment_threshold";
			this->txt_replenishment_threshold->Size = System::Drawing::Size(156, 20);
			this->txt_replenishment_threshold->TabIndex = 7;
			// 
			// txt_tva_rate
			// 
			this->txt_tva_rate->Location = System::Drawing::Point(14, 197);
			this->txt_tva_rate->Name = L"txt_tva_rate";
			this->txt_tva_rate->Size = System::Drawing::Size(156, 20);
			this->txt_tva_rate->TabIndex = 8;
			// 
			// txt_nature
			// 
			this->txt_nature->Location = System::Drawing::Point(14, 239);
			this->txt_nature->Name = L"txt_nature";
			this->txt_nature->Size = System::Drawing::Size(156, 20);
			this->txt_nature->TabIndex = 9;
			// 
			// Name_product
			// 
			this->Name_product->AutoSize = true;
			this->Name_product->Location = System::Drawing::Point(11, 64);
			this->Name_product->Name = L"Name_product";
			this->Name_product->Size = System::Drawing::Size(35, 13);
			this->Name_product->TabIndex = 10;
			this->Name_product->Text = L"Name";
			// 
			// Stored_quantity
			// 
			this->Stored_quantity->AutoSize = true;
			this->Stored_quantity->Location = System::Drawing::Point(11, 103);
			this->Stored_quantity->Name = L"Stored_quantity";
			this->Stored_quantity->Size = System::Drawing::Size(78, 13);
			this->Stored_quantity->TabIndex = 11;
			this->Stored_quantity->Text = L"Stored quantity";
			// 
			// Replenishment_threshold
			// 
			this->Replenishment_threshold->AutoSize = true;
			this->Replenishment_threshold->Location = System::Drawing::Point(11, 142);
			this->Replenishment_threshold->Name = L"Replenishment_threshold";
			this->Replenishment_threshold->Size = System::Drawing::Size(103, 13);
			this->Replenishment_threshold->TabIndex = 12;
			this->Replenishment_threshold->Text = L"Replenishment Rate";
			// 
			// TVA_rate
			// 
			this->TVA_rate->AutoSize = true;
			this->TVA_rate->Location = System::Drawing::Point(14, 181);
			this->TVA_rate->Name = L"TVA_rate";
			this->TVA_rate->Size = System::Drawing::Size(49, 13);
			this->TVA_rate->TabIndex = 13;
			this->TVA_rate->Text = L"TVA rate";
			// 
			// Nature
			// 
			this->Nature->AutoSize = true;
			this->Nature->Location = System::Drawing::Point(14, 223);
			this->Nature->Name = L"Nature";
			this->Nature->Size = System::Drawing::Size(39, 13);
			this->Nature->TabIndex = 13;
			this->Nature->Text = L"Nature";
			// 
			// Color
			// 
			this->Color->AutoSize = true;
			this->Color->Location = System::Drawing::Point(14, 266);
			this->Color->Name = L"Color";
			this->Color->Size = System::Drawing::Size(31, 13);
			this->Color->TabIndex = 14;
			this->Color->Text = L"Color";
			// 
			// txt_color
			// 
			this->txt_color->Location = System::Drawing::Point(14, 283);
			this->txt_color->Name = L"txt_color";
			this->txt_color->Size = System::Drawing::Size(156, 20);
			this->txt_color->TabIndex = 15;
			// 
			// txt_ht_amount
			// 
			this->txt_ht_amount->Location = System::Drawing::Point(14, 328);
			this->txt_ht_amount->Name = L"txt_ht_amount";
			this->txt_ht_amount->Size = System::Drawing::Size(156, 20);
			this->txt_ht_amount->TabIndex = 17;
			// 
			// HT_amount
			// 
			this->HT_amount->AutoSize = true;
			this->HT_amount->Location = System::Drawing::Point(14, 311);
			this->HT_amount->Name = L"HT_amount";
			this->HT_amount->Size = System::Drawing::Size(60, 13);
			this->HT_amount->TabIndex = 16;
			this->HT_amount->Text = L"HT amount";
			// 
			// txt_tva_amount
			// 
			this->txt_tva_amount->Location = System::Drawing::Point(14, 376);
			this->txt_tva_amount->Name = L"txt_tva_amount";
			this->txt_tva_amount->Size = System::Drawing::Size(156, 20);
			this->txt_tva_amount->TabIndex = 19;
			// 
			// TVA_amount
			// 
			this->TVA_amount->AutoSize = true;
			this->TVA_amount->Location = System::Drawing::Point(14, 359);
			this->TVA_amount->Name = L"TVA_amount";
			this->TVA_amount->Size = System::Drawing::Size(66, 13);
			this->TVA_amount->TabIndex = 18;
			this->TVA_amount->Text = L"TVA amount";
			// 
			// TTC_amount
			// 
			this->TTC_amount->AutoSize = true;
			this->TTC_amount->Location = System::Drawing::Point(14, 403);
			this->TTC_amount->Name = L"TTC_amount";
			this->TTC_amount->Size = System::Drawing::Size(66, 13);
			this->TTC_amount->TabIndex = 20;
			this->TTC_amount->Text = L"TTC amount";
			// 
			// txt_ttc_amount
			// 
			this->txt_ttc_amount->Location = System::Drawing::Point(14, 420);
			this->txt_ttc_amount->Name = L"txt_ttc_amount";
			this->txt_ttc_amount->Size = System::Drawing::Size(156, 20);
			this->txt_ttc_amount->TabIndex = 21;
			// 
			// txt_id_product
			// 
			this->txt_id_product->Location = System::Drawing::Point(12, 41);
			this->txt_id_product->Name = L"txt_id_product";
			this->txt_id_product->Size = System::Drawing::Size(158, 20);
			this->txt_id_product->TabIndex = 22;
			// 
			// Id_product
			// 
			this->Id_product->AutoSize = true;
			this->Id_product->Location = System::Drawing::Point(12, 22);
			this->Id_product->Name = L"Id_product";
			this->Id_product->Size = System::Drawing::Size(57, 13);
			this->Id_product->TabIndex = 23;
			this->Id_product->Text = L"ID product";
			// 
			// Form_stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(909, 597);
			this->Controls->Add(this->Id_product);
			this->Controls->Add(this->txt_id_product);
			this->Controls->Add(this->txt_ttc_amount);
			this->Controls->Add(this->TTC_amount);
			this->Controls->Add(this->txt_tva_amount);
			this->Controls->Add(this->TVA_amount);
			this->Controls->Add(this->txt_ht_amount);
			this->Controls->Add(this->HT_amount);
			this->Controls->Add(this->txt_color);
			this->Controls->Add(this->Color);
			this->Controls->Add(this->Replenishment_threshold);
			this->Controls->Add(this->Stored_quantity);
			this->Controls->Add(this->Name_product);
			this->Controls->Add(this->TVA_rate);
			this->Controls->Add(this->Nature);
			this->Controls->Add(this->txt_replenishment_threshold);
			this->Controls->Add(this->txt_stored_quantity);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->txt_tva_rate);
			this->Controls->Add(this->txt_nature);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"Form_stock";
			this->Text = L"Form_stock";
			this->Load += gcnew System::EventHandler(this, &Form_stock::Form_stock_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectStock("RSL");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "RSL";
	}
	private: System::Void Form_stock_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::GestionStock();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int stored_quantity = int::Parse(this->txt_stored_quantity->Text);
		int replenishment_thershold = int::Parse(this->txt_replenishment_threshold->Text);
		int tva_rate = int::Parse(this->txt_tva_rate->Text);
		int ht_amount = int::Parse(this->txt_ht_amount->Text);
		int tva_amount = int::Parse(this->txt_tva_amount->Text);
		int ttc_amount = int::Parse(this->txt_ttc_amount->Text);
		this->oSvc->insertStock(this->txt_name->Text, stored_quantity, replenishment_thershold, tva_rate, this->txt_nature->Text, this->txt_color->Text, ht_amount, tva_amount, ttc_amount);
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id_product = int::Parse(this->txt_id_product->Text);
		this->oSvc->_deleteStock(id_product);
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id_product = int::Parse(this->txt_id_product->Text);
		int stored_quantity = int::Parse(this->txt_stored_quantity->Text);
		int replenishment_thershold = int::Parse(this->txt_replenishment_threshold->Text);
		int tva_rate = int::Parse(this->txt_tva_rate->Text);
		int ht_amount = int::Parse(this->txt_ht_amount->Text);
		int tva_amount = int::Parse(this->txt_tva_amount->Text);
		int ttc_amount = int::Parse(this->txt_ttc_amount->Text);
		this->oSvc->updateStock(id_product, this->txt_name->Text, stored_quantity, replenishment_thershold, tva_rate, this->txt_nature->Text, this->txt_color->Text, ht_amount, tva_amount, ttc_amount);
	}
	private: System::Void dgv_enr_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}