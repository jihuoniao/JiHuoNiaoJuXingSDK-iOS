//
//  JiHuoNiaoRewardAd.h
//  JIHuoNiaoAdSDK
//
//  Created by ooo on 2024/9/12.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <jihuoniao_aggregation_ads/JiHuoNiaoServerBiddingResultModel.h>

NS_ASSUME_NONNULL_BEGIN

@class JiHuoNiaoJuXingRewardAd;
@protocol JiHuoNiaoJuXingRewardAdDelegate <NSObject>

@optional

/**
激励视频⼴告网络加载成功
*/
- (void)JiHuoNiaoJuXingRewardedVideoAdDidLoad:(JiHuoNiaoJuXingRewardAd *)jiHuoNiaoRewardAd;
/**
激励视频⼴告
*/
- (void)JiHuoNiaoJuXingRewardedVideoAdViewRenderSuccess;
/**
激励视频⼴告点击
*/
- (void)JiHuoNiaoJuXingRewardedVideoAdDidClick;
/**
激励视频⼴告关闭
*/
- (void)JiHuoNiaoJuXingRewardedVideoAdDidClose;

 /**
 激励视频⼴告错误
 */

- (void)JiHuoNiaoJuXingRewardedVideoAdFailWithCode:(NSInteger)code TipStr:(NSString *)tipStr ErrorMessage:(NSString *)errorMessage;

/**
 激励视频⼴告奖励
 */
- (void)JiHuoNiaoJuXingRewardedVideoAdHasReward;

@end

@interface JiHuoNiaoJuXingRewardAd : NSObject

@property(nonatomic,weak) id<JiHuoNiaoJuXingRewardAdDelegate> delegate;
//媒体用户id
@property(nonatomic,strong) NSString * jiHuoNiao_user_id;
//媒体用户扩展信息可选json
@property(nonatomic,strong) NSString * jiHuoNiao_user_extra;



- (instancetype)initWithJihuoniaoHZADSiteID:(NSString *)slotID;

//加载并显示
- (void)jiHuoNiaoHZLoadShowRewardAd:(UIViewController *)viewController;
//仅加载
- (void)jiHuoNiaoHZLoadRewardAd;
//显示
- (void)jiHuoNiaoHZShowRewardAd:(UIViewController *)viewController;

/**
 返回广告的eCPM，单位：分
 
 @return 成功返回一个大于等于0的值，-1表示无权限或后台出现异常

 竞价价格
 */
- (NSInteger)jiHuoNiaoHZGetEcpm;
/*
 竞价成功 或失败
 */
-(void)jiHuoNiaoEcpmWinSucessOrFailed:(JiHuoNiaoServerBiddingResultModel *)jihuoNiaoResultModel;
@end

NS_ASSUME_NONNULL_END
