import 'package:flutter/material.dart';

class HomeBackground extends CustomPainter {
  //HomeBackground(this.colorScheme);

  //final Color colorScheme;

  @override
  void paint(Canvas canvas, Size size) {
    var paint = Paint()
      //..color = colorScheme
      ..color = const Color.fromARGB(255, 241, 11, 11)
      ..strokeWidth = 5
      ..style = PaintingStyle.fill;

    var path = Path();
    path.moveTo(0, 0); //left top corner
    path.lineTo(0, size.height * 0.25);
    path.quadraticBezierTo(
        0, size.height * 0.18, size.width * 0.18, size.height * 0.18);
    path.quadraticBezierTo(size.width * 0.18, size.height * 0.18,
        size.width * .82, size.height * 0.18);
    path.quadraticBezierTo(
        size.width, size.height * 0.18, size.width, size.height * 0.25);
    path.lineTo(size.width, 0);
    path.close();
    canvas.drawPath(path, paint);
  }

  @override
  bool shouldRepaint(covariant CustomPainter oldDelegate) {
    return false;
  }
}
