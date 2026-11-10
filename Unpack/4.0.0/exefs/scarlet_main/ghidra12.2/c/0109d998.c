/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0109d998; name: FUN_0109d998
 */


void FUN_0109d998(long *param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  uint uVar14;
  ushort *puVar15;
  ulong uVar16;
  
  uVar16 = (ulong)param_2;
  switch(param_4 + param_5 * 2) {
  case 1:
  case 5:
    lVar5 = (**(code **)(*param_1 + 0x90))(param_1);
    if (lVar5 == 0) {
      uVar16 = 0x60000;
    }
    else {
      uVar16 = FUN_00e388b8(lVar5,param_3,param_1[8]);
      uVar16 = uVar16 & 0xffff | 0x60000;
    }
    if (*(uint *)(param_1 + 0xb) <= param_2) {
      return;
    }
    lVar5 = (ulong)param_2 * 2 + (ulong)param_2;
    lVar10 = param_1[8];
    *(ulong *)(param_1[0xc] + lVar5 * 8 + 8) = uVar16;
    lVar8 = param_1[0xc];
    lVar5 = *(long *)(lVar8 + lVar5 * 8);
    if (*(char *)(lVar5 + 0x54) == '\0') goto LAB_0109e2d0;
    uVar9 = (uint)*(ushort *)(lVar5 + 0x50);
    if (*(ushort *)(lVar5 + 0x50) == 0) {
LAB_0109e300:
      iVar7 = 0;
      goto LAB_0109e2c8;
    }
    puVar13 = *(ushort **)(lVar10 + 0x30);
    iVar7 = 0;
    puVar11 = *(ushort **)(lVar5 + 0x30);
    do {
      uVar3 = *puVar13;
      *puVar11 = uVar3;
      if (uVar3 == 0) goto LAB_0109e2c8;
      if (uVar3 == 0x10) {
        puVar15 = puVar13 + 1;
        uVar3 = *puVar15;
        uVar1 = uVar3 + 2;
        bVar4 = uVar9 < uVar1;
        uVar9 = uVar9 - uVar1;
        if (bVar4 || uVar9 == 0) goto LAB_0109e2c4;
        uVar14 = uVar3 + 1;
        uVar2 = uVar14 & 7;
        puVar12 = puVar11 + 1;
        *puVar12 = uVar3;
        if (uVar2 != 0) {
          lVar8 = 0;
          do {
            lVar10 = lVar8;
            uVar14 = uVar14 - 1;
            uVar2 = uVar2 - 1;
            *(undefined2 *)((long)puVar11 + lVar10 + 4) =
                 *(undefined2 *)((long)puVar13 + lVar10 + 4);
            lVar8 = lVar10 + 2;
          } while (uVar2 != 0);
          puVar11 = (ushort *)((long)puVar11 + lVar10 + 4);
          puVar13 = (ushort *)((long)puVar13 + lVar10 + 2);
          puVar15 = puVar13 + 1;
          puVar12 = puVar11;
        }
        if (6 < uVar3) {
          do {
            puVar12[1] = puVar13[2];
            puVar12[2] = puVar15[2];
            puVar12[3] = puVar15[3];
            puVar12[4] = puVar15[4];
            puVar12[5] = puVar15[5];
            puVar12[6] = puVar15[6];
            puVar13 = puVar15 + 7;
            puVar12[7] = *puVar13;
            puVar15 = puVar15 + 8;
            uVar14 = uVar14 - 8;
            puVar12 = puVar12 + 8;
            *puVar12 = *puVar15;
            puVar11 = puVar12;
          } while (uVar14 != 0);
        }
        puVar13 = puVar15;
        iVar7 = uVar1 + iVar7;
      }
      else {
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
        iVar7 = iVar7 + 1;
        uVar9 = uVar9 - 1;
      }
    } while (uVar9 != 0);
    break;
  case 2:
    lVar5 = (**(code **)(*param_1 + 0x98))(param_1);
    if (lVar5 == 0) {
      uVar6 = 0x20000;
    }
    else {
      uVar6 = FUN_00e388b8(lVar5,param_3,param_1[8]);
      uVar6 = uVar6 & 0xffff | 0x20000;
    }
    if (*(uint *)(param_1 + 0xb) <= param_2) {
      return;
    }
    lVar10 = param_1[8];
    *(ulong *)(param_1[0xc] + uVar16 * 0x18 + 8) = uVar6;
    lVar8 = param_1[0xc];
    lVar5 = *(long *)(lVar8 + uVar16 * 0x18);
    if (*(char *)(lVar5 + 0x54) == '\0') goto LAB_0109e2d0;
    uVar9 = (uint)*(ushort *)(lVar5 + 0x50);
    if (*(ushort *)(lVar5 + 0x50) == 0) goto LAB_0109e300;
    puVar13 = *(ushort **)(lVar10 + 0x30);
    iVar7 = 0;
    puVar11 = *(ushort **)(lVar5 + 0x30);
    do {
      uVar3 = *puVar13;
      *puVar11 = uVar3;
      if (uVar3 == 0) goto LAB_0109e2c8;
      if (uVar3 == 0x10) {
        puVar15 = puVar13 + 1;
        uVar3 = *puVar15;
        uVar1 = uVar3 + 2;
        bVar4 = uVar9 < uVar1;
        uVar9 = uVar9 - uVar1;
        if (bVar4 || uVar9 == 0) goto LAB_0109e2c4;
        uVar14 = uVar3 + 1;
        uVar2 = uVar14 & 7;
        puVar12 = puVar11 + 1;
        *puVar12 = uVar3;
        if (uVar2 != 0) {
          lVar8 = 0;
          do {
            lVar10 = lVar8;
            uVar14 = uVar14 - 1;
            uVar2 = uVar2 - 1;
            *(undefined2 *)((long)puVar11 + lVar10 + 4) =
                 *(undefined2 *)((long)puVar13 + lVar10 + 4);
            lVar8 = lVar10 + 2;
          } while (uVar2 != 0);
          puVar11 = (ushort *)((long)puVar11 + lVar10 + 4);
          puVar13 = (ushort *)((long)puVar13 + lVar10 + 2);
          puVar15 = puVar13 + 1;
          puVar12 = puVar11;
        }
        if (6 < uVar3) {
          do {
            puVar12[1] = puVar13[2];
            puVar12[2] = puVar15[2];
            puVar12[3] = puVar15[3];
            puVar12[4] = puVar15[4];
            puVar12[5] = puVar15[5];
            puVar12[6] = puVar15[6];
            puVar13 = puVar15 + 7;
            puVar12[7] = *puVar13;
            puVar15 = puVar15 + 8;
            uVar14 = uVar14 - 8;
            puVar12 = puVar12 + 8;
            *puVar12 = *puVar15;
            puVar11 = puVar12;
          } while (uVar14 != 0);
        }
        puVar13 = puVar15;
        iVar7 = uVar1 + iVar7;
      }
      else {
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
        iVar7 = iVar7 + 1;
        uVar9 = uVar9 - 1;
      }
    } while (uVar9 != 0);
    break;
  case 3:
  case 7:
    lVar5 = (**(code **)(*param_1 + 0xa0))(param_1);
    if (lVar5 == 0) {
      uVar6 = 0x60000;
    }
    else {
      uVar6 = FUN_00e388b8(lVar5,param_3,param_1[8]);
      uVar6 = uVar6 & 0xffff | 0x60000;
    }
    if (*(uint *)(param_1 + 0xb) <= param_2) {
      return;
    }
    lVar10 = param_1[8];
    *(ulong *)(param_1[0xc] + uVar16 * 0x18 + 8) = uVar6;
    lVar8 = param_1[0xc];
    lVar5 = *(long *)(lVar8 + uVar16 * 0x18);
    if (*(char *)(lVar5 + 0x54) == '\0') goto LAB_0109e2d0;
    uVar9 = (uint)*(ushort *)(lVar5 + 0x50);
    if (*(ushort *)(lVar5 + 0x50) == 0) goto LAB_0109e300;
    puVar13 = *(ushort **)(lVar10 + 0x30);
    iVar7 = 0;
    puVar11 = *(ushort **)(lVar5 + 0x30);
    do {
      uVar3 = *puVar13;
      *puVar11 = uVar3;
      if (uVar3 == 0) goto LAB_0109e2c8;
      if (uVar3 == 0x10) {
        puVar15 = puVar13 + 1;
        uVar3 = *puVar15;
        uVar1 = uVar3 + 2;
        bVar4 = uVar9 < uVar1;
        uVar9 = uVar9 - uVar1;
        if (bVar4 || uVar9 == 0) goto LAB_0109e2c4;
        uVar14 = uVar3 + 1;
        uVar2 = uVar14 & 7;
        puVar12 = puVar11 + 1;
        *puVar12 = uVar3;
        if (uVar2 != 0) {
          lVar8 = 0;
          do {
            lVar10 = lVar8;
            uVar14 = uVar14 - 1;
            uVar2 = uVar2 - 1;
            *(undefined2 *)((long)puVar11 + lVar10 + 4) =
                 *(undefined2 *)((long)puVar13 + lVar10 + 4);
            lVar8 = lVar10 + 2;
          } while (uVar2 != 0);
          puVar11 = (ushort *)((long)puVar11 + lVar10 + 4);
          puVar13 = (ushort *)((long)puVar13 + lVar10 + 2);
          puVar15 = puVar13 + 1;
          puVar12 = puVar11;
        }
        if (6 < uVar3) {
          do {
            puVar12[1] = puVar13[2];
            puVar12[2] = puVar15[2];
            puVar12[3] = puVar15[3];
            puVar12[4] = puVar15[4];
            puVar12[5] = puVar15[5];
            puVar12[6] = puVar15[6];
            puVar13 = puVar15 + 7;
            puVar12[7] = *puVar13;
            puVar15 = puVar15 + 8;
            uVar14 = uVar14 - 8;
            puVar12 = puVar12 + 8;
            *puVar12 = *puVar15;
            puVar11 = puVar12;
          } while (uVar14 != 0);
        }
        puVar13 = puVar15;
        iVar7 = uVar1 + iVar7;
      }
      else {
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
        iVar7 = iVar7 + 1;
        uVar9 = uVar9 - 1;
      }
    } while (uVar9 != 0);
    break;
  case 4:
    lVar5 = (**(code **)(*param_1 + 0xa8))(param_1);
    if (lVar5 == 0) {
      uVar6 = 0x20000;
    }
    else {
      uVar6 = FUN_00e388b8(lVar5,param_3,param_1[8]);
      uVar6 = uVar6 & 0xffff | 0x20000;
    }
    if (*(uint *)(param_1 + 0xb) <= param_2) {
      return;
    }
    lVar10 = param_1[8];
    *(ulong *)(param_1[0xc] + uVar16 * 0x18 + 8) = uVar6;
    lVar8 = param_1[0xc];
    lVar5 = *(long *)(lVar8 + uVar16 * 0x18);
    if (*(char *)(lVar5 + 0x54) == '\0') goto LAB_0109e2d0;
    uVar9 = (uint)*(ushort *)(lVar5 + 0x50);
    if (*(ushort *)(lVar5 + 0x50) == 0) goto LAB_0109e300;
    puVar13 = *(ushort **)(lVar10 + 0x30);
    iVar7 = 0;
    puVar11 = *(ushort **)(lVar5 + 0x30);
    do {
      uVar3 = *puVar13;
      *puVar11 = uVar3;
      if (uVar3 == 0) goto LAB_0109e2c8;
      if (uVar3 == 0x10) {
        puVar15 = puVar13 + 1;
        uVar3 = *puVar15;
        uVar1 = uVar3 + 2;
        bVar4 = uVar9 < uVar1;
        uVar9 = uVar9 - uVar1;
        if (bVar4 || uVar9 == 0) goto LAB_0109e2c4;
        uVar14 = uVar3 + 1;
        uVar2 = uVar14 & 7;
        puVar12 = puVar11 + 1;
        *puVar12 = uVar3;
        if (uVar2 != 0) {
          lVar8 = 0;
          do {
            lVar10 = lVar8;
            uVar14 = uVar14 - 1;
            uVar2 = uVar2 - 1;
            *(undefined2 *)((long)puVar11 + lVar10 + 4) =
                 *(undefined2 *)((long)puVar13 + lVar10 + 4);
            lVar8 = lVar10 + 2;
          } while (uVar2 != 0);
          puVar11 = (ushort *)((long)puVar11 + lVar10 + 4);
          puVar13 = (ushort *)((long)puVar13 + lVar10 + 2);
          puVar15 = puVar13 + 1;
          puVar12 = puVar11;
        }
        if (6 < uVar3) {
          do {
            puVar12[1] = puVar13[2];
            puVar12[2] = puVar15[2];
            puVar12[3] = puVar15[3];
            puVar12[4] = puVar15[4];
            puVar12[5] = puVar15[5];
            puVar12[6] = puVar15[6];
            puVar13 = puVar15 + 7;
            puVar12[7] = *puVar13;
            puVar15 = puVar15 + 8;
            uVar14 = uVar14 - 8;
            puVar12 = puVar12 + 8;
            *puVar12 = *puVar15;
            puVar11 = puVar12;
          } while (uVar14 != 0);
        }
        puVar13 = puVar15;
        iVar7 = uVar1 + iVar7;
      }
      else {
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
        iVar7 = iVar7 + 1;
        uVar9 = uVar9 - 1;
      }
    } while (uVar9 != 0);
    break;
  case 6:
    lVar5 = (**(code **)(*param_1 + 0xb0))(param_1);
    if (lVar5 == 0) {
      uVar6 = 0x20000;
    }
    else {
      uVar6 = FUN_00e388b8(lVar5,param_3,param_1[8]);
      uVar6 = uVar6 & 0xffff | 0x20000;
    }
    if (*(uint *)(param_1 + 0xb) <= param_2) {
      return;
    }
    lVar10 = param_1[8];
    *(ulong *)(param_1[0xc] + uVar16 * 0x18 + 8) = uVar6;
    lVar8 = param_1[0xc];
    lVar5 = *(long *)(lVar8 + uVar16 * 0x18);
    if (*(char *)(lVar5 + 0x54) == '\0') goto LAB_0109e2d0;
    uVar9 = (uint)*(ushort *)(lVar5 + 0x50);
    if (*(ushort *)(lVar5 + 0x50) == 0) goto LAB_0109e300;
    puVar13 = *(ushort **)(lVar10 + 0x30);
    iVar7 = 0;
    puVar11 = *(ushort **)(lVar5 + 0x30);
    do {
      uVar3 = *puVar13;
      *puVar11 = uVar3;
      if (uVar3 == 0) goto LAB_0109e2c8;
      if (uVar3 == 0x10) {
        puVar15 = puVar13 + 1;
        uVar3 = *puVar15;
        uVar1 = uVar3 + 2;
        bVar4 = uVar9 < uVar1;
        uVar9 = uVar9 - uVar1;
        if (bVar4 || uVar9 == 0) goto LAB_0109e2c4;
        uVar14 = uVar3 + 1;
        uVar2 = uVar14 & 7;
        puVar12 = puVar11 + 1;
        *puVar12 = uVar3;
        if (uVar2 != 0) {
          lVar8 = 0;
          do {
            lVar10 = lVar8;
            uVar14 = uVar14 - 1;
            uVar2 = uVar2 - 1;
            *(undefined2 *)((long)puVar11 + lVar10 + 4) =
                 *(undefined2 *)((long)puVar13 + lVar10 + 4);
            lVar8 = lVar10 + 2;
          } while (uVar2 != 0);
          puVar11 = (ushort *)((long)puVar11 + lVar10 + 4);
          puVar13 = (ushort *)((long)puVar13 + lVar10 + 2);
          puVar15 = puVar13 + 1;
          puVar12 = puVar11;
        }
        if (6 < uVar3) {
          do {
            puVar12[1] = puVar13[2];
            puVar12[2] = puVar15[2];
            puVar12[3] = puVar15[3];
            puVar12[4] = puVar15[4];
            puVar12[5] = puVar15[5];
            puVar12[6] = puVar15[6];
            puVar13 = puVar15 + 7;
            puVar12[7] = *puVar13;
            puVar15 = puVar15 + 8;
            uVar14 = uVar14 - 8;
            puVar12 = puVar12 + 8;
            *puVar12 = *puVar15;
            puVar11 = puVar12;
          } while (uVar14 != 0);
        }
        puVar13 = puVar15;
        iVar7 = uVar1 + iVar7;
      }
      else {
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
        iVar7 = iVar7 + 1;
        uVar9 = uVar9 - 1;
      }
    } while (uVar9 != 0);
    break;
  default:
    lVar5 = (**(code **)(*param_1 + 0x88))(param_1);
    if (lVar5 == 0) {
      uVar6 = 0x20000;
    }
    else {
      uVar6 = FUN_00e388b8(lVar5,param_3,param_1[8]);
      uVar6 = uVar6 & 0xffff | 0x20000;
    }
    if (*(uint *)(param_1 + 0xb) <= param_2) {
      return;
    }
    lVar5 = uVar16 * 2 + (ulong)param_2;
    lVar10 = param_1[8];
    *(ulong *)(param_1[0xc] + lVar5 * 8 + 8) = uVar6;
    lVar8 = param_1[0xc];
    lVar5 = *(long *)(lVar8 + lVar5 * 8);
    if (*(char *)(lVar5 + 0x54) == '\0') goto LAB_0109e2d0;
    uVar9 = (uint)*(ushort *)(lVar5 + 0x50);
    if (*(ushort *)(lVar5 + 0x50) == 0) goto LAB_0109e300;
    puVar13 = *(ushort **)(lVar10 + 0x30);
    iVar7 = 0;
    puVar11 = *(ushort **)(lVar5 + 0x30);
    do {
      uVar3 = *puVar13;
      *puVar11 = uVar3;
      if (uVar3 == 0) goto LAB_0109e2c8;
      if (uVar3 == 0x10) {
        puVar15 = puVar13 + 1;
        uVar3 = *puVar15;
        uVar1 = uVar3 + 2;
        bVar4 = uVar9 < uVar1;
        uVar9 = uVar9 - uVar1;
        if (bVar4 || uVar9 == 0) goto LAB_0109e2c4;
        uVar14 = uVar3 + 1;
        uVar2 = uVar14 & 7;
        puVar12 = puVar11 + 1;
        *puVar12 = uVar3;
        if (uVar2 != 0) {
          lVar8 = 0;
          do {
            lVar10 = lVar8;
            uVar14 = uVar14 - 1;
            uVar2 = uVar2 - 1;
            *(undefined2 *)((long)puVar11 + lVar10 + 4) =
                 *(undefined2 *)((long)puVar13 + lVar10 + 4);
            lVar8 = lVar10 + 2;
          } while (uVar2 != 0);
          puVar11 = (ushort *)((long)puVar11 + lVar10 + 4);
          puVar13 = (ushort *)((long)puVar13 + lVar10 + 2);
          puVar15 = puVar13 + 1;
          puVar12 = puVar11;
        }
        if (6 < uVar3) {
          do {
            puVar12[1] = puVar13[2];
            puVar12[2] = puVar15[2];
            puVar12[3] = puVar15[3];
            puVar12[4] = puVar15[4];
            puVar12[5] = puVar15[5];
            puVar12[6] = puVar15[6];
            puVar13 = puVar15 + 7;
            puVar12[7] = *puVar13;
            puVar15 = puVar15 + 8;
            uVar14 = uVar14 - 8;
            puVar12 = puVar12 + 8;
            *puVar12 = *puVar15;
            puVar11 = puVar12;
          } while (uVar14 != 0);
        }
        puVar13 = puVar15;
        iVar7 = uVar1 + iVar7;
      }
      else {
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
        iVar7 = iVar7 + 1;
        uVar9 = uVar9 - 1;
      }
    } while (uVar9 != 0);
  }
  if (iVar7 != 0) {
    iVar7 = iVar7 + -1;
    puVar11[-1] = 0;
  }
  goto LAB_0109e2c8;
LAB_0109e2c4:
  *puVar11 = 0;
LAB_0109e2c8:
  *(short *)(lVar5 + 0x52) = (short)iVar7;
  lVar8 = param_1[0xc];
LAB_0109e2d0:
  *(undefined2 *)(lVar8 + (ulong)param_2 * 0x18 + 0x10) = 0;
  lVar5 = param_1[0xc] + (ulong)param_2 * 0x18;
  *(ushort *)(lVar5 + 0x12) = *(ushort *)(lVar5 + 0x12) & 0xfffe;
  return;
}


