/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d81b0; name: FUN_002d81b0
 */


void FUN_002d81b0(uint *param_1,uint param_2)

{
  undefined *puVar1;
  void *__dest;
  void *__dest_00;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_FUN_047cba38;
  if (*(long *)(param_1 + 6) == 0) {
    if ((int)param_2 < 1) goto LAB_002d8274;
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)param_1[8];
    if ((int)param_2 <= (int)param_1[8]) goto LAB_002d8274;
  }
  __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,
                                -(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2
                               );
  __dest_00 = (void *)FUN_0049e770(puVar1,-(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 |
                                          (ulong)param_2 << 4);
  if ((int)uVar3 == 0) {
    lVar2 = *(long *)(param_1 + 2);
    *(void **)(param_1 + 2) = __dest;
  }
  else {
    memmove(__dest,*(void **)(param_1 + 2),-(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2);
    memmove(__dest_00,*(void **)(param_1 + 6),-(uVar3 >> 0x1f) & 0xfffffff000000000 | uVar3 << 4);
    lVar2 = *(long *)(param_1 + 2);
    *(void **)(param_1 + 2) = __dest;
  }
  if (lVar2 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  lVar2 = *(long *)(param_1 + 6);
  param_1[4] = param_2;
  *(void **)(param_1 + 6) = __dest_00;
  if (lVar2 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  param_1[8] = param_2;
LAB_002d8274:
  if ((int)param_2 < (int)*param_1) {
    *param_1 = param_2;
  }
  return;
}


