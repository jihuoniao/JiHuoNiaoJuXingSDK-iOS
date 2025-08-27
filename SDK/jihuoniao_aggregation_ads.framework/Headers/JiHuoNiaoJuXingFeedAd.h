//
//  JiHuoNiaoJuXingFeedAd.h
//  jihuoniao_target_ads
//
//  Created by ooo on 2024/9/14.
//

#import <Foundation/Foundation.h>
#import <jihuoniao_aggregation_ads/JiHuoNiaoJuXingFeedModel.h>
#import <jihuoniao_aggregation_ads/JiHuoNiaoServerBiddingResultModel.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JiHuoNiaoJuXingFeedAdDelegate <NSObject>

@optional

/**
 信息流⼴告加载成功 返回View
 */
//- (void)JiHuoNiaoJuXingFeedAdDidLoadView:(NSArray *)feedDataArray;
-(void)JiHuoNiaoJuXingFeedAdDidLoadView:(NSArray<JiHuoNiaoJuXingFeedModel *> *)adList;

/**
 信息流视频⼴告错误
 */
- (void)JiHuoNiaoJuXingFeedAdFailWithCode:(NSInteger)code TipStr:(NSString *)tipStr ErrorMessage:(NSString *)errorMessage;

/**
 信息流⼴告渲染成功
 */
- (void)JiHuoNiaoJuXingFeedAdViewRenderSuccess;

/**
 信息流⼴告曝光
 */
- (void)JiHuoNiaoJuXingFeedAdViewExposure;

/**
 信息流⼴告关闭
 */
- (void)JiHuoNiaoJuXingFeedAdDidClose:(id)feedAd;

/**
 信息流⼴告点击
 */
- (void)JiHuoNiaoJuXingFeedAdDidClick;

@end

@interface JiHuoNiaoJuXingFeedAd : NSObject

@property(nonatomic,weak) id<JiHuoNiaoJuXingFeedAdDelegate> delegate;

//自动播放时，是否静音。默认 YES(静音)。loadAd前设置。（转为后台播放）
@property (nonatomic, assign) BOOL jiHuoNiao_videoMuted;


- (instancetype)initWithJihuoniaoHZADSiteID:(NSString *)slotID Size:(CGSize)size;
- (void)jihuoniaoHZLoadAdWithCount:(NSInteger)count;
/*
 竞价成功 或失败
 */
-(void)jiHuoNiaoEcpmWinSucessOrFailed:(JiHuoNiaoServerBiddingResultModel *)jihuoNiaoResultModel;
@end

NS_ASSUME_NONNULL_END
