/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003cddb0; name: FUN_003cddb0
 */


undefined4 FUN_003cddb0(uint *param_1,long param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  bool bVar9;
  uint uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint *puVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 local_58;
  
  piVar11 = *(int **)(param_1 + 2);
  uVar19 = *(uint *)(param_2 + 4);
  iVar6 = *piVar11;
  param_1[0x1ad] = uVar19;
  if (iVar6 == 0x10000) {
LAB_003cde30:
    puVar17 = &DAT_044a1498;
    lVar12 = *(long *)(param_2 + 0x288);
    if (*(int *)(lVar12 + 0x2b8) == 0) goto LAB_003cde08;
LAB_003cde44:
    if ((*(byte *)(*(long *)(piVar11 + 0x30) + 0x60) >> 3 & 1) == 0) {
      local_58 = 0;
      lVar13 = *(long *)(lVar12 + 0x2b0);
      *(undefined4 *)(lVar12 + 700) = 1;
      if (lVar13 == 0) {
        return 0x9f;
      }
      pbVar14 = *(byte **)(lVar12 + 0x2a8);
      uVar18 = lVar13 - 1;
      puVar15 = (ushort *)(pbVar14 + 1);
      bVar4 = *pbVar14;
      if (uVar18 != bVar4) {
        return 0x9f;
      }
      *(undefined8 *)(lVar12 + 0x2b0) = 0;
      *(byte **)(lVar12 + 0x2a8) = pbVar14 + lVar13;
      if ((int)uVar19 < 0x301) {
        return 0x124;
      }
      if (bVar4 < 2) {
        uVar7 = 0x102;
        if (uVar18 != 0) {
          uVar7 = 0x9f;
        }
        return uVar7;
      }
      uVar19 = 0;
LAB_003ce0c8:
      uVar20 = 0xff00;
      if (uVar19 != 0x100) {
        uVar20 = uVar19;
      }
      uVar5 = uVar18 - 2;
      puVar16 = puVar15;
      do {
        uVar18 = uVar5;
        puVar15 = puVar16 + 1;
        uVar10 = ((*puVar16 & 0xff00) << 8 | (uint)*puVar16 << 0x18) >> 0x10;
        if (uVar10 != uVar19) {
          if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
            if (uVar19 <= uVar10) goto LAB_003ce12c;
          }
          else {
            uVar3 = 0xff00;
            if (uVar10 != 0x100) {
              uVar3 = uVar10;
            }
            if (uVar3 <= uVar20) goto LAB_003ce12c;
          }
        }
        uVar5 = uVar18 - 2;
        puVar16 = puVar15;
        if (0xfffffffffffffffd < uVar18 - 2) goto LAB_003ce14c;
      } while( true );
    }
LAB_003cde9c:
    uVar20 = 0x303;
    if (uVar19 == 0x304) {
LAB_003cdebc:
      uVar10 = *puVar17;
      uVar19 = uVar20;
    }
    else {
      if ((*(byte *)(*(long *)(piVar11 + 0x30) + 0x60) >> 3 & 1) == 0) {
        if (0x302 < (int)uVar19) {
          uVar19 = 0x303;
        }
        uVar20 = uVar19;
        goto LAB_003cdebc;
      }
      if ((int)uVar19 < 0x305 && uVar19 != 0x100) {
        uVar19 = 0x303;
      }
      uVar10 = *puVar17;
    }
    if (uVar10 != 0) {
      bVar9 = false;
      uVar20 = 0xff00;
      if (uVar19 != 0x100) {
        uVar20 = uVar19;
      }
      do {
        if (*(code **)(puVar17 + 4) == (code *)0x0) goto LAB_003cdf40;
        if (uVar19 == uVar10) {
LAB_003cdf58:
          puVar8 = (uint *)(**(code **)(puVar17 + 4))();
          uVar10 = *puVar8;
          uVar3 = param_1[0x1a7];
          if ((uVar3 == 0) || (uVar10 == uVar3)) {
LAB_003cdfd8:
            iVar6 = FUN_003af490(param_1,9,0,uVar10,0);
            if (iVar6 != 0) {
              uVar3 = param_1[0x1a8];
              if ((uVar3 == 0) || (uVar10 == uVar3)) {
LAB_003cdf2c:
                if (((*(ulong *)(puVar8 + 2) & (ulong)param_1[0x1a5]) == 0) &&
                   ((((byte)puVar8[1] >> 1 & 1) == 0 ||
                    ((*(byte *)(*(long *)(param_1 + 0x154) + 0x1e) & 3) == 0)))) {
                  uVar19 = *puVar17;
                  if ((uVar19 == 0x303) && (iVar6 = FUN_003cd8d0(param_1,0x304,0), iVar6 != 0)) {
                    uVar7 = 1;
                  }
                  else if ((((int)uVar19 < 0x303) &&
                           ((*(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) ==
                            0)) && (iVar6 = FUN_003cd8d0(param_1,0x303,0), iVar6 != 0)) {
                    uVar7 = 2;
                  }
                  else {
                    uVar7 = 0;
                  }
                  *param_3 = uVar7;
                  uVar19 = *puVar17;
                  *(uint **)(param_1 + 2) = puVar8;
                  *param_1 = uVar19;
                  return 0;
                }
              }
              else if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
                if ((int)uVar10 < (int)uVar3) goto LAB_003cdf2c;
              }
              else {
                uVar2 = 0xff00;
                if (uVar10 != 0x100) {
                  uVar2 = uVar10;
                }
                uVar10 = 0xff00;
                if (uVar3 != 0x100) {
                  uVar10 = uVar3;
                }
                if ((int)uVar10 < (int)uVar2) goto LAB_003cdf2c;
              }
            }
          }
          else if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
            if ((int)uVar3 <= (int)uVar10) goto LAB_003cdfd8;
          }
          else {
            uVar2 = 0xff00;
            if (uVar10 != 0x100) {
              uVar2 = uVar10;
            }
            uVar1 = 0xff00;
            if (uVar3 != 0x100) {
              uVar1 = uVar3;
            }
            if ((int)uVar2 <= (int)uVar1) goto LAB_003cdfd8;
          }
          bVar9 = true;
        }
        else if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
          if ((int)uVar10 <= (int)uVar19) goto LAB_003cdf58;
        }
        else {
          uVar3 = 0xff00;
          if (uVar10 != 0x100) {
            uVar3 = uVar10;
          }
          if ((int)uVar20 <= (int)uVar3) goto LAB_003cdf58;
        }
LAB_003cdf40:
        puVar17 = puVar17 + 6;
        uVar10 = *puVar17;
      } while (uVar10 != 0);
      if (bVar9) goto LAB_003ce05c;
    }
    uVar7 = 0x18c;
  }
  else {
    if (iVar6 != 0x1ffff) {
      if ((*(byte *)(*(long *)(piVar11 + 0x30) + 0x60) >> 3 & 1) != 0) {
        uVar20 = *param_1;
        if (uVar19 != uVar20) {
          uVar10 = 0xff00;
          if (uVar19 != 0x100) {
            uVar10 = uVar19;
          }
          uVar19 = 0xff00;
          if (uVar20 != 0x100) {
            uVar19 = uVar20;
          }
          if ((int)uVar19 < (int)uVar10) {
            return 0x10a;
          }
        }
LAB_003cdef0:
        *param_3 = 0;
        return 0;
      }
      if ((iVar6 < 0x304) || (iVar6 == 0x10000)) {
        if ((int)uVar19 < (int)*param_1) {
          return 0x10a;
        }
        goto LAB_003cdef0;
      }
      goto LAB_003cde30;
    }
    puVar17 = &DAT_044a1528;
    lVar12 = *(long *)(param_2 + 0x288);
    if (*(int *)(lVar12 + 0x2b8) != 0) goto LAB_003cde44;
LAB_003cde08:
    if (param_1[0x168] == 0) goto LAB_003cde9c;
LAB_003ce05c:
    uVar7 = 0x102;
  }
  return uVar7;
LAB_003ce12c:
  iVar6 = FUN_003cd8d0(param_1,uVar10,&local_58);
  if (iVar6 != 0) {
    uVar19 = uVar10;
  }
  if (uVar18 < 2) {
LAB_003ce14c:
    if (uVar18 != 0) {
      return 0x9f;
    }
    if (uVar19 == 0) {
      return 0x102;
    }
    if (param_1[0x168] != 0) {
      uVar7 = 0;
      if (uVar19 != 0x304) {
        uVar7 = 0x102;
      }
      return uVar7;
    }
    if ((uVar19 == 0x303) && (iVar6 = FUN_003cd8d0(param_1,0x304,0), iVar6 != 0)) {
      uVar7 = 1;
    }
    else if ((uVar19 < 0x303) &&
            (((*(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0 &&
             (iVar6 = FUN_003cd8d0(param_1,0x303,0), iVar6 != 0)))) {
      uVar7 = 2;
    }
    else {
      uVar7 = 0;
    }
    *param_3 = uVar7;
    *param_1 = uVar19;
    *(undefined8 *)(param_1 + 2) = local_58;
    return 0;
  }
  goto LAB_003ce0c8;
}


