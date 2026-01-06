use std::io::{self, Read};

fn main() {
    // Read entire stdin into a string
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();
}
