/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028f6d9c; name: FUN_028f6d9c
 */


void FUN_028f6d9c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong local_28;
  
  if ((*(ulong *)(param_1 + 0x10) <= param_2) ||
     ((*(ulong *)(*(long *)(param_1 + 8) + (param_2 >> 3 & 0x1ffffffffffffff8)) >> (param_2 & 0x3f)
      & 1) == 0)) {
    local_28 = param_2;
    FUN_010bc8c4(param_1 + 0x40,&local_28);
    if (*(ulong *)(param_1 + 0x10) <= local_28) {
      FUN_00d7684c((long *)(param_1 + 8),local_28 + 1,0);
    }
    lVar1 = *(long *)(param_1 + 8);
    uVar2 = local_28 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar2) = *(ulong *)(lVar1 + uVar2) | 1L << (local_28 & 0x3f);
  }
  return;
}


