use rand::Rng;
use std::time::{Instant};

mod selection;

fn main() {
    let scales:Vec<usize> = [1000,2000,3000,4000,5000,6000,7000,8000,9000,10000,
        20000,30000,40000,50000,60000,70000,80000,90000,100_000].to_vec();
    let repeat_times: usize = 1;
    println!("Repeat times: {repeat_times}\n");
    for scale in scales.iter() {
        let mut arr:Vec<usize> = Vec::new();
        arr.resize(*scale,rand::thread_rng().gen_range(0..10_000));

        let now = Instant::now();
        for _ in 0..repeat_times{
        selection::selection(&mut arr,*scale);
        }
        let duration = now.elapsed().as_secs_f64();

        println!("Sorting {scale} numbers. Averaged time: {:.5}s", duration/repeat_times as f64);
    }
    return;
}
