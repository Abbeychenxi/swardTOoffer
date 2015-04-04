//为下面CMystring的声明添加赋值运算符函数

class CMyString
{
    public:
        CMyString(char* pData = NULL);
        CMyString(const CMyString& str);
        CMyString& operator =(const CMyString &str);
        ~CMyString(void);
    private:
        char* m_pData;
}

CMyString& CMyString::operator =(const CMyString& str){
    if(this == &str)
        return *this;

    delete []m_pData;
    m_pData = NULL;
    m_pData = new char[strlen(str.m_pData) + 1];
    strcpy(m_pData, str.m_pData);

    return *this;
}

//解法二

CMyString& CMyString::operator =(const CMyString& str){
    if(this != &str){
        CMyString strTemp(str);

        char* pTemp = strTemp.m_pData;
        strTemp.m_pData = m_pData;
        m_pData = pTemp;
    }
    return *this;
}
