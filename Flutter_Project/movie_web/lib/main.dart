import 'package:flutter/material.dart';
import 'package:go_router/go_router.dart';
import './home.dart';

void main() {
  runApp(MyApp());
}

final GoRouter _router = GoRouter(routes: [
  GoRoute(
    path: '/',
    builder: (context, state) {
      return const HomePage();
    },
  )
]);

class MyApp extends StatelessWidget {
  MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp.router(
      title: 'TMDB Movie Web App',
      theme: ThemeData.dark(),
      routerConfig: _router,
    );
  }
}
