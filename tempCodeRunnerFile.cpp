me << endl;
    }

    void display() const {
        cout << "Student name is: " << this->name << endl;
    }

    ~Student() {
        cout << "Destructor called for " << this->name << endl;
    }
};

int main() {
    Student s1("Lucky");
    Student *ptr = &s1;

    ptr->display();
    cout << "Program is running..." << endl;

    return 0;
}