/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a30b0; name: FUN_004a30b0
 */


undefined8 FUN_004a30b0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__src;
  size_t __n;
  byte *pbVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte *local_40;
  undefined8 *puStack_38;
  
  local_40 = (byte *)*param_2;
  puStack_38 = param_2;
  if ((*local_40 & 1) == 0) {
    local_40 = local_40 + 1;
    uVar1 = FUN_004c4230(param_1 + 0x158,&local_40);
  }
  else {
    local_40 = *(byte **)(local_40 + 0x10);
    uVar1 = FUN_004c4230(param_1 + 0x158,&local_40);
  }
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  pbVar2 = (byte *)*param_2;
  if ((*pbVar2 & 1) == 0) {
    pbVar2 = pbVar2 + 1;
    plVar4 = *(long **)(param_1 + 0x1d0);
    plVar3 = *(long **)(param_1 + 0x1d8);
    if (plVar4 < plVar3) {
LAB_004a3188:
      *plVar4 = (long)pbVar2;
      *(long **)(param_1 + 0x1d0) = plVar4 + 1;
      return 1;
    }
  }
  else {
    pbVar2 = *(byte **)(pbVar2 + 0x10);
    plVar4 = *(long **)(param_1 + 0x1d0);
    plVar3 = *(long **)(param_1 + 0x1d8);
    if (plVar4 < plVar3) goto LAB_004a3188;
  }
  lVar5 = *(long *)(param_1 + 0x1c8);
  lVar7 = (long)plVar4 - lVar5 >> 3;
  uVar1 = lVar7 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = (long)plVar3 - lVar5;
  uVar6 = lVar5 >> 2;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if (0xffffffffffffffe < (ulong)(lVar5 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
  }
  plVar4 = (long *)(lVar5 + lVar7 * 8);
  *plVar4 = (long)pbVar2;
  __src = *(void **)(param_1 + 0x1c8);
  __n = *(long *)(param_1 + 0x1d0) - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)plVar4 - __n),__src,__n);
    __src = *(void **)(param_1 + 0x1c8);
  }
  *(void **)(param_1 + 0x1c8) = (void *)((long)plVar4 - __n);
  *(long **)(param_1 + 0x1d0) = plVar4 + 1;
  *(ulong *)(param_1 + 0x1d8) = lVar5 + uVar1 * 8;
  if (__src != (void *)0x0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return 1;
}


