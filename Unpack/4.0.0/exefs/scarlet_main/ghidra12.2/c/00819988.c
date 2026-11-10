/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00819988; name: FUN_00819988
 */


void FUN_00819988(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  
  if (param_2 == (void *)0x0) {
    if (*(ulong *)(param_1 + 0x10) < param_3) {
      pvVar3 = (void *)FUN_0049e7b0(PTR_FUN_047cba38,param_3);
      memcpy(pvVar3,*(void **)(param_1 + 0x18),*(size_t *)(param_1 + 8));
      lVar4 = *(long *)(param_1 + 0x18);
      *(void **)(param_1 + 0x18) = pvVar3;
      if (lVar4 != 0) {
        FUN_0049e800(lVar4);
        FUN_0049e7e0(PTR_LAB_047cba48,lVar4);
      }
      *(ulong *)(param_1 + 0x10) = param_3;
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    uVar2 = *(ulong *)(param_1 + 0x10);
    uVar1 = lVar4 + param_3;
    if (uVar2 < uVar1) {
      uVar2 = uVar2 + (uVar2 >> 1);
      if (uVar2 <= uVar1) {
        uVar2 = uVar1;
      }
      pvVar3 = (void *)FUN_0049e7b0(PTR_FUN_047cba38,uVar2);
      memcpy(pvVar3,*(void **)(param_1 + 0x18),*(size_t *)(param_1 + 8));
      lVar4 = *(long *)(param_1 + 0x18);
      *(void **)(param_1 + 0x18) = pvVar3;
      if (lVar4 != 0) {
        FUN_0049e800(lVar4);
        FUN_0049e7e0(PTR_LAB_047cba48,lVar4);
      }
      lVar4 = *(long *)(param_1 + 8);
      *(ulong *)(param_1 + 0x10) = uVar2;
    }
    memcpy((void *)(*(long *)(param_1 + 0x18) + lVar4),param_2,param_3);
    *(ulong *)(param_1 + 8) = uVar1;
  }
  return;
}


