// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装类

// CColorStop0 包装类

class CColorStop0 : public COleDispatchDriver
{
public:
	CColorStop0(){} // 调用 COleDispatchDriver 默认构造函数
	CColorStop0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CColorStop0(const CColorStop0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 属性
public:

	// 操作
public:


	// IColorStop 方法
public:
	STDMETHOD(get_Application)(Application * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Creator)(XlCreator * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Parent)(LPDISPATCH * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(Delete)()
	{
		HRESULT result;
		InvokeHelper(0x75, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(get_Color)(VARIANT * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PVARIANT ;
		InvokeHelper(0x63, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_Color)(VARIANT RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x63, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, &newValue);
		return result;
	}
	STDMETHOD(get_ThemeColor)(long * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x93d, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_ThemeColor)(long RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x93d, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(get_TintAndShade)(VARIANT * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PVARIANT ;
		InvokeHelper(0x93e, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_TintAndShade)(VARIANT RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x93e, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, &newValue);
		return result;
	}
	STDMETHOD(get_Position)(double * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PR8 ;
		InvokeHelper(0x85, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_Position)(double RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0x85, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}

	// IColorStop 属性
public:

};
