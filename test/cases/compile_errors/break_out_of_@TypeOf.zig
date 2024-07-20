export fn entry() void {
    comptime {
        for (0..10) |i| {
            _ = @TypeOf(if (false) {} else break);
        }
    }
}

// error
// backend=stage2
// target=native
//
// :4:44: error: cannot break out of @TypeOf
