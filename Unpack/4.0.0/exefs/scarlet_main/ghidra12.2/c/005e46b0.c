/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005e46b0; name: FUN_005e46b0
 */


void FUN_005e46b0(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  void *__src;
  long *plVar2;
  void *__dest;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 auStack_58 [8];
  
  *param_1 = *param_2;
  plVar2 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 8) = plVar2;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar10 = *(undefined8 *)(param_2 + 4);
    uVar3 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar10;
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
                    /* try { // try from 005e4914 to 005e491b has its CatchHandler @ 005e491c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar8 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar8,1);
      *(ulong *)(param_1 + 4) = uVar1;
      *(void **)(param_1 + 6) = __dest;
      *(ulong *)(param_1 + 2) = uVar8 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  local_78 = 0;
  local_70 = FUN_01cf7e20();
  local_68 = 0;
                    /* try { // try from 005e4780 to 005e478f has its CatchHandler @ 005e4920 */
  local_80 = &local_78;
  FUN_01e76990(&local_a0,param_2 + 10,&local_80);
  FUN_01cfa44c(&local_80,local_78);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 **)(param_1 + 0xc) = local_a0;
  *(undefined8 *)(param_1 + 0x10) = uStack_90;
  *(undefined8 *)(param_1 + 0xe) = local_98;
  plVar2 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = local_88;
  if (local_88 == 0) {
    *(long **)(param_1 + 0xc) = plVar2;
  }
  else {
    *(long **)(*plVar2 + 0x10) = plVar2;
    local_88 = 0;
    local_a0 = &local_98;
    local_98 = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_01cfa44c(&local_a0,local_98);
  plVar7 = (long *)(param_1 + 0x14);
  *plVar7 = 0;
  uVar3 = FUN_01cf7e20();
  puVar9 = (undefined8 *)(param_1 + 0x16);
  *puVar9 = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *plVar7 = (long)puVar9;
  plVar2 = (long *)*param_3;
  do {
    while( true ) {
      if (plVar2 == param_3 + 1) {
        return;
      }
                    /* try { // try from 005e4830 to 005e486f has its CatchHandler @ 005e4930 */
      plVar4 = (long *)FUN_027ca814(plVar7,puVar9,&local_a0,auStack_58,plVar2 + 4);
      if (*plVar4 == 0) break;
      plVar4 = (long *)plVar2[1];
      if ((long *)plVar2[1] != (long *)0x0) goto LAB_005e48b4;
LAB_005e48c4:
      plVar4 = plVar2 + 2;
      if (*(long **)*plVar4 == plVar2) {
        plVar2 = (long *)*plVar4;
      }
      else {
        do {
          lVar6 = *plVar4;
          plVar4 = (long *)(lVar6 + 0x10);
          plVar2 = (long *)*plVar4;
        } while (*plVar2 != lVar6);
      }
    }
    FUN_005baa3c(&local_80,plVar7,plVar2 + 4);
    local_80[2] = local_a0;
    *local_80 = 0;
    local_80[1] = 0;
    *plVar4 = (long)local_80;
    puVar5 = local_80;
    if (*(long *)*plVar7 != 0) {
      *plVar7 = *(long *)*plVar7;
      puVar5 = (undefined8 *)*plVar4;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x16),puVar5);
    *(long *)(param_1 + 0x1a) = *(long *)(param_1 + 0x1a) + 1;
    plVar4 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) goto LAB_005e48c4;
LAB_005e48b4:
    do {
      plVar2 = plVar4;
      plVar4 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  } while( true );
}


