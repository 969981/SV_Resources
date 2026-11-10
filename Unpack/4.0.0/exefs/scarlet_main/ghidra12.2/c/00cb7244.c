/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb7244; name: FUN_00cb7244
 */


void FUN_00cb7244(long param_1,byte param_2)

{
  if (*(long *)(param_1 + 0x120) != 0) {
    *(byte *)(*(long *)(param_1 + 0x120) + 0x213) = param_2 & 1;
  }
  return;
}


