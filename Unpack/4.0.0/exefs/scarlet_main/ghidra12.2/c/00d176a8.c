/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d176a8; name: FUN_00d176a8
 */


void FUN_00d176a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (0 < (int)((ulong)(*(long *)(param_1 + 0x78) - lVar1) >> 3)) {
    lVar2 = 0;
    do {
      *(undefined4 *)(*(long *)(lVar1 + lVar2 * 8) + 0x108) = 0x3f800000;
      lVar1 = *(long *)(param_1 + 0x70);
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)((ulong)(*(long *)(param_1 + 0x78) - lVar1) >> 3));
  }
  return;
}


