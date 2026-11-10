/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0011ff30; name: FUN_0011ff30
 */


undefined8 FUN_0011ff30(uint param_1)

{
  DAT_047ec990 = (char *)0x0;
  if (param_1 < 3) {
    if ((&DAT_047ec998)[(int)param_1] == '\x02') {
      FUN_00120660((&DAT_047ec9a0)[(int)param_1]);
      FUN_0011f8e0((&DAT_047ec9a0)[(int)param_1] + 0x210);
      FUN_0011f8e0((&DAT_047ec9a0)[(int)param_1] + 0x4a8);
      FUN_0011f610((&DAT_047ec9a0)[(int)param_1]);
      (&DAT_047ec9a0)[(int)param_1] = 0;
      (&DAT_047ec998)[(int)param_1] = 0;
      return 1;
    }
    DAT_047ec990 = "Wait not queued for this thread.";
  }
  else {
    DAT_047ec990 = "Out of range thread number.";
  }
  return 0;
}


