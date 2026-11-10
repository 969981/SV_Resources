/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013f0e0; name: FUN_0013f0e0
 */


/* WARNING: Removing unreachable block (ram,0x0013f578) */
/* WARNING: Removing unreachable block (ram,0x0013f3a8) */
/* WARNING: Removing unreachable block (ram,0x0013fa4c) */

void FUN_0013f0e0(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 local_58;
  
  lVar5 = FUN_0013fc90();
  uVar15 = 0;
  plVar1 = param_1 + 1;
  if (lVar5 != 0) {
    param_3 = lVar5;
  }
  *(long *)(param_2 + 0x70) = param_3;
  do {
    lVar5 = *(long *)*plVar1;
    *(long *)*plVar1 = lVar5 + -1;
    if (lVar5 == 0) {
      uVar4 = FUN_00145730();
      if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
    }
    else {
      pbVar8 = *(byte **)(*plVar1 + 8);
      *(byte **)(*plVar1 + 8) = pbVar8 + 1;
      uVar4 = (uint)*pbVar8;
    }
    if (0xfffffe < uVar15) goto LAB_0013fc2c;
    uVar15 = (ulong)(uVar4 & 0x7f) | uVar15 << 7;
  } while ((uVar4 >> 7 & 1) == 0);
  uVar14 = 0;
  *(int *)(param_2 + 0x2c) = (int)uVar15;
  do {
    lVar5 = *(long *)*plVar1;
    *(long *)*plVar1 = lVar5 + -1;
    if (lVar5 == 0) {
      uVar4 = FUN_00145730();
      if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
    }
    else {
      pbVar8 = *(byte **)(*plVar1 + 8);
      *(byte **)(*plVar1 + 8) = pbVar8 + 1;
      uVar4 = (uint)*pbVar8;
    }
    if (0xfffffe < uVar14) goto LAB_0013fc2c;
    uVar14 = (ulong)(uVar4 & 0x7f) | uVar14 << 7;
  } while ((uVar4 >> 7 & 1) == 0);
  *(int *)(param_2 + 0x30) = (int)uVar14;
  lVar5 = *(long *)*plVar1;
  *(long *)*plVar1 = lVar5 + -1;
  if (lVar5 == 0) {
    uVar4 = FUN_00145730();
    if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
  }
  else {
    pbVar8 = *(byte **)(*plVar1 + 8);
    *(byte **)(*plVar1 + 8) = pbVar8 + 1;
    uVar4 = (uint)*pbVar8;
  }
  *(char *)(param_2 + 10) = (char)uVar4;
  lVar5 = *(long *)*plVar1;
  *(long *)*plVar1 = lVar5 + -1;
  if (lVar5 == 0) {
    uVar4 = FUN_00145730();
    if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
  }
  else {
    pbVar8 = *(byte **)(*plVar1 + 8);
    *(byte **)(*plVar1 + 8) = pbVar8 + 1;
    uVar4 = (uint)*pbVar8;
  }
  *(char *)(param_2 + 0xb) = (char)uVar4;
  lVar5 = *(long *)*plVar1;
  *(long *)*plVar1 = lVar5 + -1;
  if (lVar5 == 0) {
    uVar4 = FUN_00145730();
    if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
  }
  else {
    pbVar8 = *(byte **)(*plVar1 + 8);
    *(byte **)(*plVar1 + 8) = pbVar8 + 1;
    uVar4 = (uint)*pbVar8;
  }
  uVar15 = 0;
  *(char *)(param_2 + 0xc) = (char)uVar4;
  do {
    lVar5 = *(long *)*plVar1;
    *(long *)*plVar1 = lVar5 + -1;
    if (lVar5 == 0) {
      uVar4 = FUN_00145730();
      if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
    }
    else {
      pbVar8 = *(byte **)(*plVar1 + 8);
      *(byte **)(*plVar1 + 8) = pbVar8 + 1;
      uVar4 = (uint)*pbVar8;
    }
    if (0xfffffe < uVar15) goto LAB_0013fc2c;
    uVar14 = uVar15 << 7;
    uVar15 = uVar4 & 0x7f | uVar14;
  } while ((uVar4 >> 7 & 1) == 0);
  uVar14 = -((uVar14 & 0x80000000) >> 0x1f) & 0xfffffffc00000000 |
           ((ulong)(uVar4 & 0x7f) | uVar14 & 0xffffff80) << 2;
  uVar6 = FUN_0012d7b0(*param_1,uVar14,0);
  *(undefined8 *)(param_2 + 0x40) = uVar6;
  *(int *)(param_2 + 0x18) = (int)uVar15;
  lVar5 = FUN_001457a0(param_1[1],uVar6,uVar14);
  if (lVar5 != 0) goto LAB_0013f6a0;
  uVar15 = 0;
  do {
    lVar5 = *(long *)*plVar1;
    *(long *)*plVar1 = lVar5 + -1;
    if (lVar5 == 0) {
      uVar4 = FUN_00145730();
      if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
    }
    else {
      pbVar8 = *(byte **)(*plVar1 + 8);
      *(byte **)(*plVar1 + 8) = pbVar8 + 1;
      uVar4 = (uint)*pbVar8;
    }
    if (0xfffffe < uVar15) goto LAB_0013fc2c;
    uVar16 = (ulong)(uVar4 & 0x7f);
    uVar14 = uVar15 << 7;
    uVar15 = uVar16 | uVar14;
  } while ((uVar4 >> 7 & 1) == 0);
  lVar5 = FUN_0012d7b0(*param_1,-((uVar14 & 0x80000000) >> 0x1f) & 0xfffffff000000000 |
                                (uVar16 | uVar14 & 0xffffff80) << 4,0);
  *(long *)(param_2 + 0x38) = lVar5;
  *(int *)(param_2 + 0x14) = (int)uVar15;
  if (0 < (int)uVar15) {
    uVar16 = uVar16 | uVar14 & 0xffffff80;
    uVar15 = uVar16 - 1;
    *(undefined1 *)(lVar5 + 8) = 0;
    if (uVar15 != 0) {
      if (uVar16 == 2) {
        lVar5 = 1;
      }
      else {
        lVar5 = 0;
        uVar14 = 0;
        do {
          uVar9 = uVar14;
          *(undefined1 *)(*(long *)(param_2 + 0x38) + lVar5 + 0x18) = 0;
          uVar14 = uVar9 + 2;
          lVar11 = *(long *)(param_2 + 0x38) + lVar5;
          lVar5 = lVar5 + 0x20;
          *(undefined1 *)(lVar11 + 0x28) = 0;
        } while ((uVar15 & 0xfffffffffffffffe) != uVar14);
        lVar5 = uVar9 + 3;
        if ((uVar15 & 1) == 0) goto LAB_0013f3f4;
      }
      *(undefined1 *)(*(long *)(param_2 + 0x38) + lVar5 * 0x10 + 8) = 0;
    }
LAB_0013f3f4:
    lVar5 = 0;
    do {
      lVar11 = *(long *)*plVar1;
      lVar17 = *(long *)(param_2 + 0x38);
      *(long *)*plVar1 = lVar11 + -1;
      if (lVar11 == 0) {
        uVar4 = FUN_00145730();
        if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
      }
      else {
        pbVar8 = *(byte **)(*plVar1 + 8);
        *(byte **)(*plVar1 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
      }
      bVar3 = (byte)uVar4;
      switch(uVar4 & 0xff) {
      case 0:
      case 1:
      case 0x11:
        break;
      default:
        goto switchD_0013f474_caseD_2;
      case 3:
        lVar11 = FUN_001457a0(*plVar1,&local_58,8);
        if (lVar11 != 0) goto LAB_0013f6a0;
        *(undefined8 *)(lVar17 + lVar5) = local_58;
        bVar3 = 3;
        break;
      case 4:
      case 0x14:
        lVar11 = FUN_0013fc90(param_1,param_2);
        if (lVar11 == 0) goto LAB_0013fc3c;
        *(long *)(lVar17 + lVar5) = lVar11;
        bVar3 = *(byte *)(lVar11 + 8) | 0x40;
        break;
      case 0x13:
        lVar11 = FUN_001457a0(*plVar1,&local_58,8);
        if (lVar11 != 0) goto LAB_0013f6a0;
        *(undefined8 *)(lVar17 + lVar5) = local_58;
        bVar3 = 0x13;
      }
      *(byte *)(lVar17 + lVar5 + 8) = bVar3;
switchD_0013f474_caseD_2:
      lVar5 = lVar5 + 0x10;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar15 = 0;
  do {
    lVar5 = *(long *)*plVar1;
    *(long *)*plVar1 = lVar5 + -1;
    if (lVar5 == 0) {
      uVar4 = FUN_00145730();
      if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
    }
    else {
      pbVar8 = *(byte **)(*plVar1 + 8);
      *(byte **)(*plVar1 + 8) = pbVar8 + 1;
      uVar4 = (uint)*pbVar8;
    }
    if (0xfffffe < uVar15) {
LAB_0013fc2c:
      FUN_0013fc50(param_1,"integer overflow");
LAB_0013fc3c:
      FUN_0013fc50(param_1,"bad format for constant string");
                    /* WARNING: Does not return */
      pcVar2 = (code *)UndefinedInstructionException(0,0x13fc4c);
      (*pcVar2)();
    }
    uVar16 = (ulong)(uVar4 & 0x7f);
    uVar14 = uVar15 << 7;
    uVar15 = uVar16 | uVar14;
  } while ((uVar4 >> 7 & 1) == 0);
  puVar7 = (undefined8 *)
           FUN_0012d7b0(*param_1,-((uVar14 & 0x80000000) >> 0x1f) & 0xfffffff000000000 |
                                 (uVar16 | uVar14 & 0xffffff80) << 4,0);
  *(undefined8 **)(param_2 + 0x50) = puVar7;
  *(int *)(param_2 + 0x10) = (int)uVar15;
  if (0 < (int)uVar15) {
    uVar16 = uVar16 | uVar14 & 0xffffff80;
    uVar15 = uVar16 - 1;
    *puVar7 = 0;
    if (uVar15 != 0) {
      if (uVar16 == 2) {
        lVar5 = 1;
      }
      else {
        lVar5 = 0;
        uVar14 = 0;
        do {
          uVar9 = uVar14;
          *(undefined8 *)(*(long *)(param_2 + 0x50) + lVar5 + 0x10) = 0;
          uVar14 = uVar9 + 2;
          lVar11 = *(long *)(param_2 + 0x50) + lVar5;
          lVar5 = lVar5 + 0x20;
          *(undefined8 *)(lVar11 + 0x20) = 0;
        } while ((uVar15 & 0xfffffffffffffffe) != uVar14);
        lVar5 = uVar9 + 3;
        if ((uVar15 & 1) == 0) goto LAB_0013f5c4;
      }
      *(undefined8 *)(*(long *)(param_2 + 0x50) + lVar5 * 0x10) = 0;
    }
LAB_0013f5c4:
    lVar5 = 0;
    do {
      lVar11 = *(long *)*plVar1;
      *(long *)*plVar1 = lVar11 + -1;
      if (lVar11 == 0) {
        uVar4 = FUN_00145730();
        if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
      }
      else {
        pbVar8 = *(byte **)(*plVar1 + 8);
        *(byte **)(*plVar1 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
      }
      *(char *)(*(long *)(param_2 + 0x50) + lVar5 + 8) = (char)uVar4;
      lVar11 = *(long *)*plVar1;
      *(long *)*plVar1 = lVar11 + -1;
      if (lVar11 == 0) {
        uVar4 = FUN_00145730();
        if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
      }
      else {
        pbVar8 = *(byte **)(*plVar1 + 8);
        *(byte **)(*plVar1 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
      }
      *(char *)(*(long *)(param_2 + 0x50) + lVar5 + 9) = (char)uVar4;
      lVar11 = *(long *)*plVar1;
      *(long *)*plVar1 = lVar11 + -1;
      if (lVar11 == 0) {
        uVar4 = FUN_00145730();
        if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
      }
      else {
        pbVar8 = *(byte **)(*plVar1 + 8);
        *(byte **)(*plVar1 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
      }
      lVar11 = *(long *)(param_2 + 0x50) + lVar5;
      uVar16 = uVar16 - 1;
      lVar5 = lVar5 + 0x10;
      *(char *)(lVar11 + 10) = (char)uVar4;
    } while (uVar16 != 0);
  }
  while( true ) {
    uVar15 = 0;
    do {
      lVar5 = *(long *)*plVar1;
      *(long *)*plVar1 = lVar5 + -1;
      if (lVar5 == 0) {
        uVar4 = FUN_00145730();
        if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
      }
      else {
        pbVar8 = *(byte **)(*plVar1 + 8);
        *(byte **)(*plVar1 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
      }
      if (0xfffffe < uVar15) goto LAB_0013fc2c;
      uVar16 = (ulong)(uVar4 & 0x7f);
      uVar14 = uVar15 << 7;
      uVar15 = uVar16 | uVar14;
    } while ((uVar4 >> 7 & 1) == 0);
    puVar7 = (undefined8 *)
             FUN_0012d7b0(*param_1,-((uVar14 & 0x80000000) >> 0x1f) & 0xfffffff800000000 |
                                   (uVar16 | uVar14 & 0xffffff80) << 3,0);
    iVar13 = (int)uVar15;
    *(undefined8 **)(param_2 + 0x48) = puVar7;
    *(int *)(param_2 + 0x20) = iVar13;
    if (0 < iVar13) {
      uVar9 = uVar16 | uVar14 & 0xffffff80;
      uVar15 = uVar9 - 1;
      *puVar7 = 0;
      if (uVar15 != 0) {
        uVar10 = uVar15 & 3;
        if (uVar9 - 2 < 3) {
          lVar5 = 1;
        }
        else {
          uVar9 = 0;
          do {
            uVar12 = uVar9;
            lVar5 = uVar12 * 8;
            *(undefined8 *)(*(long *)(param_2 + 0x48) + lVar5 + 8) = 0;
            *(undefined8 *)(*(long *)(param_2 + 0x48) + lVar5 + 0x10) = 0;
            *(undefined8 *)(*(long *)(param_2 + 0x48) + lVar5 + 0x18) = 0;
            *(undefined8 *)(*(long *)(param_2 + 0x48) + lVar5 + 0x20) = 0;
            uVar9 = uVar12 + 4;
          } while ((uVar15 & 0xfffffffffffffffc) != uVar12 + 4);
          lVar5 = uVar12 + 5;
        }
        if (uVar10 != 0) {
          lVar5 = lVar5 << 3;
          do {
            *(undefined8 *)(*(long *)(param_2 + 0x48) + lVar5) = 0;
            uVar10 = uVar10 - 1;
            lVar5 = lVar5 + 8;
          } while (uVar10 != 0);
        }
      }
      if (0 < iVar13) {
        lVar5 = 0;
        do {
          uVar6 = FUN_00129c10(*param_1);
          *(undefined8 *)(*(long *)(param_2 + 0x48) + lVar5) = uVar6;
          if (((*(byte *)(param_2 + 9) >> 5 & 1) != 0) &&
             ((*(byte *)(*(long *)(*(long *)(param_2 + 0x48) + lVar5) + 9) & 0x18) != 0)) {
            FUN_00129d70(*param_1,param_2);
          }
          FUN_0013f0e0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x48) + lVar5),
                       *(undefined8 *)(param_2 + 0x70));
          lVar5 = lVar5 + 8;
        } while ((uVar16 | uVar14 & 0xffffff80) * 8 != lVar5);
      }
    }
    uVar15 = 0;
    do {
      lVar5 = *(long *)*plVar1;
      *(long *)*plVar1 = lVar5 + -1;
      if (lVar5 == 0) {
        uVar4 = FUN_00145730();
        if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
      }
      else {
        pbVar8 = *(byte **)(*plVar1 + 8);
        *(byte **)(*plVar1 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
      }
      if (0xfffffe < uVar15) goto LAB_0013fc2c;
      uVar15 = (ulong)(uVar4 & 0x7f) | uVar15 << 7;
    } while ((uVar4 >> 7 & 1) == 0);
    iVar13 = (int)uVar15;
    uVar6 = FUN_0012d7b0(*param_1,(long)iVar13,0);
    *(undefined8 *)(param_2 + 0x58) = uVar6;
    *(int *)(param_2 + 0x1c) = iVar13;
    lVar5 = FUN_001457a0(param_1[1],uVar6,(long)iVar13);
    if (lVar5 == 0) break;
LAB_0013f6a0:
    FUN_0013fc50(param_1,"truncated chunk");
  }
  uVar15 = 0;
  do {
    lVar5 = *(long *)*plVar1;
    *(long *)*plVar1 = lVar5 + -1;
    if (lVar5 == 0) {
      uVar4 = FUN_00145730();
      if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
    }
    else {
      pbVar8 = *(byte **)(*plVar1 + 8);
      *(byte **)(*plVar1 + 8) = pbVar8 + 1;
      uVar4 = (uint)*pbVar8;
    }
    if (0xfffffe < uVar15) goto LAB_0013fc2c;
    uVar16 = (ulong)(uVar4 & 0x7f);
    uVar14 = uVar15 << 7;
    uVar15 = uVar16 | uVar14;
  } while ((uVar4 >> 7 & 1) == 0);
  uVar6 = FUN_0012d7b0(*param_1,-((uVar14 & 0x80000000) >> 0x1f) & 0xfffffff800000000 |
                                (uVar16 | uVar14 & 0xffffff80) << 3,0);
  uVar16 = uVar16 | uVar14 & 0xffffff80;
  *(int *)(param_2 + 0x28) = (int)uVar15;
  uVar14 = 0;
  if ((int)uVar15 < 1) {
    uVar16 = 0;
  }
  *(undefined8 *)(param_2 + 0x60) = uVar6;
  while( true ) {
    uVar15 = 0;
    do {
      lVar5 = *(long *)*plVar1;
      *(long *)*plVar1 = lVar5 + -1;
      if (lVar5 == 0) {
        uVar4 = FUN_00145730();
        if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
      }
      else {
        pbVar8 = *(byte **)(*plVar1 + 8);
        *(byte **)(*plVar1 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
      }
      if (0xfffffe < uVar15) goto LAB_0013fc2c;
      uVar10 = (ulong)(uVar4 & 0x7f);
      uVar9 = uVar15 << 7;
      uVar15 = uVar10 | uVar9;
    } while ((uVar4 >> 7 & 1) == 0);
    iVar13 = (int)uVar15;
    if (uVar14 == uVar16) break;
    uVar15 = 0;
    *(int *)(*(long *)(param_2 + 0x60) + uVar14 * 8) = iVar13;
    do {
      lVar5 = *(long *)*plVar1;
      *(long *)*plVar1 = lVar5 + -1;
      if (lVar5 == 0) {
        uVar4 = FUN_00145730();
        if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
      }
      else {
        pbVar8 = *(byte **)(*plVar1 + 8);
        *(byte **)(*plVar1 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
      }
      if (0xfffffe < uVar15) goto LAB_0013fc2c;
      uVar15 = (ulong)(uVar4 & 0x7f) | uVar15 << 7;
    } while ((uVar4 >> 7 & 1) == 0);
    lVar5 = uVar14 * 8;
    uVar14 = uVar14 + 1;
    *(int *)(*(long *)(param_2 + 0x60) + lVar5 + 4) = (int)uVar15;
  }
  puVar7 = (undefined8 *)
           FUN_0012d7b0(*param_1,-((uVar9 & 0x80000000) >> 0x1f) & 0xfffffff000000000 |
                                 (uVar10 | uVar9 & 0xffffff80) << 4,0);
  *(undefined8 **)(param_2 + 0x68) = puVar7;
  *(int *)(param_2 + 0x24) = iVar13;
  if (iVar13 < 1) goto LAB_0013fb84;
  uVar10 = uVar10 | uVar9 & 0xffffff80;
  uVar15 = uVar10 - 1;
  *puVar7 = 0;
  if (uVar15 != 0) {
    if (uVar10 == 2) {
      lVar5 = 1;
    }
    else {
      lVar5 = 0;
      uVar14 = 0;
      do {
        uVar16 = uVar14;
        *(undefined8 *)(*(long *)(param_2 + 0x68) + lVar5 + 0x10) = 0;
        uVar14 = uVar16 + 2;
        lVar11 = *(long *)(param_2 + 0x68) + lVar5;
        lVar5 = lVar5 + 0x20;
        *(undefined8 *)(lVar11 + 0x20) = 0;
      } while ((uVar15 & 0xfffffffffffffffe) != uVar14);
      lVar5 = uVar16 + 3;
      if ((uVar15 & 1) == 0) goto LAB_0013fa98;
    }
    *(undefined8 *)(*(long *)(param_2 + 0x68) + lVar5 * 0x10) = 0;
  }
LAB_0013fa98:
  uVar15 = 0;
  do {
    uVar6 = FUN_0013fc90(param_1,param_2);
    uVar14 = 0;
    *(undefined8 *)(*(long *)(param_2 + 0x68) + uVar15 * 0x10) = uVar6;
    do {
      lVar5 = *(long *)*plVar1;
      *(long *)*plVar1 = lVar5 + -1;
      if (lVar5 == 0) {
        uVar4 = FUN_00145730();
        if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
      }
      else {
        pbVar8 = *(byte **)(*plVar1 + 8);
        *(byte **)(*plVar1 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
      }
      if (0xfffffe < uVar14) goto LAB_0013fc2c;
      uVar14 = (ulong)(uVar4 & 0x7f) | uVar14 << 7;
    } while ((uVar4 >> 7 & 1) == 0);
    uVar16 = 0;
    *(int *)(*(long *)(param_2 + 0x68) + uVar15 * 0x10 + 8) = (int)uVar14;
    do {
      lVar5 = *(long *)*plVar1;
      *(long *)*plVar1 = lVar5 + -1;
      if (lVar5 == 0) {
        uVar4 = FUN_00145730();
        if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
      }
      else {
        pbVar8 = *(byte **)(*plVar1 + 8);
        *(byte **)(*plVar1 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
      }
      if (0xfffffe < uVar16) goto LAB_0013fc2c;
      uVar16 = (ulong)(uVar4 & 0x7f) | uVar16 << 7;
    } while ((uVar4 >> 7 & 1) == 0);
    lVar5 = uVar15 * 0x10;
    uVar15 = uVar15 + 1;
    *(int *)(*(long *)(param_2 + 0x68) + lVar5 + 0xc) = (int)uVar16;
  } while (uVar15 != uVar10);
LAB_0013fb84:
  uVar15 = 0;
  do {
    lVar5 = *(long *)*plVar1;
    *(long *)*plVar1 = lVar5 + -1;
    if (lVar5 == 0) {
      uVar4 = FUN_00145730();
      if (uVar4 == 0xffffffff) goto LAB_0013f6a0;
    }
    else {
      pbVar8 = *(byte **)(*plVar1 + 8);
      *(byte **)(*plVar1 + 8) = pbVar8 + 1;
      uVar4 = (uint)*pbVar8;
    }
    if (0xfffffe < uVar15) goto LAB_0013fc2c;
    uVar14 = uVar15 << 7;
    uVar15 = uVar4 & 0x7f | uVar14;
    if ((uVar4 >> 7 & 1) != 0) {
      if (0 < (int)uVar15) {
        lVar5 = 0;
        do {
          uVar6 = FUN_0013fc90(param_1,param_2);
          *(undefined8 *)(*(long *)(param_2 + 0x50) + lVar5) = uVar6;
          lVar5 = lVar5 + 0x10;
        } while (((ulong)(uVar4 & 0x7f) | uVar14 & 0xffffff80) * 0x10 != lVar5);
      }
      return;
    }
  } while( true );
}


