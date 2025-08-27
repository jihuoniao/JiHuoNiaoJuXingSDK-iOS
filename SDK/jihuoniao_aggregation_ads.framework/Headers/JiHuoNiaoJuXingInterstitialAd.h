//
//  JiHuoNiaoInterstitialAd.h
//  JIHuoNiaoAdSDK
//
//  Created by ooo on 2024/9/13.
//

#import <Foundation/Foundation.h>
#import <jihuoniao_aggregation_ads/JiHuoNiaoServerBiddingResultModel.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class JiHuoNiaoJuXingInterstitialAd;
@protocol JiHuoNiaoJuXingInterstitialAdDelegate <NSObject>
@optional

/**
 插⼴告错误
 */
- (void)JiHuoNiaoJuXingInterstitialAdFailWithCode:(NSInteger)code TipStr:(NSString *)tipStr ErrorMessage:(NSString *)errorMessage;
/**
 插屏⼴告网络请求成功
 */
- (void)JiHuoNiaoJuXingInterstitialAdLoadSuccess:(JiHuoNiaoJuXingInterstitialAd *)jiHuoNiaoInterstitial;
/**
 插屏⼴告
 */
- (void)JiHuoNiaoJuXingInterstitialAdRenderSuccess;

/**
 插屏⼴告点击
 */
- (void)JiHuoNiaoJuXingInterstitialAdDidClick;

/**
 插屏⼴告关闭
 */
- (void)JiHuoNiaoJuXingInterstitialAdDidClose;

@end

@interface JiHuoNiaoJuXingInterstitialAd : NSObject

@property(nonatomic,weak) id<JiHuoNiaoJuXingInterstitialAdDelegate> delegate;
/*
 广告位id

 **/
- (instancetype)initWithJihuoniaoHZADSiteID:(NSString *)slotID;

/*
 加载成功后直接显示
 */
- (void)jiHuoNiaoHZLoadAd:(UIViewController *)viewController;

/*
 加载广告
 */
- (void)jiHuoNiaoHZOnlyLoad;

/*
 显示
 */
- (void)jiHuoNiaoHZOnlyShow:(UIViewController *)viewController;

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
