# Uncomment the next line to define a global platform for your project
platform :ios, '17.2'

target 'agc-test' do
  # Comment the next line if you don't want to use dynamic frameworks
  use_frameworks!

  # Pods for agc-test
  pod 'AGConnectCore','~> 1.9.0.301'
  pod 'AGConnectDatabase', '~>1.9.0.301'

end

post_install do |installer|
  installer.pods_project.targets.each do |target|
    if target.name == "Protobuf-C++"
      target.build_configurations.each do |config|
        config.build_settings['HEADER_SEARCH_PATHS'] = '$(SRCROOT)/Protobuf-C++/src'
      end
    end

    target.build_configurations.each do |config|
      config.build_settings["IPHONEOS_DEPLOYMENT_TARGET"] = "17.2"
      config.build_settings["EXCLUDED_ARCHS[sdk=iphonesimulator*]"] = "arm64"
    end
  end
end
