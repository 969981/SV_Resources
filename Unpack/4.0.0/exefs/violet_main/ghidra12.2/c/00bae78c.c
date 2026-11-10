/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bae78c; name: FUN_00bae78c
 */


void FUN_00bae78c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar13;
  undefined8 *puVar12;
  undefined8 *puVar14;
  long unaff_x21;
  long lVar15;
  undefined8 *unaff_x25;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    uVar11 = param_2[2];
    puVar1[1] = param_2[1];
    puVar1[2] = uVar11;
    *puVar1 = uVar2;
    uVar2 = param_2[4];
    uVar11 = param_2[5];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar1[3] = param_2[3];
    puVar1[4] = uVar2;
    puVar1[5] = uVar11;
    uVar2 = param_2[7];
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    puVar1[6] = param_2[6];
    puVar1[7] = uVar2;
    param_1[1] = (long)(puVar1 + 8);
    return;
  }
  lVar15 = (long)puVar1 - *param_1 >> 6;
  uVar5 = lVar15 + 1;
  if (uVar5 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1;
  uVar10 = lVar7 >> 5;
  if (uVar5 <= uVar10) {
    uVar5 = uVar10;
  }
  if (0x1fffffffffffffe < (ulong)(lVar7 >> 6)) {
    uVar5 = 0x3ffffffffffffff;
  }
  lVar7 = tpidr_el0;
  if (uVar5 == 0) {
    lVar4 = 0;
    goto LAB_00bae884;
  }
  if (uVar5 >> 0x3a == 0) {
    unaff_x21 = uVar5 << 6;
    plVar6 = *(long **)(lVar7 + 0x30);
    if (plVar6 == (long *)0x0) {
      unaff_x25 = &DAT_04859000;
      if ((DAT_04859438 & 1) == 0) goto LAB_00baec0c;
      goto LAB_00baebb4;
    }
  }
  else {
    FUN_01f6e360();
LAB_00baec0c:
    iVar3 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar3 != 0) {
      unaff_x25[0x86] = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_00baebb4:
    plVar6 = (long *)unaff_x25[0x86];
    *(long **)(lVar7 + 0x30) = plVar6;
  }
  lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,unaff_x21,8);
LAB_00bae884:
  uVar2 = *param_2;
  puVar9 = (undefined8 *)(lVar4 + lVar15 * 0x40);
  uVar11 = param_2[2];
  puVar9[1] = param_2[1];
  puVar9[2] = uVar11;
  *puVar9 = uVar2;
  uVar2 = param_2[4];
  uVar11 = param_2[5];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  puVar9[3] = param_2[3];
  puVar9[4] = uVar2;
  puVar9[5] = uVar11;
  param_2[3] = 0;
  uVar2 = param_2[7];
  param_2[4] = 0;
  param_2[5] = 0;
  puVar9[6] = param_2[6];
  puVar9[7] = uVar2;
  puVar1 = puVar9 + 8;
  puVar14 = (undefined8 *)*param_1;
  puVar8 = puVar9;
  puVar12 = (undefined8 *)param_1[1];
  if ((undefined8 *)param_1[1] == puVar14) {
    puVar8 = puVar14;
  }
  else {
    do {
      puVar13 = puVar12 + -8;
      uVar2 = puVar12[-7];
      uVar11 = puVar12[-6];
      puVar9 = puVar8 + -8;
      *puVar9 = *puVar13;
      puVar8[-7] = uVar2;
      puVar8[-6] = uVar11;
      uVar11 = puVar12[-3];
      uVar2 = puVar12[-4];
      *puVar13 = 0;
      puVar12[-7] = 0;
      puVar12[-6] = 0;
      puVar8[-5] = puVar12[-5];
      puVar8[-4] = uVar2;
      puVar8[-3] = uVar11;
      puVar12[-5] = 0;
      uVar2 = puVar12[-1];
      puVar12[-4] = 0;
      puVar12[-3] = 0;
      puVar8[-2] = puVar12[-2];
      puVar8[-1] = uVar2;
      puVar8 = puVar9;
      puVar12 = puVar13;
    } while (puVar14 != puVar13);
    puVar14 = (undefined8 *)*param_1;
    puVar8 = (undefined8 *)param_1[1];
  }
  *param_1 = (long)puVar9;
  param_1[1] = (long)puVar1;
  param_1[2] = lVar4 + uVar5 * 0x40;
  while (puVar1 = puVar8, puVar1 != puVar14) {
    if (((*(byte *)(puVar1 + -5) & 1) != 0) && (lVar15 = puVar1[-3], lVar15 != 0)) {
      plVar6 = *(long **)(lVar7 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar7 + 0x30) = DAT_04859430;
      }
      uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar15,0,8);
      }
      else {
        FUN_00c48fe8(plVar6,lVar15,0,8);
      }
    }
    puVar8 = puVar1 + -8;
    if (((*(byte *)(puVar1 + -8) & 1) != 0) && (lVar15 = puVar1[-6], lVar15 != 0)) {
      plVar6 = *(long **)(lVar7 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar7 + 0x30) = DAT_04859430;
      }
      uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar15,0,8);
      }
      else {
        FUN_00c48fe8(plVar6,lVar15,0,8);
      }
    }
  }
  if (puVar14 == (undefined8 *)0x0) {
    return;
  }
  plVar6 = *(long **)(lVar7 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar6 = DAT_04859430;
    *(long **)(lVar7 + 0x30) = DAT_04859430;
  }
  uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar5 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00baeb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,puVar14,0,8);
    return;
  }
  FUN_00c48fe8(plVar6,puVar14,0,8);
  return;
}


