import 'package:blood_management_app/background/background.dart';
import 'package:blood_management_app/screens/blood_req.dart';
import 'package:blood_management_app/screens/chats.dart';
import 'package:blood_management_app/screens/home_screen.dart';
import 'package:blood_management_app/screens/profile.dart';
import 'package:blood_management_app/widgets/login.dart';
import 'package:blood_management_app/widgets/settings.dart';
import 'package:flutter/material.dart';

class BloodManagementApp extends StatefulWidget {
  const BloodManagementApp({super.key});

  @override
  State<BloodManagementApp> createState() {
    return _BloodManagementAppState();
  }
}

class _BloodManagementAppState extends State<BloodManagementApp> {
  int _selectedIndex = 0;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        iconTheme: const IconThemeData(color: Colors.white),
        actions: [
          if (_selectedIndex == 3)
            IconButton(
              icon: const Icon(Icons.search),
              onPressed: () {},
            ),
          PopupMenuButton(
            onSelected: (value) {
              if (value == 2) {
                Navigator.of(context).pushReplacement(
                  MaterialPageRoute(
                    builder: (context) => const Login(),
                  ),
                );
              }

              if (value == 1) {
                Navigator.of(context).push(
                    MaterialPageRoute(builder: (context) => const Settings()));
              }
            },
            itemBuilder: (context) {
              return [
                const PopupMenuItem(
                  value: 1,
                  child: Text('Settings'),
                ),
                if (_selectedIndex == 0)
                  const PopupMenuItem(
                    value: 3,
                    child: Text('Logout'),
                  ),
              ];
            },
          )
        ],
        backgroundColor: Theme.of(context).colorScheme.primary,
        title: Text(
          _selectedIndex == 0
              ? 'Blood Management App'
              : _selectedIndex == 1
                  ? 'Blood Request'
                  : 'Chats',
          style: Theme.of(context).textTheme.titleLarge!.copyWith(
                color: Colors.white,
              ),
        ),
      ),
      body: _selectedIndex == 0
          ? const HomeScreen()
          : _selectedIndex == 1
              ? const RequestScreen()
              : const ChatsScreen(),
      bottomNavigationBar: BottomNavigationBar(
        unselectedItemColor: Colors.white,
        selectedLabelStyle: const TextStyle(
          color: Colors.white,
        ),
        items: const [
          BottomNavigationBarItem(
            icon: Icon(Icons.home),
            label: 'Home',
          ),
          BottomNavigationBarItem(
            icon: Icon(Icons.bloodtype),
            label: 'Request',
          ),
          BottomNavigationBarItem(
            icon: Icon(Icons.message_rounded),
            label: 'Chats',
          ),
        ],
        currentIndex: _selectedIndex,
        onTap: (index) {
          // Handle bottom navigation item tap
          setState(() {
            _selectedIndex = index;
          });
        },
      ),
    );
  }
}
