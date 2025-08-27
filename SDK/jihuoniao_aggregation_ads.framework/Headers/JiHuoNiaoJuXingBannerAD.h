//
//  JiHuoNiaoJuXingBannerAD.h
//  jihuoniao.aggregation.ads
//
//  Created by ooo on 2024/12/30.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <jihuoniao_aggregation_ads/JiHuoNiaoServerBiddingResultModel.h>

NS_ASSUME_NONNULL_BEGIN
@class JiHuoNiaoJuXingBannerAD;
@protocol JiHuoNiaoJuXingBannerADDelegate <NSObject>

@optional
/**
 Banner⼴告加载成功
 */
-(void)JiHuoNiaoJuXingBannerADLoadSuccess:(JiHuoNiaoJuXingBannerAD *)jiHuoNiaoBannerAD;

/**
 Banner视频⼴告错误
 */
- (void)JiHuoNiaoJuXingBannerADFailWithCode:(NSInteger)code TipStr:(NSString *)tipStr ErrorMessage:(NSString *)errorMessage;

/**
 Banner⼴告渲染成功
 */
- (void)JiHuoNiaoJuXingBannerADViewRenderSuccess;
/**
 Banner⼴告点击
 */
- (void)JiHuoNiaoJuXingBannerADDidClick;
/**
  广告视图被移除
 */
- (void)JiHuoNiaoJuXingBannerADDidRemoved:(UIView *)bannerView;

@end

@interface JiHuoNiaoJuXingBannerAD : UIView

@property(nonatomic,weak) id<JiHuoNiaoJuXingBannerADDelegate> delegate;
/*
 广告位id

 **/
- (instancetype)initWithJihuoniaoHZADSiteID:(NSString *)slotID
                         rootViewController:(UIViewController *)rootViewController
                                    adWidth:(CGFloat)adWidth;

/*
 加载成功后直接显示
 */
- (void)jiHuoNiaoHZLoadAd;

/*
 加载广告
 */
- (void)jiHuoNiaoHZOnlyLoad;

/*
 显示
 */
- (void)jiHuoNiaoHZOnlyShow;

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
