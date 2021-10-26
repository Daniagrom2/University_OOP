#include <iostream>

using namespace std;

class user;

class mediator{
public:
    virtual void send(string message, user* colleague) = 0;
};

class user {
public:
    user(shared_ptr<mediator> m): mediator_(m){}
    virtual void notify(string message) = 0;
    virtual void send(string message) = 0;
protected:
    shared_ptr<mediator> mediator_;
};


class user1: public user, enable_shared_from_this<user1> {
public:
    user1(shared_ptr<mediator> m): user(m){}
    void send(string message) override {
        mediator_->send(message, this);
    }
    void notify(string message) override {
        cout << "user1 gets: " << message << endl;
    }
};

class user2: public user, enable_shared_from_this<user2> {
public:
    user2(shared_ptr<mediator> m): user(m){}
    void send(string message) override {
        mediator_->send(message, this);
    }
    void notify(string message){
        cout << "user2 gets: " << message << endl;
    }
};

class concreteMediator: public mediator{
public:
    void send(string message, user* colleague) override {
        if (typeid(*colleague) == typeid(*c1)) {
            c2->notify(message);
        }
        else {
            c1->notify(message);
        }
    }

    void setUser1(user1* value) {
        c1 = value;
    }

    void setUser2(user2* value) {
        c2 = value;
    }
private:
    user1* c1;
    user2* c2;
};

int main() {
    shared_ptr<concreteMediator> cm = make_shared<concreteMediator>();
    user1 c1(cm);
    user2 c2(cm);

    cm->setUser1(&c1);
    cm->setUser2(&c2);

    c1.send("Hey Colleague! How are you?");
    c2.send("I'm fine. How are you?");

    return 0;
}
