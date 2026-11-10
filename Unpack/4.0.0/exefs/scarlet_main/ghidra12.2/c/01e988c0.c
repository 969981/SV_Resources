/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e988c0; name: FUN_01e988c0
 */


undefined4 FUN_01e988c0(byte param_1)

{
  if (param_1 < 5) {
    return *(undefined4 *)(&DAT_03d5b7ec + (long)(char)param_1 * 4);
  }
  return 8;
}


