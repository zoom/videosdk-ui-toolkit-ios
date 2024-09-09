#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9.2 (swiftlang-5.9.2.2.56 clang-1500.1.0.2.5)
#ifndef ZOOMVIDEOSDKUITOOLKIT_SWIFT_H
#define ZOOMVIDEOSDKUITOOLKIT_SWIFT_H
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
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import ZoomVideoSDK;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ZoomVideoSDKUIToolkit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;

/// The initializer parameters object contains information for initializing the ZoomVideoSDK. Objective-C class for interoperability.
SWIFT_CLASS("_TtC21ZoomVideoSDKUIToolkit14InitParamsObjC")
@interface InitParamsObjC : NSObject
/// (Optional) App Group ID for screen sharing.
@property (nonatomic, copy) NSString * _Nullable appGroupId;
/// \param appGroupId (Optional) App Group ID for screen sharing.
///
- (nonnull instancetype)initWithAppGroupId:(NSString * _Nullable)appGroupId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



/// The session context consists of information required to start or join a session. Objective-C class for interoperability.
SWIFT_CLASS("_TtC21ZoomVideoSDKUIToolkit18SessionContextObjC")
@interface SessionContextObjC : NSObject
/// Video SDK JWT to start or join a session.
@property (nonatomic, copy) NSString * _Nonnull jwt;
/// Session name
@property (nonatomic, copy) NSString * _Nonnull sessionName;
/// (Optional) Password to start or join a session.
@property (nonatomic, copy) NSString * _Nullable sessionPassword;
/// Username to display and identify each individual.
@property (nonatomic, copy) NSString * _Nonnull username;
/// \param jwt The generated Video SDK JWT to authorize starting or joining a session.
///
/// \param sessionName The name of the session. The string length must be less than 150. Supported character scopes are: Letters, numbers, spaces, and the following characters: “!”, “#”, “$”, “%”, “&”, “(”, “)”, “+”, “-”, “:”, “;”, “<”, “=”, “.”, “>”, “?”, “@”, “[”, “]”, “^”, “_”, “{”, “}”, “|”, “~”, “,”.
///
/// \param sessionPassword (Optional) Password to start or join a session.
///
/// \param username Name to display and identify each individual.
///
- (nonnull instancetype)initWithJwt:(NSString * _Nonnull)jwt sessionName:(NSString * _Nonnull)sessionName sessionPassword:(NSString * _Nullable)sessionPassword username:(NSString * _Nonnull)username OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end








enum UIToolkitError : NSInteger;

/// Delegate for UI toolkit event notifications.
SWIFT_PROTOCOL("_TtP21ZoomVideoSDKUIToolkit17UIToolkitDelegate_")
@protocol UIToolkitDelegate
/// Notifies when an error occurred.
/// \param errorType Enumeration of all the UI Toolkit errors.
///
- (void)onError:(enum UIToolkitError)errorType;
/// Notifies when the view is successfully loaded.
- (void)onViewLoaded;
/// Notifies when the view is successfully dismissed.
- (void)onViewDismissed;
@end

/// Enumeration of all the UI toolkit errors.
typedef SWIFT_ENUM(NSInteger, UIToolkitError, open) {
/// Authentication error, no key or secret found.
  UIToolkitErrorEmptyKeyOrSecret = 1000,
/// Authentication error, wrong key or secret.
  UIToolkitErrorInvalidKeyOrSecret = 1001,
/// Join session error, no tpc (topic) name.
  UIToolkitErrorEmptySessionName = 2000,
/// Join session error, no session token.
  UIToolkitErrorEmptySessionToken = 2001,
/// Join Session error, no session name within token.
  UIToolkitErrorTokenEmptySessionName = 2002,
/// Join session error, no session user name.
  UIToolkitErrorEmptyUsername = 2003,
/// Join session error, invalid session name.
  UIToolkitErrorInvalidSessionName = 2004,
/// Join session error, invalid session password.
  UIToolkitErrorWrongPassword = 2005,
/// Join session error, invalid session token.
  UIToolkitErrorInvalidSessionToken = 2006,
/// Join session error, missing session password.
  UIToolkitErrorMissingPassword = 2007,
/// Join Session error, session name too long.
  UIToolkitErrorSessionNameTooLong = 2008,
/// Join session token error, mismatched session name.
  UIToolkitErrorTokenMismatchedSessionName = 2009,
/// Join session token error, user identity too long.
  UIToolkitErrorTokenUserIdentityTooLong = 2010,
/// Join session error, invalid parameter.
  UIToolkitErrorInvalidParam = 2011,
/// Join session error, failed to join session.
  UIToolkitErrorJoinFailed = 2012,
/// Session error, no microphone permission.
  UIToolkitErrorNoMicrophonePermission = 3000,
/// Session error, no camera permission.
  UIToolkitErrorNoCameraPermission = 3001,
/// Session error, failed to leave session.
  UIToolkitErrorLeaveSessionFailed = 3002,
/// Session error, failed to mute mic.
  UIToolkitErrorMuteMicFailed = 3003,
/// Session error, failed to unmute mic.
  UIToolkitErrorUnmuteMicFailed = 3004,
/// Session error, failed to start video.
  UIToolkitErrorStartCameraFailed = 3005,
/// Session error, failed to stop video.
  UIToolkitErrorStopCameraFailed = 3006,
/// Session error, failed to send group message.
  UIToolkitErrorSendGroupMessageFailed = 3007,
/// Session error, failed to send private message.
  UIToolkitErrorSendPrivateMessageFailed = 3008,
/// Session error, failed to enable group and private chat.
  UIToolkitErrorEnableGroupAndPrivateChatFailed = 3009,
/// Session error, failed to disable group and private chat.
  UIToolkitErrorDisableGroupAndPrivateChatFailed = 3010,
/// Session error, failed to change virtual background.
  UIToolkitErrorChangeVirtualBackgroundFailed = 3011,
/// Session error, failed to change local user’s  name.
  UIToolkitErrorChangeLocalUserNameFailed = 3012,
/// Session error, failed to change one participant’s name.
  UIToolkitErrorChangeSingleParticipantNameFailed = 3013,
/// Session error, failed to send unmute request to all participants.
  UIToolkitErrorRequestToUnmuteEveryoneFailed = 3014,
/// Session error, failed to mute all participants.
  UIToolkitErrorMuteEveryoneFailed = 3015,
/// Session error, failed to send unmute request to single participant.
  UIToolkitErrorRequestToUnmuteSingleParticipantFailed = 3016,
/// Session error, failed to mute single participant.
  UIToolkitErrorMuteSingleParticipantFailed = 3017,
/// Session error, failed to revoke manager.
  UIToolkitErrorRevokeManagerFailed = 3018,
/// Session error, failed to grant manager.
  UIToolkitErrorGrantManagerFailed = 3019,
/// Session error, failed to change host.
  UIToolkitErrorChangeHostFailed = 3020,
/// Session error, failed to remove participant.
  UIToolkitErrorRemoveParticipantFailed = 3021,
/// Session error, failed to end session.
  UIToolkitErrorEndSessionFailed = 3022,
};


SWIFT_CLASS("_TtC21ZoomVideoSDKUIToolkit20UIToolkitErrorParser")
@interface UIToolkitErrorParser : NSObject
+ (NSString * _Nonnull)descriptionForError:(enum UIToolkitError)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSCoder;
@protocol UIViewControllerTransitionCoordinator;
@class NSBundle;

/// The UI toolkit view controller manages and shows the prebuilt video chat user interface.
SWIFT_CLASS("_TtC21ZoomVideoSDKUIToolkit11UIToolkitVC")
@interface UIToolkitVC : UIViewController
/// The UIToolkitDelegate sends event notifications.
@property (nonatomic, weak) id <UIToolkitDelegate> _Nullable delegate;
- (nonnull instancetype)initWithSessionContextObject:(SessionContextObjC * _Nonnull)sessionContextObject initParamsObject:(InitParamsObjC * _Nullable)initParamsObject OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (void)viewWillDisappear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end




@class UIScrollView;
@class UICollectionView;
@class UICollectionViewCell;
@class NSIndexPath;
@class UICollectionViewLayout;

@interface UIToolkitVC (SWIFT_EXTENSION(ZoomVideoSDKUIToolkit)) <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didEndDisplayingCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView willDisplayCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumLineSpacingForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
@end

@class ZoomVideoSDKAudioHelper;
@class ZoomVideoSDKUser;
@class ZoomVideoSDKVideoHelper;
@class ZoomVideoSDKShareHelper;
@class ZoomVideoSDKUserHelper;
@class ZoomVideoSDKChatHelper;
@class ZoomVideoSDKChatMessage;

@interface UIToolkitVC (SWIFT_EXTENSION(ZoomVideoSDKUIToolkit)) <ZoomVideoSDKDelegate>
- (void)onError:(ZoomVideoSDKError)ErrorType detail:(NSInteger)details;
- (void)onSessionNeedPassword:(ZoomVideoSDKError (^ _Nullable)(NSString * _Nullable, BOOL))completion;
- (void)onHostAskUnmute;
- (void)onSessionPasswordWrong:(ZoomVideoSDKError (^ _Nullable)(NSString * _Nullable, BOOL))completion;
- (void)onSessionJoin;
- (void)onSessionLeave:(ZoomVideoSDKSessionLeaveReason)reason;
- (void)onUserAudioStatusChanged:(ZoomVideoSDKAudioHelper * _Nullable)helper user:(NSArray<ZoomVideoSDKUser *> * _Nullable)userArray;
- (void)onUserVideoStatusChanged:(ZoomVideoSDKVideoHelper * _Nullable)helper user:(NSArray<ZoomVideoSDKUser *> * _Nullable)userArray;
- (void)onUserShareStatusChanged:(ZoomVideoSDKShareHelper * _Nullable)helper user:(ZoomVideoSDKUser * _Nullable)user status:(ZoomVideoSDKReceiveSharingStatus)status;
- (void)onUserActiveAudioChanged:(ZoomVideoSDKUserHelper * _Nullable)helper users:(NSArray<ZoomVideoSDKUser *> * _Nullable)userArray;
- (void)onUserJoin:(ZoomVideoSDKUserHelper * _Nullable)helper users:(NSArray<ZoomVideoSDKUser *> * _Nullable)userArray;
- (void)onUserLeave:(ZoomVideoSDKUserHelper * _Nullable)helper users:(NSArray<ZoomVideoSDKUser *> * _Nullable)userArray;
- (void)onChatNewMessageNotify:(ZoomVideoSDKChatHelper * _Nullable)helper message:(ZoomVideoSDKChatMessage * _Nullable)chatMessage;
- (void)onChatPrivilegeChanged:(ZoomVideoSDKChatHelper * _Nullable)helper privilege:(ZoomVideoSDKChatPrivilegeType)currentPrivilege;
- (void)onUserNameChanged:(ZoomVideoSDKUser * _Nullable)user;
- (void)onUserHostChanged:(ZoomVideoSDKUserHelper * _Nullable)helper users:(ZoomVideoSDKUser * _Nullable)user;
- (void)onUserManagerChanged:(ZoomVideoSDKUser * _Nullable)user;
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
