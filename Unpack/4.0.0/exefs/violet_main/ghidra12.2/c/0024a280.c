/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0024a280; name: FUN_0024a280
 */


void FUN_0024a280(undefined4 *param_1,undefined4 *param_2,byte *param_3)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_1 = *param_2;
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 8) = plVar3;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 4);
    uVar6 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar7;
    *(undefined8 *)(param_1 + 2) = uVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 4);
    pvVar2 = *(void **)(param_2 + 6);
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 9);
      *(char *)(param_1 + 2) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 0024a460 to 0024a467 has its CatchHandler @ 0024a488 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      *(ulong *)(param_1 + 4) = uVar1;
      *(void **)(param_1 + 6) = pvVar5;
      *(ulong *)(param_1 + 2) = uVar4 | 1;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  local_58 = 0;
  local_50 = FUN_01cf7e20();
  uStack_48 = 0;
                    /* try { // try from 0024a348 to 0024a357 has its CatchHandler @ 0024a48c */
  local_60 = &local_58;
  FUN_01e76990(&local_80,param_2 + 10,&local_60);
  FUN_01cfa44c(&local_60,local_58);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 **)(param_1 + 0xc) = local_80;
  *(undefined8 *)(param_1 + 0x10) = uStack_70;
  *(undefined8 *)(param_1 + 0xe) = local_78;
  plVar3 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = local_68;
  if (local_68 == 0) {
    *(long **)(param_1 + 0xc) = plVar3;
  }
  else {
    *(long **)(*plVar3 + 0x10) = plVar3;
    local_68 = 0;
    local_80 = &local_78;
    local_78 = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_01cfa44c(&local_80,local_78);
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x1a) = plVar3;
  if ((*param_3 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_3 + 8);
    uVar6 = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_1 + 0x16) = uVar7;
    *(undefined8 *)(param_1 + 0x14) = uVar6;
  }
  else {
    uVar1 = *(ulong *)(param_3 + 8);
    pvVar2 = *(void **)(param_3 + 0x10);
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 0x51);
      *(char *)(param_1 + 0x14) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 0024a468 to 0024a46f has its CatchHandler @ 0024a470 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      *(ulong *)(param_1 + 0x14) = uVar4 | 1;
      *(ulong *)(param_1 + 0x16) = uVar1;
      *(void **)(param_1 + 0x18) = pvVar5;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  return;
}


