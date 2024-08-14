#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.10 (swiftlang-5.10.0.13 clang-1500.3.9.4)
#ifndef GOSIGNSDKLITE_SWIFT_H
#define GOSIGNSDKLITE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="GoSignSDKLite",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;
@class AuthorizationRequestModel;

SWIFT_CLASS("_TtC13GoSignSDKLite3API")
@interface API : NSObject
+ (void)setUserId:(NSString * _Nonnull)userId;
+ (void)setDeviceId:(NSString * _Nonnull)deviceId;
+ (NSString * _Nonnull)getDeviceId SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getCSR SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getCSRWithUserId:(NSString * _Nonnull)userId SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getCSRWithUserId:(NSString * _Nonnull)userId deviceId:(NSString * _Nonnull)deviceId SWIFT_WARN_UNUSED_RESULT;
+ (NSArray<AuthorizationRequestModel *> * _Nonnull)getAuthorizationRequestListWithUserId:(NSString * _Nonnull)userId authorizationRequests:(NSArray<AuthorizationRequestModel *> * _Nonnull)authorizationRequests SWIFT_WARN_UNUSED_RESULT;
+ (void)setClientSecret:(NSString * _Nonnull)clientSecret;
+ (void)setGrantType:(NSString * _Nonnull)grantType;
+ (void)setClientId:(NSString * _Nonnull)clientId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface API (SWIFT_EXTENSION(GoSignSDKLite))
+ (void)clearToken;
@end




@interface API (SWIFT_EXTENSION(GoSignSDKLite))
+ (void)setDeviceName:(NSString * _Nonnull)name;
+ (NSString * _Nonnull)getDeviceName SWIFT_WARN_UNUSED_RESULT;
@end

@class RegisterDeviceAPIResponse;
@class ServerResponseError;
@class PendingAuthorisationAPIResponse;

@interface API (SWIFT_EXTENSION(GoSignSDKLite))
+ (void)registerDeviceWithToken:(NSString * _Nonnull)authenToken localizedReason:(NSString * _Nonnull)localizedReason completion:(void (^ _Nonnull)(RegisterDeviceAPIResponse * _Nullable, ServerResponseError * _Nullable))completion;
+ (void)authoriseaPendingRequestWithToken:(NSString * _Nonnull)authenToken localizedReason:(NSString * _Nonnull)localizedReason pendingAuthorisationAPIResponse:(PendingAuthorisationAPIResponse * _Nonnull)pendingAuthorisationAPIResponse completion:(void (^ _Nonnull)(ServerResponseError * _Nullable))completion;
@end


@interface API (SWIFT_EXTENSION(GoSignSDKLite))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nonnull host;)
+ (NSString * _Nonnull)host SWIFT_WARN_UNUSED_RESULT;
+ (void)setHost:(NSString * _Nonnull)value;
@end


@interface API (SWIFT_EXTENSION(GoSignSDKLite))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull clientToken;)
+ (NSString * _Nonnull)clientToken SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull userToken;)
+ (NSString * _Nonnull)userToken SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull refreshToken;)
+ (NSString * _Nonnull)refreshToken SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC13GoSignSDKLite29AuthenticateClientAPIResponse")
@interface AuthenticateClientAPIResponse : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull accessToken;
@property (nonatomic, readonly) double expiresIn;
@end

@class TokenInfo;

SWIFT_CLASS("_TtC13GoSignSDKLite27AuthenticateUserAPIResponse")
@interface AuthenticateUserAPIResponse : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable authType;
@property (nonatomic, readonly, strong) TokenInfo * _Nullable tokenInfo;
@end


SWIFT_CLASS("_TtC13GoSignSDKLite31AuthoriseaListPendingAPIRequest")
@interface AuthoriseaListPendingAPIRequest : NSObject
@property (nonatomic, copy) NSString * _Nullable requestId;
@property (nonatomic, copy) NSString * _Nullable request;
@property (nonatomic, copy) NSString * _Nullable hashAlgorithm;
- (nonnull instancetype)initWithRequestId:(NSString * _Nullable)requestId request:(NSString * _Nullable)request hashAlgorithm:(NSString * _Nullable)hashAlgorithm OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13GoSignSDKLite32AuthoriseaListPendingAPIResponse")
@interface AuthoriseaListPendingAPIResponse : NSObject
@property (nonatomic, copy) NSArray<NSString *> * _Nullable successRequests;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable failedRequests;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13GoSignSDKLite27AuthoriseaPendingAPIRequest")
@interface AuthoriseaPendingAPIRequest : NSObject
@property (nonatomic, copy) NSString * _Nullable request;
@property (nonatomic, copy) NSString * _Nullable hashAlgorithm;
- (nonnull instancetype)initWithRequest:(NSString * _Nullable)request hashAlgorithm:(NSString * _Nullable)hashAlgorithm OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13GoSignSDKLite25AuthorizationRequestModel")
@interface AuthorizationRequestModel : NSObject
@property (nonatomic, copy) NSString * _Nullable requestId;
@property (nonatomic, copy) NSString * _Nullable request;
@property (nonatomic, copy) NSString * _Nullable hashAlgorithm;
- (nonnull instancetype)initWithRequestId:(NSString * _Nullable)requestId request:(NSString * _Nullable)request hashAlgorithm:(NSString * _Nullable)hashAlgorithm OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13GoSignSDKLite25BiometricSettingsResponse")
@interface BiometricSettingsResponse : NSObject
@property (nonatomic, readonly) BOOL biometricSigningAuth;
@property (nonatomic, readonly) BOOL biometricDeviceRegistration;
@property (nonatomic, readonly, copy) NSString * _Nullable timeConfigs;
@end


SWIFT_CLASS("_TtC13GoSignSDKLite25CertificateSigningRequest")
@interface CertificateSigningRequest : NSObject
- (nonnull instancetype)init;
@end


SWIFT_CLASS("_TtC13GoSignSDKLite28ClientAuthenticateAPIRequest")
@interface ClientAuthenticateAPIRequest : NSObject
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret grantType:(NSString * _Nonnull)grantType OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13GoSignSDKLite37DeleteDeviceForNotificationAPIRequest")
@interface DeleteDeviceForNotificationAPIRequest : NSObject
@property (nonatomic, copy) NSString * _Nonnull deviceToken;
- (nonnull instancetype)initWithDeviceToken:(NSString * _Nonnull)deviceToken OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13GoSignSDKLite6Device")
@interface Device : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL hasSecureEnclave;)
+ (BOOL)hasSecureEnclave SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isSimulator;)
+ (BOOL)isSimulator SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL hasBiometrics;)
+ (BOOL)hasBiometrics SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13GoSignSDKLite10DeviceInfo")
@interface DeviceInfo : NSObject
@property (nonatomic, copy) NSString * _Nonnull deviceID;
@property (nonatomic, copy) NSString * _Nonnull deviceName;
@property (nonatomic) BOOL secureElement;
@property (nonatomic) BOOL biometric;
- (nonnull instancetype)initWithDeviceID:(NSString * _Nullable)deviceID deviceName:(NSString * _Nullable)deviceName secureElement:(BOOL)secureElement biometric:(BOOL)biometric OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13GoSignSDKLite32DevicePushNotificationAPIRequest")
@interface DevicePushNotificationAPIRequest : NSObject
@property (nonatomic, copy) NSString * _Nonnull deviceToken;
@property (nonatomic, copy) NSString * _Nonnull osType;
- (nonnull instancetype)initWithDeviceToken:(NSString * _Nonnull)deviceToken OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13GoSignSDKLite28DeviceRegistrationAPIRequest")
@interface DeviceRegistrationAPIRequest : NSObject
@property (nonatomic, copy) NSString * _Nullable csr;
@property (nonatomic, strong) DeviceInfo * _Nullable device;
- (nonnull instancetype)initWithCsr:(NSString * _Nullable)csr device:(DeviceInfo * _Nullable)device OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13GoSignSDKLite26DeviceRegistrationSettings")
@interface DeviceRegistrationSettings : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable deviceKeyType;
@property (nonatomic, readonly) NSInteger deviceKeySize;
@property (nonatomic, readonly) BOOL secureElementRequired;
@property (nonatomic, readonly) BOOL biometricRequired;
@property (nonatomic, readonly, copy) NSString * _Nullable allowedDevices;
@property (nonatomic, readonly, copy) NSString * _Nullable clockToleranceOnAuthCERT;
@end

enum QRFormat : NSInteger;

SWIFT_CLASS("_TtC13GoSignSDKLite24GenerateQRCodeAPIRequest")
@interface GenerateQRCodeAPIRequest : NSObject
@property (nonatomic, copy) NSString * _Nonnull clientID;
@property (nonatomic, copy) NSString * _Nonnull userID;
@property (nonatomic) enum QRFormat format;
@property (nonatomic, copy) NSString * _Nonnull size;
- (nonnull instancetype)initWithClientID:(NSString * _Nonnull)clientID userID:(NSString * _Nullable)userID format:(enum QRFormat)format size:(NSString * _Nonnull)size OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13GoSignSDKLite25GenerateQRCodeAPIResponse")
@interface GenerateQRCodeAPIResponse : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable size;
@property (nonatomic, readonly, copy) NSString * _Nullable qrCode;
@property (nonatomic, readonly) enum QRFormat format;
@end

typedef SWIFT_ENUM(NSInteger, OTPType, open) {
  OTPTypeSms = 0,
  OTPTypeMail = 1,
};


SWIFT_CLASS("_TtC13GoSignSDKLite7OtpInfo")
@interface OtpInfo : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull otp;
@property (nonatomic, readonly) enum OTPType otpType;
- (nonnull instancetype)initWithOtp:(NSString * _Nonnull)otp otpType:(enum OTPType)otpType OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13GoSignSDKLite31PendingAuthorisationAPIResponse")
@interface PendingAuthorisationAPIResponse : NSObject
@property (nonatomic, copy) NSString * _Nonnull transactionID;
@property (nonatomic, copy) NSString * _Nonnull request;
@property (nonatomic, copy) NSString * _Nonnull hashAlgorithm;
@property (nonatomic, copy) NSString * _Nonnull sadFormat;
@property (nonatomic, copy) NSString * _Nonnull userId;
@property (nonatomic) BOOL isChecked;
- (nonnull instancetype)initWithTransactionID:(NSString * _Nullable)transactionID request:(NSString * _Nullable)request hashAlgorithm:(NSString * _Nullable)hashAlgorithm sadFormat:(NSString * _Nullable)sadFormat OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


typedef SWIFT_ENUM(NSInteger, QRFormat, open) {
  QRFormatPng = 0,
  QRFormatJpg = 1,
  QRFormatBmp = 2,
  QRFormatJpeg = 3,
  QRFormatWbmp = 4,
  QRFormatGif = 5,
};


SWIFT_CLASS("_TtC13GoSignSDKLite25RegisterDeviceAPIResponse")
@interface RegisterDeviceAPIResponse : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable alias;
@property (nonatomic, readonly, copy) NSString * _Nullable certificate;
@property (nonatomic, copy) NSString * _Nullable deviceId;
- (nonnull instancetype)initWithDeviceId:(NSString * _Nullable)deviceId alias:(NSString * _Nullable)alias certificate:(NSString * _Nullable)certificate OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13GoSignSDKLite19ServerResponseError")
@interface ServerResponseError : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable error;
@property (nonatomic, readonly, copy) NSString * _Nullable errorDescription;
@property (nonatomic, readonly, copy) NSString * _Nullable code;
@property (nonatomic, readonly, copy) NSString * _Nullable codeDesc;
- (nonnull instancetype)initWithError:(NSString * _Nullable)error errorDescription:(NSString * _Nullable)errorDescription code:(NSString * _Nullable)code codeDesc:(NSString * _Nullable)codeDesc OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull message;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13GoSignSDKLite9TokenInfo")
@interface TokenInfo : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable accessToken;
@property (nonatomic, readonly, copy) NSString * _Nullable refreshToken;
@property (nonatomic, readonly, copy) NSString * _Nullable tokenType;
@property (nonatomic, readonly) NSInteger expiresIn;
@end


SWIFT_CLASS("_TtC13GoSignSDKLite26UserAuthenticateAPIRequest")
@interface UserAuthenticateAPIRequest : NSObject
@property (nonatomic, copy) NSString * _Nullable userID;
- (nonnull instancetype)initWithUserID:(NSString * _Nullable)userID OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




SWIFT_CLASS("_TtC13GoSignSDKLite22UserProfileAPIResponse")
@interface UserProfileAPIResponse : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable userID;
@property (nonatomic, readonly, copy) NSString * _Nullable userName;
@property (nonatomic, readonly, copy) NSString * _Nullable appName;
@property (nonatomic, readonly, copy) NSString * _Nullable userEmail;
@property (nonatomic, readonly, copy) NSString * _Nullable userMobile;
@end


SWIFT_CLASS("_TtC13GoSignSDKLite19VerifyOTPAPIRequest")
@interface VerifyOTPAPIRequest : NSObject
@property (nonatomic, copy) NSString * _Nonnull userID;
@property (nonatomic, copy) NSArray<OtpInfo *> * _Nonnull otpInfo;
- (nonnull instancetype)initWithUserID:(NSString * _Nullable)userID otpInfo:(NSArray<OtpInfo *> * _Nonnull)otpInfo OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13GoSignSDKLite22VerifyQRCodeAPIRequest")
@interface VerifyQRCodeAPIRequest : NSObject
@property (nonatomic, copy) NSString * _Nullable userID;
@property (nonatomic, copy) NSString * _Nullable qrCode;
- (nonnull instancetype)initWithUserID:(NSString * _Nullable)userID qrCode:(NSString * _Nullable)qrCode OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
