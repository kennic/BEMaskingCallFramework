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
	@property UIImage *speakerOnButtonImage;
	@property UIImage *speakerOffButtonImage;
	@property UIImage *muteOnButtonImage;
	@property UIImage *muteOffButtonImage;
	@property UIImage *acceptButtonImage;
	@property UIImage *declineButtonImage;
	@property UIImage *endCallButtonImage;
	
	@property NSString *callingText; // Đang gọi ...
	@property NSString *incomingCallText; // %@ Đang gọi đến ...
	@property NSString *unsuccessfulText; // Cuộc gọi không thành công
	@property NSString *noConnectionText; // Không có kết nối mạng
	
	@property NSString *strLabelTitle;
	@property NSString *strTracking_Receive_Call_Tap_Speaker;
	@property NSString *strTracking_Call_Tap_Speaker;
	@property NSString *strTracking_Receive_Call_Tap_Mute;
	@property NSString *strTracking_Call_Tap_Mute;
	@property NSString *strTracking_Receive_Call_Tap_End;
	@property NSString *strTracking_Call_Tap_End;
	
- (void) initDefaultValues:(BOOL) forDriver;
	
@end

NS_ASSUME_NONNULL_END
