//
//  SPManager.h
//  Softphone
//
//  Created by Hoang Duoc on 3/5/18.
//  Copyright © 2018 Hoang Duoc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreTelephony/CTCallCenter.h>
#import <CallKit/CallKit.h>
#import "UserModel.h"
//#import "ConfigMaskingCallModel.h"
#import "BeCallerInfoModel.h"
#import "RideInfoModel.h"
#import "CallingViewController.h"
#import "BEMaskingCallConfiguration.h"

typedef NS_ENUM(NSInteger, SyncStateCalling) {
    // Chưa có cuộc gọi
    SyncStateCallingNone,
    // Đang có cuộc gọi đi
    SyncStateCallingInComing,
    // Đang có cuộc gọi đên
    SyncStateCallingOutGoing,
};

/// Các cách thức gọi điện
typedef NS_ENUM(NSInteger, BECallingState) {
	// Chưa xác nhận cách thức gọi
	BECallingStateNotSpecified = 0,
	/// Gọi điện giấu số
	BECallingStateMaskingCall = 1,
	/// Gọi số thường
	BECallingStateNormal = 2,
};

/// Các trạng thái dẫn đến timeout
typedef NS_ENUM(NSInteger, BEMaskingCallFailReason) {
    // timeout do lỗi mạng
    BEMaskingCallFailReasonNetworkError = 0,
    /// timeout do lỗi kết nối Stringee
    BEMaskingCallFailReasonStringeeError = 1,
    /// timeout do người dùng cúp máy
    BEMaskingCallFailReasonReceiverHangup = 2,
    /// timedout, hết thời gian quy định
    BEMaskingCallFailReasonTimedout = 3
};

@protocol BEMaskingCallDelegate <NSObject>

- (void) inAppCallingDidFailWithReason:(BEMaskingCallFailReason)reason engagementId:(NSString*)engagementID;
- (void) willPresentCallingViewController:(CallingViewController*)vc animated:(BOOL)animated;
- (void) didEndCalling;
- (void) requestOSCallWith:(NSString*)phoneNumber;

@end

@interface SPManager : NSObject

+ (SPManager *)instance;
@property (nonatomic, weak) id<BEMaskingCallDelegate> delegate;
@property (strong, nonatomic) NSDictionary *allKeys;
@property (strong, nonatomic) NSMutableArray *listKeys;
@property (strong, nonatomic) NSMutableDictionary *dicSections;

@property (strong, nonatomic) NSMutableArray *arrayCallHistories;
@property (strong, nonatomic) CTCallCenter *callCenter;
@property (strong, nonatomic) CXCallObserver NS_AVAILABLE_IOS(10.0) *callObserver;
@property (strong, nonatomic) NSUserActivity *userActivity;

@property (strong, nonatomic) NSString *deviceToken;
@property (assign, nonatomic) BOOL hasRegisteredToReceivePush;
@property (assign, nonatomic) BOOL isPushKit;
@property (strong, nonatomic) NSString *voipToken;
@property (assign, nonatomic) SyncStateCalling isClickOutGoing;

@property (strong, nonatomic) UserModel *myUser;
//@property (strong, nonatomic) ConfigMaskingCallModel *configMaskingCall;
@property (assign, nonatomic) BOOL isRequestMaskingNumber;
@property (assign, nonatomic) BOOL autoRequestStringeeTokenWhenExpireTime;
	
@property (assign, nonatomic) BOOL enableCallInApp;
@property (assign, nonatomic) BOOL enableMaskingCall;

@property (strong, nonatomic) BeCallerInfoModel *callerInfo;
@property (strong, nonatomic) RideInfoModel *rideInfo;

@property (nonatomic, strong) NSString *baseURLString;
@property (nonatomic, strong) NSString *subUrlString;
@property (strong, nonatomic) BEMaskingCallConfiguration *configuration;
@property (assign, nonatomic) BOOL isDriver;
@property (nonatomic, strong) UIViewController *presentViewController;
@property (strong, nonatomic) CallingViewController *callingViewController;
@property (strong, nonatomic) NSString *callSesstionID;
@property (strong, nonatomic) NSString *cityDevice;
@property (strong, nonatomic) NSString *myLocationLatitude;
@property (strong, nonatomic) NSString *myLocationLongitude;

- (NSString*) generalCallSessionID;
- (NSString*) getNumberForCallOut;
- (BOOL) isSystemCall;
- (BOOL) isGeneralEnabled;
- (BOOL) isCallInAppEnabled;
- (BOOL) isMaskingCallEnabled;
- (BOOL) isEnableAppToPhone;
- (BECallingState) lastCallingState;
- (void) saveCallingState:(BECallingState)state;
- (int) callTimeOut;
- (NSArray*) maskingNumber;
- (NSString*) getNumberMaskWithTrip:(NSString*)tripID withDriverPhoneNumber:(NSString*)driverPhoneNumber;
- (NSString*) readNumberMasking;
- (void) getCallConfigForEngagementID:(NSString*)engagementID driverID:(NSString*)driverId needStringeeToken:(BOOL)needStringeeToken completionHandler:(void(^)(id numberPhone, BOOL success))completionHandler;
- (void) putRememberCallOption:(NSString*)option completionHandler:(void(^)(BOOL success))completionHandler;
- (void) updateConfigMaskingCall:(id)responseObject driverID:(NSString*)driverId engagementID:(NSString*)engagementID;
- (void) connectToStringeeServer;
- (void) stopRingingWithMessage:(NSString *)message;
- (void) createCallFollowUserActivity:(NSUserActivity *)userActivity;
- (BOOL) makeMaskingCall;
- (BOOL) makeCallAppInApp;
- (void) checkMicrophonePermissions:(void (^)(BOOL allowed))completion;
- (void) configMicrophone:(void (^)(BOOL allowed))completion;
- (void) clearMaskingCall;
- (UIImage*) imageNamed:(NSString*)name;
@end
