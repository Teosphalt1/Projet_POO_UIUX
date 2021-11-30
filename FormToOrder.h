#pragma once
#include"GestionToOrder.h"
namespace ProjetV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormToOrder
	/// </summary>
	public ref class FormToOrder : public System::Windows::Forms::Form
	{
	public:
		FormToOrder(void)
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
		~FormToOrder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private: System::Windows::Forms::Label^ IdProduct;
	private: System::Windows::Forms::Label^ IdOrder;
	private: System::Windows::Forms::Label^ Quantity;


	private: NS_Comp_Svc::GestionToOrder^ oSvc;
	private:System::Data::DataSet^ oDs;
	private: System::Windows::Forms::TextBox^ txt_id_product;
	private: System::Windows::Forms::TextBox^ txt_id_order;
	private: System::Windows::Forms::TextBox^ txt_quantity;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_load;
	protected:

	protected:

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
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->IdProduct = (gcnew System::Windows::Forms::Label());
			this->IdOrder = (gcnew System::Windows::Forms::Label());
			this->Quantity = (gcnew System::Windows::Forms::Label());
			this->txt_id_product = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_order = (gcnew System::Windows::Forms::TextBox());
			this->txt_quantity = (gcnew System::Windows::Forms::TextBox());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(178, 12);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(404, 298);
			this->dgv_enr->TabIndex = 1;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormToOrder::dgv_enr_CellContentClick);
			// 
			// IdProduct
			// 
			this->IdProduct->AutoSize = true;
			this->IdProduct->Location = System::Drawing::Point(9, 23);
			this->IdProduct->Name = L"IdProduct";
			this->IdProduct->Size = System::Drawing::Size(57, 13);
			this->IdProduct->TabIndex = 21;
			this->IdProduct->Text = L"ID product";
			// 
			// IdOrder
			// 
			this->IdOrder->AutoSize = true;
			this->IdOrder->Location = System::Drawing::Point(9, 62);
			this->IdOrder->Name = L"IdOrder";
			this->IdOrder->Size = System::Drawing::Size(45, 13);
			this->IdOrder->TabIndex = 22;
			this->IdOrder->Text = L"ID order";
			// 
			// Quantity
			// 
			this->Quantity->AutoSize = true;
			this->Quantity->Location = System::Drawing::Point(9, 101);
			this->Quantity->Name = L"Quantity";
			this->Quantity->Size = System::Drawing::Size(46, 13);
			this->Quantity->TabIndex = 23;
			this->Quantity->Text = L"Quantity";
			// 
			// txt_id_product
			// 
			this->txt_id_product->Location = System::Drawing::Point(12, 39);
			this->txt_id_product->Name = L"txt_id_product";
			this->txt_id_product->Size = System::Drawing::Size(156, 20);
			this->txt_id_product->TabIndex = 18;
			// 
			// txt_id_order
			// 
			this->txt_id_order->Location = System::Drawing::Point(12, 78);
			this->txt_id_order->Name = L"txt_id_order";
			this->txt_id_order->Size = System::Drawing::Size(156, 20);
			this->txt_id_order->TabIndex = 19;
			// 
			// txt_quantity
			// 
			this->txt_quantity->Location = System::Drawing::Point(12, 117);
			this->txt_quantity->Name = L"txt_quantity";
			this->txt_quantity->Size = System::Drawing::Size(156, 20);
			this->txt_quantity->TabIndex = 20;
			// 
			// btn_update
			// 
			this->btn_update->BackColor = System::Drawing::Color::NavajoWhite;
			this->btn_update->Location = System::Drawing::Point(15, 227);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(75, 37);
			this->btn_update->TabIndex = 17;
			this->btn_update->Text = L"Update";
			this->btn_update->UseVisualStyleBackColor = false;
			this->btn_update->Click += gcnew System::EventHandler(this, &FormToOrder::btn_update_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::Tomato;
			this->btn_delete->Location = System::Drawing::Point(15, 273);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(75, 37);
			this->btn_delete->TabIndex = 16;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &FormToOrder::btn_delete_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_insert->Location = System::Drawing::Point(15, 181);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(75, 37);
			this->btn_insert->TabIndex = 15;
			this->btn_insert->Text = L"Insert";
			this->btn_insert->UseVisualStyleBackColor = false;
			this->btn_insert->Click += gcnew System::EventHandler(this, &FormToOrder::btn_insert_Click);
			// 
			// btn_load
			// 
			this->btn_load->BackColor = System::Drawing::Color::LightGreen;
			this->btn_load->Location = System::Drawing::Point(96, 181);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(75, 129);
			this->btn_load->TabIndex = 14;
			this->btn_load->Text = L"Load DB";
			this->btn_load->UseVisualStyleBackColor = false;
			this->btn_load->Click += gcnew System::EventHandler(this, &FormToOrder::btn_load_Click);
			// 
			// FormToOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(594, 325);
			this->Controls->Add(this->IdProduct);
			this->Controls->Add(this->IdOrder);
			this->Controls->Add(this->Quantity);
			this->Controls->Add(this->txt_id_product);
			this->Controls->Add(this->txt_id_order);
			this->Controls->Add(this->txt_quantity);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"FormToOrder";
			this->Text = L"FormToOrder";
			this->Load += gcnew System::EventHandler(this, &FormToOrder::FormToOrder_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectToOrder("RSL");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "RSL";
	}
	private: System::Void FormToOrder_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::GestionToOrder();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e) {
		int id_product = int::Parse(this->txt_id_product->Text);
		int id_order = int::Parse(this->txt_id_order->Text);
		int quantity = int::Parse(this->txt_quantity->Text);
		this->oSvc->insertToOrder(id_product, id_order, quantity);
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		int id_product = int::Parse(this->txt_id_product->Text);
		int id_order = int::Parse(this->txt_id_order->Text);
		int quantity = int::Parse(this->txt_quantity->Text);
		this->oSvc->updateToOrder(id_product, id_order, quantity);
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		int id_product = int::Parse(this->txt_id_product->Text);
		int id_order = int::Parse(this->txt_id_order->Text);
		this->oSvc->_deleteToOrder(id_product, id_order);
	}

	private: System::Void dgv_enr_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
