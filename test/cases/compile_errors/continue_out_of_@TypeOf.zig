export fn entry() void {
    comptime {
        for (0..10) |i| {
            _ = @TypeOf(if (false) {} else continue);
        }
    }
}

// error
// backend=stage2
// target=native
//
// :4:44: error: cannot continue out of @TypeOf
