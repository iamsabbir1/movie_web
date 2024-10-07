import '../models/user_model.dart';

final List<UserModel> users = [
  UserModel(
    uid: '1',
    name: 'John Doe',
    email: 'johndoe@gmail.com',
    contact: '1234567890',
    isContactHidden: false,
    bloodGroup: 'A+',
    isDonor: true,
    totalDonations: 2,
    totalRequests: 0,
    lastDonationDate: DateTime.now(),
    canDonate: true,
    isGoingToDonate: false,
    //chatinfo
    isOnline: true,
    wasRecentlyActive: true,
    lastActive: DateTime.now(),

    isTyping: false,
  ),
  UserModel(
    uid: '2',
    name: 'Jane Doe',
    email: 'hdw@gmail.com',
    contact: '1234567890',
    isContactHidden: false,
    bloodGroup: 'B+',
    isDonor: true,
    totalDonations: 1,
    totalRequests: 0,
    lastDonationDate: DateTime.now(),
    canDonate: true,
    isGoingToDonate: false,
    //chatinfo
    isOnline: false,
    wasRecentlyActive: true,
    lastActive: DateTime.now(),
    isTyping: false,
  ),
  UserModel(
    uid: '3',
    name: 'Doe',
    email: 'slw@gmail.com',
    bloodGroup: 'O+',
    contact: '1234567890',
    isContactHidden: false,
    isDonor: true,
    totalDonations: 0,
    totalRequests: 0,
    lastDonationDate: DateTime.now(),
    canDonate: true,
    isGoingToDonate: false,
    //chatinfo
    isOnline: true,
    wasRecentlyActive: true,
    lastActive: DateTime.now(),
    isTyping: true,
  ),
  UserModel(
    uid: '4',
    name: 'Doe',
    email: 'slw@gmail.com',
    bloodGroup: 'O+',
    contact: '1234567890',
    isContactHidden: false,
    isDonor: true,
    totalDonations: 0,
    totalRequests: 0,
    lastDonationDate: DateTime.now(),
    canDonate: true,
    isGoingToDonate: false,
    //chatinfo
    isOnline: true,
    wasRecentlyActive: true,
    lastActive: DateTime.now(),
    isTyping: true,
  ),
];
