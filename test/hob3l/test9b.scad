translate([0,0,-10]) scale(3) {
    polyhedron(
        points=[
            [3,3,9],
            [0,9,9],
            [9,0,9],
            [0,0,9],
            [3,3,0],
            [0,9,0],
            [9,0,0],
            [0,0,0],
        ],
        faces=[
            [ 0, 4, 6, 2 ],
            [ 2, 6, 7, 3 ],
            [ 3, 7, 5, 1 ],
            [ 1, 5, 4, 0 ],
            [ 0, 2, 3 ],
            [ 0, 3, 1 ],
            //[ 0, 2, 3, 1 ],
            [ 4, 5, 7 ],
            [ 4, 7, 6 ],
            //[ 4, 5, 7, 6 ],
        ]);
}