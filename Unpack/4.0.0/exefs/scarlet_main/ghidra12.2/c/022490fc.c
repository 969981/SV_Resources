/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022490fc; name: FUN_022490fc
 */


void FUN_022490fc(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x11f) = param_2 & 1;
  FUN_01520420();
  return;
}


