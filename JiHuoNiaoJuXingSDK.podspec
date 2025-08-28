#
# Be sure to run `pod lib lint podTestOne.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'JiHuoNiaoJuXingSDK'
  s.version          = '0.0.1'
  s.summary          = 'An activation jihuoniaoJuXing AD'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  is a product provided by Alibaba Group
                       DESC

  s.homepage         = 'https://github.com/jihuoniao/JiHuoNiaoJuXingSDK-iOS'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'gjjggg' => '1271719322@qq.com' }
  s.source           = { :git => 'https://github.com/jihuoniao/JiHuoNiaoJuXingSDK-iOS.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  
  s.ios.deployment_target = '12.0'
  s.static_framework = true
  s.requires_arc    = true

  s.frameworks = [
  'Accelerate','AdSupport','AudioToolbox','AVFoundation','AVKit',
  'CoreData','CFNetwork','CoreFoundation','CoreGraphics','CoreMotion',
  'CoreTelephony','CoreText','CoreLocation','Foundation','ImageIO',
  'JavaScriptCore','MediaPlayer','MessageUI','QuickLook','SafariServices',
  'Security','StoreKit','UIKit','WebKit','SystemConfiguration',
  'QuartzCore','CoreServices','Photos','CoreMedia','MapKit','CoreImage','MobileCoreServices','AssetsLibrary'
]
s.weak_frameworks = [
  'AddressBook',     
  'SwiftUI',           
  'CoreHaptics',       
  'AppTrackingTransparency',
  'DeviceCheck',       
  'CoreML'             
]

  
  
  s.pod_target_xcconfig = {
     "VALID_ARCHS": "x86_64 armv7 armv7s arm64",
    'OTHER_LDFLAGS' => '-ObjC -lz -lsqlite3 -lc++'
   }



  
  s.libraries = 'bz2', 'c++', 'iconv', 'resolv.9', 'sqlite3', 'xml2', 'z', 'c++abi'
  
  s.resources  = ['SDK/**/*.bundle']
  

  s.source_files = 'JiHuoNiaoJuXingSDK/Classes/**/*.{h,m}'
  s.vendored_frameworks = 'SDK/jihuoniao_aggregation_ads.framework'

  
  s.dependency 'WechatOpenSDK'
  s.dependency 'TanxSDK'
  s.dependency 'Ads-CN/BUAdSDK'
  s.dependency 'Ads-CN/CSJMediation'
  s.dependency 'Ads-CN/BUAdLive-Framework'


  
  s.dependency 'BaiduMobAdSDK'
  s.dependency 'GDTMobSDK'
  s.dependency 'KSAdSDK'
  s.dependency 'BeiZiSDK-iOS/BeiZiSDK-iOS'
  s.dependency 'JADYun'



 


  
end
 

