import 'package:blood_management_app/background/home_background.dart';
import 'package:blood_management_app/widgets/bma.dart';
import 'package:blood_management_app/widgets/forgot_password.dart';
import 'package:blood_management_app/widgets/signup.dart';
import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';

class Login extends StatefulWidget {
  const Login({super.key});

  @override
  State<Login> createState() {
    return _LoginState();
  }
}

class _LoginState extends State<Login> {
  String _email = '';
  String _password = '';
  final _formKey = GlobalKey<FormState>();

  @override
  Widget build(BuildContext context) {
    final width = MediaQuery.of(context).size.width;
    final height = MediaQuery.of(context).size.height;

    print(width);
    print(height);

    return Scaffold(
      body: SingleChildScrollView(
        child: Stack(
          children: [
            CustomPaint(
              size: Size(MediaQuery.of(context).size.width,
                  MediaQuery.of(context).size.height),
              painter: HomeBackground(),
            ),
            Positioned(
              top:
                  60, // Adjust based on your layout, slightly below "Welcome back"
              left: 20,
              child: Text(
                'Login',
                style: Theme.of(context).textTheme.titleLarge!.copyWith(
                      fontWeight: FontWeight.bold,
                      fontSize: 30,
                      color: Colors.white,
                    ),
              ),
            ),
            Positioned(
              top: 100, // Adjust based on your layout
              left: 20,
              child: Text(
                'Welcome back',
                style: Theme.of(context).textTheme.titleMedium!.copyWith(
                      fontWeight: FontWeight.bold,
                      fontSize: 20,
                      color: Colors.white,
                    ),
              ),
            ),
            Positioned(
              top: 220, // Adjust based on your layout
              left: 20,
              right: 20,
              child: Container(
                padding: const EdgeInsets.all(20),
                child: Column(
                  children: [
                    Form(
                        key: _formKey,
                        child: Column(
                          children: [
                            TextFormField(
                              validator: (value) {
                                // Validate email input
                                if (value!.isEmpty) {
                                  return 'Please enter your email';
                                }
                                return null;
                              },
                              onSaved: (value) {
                                // Handle email input
                                setState(() {
                                  _email = value!;
                                });
                              },
                              decoration: InputDecoration(
                                labelText: 'Email',
                                fillColor: Colors.white,
                                filled: true,
                                border: OutlineInputBorder(
                                  borderRadius: BorderRadius.circular(8),
                                ),
                              ),
                              keyboardType: TextInputType.emailAddress,
                            ),
                            const SizedBox(
                                height: 20), // Spacing between fields
                            TextFormField(
                              validator: (value) {
                                // Validate password input
                                if (value!.isEmpty) {
                                  return 'Please enter your password';
                                }
                                return null;
                              },
                              onSaved: (value) {
                                // Handle password input
                                setState(() {
                                  _password = value!;
                                });
                              },
                              decoration: InputDecoration(
                                labelText: 'Password',
                                fillColor: Colors.white,
                                filled: true,
                                border: OutlineInputBorder(
                                  borderRadius: BorderRadius.circular(8),
                                ),
                              ),
                              obscureText: true, // Hide password input
                            ),
                          ],
                        )),
                    const SizedBox(height: 30), // Spacing before the button
                    GestureDetector(
                      onTap: () {
                        // Handle forgot password
                        Navigator.of(context).push(
                          MaterialPageRoute(
                            builder: (context) => const ForgotPassword(),
                          ),
                        );
                      },
                      child: const Text(
                        'Forgot password?',
                      ),
                    ),
                    const SizedBox(height: 20), // Spacing before the button
                    ElevatedButton(
                      onPressed: () {
                        if (_formKey.currentState!.validate()) {
                          _formKey.currentState!.save();
                        }
                        // Handle sign in
                        print('Email: $_email');
                        print('Password: $_password');
                        // Navigator.of(context).pushReplacement(
                        //   MaterialPageRoute(
                        //     builder: (context) => const BloodManagementApp(),
                        //   ),
                        // );
                      },
                      style: ElevatedButton.styleFrom(
                        minimumSize:
                            const Size(double.infinity, 50), // Button size
                        elevation: 5,
                      ),
                      child: const Text('Sign In'),
                    ),
                    const SizedBox(height: 20), // Spacing before the button
                    const Text('Don\'t have an account?'),
                    const SizedBox(height: 20), // Spacing before the button
                    ElevatedButton(
                      onPressed: () {
                        // Handle sign up
                        Navigator.of(context).push(
                          MaterialPageRoute(
                            builder: (context) => const SignUp(),
                          ),
                        );
                      },
                      style: ElevatedButton.styleFrom(
                        minimumSize:
                            const Size(double.infinity, 50), // Button size
                        backgroundColor: Colors.red[200],
                      ),
                      child: const Text('Sign Up'),
                    ),
                    const SizedBox(height: 20), // Spacing before the button

                    const Text('Or sign in with'),
                    const SizedBox(height: 20),
                    ElevatedButton(
                      style: ElevatedButton.styleFrom(
                        minimumSize:
                            const Size(double.infinity, 50), // Button size
                        backgroundColor: Colors.red[200],
                      ),
                      onPressed: () {},
                      child: const Text('Sign in with phone'),
                    ),
                    const SizedBox(height: 20),
                    Row(
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: [
                        ElevatedButton(
                          onPressed: () {
                            // Handle sign in with Google
                          },
                          style: ElevatedButton.styleFrom(
                            minimumSize: Size(
                                MediaQuery.of(context).size.width * 0.35,
                                50), // Button size
                            backgroundColor: Colors.red[200],
                          ),
                          child: const Row(
                            children: [
                              FaIcon(FontAwesomeIcons.google),
                              SizedBox(width: 10),
                              Text('Google'),
                            ],
                          ),
                        ),
                        const Spacer(),
                        ElevatedButton(
                          onPressed: () {
                            // Handle sign in with Facebook
                          },
                          style: ElevatedButton.styleFrom(
                            minimumSize: Size(
                                MediaQuery.of(context).size.width * 0.35,
                                50), // Button size
                            backgroundColor: Colors.blue[200],
                          ),
                          child: const Row(
                            children: [
                              FaIcon(FontAwesomeIcons.facebook),
                              SizedBox(width: 10),
                              Text('Facebook'),
                            ],
                          ),
                        )
                      ],
                    ),
                  ],
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }
}
