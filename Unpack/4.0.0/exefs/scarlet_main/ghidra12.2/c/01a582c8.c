/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a582c8; name: FUN_01a582c8
 */


undefined4 FUN_01a582c8(char param_1)

{
  if ((byte)(param_1 - 1U) < 0x1d) {
    return *(undefined4 *)(&DAT_03d61b34 + (ulong)(byte)(param_1 - 1U) * 8);
  }
  return 0;
}


