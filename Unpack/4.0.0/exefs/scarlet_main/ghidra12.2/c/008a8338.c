/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a8338; name: FUN_008a8338
 */


undefined8 FUN_008a8338(long param_1)

{
  long lVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) == 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0xa8) + 0xc;
  uVar2 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
  return *(undefined8 *)
          (lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar2 + 4 +
                                            (ulong)*(byte *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong
                                                  )uVar2 + 4) + uVar2) + 0xc) * 4) + uVar2) + 8);
}


