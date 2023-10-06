// use std::io;
fn main() {
    // println!("Guess the number!");

    // println!("Please input your guess.");

    // let mut guess = String::new();

    // io::stdin()
    //     .read_line(&mut guess)
    //     .expect("Failed to read line");

    // println!("You guessed: {guess}");

    println!("Hey dude");

    let x: u32 = 2;
    let x: u64 = x.into();
    let y: u64 = x.pow(32);
    println!("{y}");


    // tuples
    
    let pair = ('a', 17);
    println!("{}", pair.0);
    println!("{}", pair.1);

    let pair:(char, i32) = ('a', 17);
    println!("{}", pair.0);
    println!("{}", pair.1);

    let (k, v) = pair;

    println!("{k}, {v}");

    let (left, right, third) = fair_dice_roll();
    println!("{left}, {right}, {third}");
    let x = {
        let y = 1;
        let z = 2;
        y + z
    };
    println!("{x}");


    let k: i32 = match_test(true);
    print!("{k}")

}


fn fair_dice_roll() -> (char, i32, i32) {
    ('t', 32, 54)
}

fn match_test(x: bool) -> i32 {
    match x {
        true => 32,
        false => 64,
    }
}