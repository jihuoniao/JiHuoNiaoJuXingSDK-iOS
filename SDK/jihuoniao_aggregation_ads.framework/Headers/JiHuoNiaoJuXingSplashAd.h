//
//  TYKSplashAd.h
//  JIHuoNiaoAdSDK
//
//  Created by ooo on 2024/9/5.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <jihuoniao_aggregation_ads/JiHuoNiaoServerBiddingResultModel.h>


NS_ASSUME_NONNULL_BEGIN
@class JiHuoNiaoJuXingSplashAd;
@protocol JiHuoNiaoJuXingSplashAdDelegate <NSObject>
/**
 开屏⼴告
 */
- (void)JiHuoNiaoJuXingSplashViewRenderSuccess;
/**
 开屏⼴告点击
 */
- (void)JiHuoNiaoJuXingSplashViewDidClick;
/**
 开屏⼴告关闭
 */
- (void)JiHuoNiaoJuXingSplashViewDidClose;

/**
 开屏网络请求成功
 */
- (void)JiHuoNiaoJuXingSplashViewLoadSuccess:(JiHuoNiaoJuXingSplashAd *)jiHuoNiaoSplashAd;

/**
 开屏网络请求错误
 */
- (void)JiHuoNiaoJuXingSplashViewFailWithCode:(NSInteger)code TipStr:(NSString *)tipStr ErrorMessage:(NSString *)errorMessage;

@end

@interface JiHuoNiaoJuXingSplashAd : NSObject

@property(nonatomic,weak) id<JiHuoNiaoJuXingSplashAdDelegate> delegate;
/*
 广告位id

 **/
- (instancetype)initWithJihuoniaoHZADSiteID:(NSString *)slotID;
/*
 如果需要设置logo则调用，非必需
 **/
- (void)setJiHuoNiaoHZLogoBottom:(UIView *)logoBottom;

/*
 加载成功后直接显示
 */
- (void)jiHuoNiaoHZLoadAd:(UIWindow *)window withVC:(UIViewController *)rootVC;

/*
 加载广告
 */
- (void)jiHuoNiaoHZOnlyLoad;

/*
 显示
 */
- (void)jiHuoNiaoHZOnlyShow:(UIWindow *)window withVC:(UIViewController *)rootVC;
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
