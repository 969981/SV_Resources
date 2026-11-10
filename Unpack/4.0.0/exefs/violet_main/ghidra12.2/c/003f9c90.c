/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f9c90; name: FUN_003f9c90
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_003f9c90(undefined8 *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar16 = param_2[1];
  if (uVar16 == 0x18) {
    bVar8 = (*(ulong *)(param_2 + 4) & 0x100) == 0;
    uVar12 = 7;
    iVar10 = 0xd;
    if (!bVar8) {
      iVar10 = 0xf;
    }
    iVar17 = 6;
  }
  else {
    if (uVar16 != 0x17) {
      return 0;
    }
    bVar8 = (*(ulong *)(param_2 + 4) & 0x100) == 0;
    uVar12 = 6;
    iVar10 = 0xb;
    if (!bVar8) {
      iVar10 = 0xd;
    }
    iVar17 = 5;
  }
  uVar2 = *param_2;
  lVar15 = *(long *)(param_2 + 2);
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if ((int)uVar2 < iVar10) {
    return 0;
  }
  iVar10 = 0;
  iVar19 = 0;
  uVar21 = 0;
  uVar20 = 0;
  lVar18 = lVar15 + 1;
  do {
    if ((!(bool)(bVar8 ^ 1U | iVar17 * 2 != (int)uVar21)) &&
       (uVar11 = *(byte *)(lVar18 + uVar21 + -1) - 0x2b, uVar9 = uVar21,
       uVar11 < 0x30 && (1L << ((ulong)uVar11 & 0x3f) & 0x800000000005U) != 0)) break;
    uVar9 = FUN_003f6e70();
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    if ((ulong)uVar2 - 1 == uVar21) {
      return 0;
    }
    bVar4 = *(byte *)(lVar18 + uVar21 + -1);
    uVar9 = FUN_003f6e70(*(undefined1 *)(lVar18 + uVar21));
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    if ((ulong)uVar2 - 2 == uVar21) {
      return 0;
    }
    iVar5 = (uint)*(byte *)(lVar18 + uVar21) + (uint)bVar4 * 10;
    uVar16 = param_2[1];
    uVar11 = uVar20;
    if (uVar16 == 0x17) {
      uVar11 = uVar20 + 1;
    }
    uVar9 = (ulong)uVar11;
    iVar13 = iVar5 + -0x210;
    if (iVar13 < *(int *)(&DAT_03ce03d8 + uVar9 * 4)) {
      return 0;
    }
    if ((int)(&DAT_03ce03fc)[uVar9] < iVar13) {
      return 0;
    }
    if (uVar11 < 7) {
      iVar7 = iVar5 + -0x1e0;
      switch(uVar9) {
      case 0:
        iVar10 = iVar13 * 100 + -0x76c;
        local_90 = CONCAT44(iVar10,(undefined4)local_90);
        break;
      case 1:
        if (uVar16 == 0x17) {
          iVar10 = iVar5 + -0x1ac;
          if (0x61 < iVar7) {
            iVar10 = iVar13;
          }
          local_90 = CONCAT44(iVar10,(undefined4)local_90);
        }
        else {
          iVar10 = iVar10 + iVar13;
          local_90 = CONCAT44(iVar10,(undefined4)local_90);
        }
        break;
      case 2:
        iVar19 = iVar5 + -0x211;
        local_90 = CONCAT44(local_90._4_4_,iVar19);
        break;
      case 3:
        if (iVar19 == 1) {
          uVar11 = iVar10 + 0x76c;
          uVar14 = uVar11 * -0x3d70a3d7 + 0x51eb850;
          if (0xa3d70a < (uVar14 >> 4 | uVar11 * -0x70000000)) {
            uVar11 = (0x28f5c28 < (uVar14 >> 2 | iVar10 * 0x40000000) && (uVar11 & 3) == 0) | 0x1c;
            goto joined_r0x003f9f38;
          }
          if (0x1d < iVar13) {
            return 0;
          }
        }
        else {
          uVar11 = (&DAT_03ce0420)[iVar19];
joined_r0x003f9f38:
          if ((int)uVar11 < iVar13) {
            return 0;
          }
        }
        uStack_98 = CONCAT44(iVar13,(undefined4)uStack_98);
        iVar5 = iVar7 + (&DAT_03ce0480)[iVar19] + -0x31;
        if (iVar19 < 2) {
          iVar13 = iVar19 + 0xe;
          uVar11 = iVar10 + 0x76b;
        }
        else {
          uVar11 = iVar10 + 0x76c;
          uVar14 = uVar11 * -0x3d70a3d7 + 0x51eb850;
          if ((uVar14 >> 4 | uVar11 * -0x70000000) < 0xa3d70b) {
            uVar14 = 1;
          }
          else {
            uVar14 = (uint)(0x28f5c28 < (uVar14 >> 2 | iVar10 * 0x40000000) && (uVar11 & 3) == 0);
          }
          iVar5 = uVar14 + iVar5;
          iVar13 = iVar19 + 2;
        }
        iVar6 = (int)uVar11 % 100;
        iVar1 = iVar6 + 3;
        if (-1 < iVar6) {
          iVar1 = iVar6;
        }
        uStack_88 = CONCAT44(iVar5,(iVar7 + (iVar13 * 0xd) / 5 + iVar6 + (int)uVar11 / 400 +
                                    (iVar1 >> 2) + ((int)uVar11 / 100) * 5 + -0x2a) % 7);
        break;
      case 4:
        uStack_98 = CONCAT44(uStack_98._4_4_,iVar13);
        break;
      case 5:
        local_a0 = CONCAT44(iVar13,(undefined4)local_a0);
        break;
      case 6:
        local_a0 = CONCAT44(local_a0._4_4_,iVar13);
      }
    }
    uVar20 = uVar20 + 1;
    uVar21 = uVar21 + 2;
    uVar9 = (ulong)(uVar12 << 1);
  } while (uVar20 != uVar12);
  iVar10 = (int)uVar9;
  if ((uVar16 == 0x18) && (*(char *)(lVar15 + (uVar9 & 0xffffffff)) == '.')) {
    if (!bVar8) {
      return 0;
    }
    uVar21 = uVar9 & 0xffffffff | 1;
    iVar10 = (int)uVar21;
    if ((int)uVar2 <= iVar10) {
      return 0;
    }
    lVar18 = 0;
    while (uVar9 = FUN_003f6e70(*(undefined1 *)(lVar15 + uVar21 + lVar18)), (int)uVar9 != 0) {
      lVar18 = lVar18 + 1;
      if (uVar2 - iVar10 == (int)lVar18) {
        return 0;
      }
    }
    iVar17 = (int)lVar18;
    if (iVar17 == 0) {
      return uVar9;
    }
    if (uVar2 - iVar10 == iVar17) {
      return uVar9;
    }
    iVar10 = iVar10 + iVar17;
  }
  cVar3 = *(char *)(lVar15 + iVar10);
  if (cVar3 == 'Z') {
    uVar16 = iVar10 + 1;
  }
  else {
    if (!bVar8) {
      return 0;
    }
    if ((cVar3 != '-') && (cVar3 != '+')) {
      return 0;
    }
    if (iVar10 + 5U != uVar2) {
      return 0;
    }
    uVar16 = uVar12 + 1;
    lVar18 = (long)(iVar10 + 1);
    uVar21 = FUN_003f6e70(*(undefined1 *)(lVar15 + lVar18));
    if (param_1 == (undefined8 *)0x0) {
      if ((int)uVar21 == 0) {
        return uVar21;
      }
      bVar4 = *(byte *)(lVar15 + lVar18);
      uVar21 = FUN_003f6e70(*(undefined1 *)(lVar15 + lVar18 + 1));
      if ((int)uVar21 == 0) {
        return uVar21;
      }
      uVar20 = uVar16;
      if (param_2[1] != 0x17) {
        uVar20 = uVar12;
      }
      iVar17 = (uint)*(byte *)(lVar15 + lVar18 + 1) + (uint)bVar4 * 10 + -0x210;
      if (iVar17 < *(int *)(&DAT_03ce03d8 + (ulong)uVar20 * 4)) {
        return 0;
      }
      if ((int)(&DAT_03ce03fc)[uVar20] < iVar17) {
        return 0;
      }
      uVar21 = FUN_003f6e70(*(undefined1 *)(lVar15 + lVar18 + 2));
      if ((int)uVar21 == 0) {
        return uVar21;
      }
      bVar4 = *(byte *)(lVar15 + lVar18 + 2);
      uVar21 = FUN_003f6e70(*(undefined1 *)(lVar15 + lVar18 + 3));
      if ((int)uVar21 == 0) {
        return uVar21;
      }
      iVar17 = (uint)*(byte *)(lVar15 + lVar18 + 3) + (uint)bVar4 * 10 + -0x210;
      uVar12 = uVar12 + 2;
      if (param_2[1] != 0x17) {
        uVar12 = uVar16;
      }
      if (iVar17 < *(int *)(&DAT_03ce03d8 + (ulong)uVar12 * 4)) {
        return 0;
      }
      return (ulong)(iVar17 <= (int)(&DAT_03ce03fc)[uVar12] && iVar10 + 5U == uVar2);
    }
    if ((int)uVar21 == 0) {
      return uVar21;
    }
    bVar4 = *(byte *)(lVar15 + lVar18);
    uVar21 = FUN_003f6e70(*(undefined1 *)(lVar15 + lVar18 + 1));
    if ((int)uVar21 == 0) {
      return uVar21;
    }
    iVar17 = (uint)*(byte *)(lVar15 + lVar18 + 1) + (uint)bVar4 * 10 + -0x210;
    uVar20 = uVar16;
    if (param_2[1] != 0x17) {
      uVar20 = uVar12;
    }
    if (iVar17 < *(int *)(&DAT_03ce03d8 + (ulong)uVar20 * 4)) {
      return 0;
    }
    if ((int)(&DAT_03ce03fc)[uVar20] < iVar17) {
      return 0;
    }
    uVar21 = FUN_003f6e70(*(undefined1 *)(lVar15 + lVar18 + 2));
    if ((int)uVar21 == 0) {
      return uVar21;
    }
    bVar4 = *(byte *)(lVar15 + lVar18 + 2);
    uVar21 = FUN_003f6e70(*(undefined1 *)(lVar15 + lVar18 + 3));
    if ((int)uVar21 == 0) {
      return uVar21;
    }
    iVar19 = (uint)*(byte *)(lVar15 + lVar18 + 3) + (uint)bVar4 * 10 + -0x210;
    uVar12 = uVar12 + 2;
    if (param_2[1] != 0x17) {
      uVar12 = uVar16;
    }
    if (iVar19 < *(int *)(&DAT_03ce03d8 + (ulong)uVar12 * 4)) {
      return 0;
    }
    if ((int)(&DAT_03ce03fc)[uVar12] < iVar19) {
      return 0;
    }
    iVar17 = iVar17 * 0xe10 + iVar19 * 0x3c;
    uVar16 = iVar10 + 5;
    if (iVar17 != 0) {
      iVar10 = -iVar17;
      if (cVar3 == '-') {
        iVar10 = iVar17;
      }
      uVar21 = FUN_0045b110(&local_a0,0,(long)iVar10);
      if ((int)uVar21 == 0) {
        return uVar21;
      }
    }
  }
  if (uVar16 != uVar2) {
    return 0;
  }
  if (param_1 == (undefined8 *)0x0) {
    return 1;
  }
  param_1[6] = local_70;
  param_1[3] = uStack_88;
  param_1[2] = local_90;
  param_1[5] = uStack_78;
  param_1[4] = local_80;
  param_1[1] = uStack_98;
  *param_1 = local_a0;
  return 1;
}


