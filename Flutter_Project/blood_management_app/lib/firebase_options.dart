// File generated by FlutterFire CLI.
// ignore_for_file: type=lint
import 'package:firebase_core/firebase_core.dart' show FirebaseOptions;
import 'package:flutter/foundation.dart'
    show defaultTargetPlatform, kIsWeb, TargetPlatform;

/// Default [FirebaseOptions] for use with your Firebase apps.
///
/// Example:
/// ```dart
/// import 'firebase_options.dart';
/// // ...
/// await Firebase.initializeApp(
///   options: DefaultFirebaseOptions.currentPlatform,
/// );
/// ```
class DefaultFirebaseOptions {
  static FirebaseOptions get currentPlatform {
    if (kIsWeb) {
      return web;
    }
    switch (defaultTargetPlatform) {
      case TargetPlatform.android:
        return android;
      case TargetPlatform.iOS:
        return ios;
      case TargetPlatform.macOS:
        return macos;
      case TargetPlatform.windows:
        return windows;
      case TargetPlatform.linux:
        throw UnsupportedError(
          'DefaultFirebaseOptions have not been configured for linux - '
          'you can reconfigure this by running the FlutterFire CLI again.',
        );
      default:
        throw UnsupportedError(
          'DefaultFirebaseOptions are not supported for this platform.',
        );
    }
  }

  static const FirebaseOptions web = FirebaseOptions(
    apiKey: 'AIzaSyCIVvpqw8lAMDmjVjviTVO4uCa62BGvsJo',
    appId: '1:454925533198:web:ff0b6b588f1b466facbc5f',
    messagingSenderId: '454925533198',
    projectId: 'bloodmanagementapp-b2314',
    authDomain: 'bloodmanagementapp-b2314.firebaseapp.com',
    storageBucket: 'bloodmanagementapp-b2314.appspot.com',
  );

  static const FirebaseOptions android = FirebaseOptions(
    apiKey: 'AIzaSyD3xTQy9bS6xyQP5GvM-JliG5tFpQdtEsc',
    appId: '1:454925533198:android:0d82812335157dfbacbc5f',
    messagingSenderId: '454925533198',
    projectId: 'bloodmanagementapp-b2314',
    storageBucket: 'bloodmanagementapp-b2314.appspot.com',
  );

  static const FirebaseOptions ios = FirebaseOptions(
    apiKey: 'AIzaSyCArJSdjnJXZK3ok-fOX6y5pMc4XU1wwZ8',
    appId: '1:454925533198:ios:b562fc5cd70a7a4dacbc5f',
    messagingSenderId: '454925533198',
    projectId: 'bloodmanagementapp-b2314',
    storageBucket: 'bloodmanagementapp-b2314.appspot.com',
    iosBundleId: 'com.example.bloodManagementApp',
  );

  static const FirebaseOptions macos = FirebaseOptions(
    apiKey: 'AIzaSyCArJSdjnJXZK3ok-fOX6y5pMc4XU1wwZ8',
    appId: '1:454925533198:ios:b562fc5cd70a7a4dacbc5f',
    messagingSenderId: '454925533198',
    projectId: 'bloodmanagementapp-b2314',
    storageBucket: 'bloodmanagementapp-b2314.appspot.com',
    iosBundleId: 'com.example.bloodManagementApp',
  );

  static const FirebaseOptions windows = FirebaseOptions(
    apiKey: 'AIzaSyCIVvpqw8lAMDmjVjviTVO4uCa62BGvsJo',
    appId: '1:454925533198:web:1b3dc2f57840e18cacbc5f',
    messagingSenderId: '454925533198',
    projectId: 'bloodmanagementapp-b2314',
    authDomain: 'bloodmanagementapp-b2314.firebaseapp.com',
    storageBucket: 'bloodmanagementapp-b2314.appspot.com',
  );
}
