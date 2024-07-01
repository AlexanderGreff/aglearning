class UserInfo
{
    public:
        std::string username_;
        std::string password_;
        bool operator == (const UserInfo usr)
        {
            return ((usr.username_ == username_) && (usr.password_ == password_));
        }
};