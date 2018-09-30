rotate([1,0,0]) translate([0,0,2]) union() {
    rotate([0,0,30])
    translate([-15,-15,0]) {
        scale(10) {
            polyhedron(
                //         1------------------0
                //        /|                 /|
                //       / |    9----8      / |
                //      /  5-- /|   /| ----/--4
                //     /  /  11----10|    /  /
                //    /  /    |13--|-12  /  /
                //   3------  |/   |/ --2  /
                //   | /     15----14   | /
                //   |/                 |/
                //   7------------------6
                points=[
                    [3,3,1],
                    [0,3,1],
                    [3,0,1],
                    [0,0,1],
                    [3,3,0],
                    [0,3,0],
                    [3,0,0],
                    [0,0,0],

                    [2,2,1],
                    [1,2,1],
                    [2,1,1],
                    [1,1,1],
                    [2,2,0],
                    [1,2,0],
                    [2,1,0],
                    [1,1,0],
                ],
                faces=[
                    [  4,  5, 13, 12 ],
                    [  4, 12, 14,  6 ],
                    [  6, 14, 15,  7 ],
                    [  7, 15, 13,  5 ],

                    [  1,  0,  8,  9 ],
                    [  0,  2, 10,  8 ],
                    [  2,  3, 11, 10 ],
                    [  3,  1,  9, 11 ],

                    [  8, 10, 14, 12 ],
                    [ 10, 11, 15, 14 ],
                    [ 11,  9, 13, 15 ],
                    [  9,  8, 12, 13 ],

                    [  0,  4,  6,  2 ],
                    [  2,  6,  7,  3 ],
                    [  3,  7,  5,  1 ],
                    [  1,  5,  4,  0 ],
                ]
            );
        };
    }
}
