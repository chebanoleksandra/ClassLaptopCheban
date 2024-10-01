#include <iostream>
using namespace std;

class Laptop {
    char* model;
    char* cpu_model;
    char* video_card;
    int warranty;
    double price;
public:
    Laptop();
    Laptop(const char* Model, const char* Cpu_model, const char* Video_card, int Warranty, double Price);
    void Input();
    void Output();
    void SetModel(const char* Model);
    void SetCPU(const char* Cpu_model);
    void SetVideoCard(const char* Video_card);
    void SetWarranty(int Warranty);
    void SetPrice(double Price);
    char* GetModel();
    char* GetCPU();
    char* GetVideo_card();
    int GetWarranty();
    double GetPrice();
    ~Laptop();
};

Laptop::Laptop()
{
    model = nullptr;
    cpu_model = nullptr;
    video_card = nullptr;
    warranty = 0;
    price = 0;
}

Laptop::Laptop(const char* Model, const char* Cpu_model, const char* Video_card, int Warranty, double Price)
{
    model = new char[strlen(Model) + 1];
    strcpy_s(model, strlen(Model) + 1, Model);
    cpu_model = new char[strlen(Cpu_model) + 1];
    strcpy_s(cpu_model, strlen(Cpu_model) + 1, Cpu_model);
    video_card = new char[strlen(Video_card) + 1];
    strcpy_s(video_card, strlen(Video_card) + 1, Video_card);
    warranty = Warranty;
    price = Price;
}

void Laptop::Input()
{
    char buff[20];
    cout << endl << "Input model: ";
    cin >> buff;
    if (model != nullptr)
    {
        delete[] model;
    }
    model = new char[strlen(buff) + 1];
    strcpy_s(model, strlen(buff) + 1, buff);

    cout << "Input CPU model: ";
    cin >> buff;
    if (cpu_model != nullptr)
    {
        delete[] cpu_model;
    }
    cpu_model = new char[strlen(buff) + 1];
    strcpy_s(cpu_model, strlen(buff) + 1, buff);

    cout << "Input video card: ";
    cin >> buff;
    if (video_card != nullptr)
    {
        delete[] video_card;
    }
    video_card = new char[strlen(buff) + 1];
    strcpy_s(video_card, strlen(buff) + 1, buff);

    cout << "Input warranty: ";
    cin >> warranty;
    cout << "Input price: ";
    cin >> price;
    cout << endl;
}

void Laptop::Output()
{
    cout << endl << "Model: " << model << endl << "CPU model: " << cpu_model << endl << "Video card: " << video_card << endl << "Warranty: " << warranty << endl << "Price: " << price << endl;
}

void Laptop::SetModel(const char* Model)
{
    if (model != nullptr)
    {
        delete[] model;
    }
    model = new char[strlen(Model) + 1];
    strcpy_s(model, strlen(Model) + 1, Model);
}

void Laptop::SetCPU(const char* Cpu_model)
{
    if (cpu_model != nullptr)
    {
        delete[] cpu_model;
    }
    cpu_model = new char[strlen(Cpu_model) + 1];
    strcpy_s(cpu_model, strlen(Cpu_model) + 1, Cpu_model);
}

void Laptop::SetVideoCard(const char* Video_card)
{
    if (video_card != nullptr)
    {
        delete[] video_card;
    }
    video_card = new char[strlen(Video_card) + 1];
    strcpy_s(video_card, strlen(Video_card) + 1, Video_card);
}

void Laptop::SetWarranty(int Warranty)
{
    warranty = Warranty;
}

void Laptop::SetPrice(double Price)
{
    price = Price;
}

char* Laptop::GetModel()
{
    return model;
}

char* Laptop::GetCPU()
{
    return cpu_model;
}

char* Laptop::GetVideo_card()
{
    return video_card;
}

int Laptop::GetWarranty()
{
    return warranty;
}

double Laptop::GetPrice()
{
    return price;
}

Laptop::~Laptop()
{
    delete[] model;
    delete[] cpu_model;
    delete[] video_card;
}

int main() {
    Laptop new_laptop;
    new_laptop.SetModel("Lenovo");
    cout << new_laptop.GetModel() << endl;
    cout << new_laptop.GetPrice() << endl;

    Laptop asus("Asus", "Intel", "Nvidia", 1, 38000);
    asus.Output();
    asus.SetPrice(35000);
    asus.Output();

    Laptop your_laptop;
    your_laptop.Input();
    your_laptop.Output();
}