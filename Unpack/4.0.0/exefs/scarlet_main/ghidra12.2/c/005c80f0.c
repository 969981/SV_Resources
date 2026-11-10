/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005c80f0; name: FUN_005c80f0
 */


void FUN_005c80f0(ulong *param_1,ulong *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar10;
  undefined4 *puVar9;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  plVar4 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar4;
  if ((*param_2 & 1) == 0) {
    uVar14 = param_2[1];
    uVar11 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar14;
    *param_1 = uVar11;
  }
  else {
    uVar11 = param_2[1];
    pvVar1 = (void *)param_2[2];
    if (uVar11 < 0x17) {
      puVar5 = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar11 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar14 = uVar11 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar14,1);
      param_1[1] = uVar11;
      param_1[2] = (ulong)puVar5;
      *param_1 = uVar14 | 1;
    }
    memcpy(puVar5,pvVar1,uVar11 + 1);
  }
  plVar4 = (long *)FUN_01cf7e20();
  param_1[7] = (ulong)plVar4;
  if ((param_2[4] & 1) == 0) {
    uVar14 = param_2[5];
    uVar11 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar14;
    param_1[4] = uVar11;
  }
  else {
    uVar11 = param_2[5];
    pvVar1 = (void *)param_2[6];
    if (uVar11 < 0x17) {
      puVar5 = (undefined1 *)((long)param_1 + 0x21);
      *(char *)(param_1 + 4) = (char)((int)uVar11 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar11) {
                    /* try { // try from 005c83c8 to 005c83cf has its CatchHandler @ 005c83f0 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar14 = uVar11 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar14,1);
      param_1[5] = uVar11;
      param_1[6] = (ulong)puVar5;
      param_1[4] = uVar14 | 1;
    }
    memcpy(puVar5,pvVar1,uVar11 + 1);
  }
  FUN_01d01ed8(param_1 + 8,param_2 + 8);
  plVar4 = (long *)FUN_01cf7e20();
  param_1[0xc] = (ulong)plVar4;
  if ((param_2[9] & 1) == 0) {
    uVar14 = param_2[10];
    uVar11 = param_2[9];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar14;
    param_1[9] = uVar11;
  }
  else {
    uVar11 = param_2[10];
    pvVar1 = (void *)param_2[0xb];
    if (uVar11 < 0x17) {
      puVar5 = (undefined1 *)((long)param_1 + 0x49);
      *(char *)(param_1 + 9) = (char)((int)uVar11 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar11) {
                    /* try { // try from 005c83d0 to 005c83d7 has its CatchHandler @ 005c83d8 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar14 = uVar11 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar14,1);
      param_1[10] = uVar11;
      param_1[0xb] = (ulong)puVar5;
      param_1[9] = uVar14 | 1;
    }
    memcpy(puVar5,pvVar1,uVar11 + 1);
  }
  plVar4 = (long *)FUN_01cf7e20();
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = (ulong)plVar4;
  lVar3 = param_2[0xe] - param_2[0xd];
  if (lVar3 == 0) goto LAB_005c8398;
  if ((ulong)(lVar3 >> 2) >> 0x3e != 0) {
                    /* try { // try from 005c83b8 to 005c83bf has its CatchHandler @ 005c8400 */
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  puVar6 = (undefined4 *)(**(code **)(*plVar4 + 0x10))(plVar4,lVar3,4);
  param_1[0xd] = (ulong)puVar6;
  param_1[0xe] = (ulong)puVar6;
  param_1[0xf] = (ulong)(puVar6 + (lVar3 >> 2));
  puVar10 = (undefined4 *)param_2[0xd];
  puVar2 = (undefined4 *)param_2[0xe];
  if (puVar10 != puVar2) {
    uVar11 = ((long)puVar2 - (long)puVar10) - 4;
    puVar7 = puVar6;
    if (uVar11 < 0x3c) {
      puVar9 = puVar10;
    }
    else if (((undefined4 *)((long)puVar10 + (uVar11 & 0xfffffffffffffffc) + 4) <= puVar6) ||
            (puVar9 = puVar10,
            (undefined4 *)((long)puVar6 + ((long)puVar2 - (long)puVar10 & 0xfffffffffffffffcU)) <=
            puVar10)) {
      uVar11 = (uVar11 >> 2) + 1;
      uVar12 = uVar11 & 0x7ffffffffffffff0;
      puVar7 = puVar6 + uVar12;
      puVar9 = puVar10 + uVar12;
      puVar8 = (undefined8 *)(puVar10 + 8);
      puVar13 = (undefined8 *)(puVar6 + 8);
      uVar14 = uVar12;
      do {
        uVar15 = puVar8[-4];
        uVar17 = puVar8[-1];
        uVar16 = puVar8[-2];
        uVar14 = uVar14 - 0x10;
        uVar19 = puVar8[1];
        uVar18 = *puVar8;
        uVar21 = puVar8[3];
        uVar20 = puVar8[2];
        puVar13[-3] = puVar8[-3];
        puVar13[-4] = uVar15;
        puVar13[-1] = uVar17;
        puVar13[-2] = uVar16;
        puVar13[1] = uVar19;
        *puVar13 = uVar18;
        puVar13[3] = uVar21;
        puVar13[2] = uVar20;
        puVar8 = puVar8 + 8;
        puVar13 = puVar13 + 8;
      } while (uVar14 != 0);
      puVar6 = puVar7;
      if (uVar11 == uVar12) goto LAB_005c8394;
    }
    do {
      puVar10 = puVar9 + 1;
      *puVar7 = *puVar9;
      puVar6 = puVar7 + 1;
      puVar7 = puVar7 + 1;
      puVar9 = puVar10;
    } while (puVar2 != puVar10);
  }
LAB_005c8394:
  param_1[0xe] = (ulong)puVar6;
LAB_005c8398:
  param_1[0x11] = param_2[0x11];
  return;
}


