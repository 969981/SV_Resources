/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0147ea90; name: FUN_0147ea90
 */


undefined4 FUN_0147ea90(char param_1)

{
  if ((byte)(param_1 - 2U) < 9) {
    return *(undefined4 *)(&DAT_03d62848 + (long)(char)(param_1 - 2U) * 4);
  }
  return 0;
}


