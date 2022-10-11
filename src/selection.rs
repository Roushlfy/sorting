// selection sort
pub fn selection(arr:&mut Vec<usize>, len:usize){
    for i in 0..len {
        for j in 0..len-i {
            if arr.get(i+j).unwrap() < arr.get(i).unwrap() {
                let temp = arr.get(i).unwrap().clone();
                *arr.get_mut(i).unwrap() = *arr.get(i+j).unwrap();
                *arr.get_mut(i+j).unwrap() = temp;
            }
        }
    }
}