  int mainChoice, subChoice;
    double quantity, bill = 0;
    char again;
	{
  do       
  cout << "\n----- MAIN MENU -----\n";
        cout << "1. Breakfast\n";
        cout << "2. Lunch\n";
        cout << "3. Dinner\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;

        switch (mainChoice)
        {
        case 1: // Breakfast
            cout << "\nBreakfast Menu\n";
            cout << "1. Anda Paratha (Rs.40)\n";
            cout << "2. Nan Channy (Rs.60)\n";
            cout << "3. Siri Paye (Rs.150)\n";
            cout << "4. Tea (Rs.15)\n";
            cout << "Enter item: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (subChoice == 1) bill += 40 * quantity;
            else if (subChoice == 2) bill += 60 * quantity;
            else if (subChoice == 3) bill += 150 * quantity;
            else if (subChoice == 4) bill += 15 * quantity;
            break;

        case 2: // Lunch
            cout << "\nLunch Menu\n";
            cout << "1. Chicken Karahi (Rs.1050/KG)\n";
            cout << "2. Mutton Karahi (Rs.1800/KG)\n";
            cout << "3. Egg Fried Rice (Rs.450/plate)\n";
            cout << "4. BBQ (Rs.1050/dozen)\n";
            cout << "Enter item: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (subChoice == 1) bill += 1050 * quantity;
            else if (subChoice == 2) bill += 1800 * quantity;
            else if (subChoice == 3) bill += 450 * quantity;
            else if (subChoice == 4) bill += 1050 * quantity;
            break;

        case 3: // Dinner
            cout << "\nDinner Menu\n";
            cout << "1. Chicken Karahi (Rs.1050/KG)\n";
            cout << "2. Mutton Karahi (Rs.1800/KG)\n";
            cout << "3. Egg Fried Rice (Rs.450/plate)\n";
            cout << "4. BBQ (Rs.1050/dozen)\n";
            cout << "5. Sajji (Rs.800/KG)\n";
            cout << "Enter item: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (subChoice == 1) bill += 1050 * quantity;
            else if (subChoice == 2) bill += 1800 * quantity;
            else if (subChoice == 3) bill += 450 * quantity;
            else if (subChoice == 4) bill += 1050 * quantity;
            else if (subChoice == 5) bill += 800 * quantity;
            break;

        default:
            cout << "Invalid choice!\n";
        }

        cout << "\nDo you want to order more? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\nTotal Bill = Rs." << bill << endl;
    cout << "Thank you for your order!\n";

    return 0;
}
