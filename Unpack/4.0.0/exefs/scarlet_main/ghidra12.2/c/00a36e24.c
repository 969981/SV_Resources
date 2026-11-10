/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a36e24; name: FUN_00a36e24
 */


undefined4 FUN_00a36e24(long param_1,int param_2)

{
  if (param_2 < 0x15) {
    return *(undefined4 *)(param_1 + (long)param_2 * 4 + 0x10);
  }
  return 0xffffffff;
}


