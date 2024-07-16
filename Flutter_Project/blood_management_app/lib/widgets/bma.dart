import 'package:blood_management_app/background/background.dart';
import 'package:blood_management_app/widgets/login.dart';
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
          PopupMenuButton(
            onSelected: (value) {
              print("Selected: $value");
              // Add your menu action here
              if (value == 2) {
                Navigator.of(context).pushReplacement(
                  MaterialPageRoute(
                    builder: (context) => const Login(),
                  ),
                );
              }
            },
            itemBuilder: (context) {
              return const [
                PopupMenuItem(
                  value: 1,
                  child: Text('Settings'),
                ),
                PopupMenuItem(
                  value: 2,
                  child: Text('Logout'),
                ),
              ];
            },
          )
        ],
        backgroundColor: Theme.of(context).colorScheme.primary,
        title: Text(
          'Blood Management App',
          style: Theme.of(context).textTheme.titleLarge!.copyWith(
                color: Colors.white,
              ),
        ),
      ),
      body: (_selectedIndex == 0)
          ? Stack(
              children: [
                CustomPaint(
                  size: const Size(500, 500),
                  painter: CustomBackground(),
                ),
                ListView(
                  children: [
                    Card(
                      elevation: 4.0, // Adjust the elevation as needed
                      child: Container(
                        width: 300, // Adjust the width as needed
                        height: 150, // Adjust the height as needed
                        padding: const EdgeInsets.all(
                            16.0), // Adjust padding as needed
                        child: Column(
                          mainAxisAlignment: MainAxisAlignment.center,
                          children: [
                            Text(
                              'Welcome to Blood Management App',
                              textAlign: TextAlign.center,
                              style: Theme.of(context).textTheme.bodyLarge,
                            ),
                            const SizedBox(
                                height: 10), // Space between text and button
                            ElevatedButton(
                              onPressed: () {
                                // Add your button action here
                              },
                              child: const Text('Get Started'),
                            ),
                          ],
                        ),
                      ),
                    ),
                    Card(
                      elevation: 4.0, // Adjust the elevation as needed
                      child: Container(
                        padding:
                            EdgeInsets.all(16.0), // Adjust padding as needed
                        child: GridView.builder(
                          shrinkWrap:
                              true, // Use it to make GridView take minimum space
                          physics:
                              NeverScrollableScrollPhysics(), // Disables GridView scrolling
                          gridDelegate:
                              SliverGridDelegateWithFixedCrossAxisCount(
                            crossAxisCount: 2, // Number of columns
                            crossAxisSpacing: 10, // Space between columns
                            mainAxisSpacing: 10, // Space between rows
                            childAspectRatio:
                                3 / 2, // Aspect ratio of each item
                          ),
                          itemCount:
                              4, // Number of items in the grid, adjust as needed
                          itemBuilder: (BuildContext context, int index) {
                            return Container(
                              alignment: Alignment.center,
                              decoration: BoxDecoration(
                                color: Colors
                                    .blue, // Background color of each item, adjust as needed
                                borderRadius:
                                    BorderRadius.circular(8), // Rounded corners
                              ),
                              child: Text(
                                'Item ${index + 1}',
                                style: const TextStyle(
                                  color: Colors.white, // Text color
                                ),
                              ),
                            );
                          },
                        ),
                      ),
                    ),
                  ],
                ),
              ],
            )
          : Center(
              child: Text('Page ${_selectedIndex + 1}'),
            ),
      bottomNavigationBar: BottomNavigationBar(
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
            icon: Icon(Icons.person),
            label: 'Profile',
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
