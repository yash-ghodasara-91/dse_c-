 cout << "Q-3 : " << endl;

    int x,y;

    cout << "eneter the array row size : ";
    cin >> x;
    cout << "eneter the array column size : ";
    cin >> y;

    int z[x][y];

    cout << "enetr array element : " << endl; 
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << "z[" << i << "][" << j << "] = ";
            cin >> z[i][j]; 
        }
    }

    int transpose [x][y];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            transpose[j][i] = z[i][j];
        }
    }

    cout << "the transpose matrix of an array : " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
