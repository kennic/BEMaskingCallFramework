//
//  BEMaskingCallConfiguration.h
//  MaskingCall
//
//  Created by manh.le on 5/24/19.
//  Copyright © 2019 manh.le. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;

NS_ASSUME_NONNULL_BEGIN

@interface BEMaskingCallConfiguration : NSObject
	@property UIColor *textColor;
	@property UIColor *backgroundColor;
	@property UIImage *backgroundImage;
    @property BOOL enableVisualBackground;
    @property UIImage *avatarImage;
    @property UIColor *avatarShadowColor;
	@property UIImage *speakerOnButtonImage;
	@property UIImage *speakerOffButtonImage;
    @property UIImage *speakerOnIconImage;
    @property UIImage *speakerOffIconImage;
	@property UIImage *muteOnButtonImage;
	@property UIImage *muteOffButtonImage;
    @property UIImage *muteOnIconImage;
    @property UIImage *muteOffIconImage;
	@property UIImage *acceptButtonImage;
	@property UIImage *declineButtonImage;
	@property UIImage *endCallButtonImage;

	@property NSString *connectingText; // Đang kết nối...
	@property NSString *callingText; // Đang gọi ...
	@property NSString *ringingText; // Đang đổ chuông...
	@property NSString *incomingCallText; // %@ Đang gọi đến ...
	@property NSString *unsuccessfulText; // Cuộc gọi không thành công
	@property NSString *noConnectionText; // Không có kết nối mạng
	@property NSString *busyText; // Số máy bận
	@property NSString *endCallText; // Kết thúc cuộc gọi
	@property NSString *missedCallText; // Bạn đã bỏ lỡ cuộc gọi từ %@
	@property NSString *receivedByOtherText; // Cuộc gọi đã được nhận ở thiết bị khác
    @property NSString *receiverNotAccepted; // Người nhận không bắt máy
    @property NSString *speakerText; // Loa ngoài
    @property NSString *muteText; // Tắt tiếng

	@property NSString *strLabelTitle;
	@property NSString *strTracking_Receive_Call_Tap_Speaker;
	@property NSString *strTracking_Call_Tap_Speaker;
	@property NSString *strTracking_Receive_Call_Tap_Mute;
	@property NSString *strTracking_Call_Tap_Mute;
	@property NSString *strTracking_Receive_Call_Tap_End;
	@property NSString *strTracking_Call_Tap_End;

    @property NSString *strAlertChooseMaskingTitle;
    @property NSString *strAlertChooseMaskingDesc;
    @property NSString *strAlertChooseMaskingMaskingNumberText;
    @property NSString *strAlertChooseMaskingRealNumberText;
    @property NSString *strAlertChooseMaskingRememberDesc;

- (void) initDefaultValues:(BOOL) forDriver;
	
@end

NS_ASSUME_NONNULL_END
