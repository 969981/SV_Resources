/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0067dc24; name: FUN_0067dc24
 */


void FUN_0067dc24(undefined4 *param_1,undefined4 *param_2,ulong *param_3)

{
  void *__src;
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  void *__dest;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
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
    uVar12 = *(undefined8 *)(param_2 + 4);
    uVar11 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar12;
    *(undefined8 *)(param_1 + 2) = uVar11;
  }
  else {
    uVar8 = *(ulong *)(param_2 + 4);
    __src = *(void **)(param_2 + 6);
    if (uVar8 < 0x17) {
      __dest = (void *)((long)param_1 + 9);
      *(char *)(param_1 + 2) = (char)((int)uVar8 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar8) {
                    /* try { // try from 0067de84 to 0067de8b has its CatchHandler @ 0067de8c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar10 = uVar8 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar10,1);
      *(ulong *)(param_1 + 4) = uVar8;
      *(void **)(param_1 + 6) = __dest;
      *(ulong *)(param_1 + 2) = uVar10 | 1;
    }
    memcpy(__dest,__src,uVar8 + 1);
  }
  local_58 = 0;
  local_50 = FUN_01cf7e20();
  uStack_48 = 0;
                    /* try { // try from 0067dcec to 0067dcfb has its CatchHandler @ 0067dee4 */
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
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long **)(param_1 + 0x1a) = plVar3;
  lVar2 = param_3[1] - *param_3;
  if (lVar2 == 0) {
    return;
  }
  if ((ulong)(lVar2 >> 3) >> 0x3d != 0) {
                    /* try { // try from 0067de7c to 0067de83 has its CatchHandler @ 0067de90 */
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,lVar2,8);
  *(undefined8 **)(param_1 + 0x14) = puVar4;
  *(undefined8 **)(param_1 + 0x16) = puVar4;
  *(undefined8 **)(param_1 + 0x18) = puVar4 + (lVar2 >> 3);
  puVar6 = (undefined8 *)*param_3;
  puVar1 = (undefined8 *)param_3[1];
  if (puVar6 != puVar1) {
    uVar8 = ((long)puVar1 - (long)puVar6) - 8;
    puVar5 = puVar4;
    if (uVar8 < 0x38) {
      puVar7 = puVar6;
    }
    else if (((undefined8 *)((long)puVar6 + (uVar8 & 0xfffffffffffffff8) + 8) <= puVar4) ||
            (puVar7 = puVar6,
            (undefined8 *)((long)puVar4 + ((long)puVar1 - (long)puVar6 & 0xfffffffffffffff8U)) <=
            puVar6)) {
      uVar8 = (uVar8 >> 3) + 1;
      uVar9 = uVar8 & 0x3ffffffffffffff8;
      puVar5 = puVar4 + uVar9;
      puVar7 = puVar6 + uVar9;
      puVar4 = puVar4 + 4;
      puVar6 = puVar6 + 4;
      uVar10 = uVar9;
      do {
        uVar12 = puVar6[-3];
        uVar11 = puVar6[-4];
        uVar14 = puVar6[-1];
        uVar13 = puVar6[-2];
        uVar10 = uVar10 - 8;
        uVar15 = *puVar6;
        uVar17 = puVar6[3];
        uVar16 = puVar6[2];
        puVar4[1] = puVar6[1];
        *puVar4 = uVar15;
        puVar4[3] = uVar17;
        puVar4[2] = uVar16;
        puVar4[-3] = uVar12;
        puVar4[-4] = uVar11;
        puVar4[-1] = uVar14;
        puVar4[-2] = uVar13;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar10 != 0);
      puVar4 = puVar5;
      if (uVar8 == uVar9) goto LAB_0067de60;
    }
    do {
      puVar6 = puVar7 + 1;
      *puVar5 = *puVar7;
      puVar4 = puVar5 + 1;
      puVar5 = puVar5 + 1;
      puVar7 = puVar6;
    } while (puVar1 != puVar6);
  }
LAB_0067de60:
  *(undefined8 **)(param_1 + 0x16) = puVar4;
  return;
}


