intersection() {
    translate([0,0,0]) {
        /*
        scale(20) {
            polyhedron(
                points=[
                    [1,1,1],
                    [0,1,1],
                    [1,0,1],
                    [0,0,1],
                    [1,1,0],
                    [0,1,0],
                    [1,0,0],
                    [0,0,0],
                    // [0,0,0], // BAD
                ],
                faces=[
                    [ 0, 4, 6, 2 ],

                    [ 2, 6, 7, 3 ], // GOOD
                    [ 3, 7, 5, 1 ], // GOOD

                    //[ 2, 6, 7, 3 ], // BAD
                    //[ 2, 6, 7, 6 ], // BAD
                    //[ 2, 6, 7, 3, 8, 5, 1, 3], // BAD

                    [ 1, 5, 4, 0 ],
                    [ 0, 2, 3, 1 ],
                    [ 1, 5, 7, 6 ],
                ]);
        };
        */
        ;;;;;;
        rotate(90);
        cube(20,true){}
        sphere(12,$fn=100);
    }
}
