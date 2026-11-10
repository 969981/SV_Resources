/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0053af3c; name: FUN_0053af3c
 */


void FUN_0053af3c(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  void *__src;
  long *plVar2;
  void *__dest;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  *param_1 = *param_2;
  plVar2 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 8) = plVar2;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar9 = *(undefined8 *)(param_2 + 4);
    uVar3 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar9;
    *(undefined8 *)(param_1 + 2) = uVar3;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 4);
    __src = *(void **)(param_2 + 6);
    if (uVar1 < 0x17) {
      __dest = (void *)((long)param_1 + 9);
      *(char *)(param_1 + 2) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 0053b138 to 0053b13f has its CatchHandler @ 0053b140 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar7 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar7,1);
      *(ulong *)(param_1 + 4) = uVar1;
      *(void **)(param_1 + 6) = __dest;
      *(ulong *)(param_1 + 2) = uVar7 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  local_68 = 0;
  local_60 = FUN_01cf7e20();
  uStack_58 = 0;
                    /* try { // try from 0053b008 to 0053b017 has its CatchHandler @ 0053b144 */
  local_70 = &local_68;
  FUN_01e76990(&local_90,param_2 + 10,&local_70);
  FUN_01cfa44c(&local_70,local_68);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 **)(param_1 + 0xc) = local_90;
  *(undefined8 *)(param_1 + 0x10) = uStack_80;
  *(undefined8 *)(param_1 + 0xe) = local_88;
  plVar2 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = local_78;
  if (local_78 == 0) {
    *(long **)(param_1 + 0xc) = plVar2;
  }
  else {
    *(long **)(*plVar2 + 0x10) = plVar2;
    local_78 = 0;
    local_90 = &local_88;
    local_88 = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_01cfa44c(&local_90,local_88);
  *(undefined8 *)(param_1 + 0x14) = *param_3;
  puVar6 = (undefined8 *)(param_1 + 0x16);
  *puVar6 = 0;
  uVar3 = FUN_01cf7e20();
  puVar8 = (undefined8 *)(param_1 + 0x18);
  *puVar8 = 0;
  *(undefined8 *)(param_1 + 0x1a) = uVar3;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *puVar6 = puVar8;
  plVar2 = (long *)param_3[1];
  while (plVar2 != param_3 + 2) {
                    /* try { // try from 0053b0c4 to 0053b0d3 has its CatchHandler @ 0053b154 */
    FUN_0053b188(puVar6,puVar8,plVar2 + 4,plVar2 + 4);
    plVar4 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) {
      plVar4 = plVar2 + 2;
      if (*(long **)*plVar4 == plVar2) {
        plVar2 = (long *)*plVar4;
      }
      else {
        do {
          lVar5 = *plVar4;
          plVar4 = (long *)(lVar5 + 0x10);
          plVar2 = (long *)*plVar4;
        } while (*plVar2 != lVar5);
      }
    }
    else {
      do {
        plVar2 = plVar4;
        plVar4 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
  }
  return;
}


