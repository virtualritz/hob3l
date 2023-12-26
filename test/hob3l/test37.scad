// translate([20, 0, 0])
translate([0, 0, 2]) scale(10) polyhedron(
    points=[
        [ 0, 0,  0],

        [-2,-1, +1],
        [+2,-1, +1],
        [ 0,+2, +1],

        [-2,-1, -1],
        [+2,-1, -1],
        [ 0,+2, -1],
    ],
    faces=[
        [0, 2, 1],
        [0, 3, 2],
        [0, 1, 3],

        [0, 4, 5],
        [0, 5, 6],
        [0, 6, 4],

        [1, 2, 5, 4],
        [2, 3, 6, 5],
        [3, 1, 4, 6],
    ]
);