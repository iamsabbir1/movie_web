import 'package:flutter/material.dart';

class CustomDrawer extends StatelessWidget {
  const CustomDrawer({super.key});
  @override
  Widget build(BuildContext context) {
    return Drawer(
      child: Padding(
        padding: const EdgeInsets.symmetric(vertical: 32.0),
        child: Column(
          children: [
            TextButton(
              onPressed: () {},
              child: Padding(
                padding: const EdgeInsets.symmetric(
                  horizontal: 16.0,
                ),
                child: Text(
                  'Home',
                  style: TextStyle(
                    fontWeight: FontWeight.bold,
                    color: Color(
                      0xFFE2B616,
                    ),
                  ),
                ),
              ),
            ),
            const SizedBox(height: 16.0),
            TextButton(
              onPressed: () {},
              child: Padding(
                padding: const EdgeInsets.symmetric(
                  horizontal: 16.0,
                ),
                child: Text(
                  'Movie',
                  style: TextStyle(
                    fontWeight: FontWeight.bold,
                    color: Color(
                      0xFFE2B616,
                    ),
                  ),
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }
}
