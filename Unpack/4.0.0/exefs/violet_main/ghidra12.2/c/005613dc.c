/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005613dc; name: FUN_005613dc
 */


void FUN_005613dc(ulong *param_1,undefined8 param_2)

{
  void *__src;
  undefined4 uVar1;
  ulong *puVar2;
  long *plVar3;
  undefined1 *__dest;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = (ulong *)FUN_01f70598(param_2);
  plVar3 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar3;
  if ((*puVar2 & 1) == 0) {
    uVar5 = puVar2[1];
    uVar6 = *puVar2;
    param_1[2] = puVar2[2];
    param_1[1] = uVar5;
    *param_1 = uVar6;
  }
  else {
    uVar6 = puVar2[1];
    __src = (void *)puVar2[2];
    if (uVar6 < 0x17) {
      __dest = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar6 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 005615d4 to 005615db has its CatchHandler @ 005615dc */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar6 + 0x10 & 0xfffffffffffffff0;
      __dest = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
      param_1[1] = uVar6;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar5 | 1;
    }
    memcpy(__dest,__src,uVar6 + 1);
  }
  FUN_01f70538(param_1 + 4,param_2,&DAT_03c0263c);
  FUN_01f70538(param_1 + 8,param_2,"susid");
                    /* try { // try from 005614a8 to 005614cb has its CatchHandler @ 005615e0 */
  uVar1 = FUN_01f7057c(param_2,"sussid");
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = FUN_01f7057c(param_2,"suscid");
  *(undefined4 *)((long)param_1 + 100) = uVar1;
  FUN_0053e408(param_1 + 0xd,param_2,&DAT_03c4841a);
  FUN_01f705b0(param_1 + 0x11,param_2,&DAT_03c1f0ca);
  *(undefined4 *)(param_1 + 0x12) = 0;
  pbVar4 = (byte *)FUN_01f7038c(param_2);
  if ((*pbVar4 & 1) == 0) {
    if ((*pbVar4 & 0xfe) == 10) {
      pbVar4 = pbVar4 + 1;
LAB_00561530:
      if (*(int *)pbVar4 == 0x74735f5f && pbVar4[4] == 0x75) {
        uVar1 = 1;
        goto LAB_005615c0;
      }
    }
  }
  else if (*(long *)(pbVar4 + 8) == 5) {
    pbVar4 = *(byte **)(pbVar4 + 0x10);
    goto LAB_00561530;
  }
  pbVar4 = (byte *)FUN_01f7038c(param_2);
  if ((*pbVar4 & 1) == 0) {
    if ((*pbVar4 & 0xfe) == 10) {
      pbVar4 = pbVar4 + 1;
LAB_00561588:
      if (*(int *)pbVar4 == 0x74735f5f && pbVar4[4] == 0x67) {
        uVar1 = 2;
        goto LAB_005615c0;
      }
    }
  }
  else if (*(long *)(pbVar4 + 8) == 5) {
    pbVar4 = *(byte **)(pbVar4 + 0x10);
    goto LAB_00561588;
  }
  uVar1 = 0;
LAB_005615c0:
  *(undefined4 *)(param_1 + 0x12) = uVar1;
  return;
}


