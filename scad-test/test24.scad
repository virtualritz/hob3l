rotate([0,-90,0]){
    union(){
        rotate([-45,0,0]) {
            cube([30, 30, 30]);
        }
        scale([1,2,1]) {
            rotate([-45,0,0]) {
                cube([30, 30, 30]);
            }
        }
    }
}