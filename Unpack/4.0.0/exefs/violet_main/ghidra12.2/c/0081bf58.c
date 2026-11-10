/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081bf58; name: FUN_0081bf58
 */


undefined8 FUN_0081bf58(long param_1,long param_2)

{
  ushort uVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_44;
  
  uVar1 = *(ushort *)(param_1 + 10);
  lVar5 = *(long *)(param_2 + 8);
  uVar2 = *(ulong *)(param_2 + 0x10);
  uVar6 = lVar5 + (ulong)uVar1;
  pvVar4 = *(void **)(param_1 + 0x10);
  if (uVar2 < uVar6) {
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    __dest = (void *)FUN_0049e7b0(PTR_FUN_047cba38,uVar2);
    memcpy(__dest,*(void **)(param_2 + 0x18),*(size_t *)(param_2 + 8));
    lVar5 = *(long *)(param_2 + 0x18);
    *(void **)(param_2 + 0x18) = __dest;
    if (lVar5 != 0) {
      FUN_0049e800(lVar5);
      FUN_0049e7e0(PTR_LAB_047cba48,lVar5);
    }
    lVar5 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 0x10) = uVar2;
  }
  memcpy((void *)(*(long *)(param_2 + 0x18) + lVar5),pvVar4,(ulong)uVar1);
  *(ulong *)(param_2 + 8) = uVar6;
  uVar2 = (ulong)*(ushort *)(param_1 + 10) & 3;
  if ((int)uVar2 != 0) {
    local_44 = 0;
    __n = 4 - uVar2;
    uVar3 = *(ulong *)(param_2 + 0x10);
    uVar2 = uVar6 + __n;
    if (uVar3 < uVar2) {
      uVar3 = uVar3 + (uVar3 >> 1);
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      pvVar4 = (void *)FUN_0049e7b0(PTR_FUN_047cba38,uVar3);
      memcpy(pvVar4,*(void **)(param_2 + 0x18),*(size_t *)(param_2 + 8));
      lVar5 = *(long *)(param_2 + 0x18);
      *(void **)(param_2 + 0x18) = pvVar4;
      if (lVar5 != 0) {
        FUN_0049e800(lVar5);
        FUN_0049e7e0(PTR_LAB_047cba48,lVar5);
      }
      uVar6 = *(ulong *)(param_2 + 8);
      *(ulong *)(param_2 + 0x10) = uVar3;
    }
    memcpy((void *)(*(long *)(param_2 + 0x18) + uVar6),&local_44,__n);
    *(ulong *)(param_2 + 8) = uVar2;
  }
  return 1;
}


