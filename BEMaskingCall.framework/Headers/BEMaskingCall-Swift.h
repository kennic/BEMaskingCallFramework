#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.1.2 (swiftlang-1100.0.278 clang-1100.0.33.9)
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
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

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

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
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
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import ObjectiveC;
@import QuartzCore;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="BEMaskingCall",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC13BEMaskingCall26BeMaskingCallEventTracking")
@interface BeMaskingCallEventTracking : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) BeMaskingCallEventTracking * _Nonnull shared;)
+ (BeMaskingCallEventTracking * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Hàm thực hiện tracking call_tap_speaker
/// \param user_id id của người dùng
///
/// \param user_city Ha Noi, Ho Chi Minh
///
/// \param speaker_status on/off
///
/// \param call_session_id lấy giá trị uuid [[NSUUID UUID] UUIDString]
///
- (void)eventTrackingCallTapSpeakerWithReceive:(BOOL)receive params:(NSDictionary<NSString *, id> * _Nonnull)params;
/// Hàm thực hiện tracking customer_call_tap_mute
/// \param user_id id của người dùng
///
/// \param user_city Ha Noi, Ho Chi Minh
///
/// \param mute_status on/off
///
/// \param call_session_id lấy giá trị uuid [[NSUUID UUID] UUIDString]
///
- (void)eventTrackingCallTapMuteWithReceive:(BOOL)receive params:(NSDictionary<NSString *, id> * _Nonnull)params;
/// Hàm thực hiện tracking customer_call_tap_end
/// \param user_id id của người dùng
///
/// \param user_city Ha Noi, Ho Chi Minh
///
/// \param call_duration (in second)
///
/// \param waiting_duration thời gian chờ dành cho cuộc gọi đi
///
/// \param is_timeout Yes/No dành cho cuộc gọi đi
///
/// \param mute_status on/off
///
/// \param call_session_id lấy giá trị uuid [[NSUUID UUID] UUIDString]
///
- (void)eventTrackingCallTapEndWithReceive:(BOOL)receive params:(NSDictionary<NSString *, id> * _Nonnull)params;
/// Hàm thực hiện tracking tap_on_call
/// \param call_type loại cuộc gọi miễn phí hoặc trả phí ( có giá trị: Free hoặc Paid)
///
/// \param caller_id id của người gọi
///
/// \param caller_lat vĩ độ của người gọi, lấy vĩ độ của vị trí hiện tại
///
/// \param caller_long kinh độ của người gọi, lấy kinh độ của vị trí hiện tại
///
/// \param caller_network 
///
/// \param caller_type loại người dùng ( có giá trị: customer/driver/merchant
///
/// \param receiver_id id của người nhận
///
/// \param receiver_type loại người nhận ( có giá trị: customer/driver/merchant
///
/// \param timestamp thời gian hiện tại
///
/// \param trip_id id của chuyến đi
///
/// \param call_session_id lấy giá trị uuid [[NSUUID UUID] UUIDString]
///
- (void)eventTrackingTapOnCallWithParams:(NSDictionary<NSString *, id> * _Nonnull)params;
/// Hàm thực hiện tracking receive_in_app_call
/// <ul>
///   <li>
///     Parameters: Người nhận chính là mình
///     <ul>
///       <li>
///         receiver_id:      id của người nhận cuộc gọi
///       </li>
///       <li>
///         receiver_lat:     vĩ độ của người nhận
///       </li>
///       <li>
///         receiver_long:    kinh độ của người nhận
///       </li>
///       <li>
///         receiver_network:
///       </li>
///       <li>
///         receiver_type:    loại người nhận ( có giá trị: customer/driver/merchant)
///       </li>
///       <li>
///         timestamp:        thời gian hiện tại nhận cuộc gọi
///       </li>
///       <li>
///         call_sesion_id:   lấy giá trị uuid [[NSUUID UUID] UUIDString]
///       </li>
///     </ul>
///   </li>
/// </ul>
- (void)eventTrackingReceiverInAppCallWithParams:(NSDictionary<NSString *, id> * _Nonnull)params;
/// Hàm thực hiện tracking response_in_app_call
/// <ul>
///   <li>
///     Parameters: Người nhận chính là mình
///     <ul>
///       <li>
///         receiver_id:      id của người nhận cuộc gọi
///       </li>
///       <li>
///         receiver_lat:     vĩ độ của người nhận
///       </li>
///       <li>
///         receiver_long:    kinh độ của người nhận
///       </li>
///       <li>
///         receiver_type:    loại người nhận ( có giá trị: customer/driver/merchant)
///       </li>
///       <li>
///         receiver_network:
///       </li>
///       <li>
///         timestamp: thời   gian hiện tại nhận cuộc gọi
///       </li>
///       <li>
///         call_sesion_id:
///       </li>
///       <li>
///         receiver_action:  hành động của người nhận (accept/reject/timeout)
///       </li>
///     </ul>
///   </li>
/// </ul>
- (void)eventTrackingResponseInAppCallWithParams:(NSDictionary<NSString *, id> * _Nonnull)params;
/// Hàm thực hiện tracking receive_number_to_call
/// \param request_number lấy giá trị call_session_id của tap_on_call
///
/// \param customer_selection Lựa chọn giấu số hay số thực (có giá trị: masking/real number)
///
/// \param customer_setting Cài đặt nhớ số thực hay số  (có giá trị: ON/OFF/Empty)
///
/// \param Masking_number Là số masking
///
/// \param Real_number Là số thực
///
/// \param display_number số điện thoại được sử dụng
///
/// \param timestamp Thời gian cuộc gọi
///
- (void)eventTrackingDisplayNumberPaidCallWithParams:(NSDictionary<NSString *, id> * _Nonnull)params;
@end

@class NSCoder;

SWIFT_CLASS("_TtC13BEMaskingCall23ConfirmMaskingCallAlert")
@interface ConfirmMaskingCallAlert : UIView
@property (nonatomic, copy) void (^ _Nullable didSelectedButton)(NSInteger, BOOL);
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithTitle:(NSString * _Nullable)title message:(NSString * _Nullable)message buttonMaskingNumber:(NSString * _Nullable)buttonMaskingNumber buttonRealNumber:(NSString * _Nullable)buttonRealNumber OBJC_DESIGNATED_INITIALIZER;
- (void)showMessageWithButton:(void (^ _Nullable)(NSInteger, BOOL))button;
@end

@class CAAnimation;

SWIFT_CLASS("_TtC13BEMaskingCall20PulsingAnimationCall")
@interface PulsingAnimationCall : CAReplicatorLayer <CAAnimationDelegate>
@property (nonatomic) CGColorRef _Nullable backgroundColor;
@property (nonatomic) float repeatCount;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (void)start;
- (void)animatePulsatingLayer;
- (void)animationDidStop:(CAAnimation * _Nonnull)anim finished:(BOOL)flag;
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer SWIFT_UNAVAILABLE;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.1.2 (swiftlang-1100.0.278 clang-1100.0.33.9)
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
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

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

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
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
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import ObjectiveC;
@import QuartzCore;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="BEMaskingCall",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC13BEMaskingCall26BeMaskingCallEventTracking")
@interface BeMaskingCallEventTracking : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) BeMaskingCallEventTracking * _Nonnull shared;)
+ (BeMaskingCallEventTracking * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Hàm thực hiện tracking call_tap_speaker
/// \param user_id id của người dùng
///
/// \param user_city Ha Noi, Ho Chi Minh
///
/// \param speaker_status on/off
///
/// \param call_session_id lấy giá trị uuid [[NSUUID UUID] UUIDString]
///
- (void)eventTrackingCallTapSpeakerWithReceive:(BOOL)receive params:(NSDictionary<NSString *, id> * _Nonnull)params;
/// Hàm thực hiện tracking customer_call_tap_mute
/// \param user_id id của người dùng
///
/// \param user_city Ha Noi, Ho Chi Minh
///
/// \param mute_status on/off
///
/// \param call_session_id lấy giá trị uuid [[NSUUID UUID] UUIDString]
///
- (void)eventTrackingCallTapMuteWithReceive:(BOOL)receive params:(NSDictionary<NSString *, id> * _Nonnull)params;
/// Hàm thực hiện tracking customer_call_tap_end
/// \param user_id id của người dùng
///
/// \param user_city Ha Noi, Ho Chi Minh
///
/// \param call_duration (in second)
///
/// \param waiting_duration thời gian chờ dành cho cuộc gọi đi
///
/// \param is_timeout Yes/No dành cho cuộc gọi đi
///
/// \param mute_status on/off
///
/// \param call_session_id lấy giá trị uuid [[NSUUID UUID] UUIDString]
///
- (void)eventTrackingCallTapEndWithReceive:(BOOL)receive params:(NSDictionary<NSString *, id> * _Nonnull)params;
/// Hàm thực hiện tracking tap_on_call
/// \param call_type loại cuộc gọi miễn phí hoặc trả phí ( có giá trị: Free hoặc Paid)
///
/// \param caller_id id của người gọi
///
/// \param caller_lat vĩ độ của người gọi, lấy vĩ độ của vị trí hiện tại
///
/// \param caller_long kinh độ của người gọi, lấy kinh độ của vị trí hiện tại
///
/// \param caller_network 
///
/// \param caller_type loại người dùng ( có giá trị: customer/driver/merchant
///
/// \param receiver_id id của người nhận
///
/// \param receiver_type loại người nhận ( có giá trị: customer/driver/merchant
///
/// \param timestamp thời gian hiện tại
///
/// \param trip_id id của chuyến đi
///
/// \param call_session_id lấy giá trị uuid [[NSUUID UUID] UUIDString]
///
- (void)eventTrackingTapOnCallWithParams:(NSDictionary<NSString *, id> * _Nonnull)params;
/// Hàm thực hiện tracking receive_in_app_call
/// <ul>
///   <li>
///     Parameters: Người nhận chính là mình
///     <ul>
///       <li>
///         receiver_id:      id của người nhận cuộc gọi
///       </li>
///       <li>
///         receiver_lat:     vĩ độ của người nhận
///       </li>
///       <li>
///         receiver_long:    kinh độ của người nhận
///       </li>
///       <li>
///         receiver_network:
///       </li>
///       <li>
///         receiver_type:    loại người nhận ( có giá trị: customer/driver/merchant)
///       </li>
///       <li>
///         timestamp:        thời gian hiện tại nhận cuộc gọi
///       </li>
///       <li>
///         call_sesion_id:   lấy giá trị uuid [[NSUUID UUID] UUIDString]
///       </li>
///     </ul>
///   </li>
/// </ul>
- (void)eventTrackingReceiverInAppCallWithParams:(NSDictionary<NSString *, id> * _Nonnull)params;
/// Hàm thực hiện tracking response_in_app_call
/// <ul>
///   <li>
///     Parameters: Người nhận chính là mình
///     <ul>
///       <li>
///         receiver_id:      id của người nhận cuộc gọi
///       </li>
///       <li>
///         receiver_lat:     vĩ độ của người nhận
///       </li>
///       <li>
///         receiver_long:    kinh độ của người nhận
///       </li>
///       <li>
///         receiver_type:    loại người nhận ( có giá trị: customer/driver/merchant)
///       </li>
///       <li>
///         receiver_network:
///       </li>
///       <li>
///         timestamp: thời   gian hiện tại nhận cuộc gọi
///       </li>
///       <li>
///         call_sesion_id:
///       </li>
///       <li>
///         receiver_action:  hành động của người nhận (accept/reject/timeout)
///       </li>
///     </ul>
///   </li>
/// </ul>
- (void)eventTrackingResponseInAppCallWithParams:(NSDictionary<NSString *, id> * _Nonnull)params;
/// Hàm thực hiện tracking receive_number_to_call
/// \param request_number lấy giá trị call_session_id của tap_on_call
///
/// \param customer_selection Lựa chọn giấu số hay số thực (có giá trị: masking/real number)
///
/// \param customer_setting Cài đặt nhớ số thực hay số  (có giá trị: ON/OFF/Empty)
///
/// \param Masking_number Là số masking
///
/// \param Real_number Là số thực
///
/// \param display_number số điện thoại được sử dụng
///
/// \param timestamp Thời gian cuộc gọi
///
- (void)eventTrackingDisplayNumberPaidCallWithParams:(NSDictionary<NSString *, id> * _Nonnull)params;
@end

@class NSCoder;

SWIFT_CLASS("_TtC13BEMaskingCall23ConfirmMaskingCallAlert")
@interface ConfirmMaskingCallAlert : UIView
@property (nonatomic, copy) void (^ _Nullable didSelectedButton)(NSInteger, BOOL);
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithTitle:(NSString * _Nullable)title message:(NSString * _Nullable)message buttonMaskingNumber:(NSString * _Nullable)buttonMaskingNumber buttonRealNumber:(NSString * _Nullable)buttonRealNumber OBJC_DESIGNATED_INITIALIZER;
- (void)showMessageWithButton:(void (^ _Nullable)(NSInteger, BOOL))button;
@end

@class CAAnimation;

SWIFT_CLASS("_TtC13BEMaskingCall20PulsingAnimationCall")
@interface PulsingAnimationCall : CAReplicatorLayer <CAAnimationDelegate>
@property (nonatomic) CGColorRef _Nullable backgroundColor;
@property (nonatomic) float repeatCount;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (void)start;
- (void)animatePulsatingLayer;
- (void)animationDidStop:(CAAnimation * _Nonnull)anim finished:(BOOL)flag;
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer SWIFT_UNAVAILABLE;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#endif
