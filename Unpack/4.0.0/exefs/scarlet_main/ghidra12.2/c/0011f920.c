/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0011f920; name: FUN_0011f920
 */


undefined8 FUN_0011f920(uint param_1)

{
  if (param_1 < 3) {
    if ((&DAT_047ec998)[(int)param_1] != '\0') {
      FUN_001206c0((&DAT_047ec9a0)[(int)param_1]);
      return 1;
    }
    DAT_047ec990 = "Thread number not started.";
  }
  else {
    DAT_047ec990 = "Out of range thread number.";
  }
  return 0;
}


