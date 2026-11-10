/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e3f700; name: FUN_00e3f700
 */


void FUN_00e3f700(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long unaff_x21;
  undefined8 *unaff_x25;
  undefined8 *puVar17;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar12 = *param_2;
    uVar15 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    puVar1[6] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = uVar2;
    puVar1[3] = uVar3;
    *puVar1 = uVar12;
    puVar1[1] = uVar15;
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
    puVar1[6] = param_2[6];
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[7] = param_2[7];
    puVar1[8] = param_2[8];
    puVar1[9] = param_2[9];
    uVar12 = param_2[10];
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[7] = 0;
    *(undefined8 *)((long)puVar1 + 0x55) = *(undefined8 *)((long)param_2 + 0x55);
    puVar1[10] = uVar12;
    param_1[1] = (long)(puVar1 + 0xc);
    return;
  }
  lVar8 = (long)puVar1 - *param_1 >> 5;
  uVar7 = lVar8 * -0x5555555555555555 + 1;
  if (0x2aaaaaaaaaaaaaa < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar11 = param_1[2] - *param_1 >> 5;
  uVar13 = lVar11 * 0x5555555555555556;
  if (uVar7 <= uVar13) {
    uVar7 = uVar13;
  }
  if (0x155555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
    uVar7 = 0x2aaaaaaaaaaaaaa;
  }
  lVar11 = tpidr_el0;
  if (uVar7 == 0) {
    lVar6 = 0;
    goto LAB_00e3f7cc;
  }
  if (uVar7 < 0x2aaaaaaaaaaaaab) {
    unaff_x21 = uVar7 * 0x60;
    plVar9 = *(long **)(lVar11 + 0x30);
    if (plVar9 == (long *)0x0) {
      unaff_x25 = &DAT_04859000;
      if ((DAT_04859438 & 1) == 0) goto LAB_00e3fcac;
      goto LAB_00e3fc04;
    }
  }
  else {
    FUN_028a5f50();
LAB_00e3fcac:
    iVar5 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar5 != 0) {
      unaff_x25[0x86] = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_00e3fc04:
    plVar9 = (long *)unaff_x25[0x86];
    *(long **)(lVar11 + 0x30) = plVar9;
  }
  lVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,unaff_x21,8);
LAB_00e3f7cc:
  puVar10 = (undefined8 *)(lVar6 + lVar8 * 0x20);
  uVar12 = *param_2;
  uVar15 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  puVar10[6] = 0;
  puVar10[2] = uVar2;
  puVar10[3] = uVar3;
  *puVar10 = uVar12;
  puVar10[1] = uVar15;
  puVar10[4] = param_2[4];
  puVar10[5] = param_2[5];
  puVar10[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  puVar10[9] = 0;
  puVar10[7] = param_2[7];
  puVar10[8] = param_2[8];
  puVar10[9] = param_2[9];
  uVar12 = param_2[10];
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined8 *)((long)puVar10 + 0x55) = *(undefined8 *)((long)param_2 + 0x55);
  puVar10[10] = uVar12;
  puVar16 = (undefined8 *)*param_1;
  puVar17 = (undefined8 *)param_1[1];
  puVar1 = puVar10 + 0xc;
  if (puVar17 == puVar16) {
    puVar17 = puVar16;
  }
  else {
    uVar12 = puVar17[-0xb];
    uVar2 = puVar17[-10];
    uVar15 = puVar17[-9];
    puVar10[-0xc] = puVar17[-0xc];
    puVar10[-8] = 0;
    puVar10[-7] = 0;
    puVar10[-6] = 0;
    puVar10[-10] = uVar2;
    puVar10[-9] = uVar15;
    puVar10[-0xb] = uVar12;
    puVar10[-8] = puVar17[-8];
    puVar10[-7] = puVar17[-7];
    puVar10[-6] = puVar17[-6];
    puVar17[-7] = 0;
    puVar17[-6] = 0;
    puVar17[-8] = 0;
    puVar10[-4] = 0;
    puVar10[-3] = 0;
    puVar10[-5] = 0;
    puVar10[-5] = puVar17[-5];
    puVar10[-4] = puVar17[-4];
    puVar10[-3] = puVar17[-3];
    uVar12 = puVar17[-2];
    puVar17[-5] = 0;
    puVar17[-4] = 0;
    puVar17[-3] = 0;
    *(undefined8 *)((long)puVar10 + -0xb) = *(undefined8 *)((long)puVar17 + -0xb);
    puVar10[-2] = uVar12;
    puVar4 = puVar10 + -0xc;
    if (puVar17 + -0xc != puVar16) {
      lVar8 = 0;
      do {
        lVar14 = lVar8;
        uVar12 = *(undefined8 *)((long)puVar17 + lVar14 + -0xc0);
        uVar15 = *(undefined8 *)((long)puVar17 + lVar14 + -0xb8);
        uVar2 = *(undefined8 *)((long)puVar17 + lVar14 + -0xb0);
        uVar3 = *(undefined8 *)((long)puVar17 + lVar14 + -0xa8);
        *(undefined8 *)((long)puVar10 + lVar14 + -0xa0) = 0;
        *(undefined8 *)((long)puVar10 + lVar14 + -0x98) = 0;
        *(undefined8 *)((long)puVar10 + lVar14 + -0x90) = 0;
        *(undefined8 *)((long)puVar10 + lVar14 + -0xb0) = uVar2;
        *(undefined8 *)((long)puVar10 + lVar14 + -0xa8) = uVar3;
        *(undefined8 *)((long)puVar10 + lVar14 + -0xc0) = uVar12;
        *(undefined8 *)((long)puVar10 + lVar14 + -0xb8) = uVar15;
        *(undefined8 *)((long)puVar10 + lVar14 + -0xa0) =
             *(undefined8 *)((long)puVar17 + lVar14 + -0xa0);
        *(undefined8 *)((long)puVar10 + lVar14 + -0x98) =
             *(undefined8 *)((long)puVar17 + lVar14 + -0x98);
        *(undefined8 *)((long)puVar10 + lVar14 + -0x90) =
             *(undefined8 *)((long)puVar17 + lVar14 + -0x90);
        *(undefined8 *)((long)puVar17 + lVar14 + -0x98) = 0;
        *(undefined8 *)((long)puVar17 + lVar14 + -0x90) = 0;
        *(undefined8 *)((long)puVar17 + lVar14 + -0xa0) = 0;
        *(undefined8 *)((long)puVar10 + lVar14 + -0x80) = 0;
        *(undefined8 *)((long)puVar10 + lVar14 + -0x78) = 0;
        *(undefined8 *)((long)puVar10 + lVar14 + -0x88) = 0;
        *(undefined8 *)((long)puVar10 + lVar14 + -0x88) =
             *(undefined8 *)((long)puVar17 + lVar14 + -0x88);
        *(undefined8 *)((long)puVar10 + lVar14 + -0x80) =
             *(undefined8 *)((long)puVar17 + lVar14 + -0x80);
        *(undefined8 *)((long)puVar10 + lVar14 + -0x78) =
             *(undefined8 *)((long)puVar17 + lVar14 + -0x78);
        uVar12 = *(undefined8 *)((long)puVar17 + lVar14 + -0x70);
        *(undefined8 *)((long)puVar17 + lVar14 + -0x88) = 0;
        *(undefined8 *)((long)puVar17 + lVar14 + -0x80) = 0;
        *(undefined8 *)((long)puVar17 + lVar14 + -0x78) = 0;
        *(undefined8 *)((long)puVar10 + lVar14 + -0x6b) =
             *(undefined8 *)((long)puVar17 + lVar14 + -0x6b);
        *(undefined8 *)((long)puVar10 + lVar14 + -0x70) = uVar12;
        lVar8 = lVar14 + -0x60;
      } while ((long)puVar16 + (0x60 - (long)puVar17) != lVar14 + -0x60);
      puVar4 = (undefined8 *)((long)puVar10 + lVar14 + -0xc0);
    }
    puVar10 = puVar4;
    puVar16 = (undefined8 *)*param_1;
    puVar17 = (undefined8 *)param_1[1];
  }
  *param_1 = (long)puVar10;
  param_1[1] = (long)puVar1;
  param_1[2] = lVar6 + uVar7 * 0x60;
  while (puVar1 = puVar17, puVar1 != puVar16) {
    lVar8 = puVar1[-5];
    if (lVar8 != 0) {
      puVar1[-4] = lVar8;
      plVar9 = *(long **)(lVar11 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar11 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,0,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar8,0,8);
      }
    }
    lVar8 = puVar1[-8];
    puVar17 = puVar1 + -0xc;
    if (lVar8 != 0) {
      puVar1[-7] = lVar8;
      plVar9 = *(long **)(lVar11 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar11 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,0,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar8,0,8);
      }
    }
  }
  if (puVar16 == (undefined8 *)0x0) {
    return;
  }
  plVar9 = *(long **)(lVar11 + 0x30);
  if (plVar9 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar9 = DAT_04859430;
    *(long **)(lVar11 + 0x30) = DAT_04859430;
  }
  uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00e3fb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x18))(plVar9,puVar16,0,8);
    return;
  }
  FUN_00c48fe8(plVar9,puVar16,0,8);
  return;
}


