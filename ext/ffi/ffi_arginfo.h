/* This is a generated file, edit the .stub.php file instead. */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_FFI_cdef, 0, 0, FFI, 0)
	ZEND_ARG_TYPE_INFO(0, code, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, lib, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_FFI_load, 0, 1, FFI, 1)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_FFI_scope, 0, 1, FFI, 1)
	ZEND_ARG_TYPE_INFO(0, scope_name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_FFI_new, 0, 1, FFI\\CData, 1)
	ZEND_ARG_INFO(0, type)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, owned, _IS_BOOL, 0, "true")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, persistent, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_FFI_free, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(ZEND_SEND_PREFER_REF, ptr, FFI\\CData, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_FFI_cast, 0, 2, FFI\\CData, 1)
	ZEND_ARG_INFO(0, type)
	ZEND_ARG_INFO(ZEND_SEND_PREFER_REF, ptr)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_FFI_type, 0, 1, FFI\\CType, 1)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_FFI_typeof, 0, 1, FFI\\CType, 1)
	ZEND_ARG_OBJ_INFO(ZEND_SEND_PREFER_REF, ptr, FFI\\CData, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_FFI_arrayType, 0, 2, FFI\\CType, 1)
	ZEND_ARG_OBJ_INFO(0, type, FFI\\CType, 0)
	ZEND_ARG_TYPE_INFO(0, dims, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_FFI_addr, 0, 1, FFI\\CData, 0)
	ZEND_ARG_OBJ_INFO(ZEND_SEND_PREFER_REF, ptr, FFI\\CData, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_FFI_sizeof, 0, 1, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(ZEND_SEND_PREFER_REF, ptr, IS_OBJECT, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_FFI_alignof arginfo_class_FFI_sizeof

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_FFI_memcpy, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(ZEND_SEND_PREFER_REF, dst, FFI\\CData, 0)
	ZEND_ARG_INFO(ZEND_SEND_PREFER_REF, src)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_FFI_memcmp, 0, 3, IS_LONG, 1)
	ZEND_ARG_INFO(ZEND_SEND_PREFER_REF, ptr1)
	ZEND_ARG_INFO(ZEND_SEND_PREFER_REF, ptr2)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_FFI_memset, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(ZEND_SEND_PREFER_REF, ptr, FFI\\CData, 0)
	ZEND_ARG_TYPE_INFO(0, ch, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_FFI_string, 0, 1, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(ZEND_SEND_PREFER_REF, ptr, FFI\\CData, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_FFI_isNull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(ZEND_SEND_PREFER_REF, ptr, FFI\\CData, 0)
ZEND_END_ARG_INFO()


ZEND_METHOD(FFI, cdef);
ZEND_METHOD(FFI, load);
ZEND_METHOD(FFI, scope);
ZEND_METHOD(FFI, new);
ZEND_METHOD(FFI, free);
ZEND_METHOD(FFI, cast);
ZEND_METHOD(FFI, type);
ZEND_METHOD(FFI, typeof);
ZEND_METHOD(FFI, arrayType);
ZEND_METHOD(FFI, addr);
ZEND_METHOD(FFI, sizeof);
ZEND_METHOD(FFI, alignof);
ZEND_METHOD(FFI, memcpy);
ZEND_METHOD(FFI, memcmp);
ZEND_METHOD(FFI, memset);
ZEND_METHOD(FFI, string);
ZEND_METHOD(FFI, isNull);


static const zend_function_entry class_FFI_methods[] = {
	ZEND_ME(FFI, cdef, arginfo_class_FFI_cdef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(FFI, load, arginfo_class_FFI_load, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(FFI, scope, arginfo_class_FFI_scope, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(FFI, new, arginfo_class_FFI_new, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(FFI, free, arginfo_class_FFI_free, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(FFI, cast, arginfo_class_FFI_cast, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(FFI, type, arginfo_class_FFI_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(FFI, typeof, arginfo_class_FFI_typeof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(FFI, arrayType, arginfo_class_FFI_arrayType, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(FFI, addr, arginfo_class_FFI_addr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(FFI, sizeof, arginfo_class_FFI_sizeof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(FFI, alignof, arginfo_class_FFI_alignof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(FFI, memcpy, arginfo_class_FFI_memcpy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(FFI, memcmp, arginfo_class_FFI_memcmp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(FFI, memset, arginfo_class_FFI_memset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(FFI, string, arginfo_class_FFI_string, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(FFI, isNull, arginfo_class_FFI_isNull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};
