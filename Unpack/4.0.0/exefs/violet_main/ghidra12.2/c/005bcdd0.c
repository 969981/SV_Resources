/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005bcdd0; name: FUN_005bcdd0
 */


void FUN_005bcdd0(ulong *param_1,ulong *param_2)

{
  void *pvVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  plVar2 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar2;
  if ((*param_2 & 1) == 0) {
    uVar4 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *param_1 = uVar5;
  }
  else {
    uVar5 = param_2[1];
    pvVar1 = (void *)param_2[2];
    if (uVar5 < 0x17) {
      puVar3 = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar5 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar5 + 0x10 & 0xfffffffffffffff0;
      puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar4,1);
      param_1[1] = uVar5;
      param_1[2] = (ulong)puVar3;
      *param_1 = uVar4 | 1;
    }
    memcpy(puVar3,pvVar1,uVar5 + 1);
  }
  FUN_01d01ed8(param_1 + 4,param_2 + 4);
  param_1[5] = param_2[5];
  plVar2 = (long *)FUN_01cf7e20();
  param_1[9] = (ulong)plVar2;
  if ((param_2[6] & 1) == 0) {
    uVar4 = param_2[7];
    uVar5 = param_2[6];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
    param_1[6] = uVar5;
  }
  else {
    uVar5 = param_2[7];
    pvVar1 = (void *)param_2[8];
    if (uVar5 < 0x17) {
      puVar3 = (undefined1 *)((long)param_1 + 0x31);
      *(char *)(param_1 + 6) = (char)((int)uVar5 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar5) {
                    /* try { // try from 005bcf38 to 005bcf3f has its CatchHandler @ 005bcf40 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar5 + 0x10 & 0xfffffffffffffff0;
      puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar4,1);
      param_1[7] = uVar5;
      param_1[8] = (ulong)puVar3;
      param_1[6] = uVar4 | 1;
    }
    memcpy(puVar3,pvVar1,uVar5 + 1);
  }
  param_1[10] = param_2[10];
                    /* try { // try from 005bcf10 to 005bcf13 has its CatchHandler @ 005bcf58 */
  FUN_027dea3c(param_1 + 0xb,param_2 + 0xb);
  *(int *)(param_1 + 0xf) = (int)param_2[0xf];
  return;
}


