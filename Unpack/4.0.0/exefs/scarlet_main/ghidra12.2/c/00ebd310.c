/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ebd310; name: FUN_00ebd310
 */


undefined8 FUN_00ebd310(int param_1)

{
  if (param_1 - 2U < 0x35) {
    return *(undefined8 *)(&DAT_03d64e20 + (long)(int)(param_1 - 2U) * 8);
  }
  return 0;
}


