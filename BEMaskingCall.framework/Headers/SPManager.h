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
#import "BeCustomerInfoModel.h"
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

@protocol SPManagerDelegate <NSObject>

- (void) showAlertViewGoingOutTimeoutEngagementID:(NSString*)engagementID;
- (void) willPresentCallingViewController:(CallingViewController*)vc animated:(BOOL)animated;
- (void) didEndCalling;

@end

@interface SPManager : NSObject

+ (SPManager *)instance;
@property (nonatomic, weak) id<SPManagerDelegate> delegate;
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

@property (strong, nonatomic) BeCustomerInfoModel *customerInfo;
@property (strong, nonatomic) RideInfoModel *rideInfo;

@property (nonatomic, strong) NSString *baseURLString;
@property (nonatomic, strong) NSString *subUrlString;
@property (strong, nonatomic) BEMaskingCallConfiguration *configuration;
@property (assign, nonatomic) BOOL isDriver;
@property (nonatomic, strong) UIViewController *presentViewController;
@property (strong, nonatomic) CallingViewController *callingViewController;

- (NSString*) getNumberForCallOut;
- (BOOL) isSystemCall;
- (BOOL) isGeneralEnabled;
- (BOOL) isCallInAppEnabled;
- (BOOL) isMaskingCallEnabled;
- (int) callTimeOut;
- (NSArray*) maskingNumber;
- (NSString*) getNumberMaskWithTrip:(NSString*)tripID withDriverPhoneNumber:(NSString*)driverPhoneNumber;
- (void) fetchMaskingNumberDriverID:(NSString*)driverId engagementID:(NSString*)engagementID needStringeeToken:(BOOL)needStringeeToken completionHandler:(void(^)(id numberPhone, BOOL success))completionHandler;
- (void) updateConfigMaskingCall:(id)responseObject driverID:(NSString*)driverId engagementID:(NSString*)engagementID;
- (void) connectToStringeeServer;
- (void) stopRingingWithMessage:(NSString *)message;
- (void) createCallFollowUserActivity:(NSUserActivity *)userActivity;
- (BOOL) makeMaskingCall;
- (void) checkMicrophonePermissions:(void (^)(BOOL allowed))completion;
- (void) configMicrophone:(void (^)(BOOL allowed))completion;
- (void) clearMaskingCall;
@end
