#pragma once
#include "GestionOrder.h"
namespace ProjetV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Form_order
	/// </summary>
	public ref class Form_order : public System::Windows::Forms::Form
	{
	public:
		Form_order(void)
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
		~Form_order()
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
	private: System::Windows::Forms::TextBox^ txt_id_order;
	private: System::Windows::Forms::TextBox^ txt_reference;
	private: System::Windows::Forms::TextBox^ txt_id_client;
	private: System::Windows::Forms::TextBox^ txt_delivery_date;
	private: System::Windows::Forms::TextBox^ txt_order_date;
	private: System::Windows::Forms::TextBox^ txt_discount;



	private: NS_Comp_Svc::GestionOrder^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ Id_order;
	private: System::Windows::Forms::Label^ Reference;

	private: System::Windows::Forms::Label^ Id_client;
	private: System::Windows::Forms::Label^ Delivery_date;
	private: System::Windows::Forms::Label^ Order_date;
	private: System::Windows::Forms::Label^ Discount;




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
			this->txt_id_order = (gcnew System::Windows::Forms::TextBox());
			this->txt_reference = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_client = (gcnew System::Windows::Forms::TextBox());
			this->txt_delivery_date = (gcnew System::Windows::Forms::TextBox());
			this->txt_order_date = (gcnew System::Windows::Forms::TextBox());
			this->Id_order = (gcnew System::Windows::Forms::Label());
			this->Reference = (gcnew System::Windows::Forms::Label());
			this->Id_client = (gcnew System::Windows::Forms::Label());
			this->Delivery_date = (gcnew System::Windows::Forms::Label());
			this->Order_date = (gcnew System::Windows::Forms::Label());
			this->txt_discount = (gcnew System::Windows::Forms::TextBox());
			this->Discount = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(177, 9);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(617, 398);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form_order::dgv_enr_CellContentClick);
			// 
			// btn_load
			// 
			this->btn_load->BackColor = System::Drawing::Color::LightGreen;
			this->btn_load->Location = System::Drawing::Point(96, 278);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(75, 129);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Load DB";
			this->btn_load->UseVisualStyleBackColor = false;
			this->btn_load->Click += gcnew System::EventHandler(this, &Form_order::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_insert->Location = System::Drawing::Point(15, 278);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(75, 37);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"Insert";
			this->btn_insert->UseVisualStyleBackColor = false;
			this->btn_insert->Click += gcnew System::EventHandler(this, &Form_order::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::Tomato;
			this->btn_delete->Location = System::Drawing::Point(15, 370);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(75, 37);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &Form_order::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->BackColor = System::Drawing::Color::NavajoWhite;
			this->btn_update->Location = System::Drawing::Point(15, 324);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(75, 37);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"Update";
			this->btn_update->UseVisualStyleBackColor = false;
			this->btn_update->Click += gcnew System::EventHandler(this, &Form_order::btn_update_Click);
			// 
			// txt_id_order
			// 
			this->txt_id_order->Location = System::Drawing::Point(15, 26);
			this->txt_id_order->Name = L"txt_id_order";
			this->txt_id_order->Size = System::Drawing::Size(156, 20);
			this->txt_id_order->TabIndex = 5;
			// 
			// txt_reference
			// 
			this->txt_reference->Location = System::Drawing::Point(15, 64);
			this->txt_reference->Name = L"txt_reference";
			this->txt_reference->Size = System::Drawing::Size(156, 20);
			this->txt_reference->TabIndex = 6;
			// 
			// txt_id_client
			// 
			this->txt_id_client->Location = System::Drawing::Point(15, 234);
			this->txt_id_client->Name = L"txt_id_client";
			this->txt_id_client->Size = System::Drawing::Size(156, 20);
			this->txt_id_client->TabIndex = 15;
			// 
			// txt_delivery_date
			// 
			this->txt_delivery_date->Location = System::Drawing::Point(15, 107);
			this->txt_delivery_date->Name = L"txt_delivery_date";
			this->txt_delivery_date->Size = System::Drawing::Size(156, 20);
			this->txt_delivery_date->TabIndex = 7;
			// 
			// txt_order_date
			// 
			this->txt_order_date->Location = System::Drawing::Point(15, 151);
			this->txt_order_date->Name = L"txt_order_date";
			this->txt_order_date->Size = System::Drawing::Size(156, 20);
			this->txt_order_date->TabIndex = 12;
			// 
			// Id_order
			// 
			this->Id_order->AutoSize = true;
			this->Id_order->Location = System::Drawing::Point(12, 9);
			this->Id_order->Name = L"Id_order";
			this->Id_order->Size = System::Drawing::Size(45, 13);
			this->Id_order->TabIndex = 8;
			this->Id_order->Text = L"ID order";
			// 
			// Reference
			// 
			this->Reference->AutoSize = true;
			this->Reference->Location = System::Drawing::Point(12, 48);
			this->Reference->Name = L"Reference";
			this->Reference->Size = System::Drawing::Size(57, 13);
			this->Reference->TabIndex = 9;
			this->Reference->Text = L"Reference";
			// 
			// Id_client
			// 
			this->Id_client->AutoSize = true;
			this->Id_client->Location = System::Drawing::Point(15, 218);
			this->Id_client->Name = L"Id_client";
			this->Id_client->Size = System::Drawing::Size(46, 13);
			this->Id_client->TabIndex = 16;
			this->Id_client->Text = L"ID client";
			// 
			// Delivery_date
			// 
			this->Delivery_date->AutoSize = true;
			this->Delivery_date->Location = System::Drawing::Point(15, 91);
			this->Delivery_date->Name = L"Delivery_date";
			this->Delivery_date->Size = System::Drawing::Size(69, 13);
			this->Delivery_date->TabIndex = 10;
			this->Delivery_date->Text = L"Delivery date";
			// 
			// Order_date
			// 
			this->Order_date->AutoSize = true;
			this->Order_date->Location = System::Drawing::Point(15, 134);
			this->Order_date->Name = L"Order_date";
			this->Order_date->Size = System::Drawing::Size(57, 13);
			this->Order_date->TabIndex = 11;
			this->Order_date->Text = L"Order date";
			// 
			// txt_discount
			// 
			this->txt_discount->Location = System::Drawing::Point(15, 196);
			this->txt_discount->Name = L"txt_discount";
			this->txt_discount->Size = System::Drawing::Size(156, 20);
			this->txt_discount->TabIndex = 13;
			// 
			// Discount
			// 
			this->Discount->AutoSize = true;
			this->Discount->Location = System::Drawing::Point(15, 179);
			this->Discount->Name = L"Discount";
			this->Discount->Size = System::Drawing::Size(49, 13);
			this->Discount->TabIndex = 14;
			this->Discount->Text = L"Discount";
			// 
			// Form_order
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(805, 418);
			this->Controls->Add(this->txt_discount);
			this->Controls->Add(this->Discount);
			this->Controls->Add(this->txt_order_date);
			this->Controls->Add(this->Order_date);
			this->Controls->Add(this->Reference);
			this->Controls->Add(this->Id_order);
			this->Controls->Add(this->Id_client);
			this->Controls->Add(this->Delivery_date);
			this->Controls->Add(this->txt_id_client);
			this->Controls->Add(this->txt_reference);
			this->Controls->Add(this->txt_id_order);
			this->Controls->Add(this->txt_delivery_date);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"Form_order";
			this->Text = L"Form_order";
			this->Load += gcnew System::EventHandler(this, &Form_order::Form_order_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectOrder("RSL");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "RSL";
	}
	private: System::Void Form_order_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::GestionOrder();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int discount = int::Parse(this->txt_discount->Text);
		int id_client = int::Parse(this->txt_id_client->Text);
		this->oSvc->insertOrder(this->txt_reference->Text, this->txt_delivery_date->Text, this->txt_order_date->Text, discount, id_client);
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id_order = int::Parse(this->txt_id_order->Text);
		this->oSvc->_deleteOrder(id_order);
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id_order = int::Parse(this->txt_id_order->Text);
		int discount = int::Parse(this->txt_discount->Text);
		int id_client = int::Parse(this->txt_id_client->Text);
		this->oSvc->updateOrder(id_order, this->txt_reference->Text, this->txt_delivery_date->Text, this->txt_order_date->Text, discount, id_client);
	}
	private: System::Void dgv_enr_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}