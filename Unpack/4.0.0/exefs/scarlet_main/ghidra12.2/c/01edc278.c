/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01edc278; name: FUN_01edc278
 */


void FUN_01edc278(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 < 0x800) {
    param_1 = param_1 + (ulong)(uVar1 >> 3);
    *(byte *)(param_1 + 0x7bb0) = *(byte *)(param_1 + 0x7bb0) | (byte)(1 << (ulong)(uVar1 & 7));
  }
  return;
}


