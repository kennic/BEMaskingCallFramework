Pod::Spec.new do |spec|

spec.name         = "BeMaskingCall"
spec.version      = "1.6"
spec.summary      = "BEMaskingCall for be"
spec.description  = "This is frameWork allows you to make a voip call"
spec.homepage     = "https://github.com/kennic/BEMaskingCallFramework.git"
spec.license      = { :type => "MIT", :text => "The MIT License (MIT) \n Copyright (c) uncleliz <dinhmanhvp@gmail.com> \n Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files" }
spec.author       = { "uncleliz" => "dinhmanhvp@gmail.com" }
spec.source       = { :git => "https://github.com/kennic/BEMaskingCallFramework.git", :branch => 'master', :tag => spec.version }
spec.ios.vendored_frameworks   = 'BeMaskingCall.framework'
spec.ios.deployment_target = '10.0'
spec.ios.dependency "AFNetworking"
spec.ios.dependency "Stringee"
#spec.static_framework = true

end
