/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0119c9b8; name: FUN_0119c9b8
 */


void FUN_0119c9b8(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x139) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x13c) = 1;
  FUN_0119c9d8(param_1,1);
  return;
}


