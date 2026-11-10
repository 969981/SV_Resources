/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b112c0; name: FUN_00b112c0
 */


void FUN_00b112c0(void *param_1,void *param_2)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  int iVar11;
  void *pvVar12;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  void *pvVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  void *pvVar20;
  void *pvVar21;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [272];
  
LAB_00b11300:
  pvVar14 = (void *)((long)param_2 + -0x108);
  pvVar16 = param_1;
LAB_00b11310:
  param_1 = pvVar16;
  uVar13 = (long)param_2 - (long)param_1;
  switch(((long)uVar13 >> 3) * 0xf83e0f83e0f83e1) {
  case 0:
  case 1:
    goto switchD_00b118c4_caseD_0;
  case 2:
    bVar1 = *(int *)((long)param_2 + -0x8c) < *(int *)((long)param_1 + 0x7c);
    if (*(int *)((long)param_2 + -8) != *(int *)((long)param_1 + 0x100)) {
      bVar1 = *(int *)((long)param_2 + -8) < *(int *)((long)param_1 + 0x100);
    }
    if (!bVar1) {
      return;
    }
    memcpy(auStack_170,param_1,0x108);
    break;
  case 3:
    pvVar16 = (void *)((long)param_1 + 0x108);
    iVar11 = *(int *)((long)param_1 + 0x208);
    bVar1 = *(int *)((long)param_1 + 0x184) < *(int *)((long)param_1 + 0x7c);
    if (iVar11 != *(int *)((long)param_1 + 0x100)) {
      bVar1 = iVar11 < *(int *)((long)param_1 + 0x100);
    }
    bVar2 = *(int *)((long)param_2 + -0x8c) < *(int *)((long)param_1 + 0x184);
    if (*(int *)((long)param_2 + -8) != iVar11) {
      bVar2 = *(int *)((long)param_2 + -8) < iVar11;
    }
    if (!bVar1) {
      if (!bVar2) {
        return;
      }
      memcpy(auStack_170,pvVar16,0x108);
      memcpy(pvVar16,pvVar14,0x105);
      memcpy(pvVar14,auStack_170,0x105);
      bVar1 = *(int *)((long)param_1 + 0x184) < *(int *)((long)param_1 + 0x7c);
      if (*(int *)((long)param_1 + 0x208) != *(int *)((long)param_1 + 0x100)) {
        bVar1 = *(int *)((long)param_1 + 0x208) < *(int *)((long)param_1 + 0x100);
      }
      if (!bVar1) {
        return;
      }
      memcpy(auStack_170,param_1,0x108);
      memcpy(param_1,pvVar16,0x105);
      pvVar14 = pvVar16;
      goto LAB_00b11c0c;
    }
    memcpy(auStack_170,param_1,0x108);
    if (!bVar2) {
      memcpy(param_1,pvVar16,0x105);
      memcpy(pvVar16,auStack_170,0x105);
      bVar1 = *(int *)((long)param_2 + -0x8c) < *(int *)((long)param_1 + 0x184);
      if (*(int *)((long)param_2 + -8) != *(int *)((long)param_1 + 0x208)) {
        bVar1 = *(int *)((long)param_2 + -8) < *(int *)((long)param_1 + 0x208);
      }
      if (!bVar1) {
        return;
      }
      memcpy(auStack_170,pvVar16,0x108);
      memcpy(pvVar16,pvVar14,0x105);
      goto LAB_00b11c0c;
    }
    break;
  case 4:
    FUN_00b11db0(param_1,(long)param_1 + 0x108,(long)param_1 + 0x210,pvVar14);
    return;
  case 5:
    FUN_00b120e0(param_1,(long)param_1 + 0x108,(long)param_1 + 0x210,(long)param_1 + 0x318,pvVar14);
    return;
  default:
    if (0x1ff7 < (long)uVar13) {
      uVar19 = uVar13 / 0x210;
      pvVar16 = (void *)((long)param_1 + uVar19 * 0x108);
      if ((long)uVar13 < 0x40639) {
        piVar18 = (int *)((long)param_1 + uVar19 * 0x108 + 0x7c);
        iVar11 = *(int *)((long)param_1 + uVar19 * 0x108 + 0x100);
        bVar1 = *piVar18 < *(int *)((long)param_1 + 0x7c);
        if (iVar11 != *(int *)((long)param_1 + 0x100)) {
          bVar1 = iVar11 < *(int *)((long)param_1 + 0x100);
        }
        piVar3 = (int *)((long)param_1 + uVar19 * 0x108 + 0x100);
        bVar2 = *(int *)((long)param_2 + -0x8c) < *piVar18;
        if (*(int *)((long)param_2 + -8) != iVar11) {
          bVar2 = *(int *)((long)param_2 + -8) < iVar11;
        }
        if (bVar1) {
          memcpy(auStack_170,param_1,0x108);
          if (bVar2) {
            memcpy(param_1,pvVar14,0x105);
            memcpy(pvVar14,auStack_170,0x105);
          }
          else {
            memcpy(param_1,pvVar16,0x105);
            memcpy(pvVar16,auStack_170,0x105);
            iVar11 = *piVar3;
            bVar1 = *(int *)((long)param_2 + -0x8c) < *piVar18;
            if (*(int *)((long)param_2 + -8) != iVar11) {
              bVar1 = *(int *)((long)param_2 + -8) < iVar11;
            }
            if (bVar1) {
              memcpy(auStack_170,pvVar16,0x108);
              memcpy(pvVar16,pvVar14,0x105);
              pvVar12 = pvVar14;
              goto LAB_00b114fc;
            }
          }
LAB_00b1150c:
          iVar11 = 1;
        }
        else if (!bVar2) {
          iVar11 = 0;
        }
        else {
          memcpy(auStack_170,pvVar16,0x108);
          memcpy(pvVar16,pvVar14,0x105);
          memcpy(pvVar14,auStack_170,0x105);
          iVar11 = *piVar3;
          bVar1 = *piVar18 < *(int *)((long)param_1 + 0x7c);
          if (iVar11 != *(int *)((long)param_1 + 0x100)) {
            bVar1 = iVar11 < *(int *)((long)param_1 + 0x100);
          }
          if (!bVar1) goto LAB_00b1150c;
          memcpy(auStack_170,param_1,0x108);
          memcpy(param_1,pvVar16,0x105);
          pvVar12 = pvVar16;
LAB_00b114fc:
          memcpy(pvVar12,auStack_170,0x105);
          iVar11 = 2;
        }
      }
      else {
        lVar17 = (uVar13 / 0x420) * 0x20 + uVar13 / 0x420;
        iVar11 = FUN_00b120e0(param_1,(void *)((long)param_1 + lVar17 * 8),pvVar16,
                              (void *)((long)pvVar16 + lVar17 * 8),pvVar14);
      }
      iVar5 = *(int *)((long)param_1 + uVar19 * 0x108 + 0x100);
      iVar6 = *(int *)((long)param_1 + 0x7c);
      iVar7 = *(int *)((long)param_1 + uVar19 * 0x108 + 0x7c);
      iVar8 = *(int *)((long)param_1 + 0x100);
      bVar1 = iVar6 < iVar7;
      if (iVar8 != iVar5) {
        bVar1 = iVar8 < iVar5;
      }
      if (!bVar1) goto LAB_00b1155c;
      pvVar21 = pvVar14;
      goto LAB_00b115c8;
    }
    pvVar16 = (void *)((long)param_1 + 0x210);
    pvVar14 = (void *)((long)param_1 + 0x108);
    iVar11 = *(int *)((long)param_1 + 0x7c);
    iVar5 = *(int *)((long)param_1 + 0x208);
    iVar6 = *(int *)((long)param_1 + 0x100);
    iVar7 = *(int *)((long)param_1 + 0x28c);
    iVar8 = *(int *)((long)param_1 + 0x310);
    bVar1 = *(int *)((long)param_1 + 0x184) < iVar11;
    if (iVar5 != iVar6) {
      bVar1 = iVar5 < iVar6;
    }
    bVar2 = iVar7 < *(int *)((long)param_1 + 0x184);
    if (iVar8 != iVar5) {
      bVar2 = iVar8 < iVar5;
    }
    if (bVar1) {
      memcpy(auStack_170,param_1,0x108);
      if (bVar2) {
        memcpy(param_1,pvVar16,0x105);
        pvVar14 = pvVar16;
      }
      else {
        memcpy(param_1,pvVar14,0x105);
        memcpy(pvVar14,auStack_170,0x105);
        bVar1 = iVar7 < *(int *)((long)param_1 + 0x184);
        if (iVar8 != *(int *)((long)param_1 + 0x208)) {
          bVar1 = iVar8 < *(int *)((long)param_1 + 0x208);
        }
        if (!bVar1) goto LAB_00b11a94;
        memcpy(auStack_170,pvVar14,0x108);
        memcpy(pvVar14,pvVar16,0x105);
        pvVar14 = pvVar16;
      }
LAB_00b11a90:
      memcpy(pvVar14,auStack_170,0x105);
    }
    else if (bVar2) {
      memcpy(auStack_170,pvVar14,0x108);
      memcpy(pvVar14,pvVar16,0x105);
      memcpy(pvVar16,auStack_170,0x105);
      bVar1 = *(int *)((long)param_1 + 0x184) < iVar11;
      if (*(int *)((long)param_1 + 0x208) != iVar6) {
        bVar1 = *(int *)((long)param_1 + 0x208) < iVar6;
      }
      if (bVar1) {
        memcpy(auStack_170,param_1,0x108);
        memcpy(param_1,pvVar14,0x105);
        goto LAB_00b11a90;
      }
    }
LAB_00b11a94:
    if ((void *)((long)param_1 + 0x318) == param_2) {
      return;
    }
    lVar17 = 0;
    pvVar14 = (void *)((long)param_1 + 0x318);
    goto LAB_00b11aa8;
  }
  memcpy(param_1,pvVar14,0x105);
LAB_00b11c0c:
  memcpy(pvVar14,auStack_170,0x105);
  return;
LAB_00b1155c:
  pvVar12 = (void *)((long)param_2 + -0x210);
  while (pvVar21 = pvVar12, param_1 != pvVar21) {
    bVar1 = *(int *)((long)pvVar21 + 0x7c) < iVar7;
    if (*(int *)((long)pvVar21 + 0x100) != iVar5) {
      bVar1 = *(int *)((long)pvVar21 + 0x100) < iVar5;
    }
    pvVar12 = (void *)((long)pvVar21 + -0x108);
    if (bVar1) goto code_r0x00b11590;
  }
  pvVar12 = (void *)((long)param_1 + 0x108);
  bVar1 = iVar6 < *(int *)((long)param_2 + -0x8c);
  if (iVar8 != *(int *)((long)param_2 + -8)) {
    bVar1 = iVar8 < *(int *)((long)param_2 + -8);
  }
  if (!bVar1) {
    if (pvVar12 == pvVar14) {
      return;
    }
    pvVar12 = (void *)((long)param_1 + 0x210);
    while( true ) {
      bVar1 = iVar6 < *(int *)((long)pvVar12 + -0x8c);
      if (iVar8 != *(int *)((long)pvVar12 + -8)) {
        bVar1 = iVar8 < *(int *)((long)pvVar12 + -8);
      }
      if (bVar1) break;
      pvVar12 = (void *)((long)pvVar12 + 0x108);
      if (param_2 == pvVar12) {
        return;
      }
    }
    memcpy(auStack_170,(void *)((long)pvVar12 + -0x108),0x108);
    memcpy((void *)((long)pvVar12 + -0x108),pvVar14,0x105);
    memcpy(pvVar14,auStack_170,0x105);
  }
  if (pvVar12 == pvVar14) {
    return;
  }
  pvVar21 = pvVar14;
  while( true ) {
    iVar11 = *(int *)((long)param_1 + 0x100);
    pvVar16 = (void *)((long)pvVar12 + -0x108);
    do {
      pvVar12 = pvVar16;
      pvVar16 = (void *)((long)pvVar12 + 0x108);
      bVar1 = *(int *)((long)param_1 + 0x7c) < *(int *)((long)pvVar12 + 0x184);
      if (iVar11 != *(int *)((long)pvVar12 + 0x208)) {
        bVar1 = iVar11 < *(int *)((long)pvVar12 + 0x208);
      }
    } while (!bVar1);
    pvVar12 = (void *)((long)pvVar12 + 0x210);
    do {
      piVar18 = (int *)((long)pvVar21 + -0x8c);
      piVar3 = (int *)((long)pvVar21 + -8);
      pvVar21 = (void *)((long)pvVar21 + -0x108);
      bVar1 = *(int *)((long)param_1 + 0x7c) < *piVar18;
      if (iVar11 != *piVar3) {
        bVar1 = iVar11 < *piVar3;
      }
    } while (bVar1);
    if (pvVar21 <= pvVar16) break;
    memcpy(auStack_170,pvVar16,0x108);
    memcpy(pvVar16,pvVar21,0x105);
    memcpy(pvVar21,auStack_170,0x105);
  }
  goto LAB_00b11310;
code_r0x00b11590:
  memcpy(auStack_170,param_1,0x108);
  memcpy(param_1,pvVar21,0x105);
  memcpy(pvVar21,auStack_170,0x105);
  iVar11 = iVar11 + 1;
LAB_00b115c8:
  pvVar12 = (void *)((long)param_1 + 0x108);
  pvVar20 = pvVar12;
  if (pvVar12 < pvVar21) {
    while( true ) {
      iVar5 = *(int *)((long)pvVar16 + 0x100);
      pvVar12 = (void *)((long)pvVar20 - 0x108);
      do {
        pvVar20 = pvVar12;
        pvVar12 = (void *)((long)pvVar20 + 0x108);
        bVar1 = *(int *)((long)pvVar20 + 0x184) < *(int *)((long)pvVar16 + 0x7c);
        if (*(int *)((long)pvVar20 + 0x208) != iVar5) {
          bVar1 = *(int *)((long)pvVar20 + 0x208) < iVar5;
        }
      } while (bVar1);
      pvVar20 = (void *)((long)pvVar20 + 0x210);
      do {
        piVar18 = (int *)((long)pvVar21 + -0x8c);
        piVar3 = (int *)((long)pvVar21 + -8);
        pvVar21 = (void *)((long)pvVar21 + -0x108);
        bVar1 = *piVar18 < *(int *)((long)pvVar16 + 0x7c);
        if (*piVar3 != iVar5) {
          bVar1 = *piVar3 < iVar5;
        }
      } while (!bVar1);
      if (pvVar21 < pvVar12) break;
      memcpy(auStack_170,pvVar12,0x108);
      memcpy(pvVar12,pvVar21,0x105);
      memcpy(pvVar21,auStack_170,0x105);
      iVar11 = iVar11 + 1;
      pvVar4 = pvVar21;
      if (pvVar16 != pvVar12) {
        pvVar4 = pvVar16;
      }
      pvVar16 = pvVar4;
    }
  }
  if (pvVar12 != pvVar16) {
    bVar1 = *(int *)((long)pvVar16 + 0x7c) < *(int *)((long)pvVar12 + 0x7c);
    if (*(int *)((long)pvVar16 + 0x100) != *(int *)((long)pvVar12 + 0x100)) {
      bVar1 = *(int *)((long)pvVar16 + 0x100) < *(int *)((long)pvVar12 + 0x100);
    }
    if (bVar1) {
      memcpy(auStack_170,pvVar12,0x108);
      memcpy(pvVar12,pvVar16,0x105);
      memcpy(pvVar16,auStack_170,0x105);
      iVar11 = iVar11 + 1;
    }
  }
  if (iVar11 == 0) {
    uVar13 = FUN_00b122e0(param_1,pvVar12);
    uVar19 = FUN_00b122e0((void *)((long)pvVar12 + 0x108),param_2);
    if ((uVar19 & 1) != 0) goto LAB_00b118a4;
    pvVar16 = (void *)((long)pvVar12 + 0x108);
    if ((uVar13 & 1) != 0) goto LAB_00b11310;
  }
  if (((long)param_2 - (long)pvVar12 >> 3) * 0xf83e0f83e0f83e1 <=
      ((long)pvVar12 - (long)param_1 >> 3) * 0xf83e0f83e0f83e1) {
    FUN_00b112c0((long)pvVar12 + 0x108,param_2);
    param_2 = pvVar12;
    goto LAB_00b11300;
  }
  FUN_00b112c0(param_1,pvVar12);
  pvVar16 = (void *)((long)pvVar12 + 0x108);
  goto LAB_00b11310;
LAB_00b118a4:
  param_2 = pvVar12;
  if ((uVar13 & 1) != 0) {
    return;
  }
  goto LAB_00b11300;
LAB_00b11aa8:
  pvVar12 = pvVar14;
  iVar11 = *(int *)((long)pvVar12 + 0x7c);
  iVar5 = *(int *)((long)pvVar12 + 0x100);
  bVar1 = iVar11 < *(int *)((long)pvVar16 + 0x7c);
  if (iVar5 != *(int *)((long)pvVar16 + 0x100)) {
    bVar1 = iVar5 < *(int *)((long)pvVar16 + 0x100);
  }
  if (bVar1) {
    memcpy(auStack_1f0,pvVar12,0x7c);
    memcpy(auStack_170,(void *)((long)pvVar12 + 0x80),0x80);
    uVar9 = *(undefined4 *)((long)pvVar12 + 0x104);
    lVar10 = lVar17;
    do {
      lVar15 = lVar10;
      memcpy((void *)((long)param_1 + lVar15 + 0x318),(void *)((long)param_1 + lVar15 + 0x210),0x105
            );
      if (lVar15 == -0x210) {
        pvVar16 = param_1;
        goto LAB_00b11b50;
      }
      iVar6 = *(int *)((long)param_1 + lVar15 + 0x208);
      bVar1 = iVar11 < *(int *)((long)param_1 + lVar15 + 0x184);
      if (iVar5 != iVar6) {
        bVar1 = iVar5 < iVar6;
      }
      lVar10 = lVar15 + -0x108;
    } while (bVar1);
    pvVar16 = (void *)((long)param_1 + lVar15 + 0x210);
LAB_00b11b50:
    memcpy(pvVar16,auStack_1f0,0x7c);
    *(int *)((long)pvVar16 + 0x7c) = iVar11;
    memcpy((void *)((long)pvVar16 + 0x80),auStack_170,0x80);
    *(int *)((long)pvVar16 + 0x100) = iVar5;
    *(char *)((long)pvVar16 + 0x104) = (char)uVar9;
  }
  lVar17 = lVar17 + 0x108;
  pvVar14 = (void *)((long)pvVar12 + 0x108);
  pvVar16 = pvVar12;
  if ((void *)((long)pvVar12 + 0x108) == param_2) {
switchD_00b118c4_caseD_0:
    return;
  }
  goto LAB_00b11aa8;
}


