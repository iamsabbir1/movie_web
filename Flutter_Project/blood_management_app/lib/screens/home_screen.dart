import 'package:blood_management_app/background/background.dart';
import 'package:flutter/material.dart';

class HomeScreen extends StatefulWidget {
  const HomeScreen({super.key});

  @override
  State<HomeScreen> createState() {
    return _HomeScreenState();
  }
}

class _HomeScreenState extends State<HomeScreen> {
  @override
  Widget build(BuildContext context) {
    return Stack(
      children: [
        // CustomPaint(
        //   size: const Size(500, 500),
        //   painter: CustomBackground(),
        // ),
        ListView(
          children: [
            Card(
              elevation: 4.0, // Adjust the elevation as needed
              child: Container(
                width: 300, // Adjust the width as needed
                height: 150, // Adjust the height as needed
                padding: const EdgeInsets.all(16.0), // Adjust padding as needed
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.center,
                  children: [
                    Text(
                      'Welcome to Blood Management App',
                      textAlign: TextAlign.center,
                      style: Theme.of(context).textTheme.bodyLarge,
                    ),
                    const SizedBox(height: 10), // Space between text and button
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
                padding: const EdgeInsets.all(16.0), // Adjust padding as needed
                child: GridView.builder(
                  shrinkWrap:
                      true, // Use it to make GridView take minimum space
                  physics:
                      const NeverScrollableScrollPhysics(), // Disables GridView scrolling
                  gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
                    crossAxisCount: 2, // Number of columns
                    crossAxisSpacing: 10, // Space between columns
                    mainAxisSpacing: 10, // Space between rows
                    childAspectRatio: 3 / 2, // Aspect ratio of each item
                  ),
                  itemCount: 4, // Number of items in the grid, adjust as needed
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
    );
  }
}
