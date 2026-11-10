/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ddc4b0; name: FUN_01ddc4b0
 */


undefined4 FUN_01ddc4b0(undefined8 param_1,uint param_2)

{
  if (param_2 < 3) {
    return *(undefined4 *)(&DAT_03d2fffc + (long)(int)param_2 * 4);
  }
  return 7;
}


