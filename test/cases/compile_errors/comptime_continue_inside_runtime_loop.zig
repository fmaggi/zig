export fn entry() void {
    while (true) {
        comptime continue;
    }
}

// error
// backend=stage2
// target=native
//
// :3:18: error: cannot comptime continue out of runtime block 
