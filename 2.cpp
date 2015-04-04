//实现单例模式

class Singleton{
    private:
        Singleton(){

        }
        static Singleton *s = NULL;
        mutex _lock;
    public:
        if(s == NULL){
            _lock.lock();
            if(s == NULL){
                s = Singleton();
            }
        }
        return s;
}
