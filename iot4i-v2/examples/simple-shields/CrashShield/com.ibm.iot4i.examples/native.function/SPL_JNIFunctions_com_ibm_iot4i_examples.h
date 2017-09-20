// DO NOT EDIT THIS FILE - it is machine generated
#ifndef SPL_JNIFunctions_com_ibm_iot4i_examples_h
#define SPL_JNIFunctions_com_ibm_iot4i_examples_h

#include <SPL/Runtime/Function/SPLJavaFunction.h>
#include <SPL/Runtime/Type/SPLType.h>

namespace SPL {
namespace JNIFunctions {
namespace com {
namespace ibm {
namespace iot4i {
namespace examples {
class SPL_JNIFunctions {
public:

// Generated from com.ibm.iot4i.examples.CheckCrashImpl in impl/java/bin/com/ibm/iot4i/examples/CheckCrashImpl$StreamsModel.class at Wed Sep 20 11:58:25 EDT 2017
static SPL::boolean checkCrash(SPL::ustring const & arg1) {
    static __thread void *func;
    static __thread jclass classGlobalRef;
    static __thread jmethodID mid;
    if (func == NULL) {
        func = SPL::SPLJavaFunction::loadFunction("CrashShield", "1.0.0", SPLJAVAFUNCTION_ADL_FILENAME, "impl/java/bin", "com.ibm.iot4i.examples.CheckCrashImpl", "checkCrash", "(Ljava/lang/String;)Z", "com.ibm.iot4i.examples", "<string T> public boolean checkCrash(T message)", &classGlobalRef, &mid);
    }
    JNIEnv* env = SPL::SPLJavaFunction::getJNIEnv(func);
    jstring obj1 = env->NewString((jchar *) arg1.getBuffer(), (jsize) arg1.length());
    if (env->ExceptionCheck())
        SPL::SPLJavaFunction::throwCreateError(func);
    SPL::boolean result = env->CallStaticBooleanMethod(classGlobalRef, mid, obj1);
    if (env->ExceptionCheck())
        SPL::SPLJavaFunction::throwCallError(func);
    env->DeleteLocalRef(obj1);
    return result;
}

// Generated from com.ibm.iot4i.examples.CheckCrashImpl in impl/java/bin/com/ibm/iot4i/examples/CheckCrashImpl$StreamsModel.class at Wed Sep 20 11:58:25 EDT 2017
static SPL::boolean checkCrash(SPL::rstring const & arg1) {
    SPL::boolean result = checkCrash(SPL::ustring::fromUTF8(arg1));
    return result;
}

// Generated from com.ibm.iot4i.examples.CheckCrashImpl in impl/java/bin/com/ibm/iot4i/examples/CheckCrashImpl$StreamsModel.class at Wed Sep 20 11:58:25 EDT 2017
template <SPL::int32 msize>
static SPL::boolean checkCrash(SPL::bstring<msize> const & arg1) {
    SPL::boolean result = checkCrash((SPL::rstring) arg1);
    return result;
}

// Generated from com.ibm.iot4i.examples.EntryConditionImpl in impl/java/bin/com/ibm/iot4i/examples/EntryConditionImpl$StreamsModel.class at Wed Sep 20 11:58:25 EDT 2017
static SPL::boolean entryCondition(SPL::ustring const & arg1) {
    static __thread void *func;
    static __thread jclass classGlobalRef;
    static __thread jmethodID mid;
    if (func == NULL) {
        func = SPL::SPLJavaFunction::loadFunction("CrashShield", "1.0.0", SPLJAVAFUNCTION_ADL_FILENAME, "impl/java/bin", "com.ibm.iot4i.examples.EntryConditionImpl", "entryCondition", "(Ljava/lang/String;)Z", "com.ibm.iot4i.examples", "<string T> public boolean entryCondition(T message)", &classGlobalRef, &mid);
    }
    JNIEnv* env = SPL::SPLJavaFunction::getJNIEnv(func);
    jstring obj1 = env->NewString((jchar *) arg1.getBuffer(), (jsize) arg1.length());
    if (env->ExceptionCheck())
        SPL::SPLJavaFunction::throwCreateError(func);
    SPL::boolean result = env->CallStaticBooleanMethod(classGlobalRef, mid, obj1);
    if (env->ExceptionCheck())
        SPL::SPLJavaFunction::throwCallError(func);
    env->DeleteLocalRef(obj1);
    return result;
}

// Generated from com.ibm.iot4i.examples.EntryConditionImpl in impl/java/bin/com/ibm/iot4i/examples/EntryConditionImpl$StreamsModel.class at Wed Sep 20 11:58:25 EDT 2017
static SPL::boolean entryCondition(SPL::rstring const & arg1) {
    SPL::boolean result = entryCondition(SPL::ustring::fromUTF8(arg1));
    return result;
}

// Generated from com.ibm.iot4i.examples.EntryConditionImpl in impl/java/bin/com/ibm/iot4i/examples/EntryConditionImpl$StreamsModel.class at Wed Sep 20 11:58:25 EDT 2017
template <SPL::int32 msize>
static SPL::boolean entryCondition(SPL::bstring<msize> const & arg1) {
    SPL::boolean result = entryCondition((SPL::rstring) arg1);
    return result;
}

};
}
}
}
}
}
}
#endif
