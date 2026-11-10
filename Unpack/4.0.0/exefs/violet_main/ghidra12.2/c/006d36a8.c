/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006d36a8; name: FUN_006d36a8
 */


void FUN_006d36a8(long *param_1,long param_2)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = (long)(PTR_DAT_047cfc88 + 0x10);
  plVar3 = (long *)FUN_01cf7e20();
  param_1[4] = (long)plVar3;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x10);
    lVar6 = *(long *)(param_2 + 8);
    param_1[3] = *(long *)(param_2 + 0x18);
    param_1[2] = lVar7;
    param_1[1] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x10);
    pvVar2 = *(void **)(param_2 + 0x18);
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 9);
      *(char *)(param_1 + 1) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      param_1[2] = uVar1;
      param_1[3] = (long)pvVar5;
      param_1[1] = uVar4 | 1;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[8] = (long)plVar3;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x30);
    lVar6 = *(long *)(param_2 + 0x28);
    param_1[7] = *(long *)(param_2 + 0x38);
    param_1[6] = lVar7;
    param_1[5] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x30);
    pvVar2 = *(void **)(param_2 + 0x38);
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 0x29);
      *(char *)(param_1 + 5) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 006d3800 to 006d3807 has its CatchHandler @ 006d3808 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      param_1[5] = uVar4 | 1;
      param_1[6] = uVar1;
      param_1[7] = (long)pvVar5;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  lVar6 = *(long *)(param_2 + 0x48);
  param_1[10] = *(long *)(param_2 + 0x50);
  param_1[9] = lVar6;
  return;
}


