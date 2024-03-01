#
# Be sure to run `pod lib lint simplePod.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'simplePod'
  s.version          = '0.0.3'
  s.summary          = 'This description is used to generate tags and improve search results.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = 'This description is used to generate tags and improve search results.  CocoaPods strips it!'

  s.homepage         = 'https://github.com/Vuongdoan12/simplePod.git'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'vinhtranSmartDev' => 'thegioi9x0000@gmail.com' }
  s.source           = { :git => 'https://github.com/Vuongdoan12/simplePod.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '12.0'

  s.source_files = 'Classes/**/*'
  s.swift_version = '5.0'

  s.preserve_paths = 'Classes/Sources/geos/**/*'
  s.source_files = 'Classes/Sources/geos/{src,capi,public}/**/*'
  s.public_header_files = 'Classes/Sources/geos/public/**/*'
  s.user_target_xcconfig = {
    'GCC_PREPROCESSOR_DEFINITIONS' => 'GEOS_USE_ONLY_R_API',
    'CLANG_WARN_DOCUMENTATION_COMMENTS' => 'NO',
  }
  s.pod_target_xcconfig = {
    'HEADER_SEARCH_PATHS' => '${PODS_TARGET_SRCROOT}/Classes/Sources/geos/include ${PODS_TARGET_SRCROOT}/Classes/Sources/geos/public ${PODS_TARGET_SRCROOT}/Classes/Sources/geos/src/deps',
    'GCC_PREPROCESSOR_DEFINITIONS' => 'USE_UNSTABLE_GEOS_CPP_API NDEBUG',
    'CLANG_WARN_DOCUMENTATION_COMMENTS' => 'NO',
    'CLANG_WARN_UNREACHABLE_CODE' => 'NO',
    'GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS' => 'NO',
  }
end
