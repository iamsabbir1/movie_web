import 'package:blood_management_app/widgets/login.dart';
import 'package:flutter/material.dart';
import 'package:google_fonts/google_fonts.dart';

void main() {
  runApp(const MyApp());
}

final kColorScheme = ColorScheme.fromSeed(
  seedColor: const Color.fromARGB(255, 245, 0, 0),
  primary: const Color.fromARGB(255, 245, 0, 0),
  secondary: const Color.fromARGB(153, 188, 45, 45),
  surface: const Color.fromARGB(255, 215, 20, 20),
);

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        colorScheme: kColorScheme,
        textTheme: GoogleFonts.openSansTextTheme(),
        primaryColor: kColorScheme.primary,
      ),
      darkTheme: ThemeData.dark().copyWith(
        colorScheme: kColorScheme,
        textTheme: GoogleFonts.openSansTextTheme(),
        primaryColor: kColorScheme.primary, //here is primary color
      ),
      home: const Login(),
    );
  }
}