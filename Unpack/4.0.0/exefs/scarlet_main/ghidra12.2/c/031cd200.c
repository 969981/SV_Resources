/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031cd200; name: FUN_031cd200
 */


undefined4 FUN_031cd200(long *param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  float *pfVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulong local_80;
  undefined4 local_74;
  ulong local_70;
  ulong local_68;
  
  uVar19 = *(uint *)(param_1 + 1);
  uVar21 = (ulong)(int)uVar19;
  lVar23 = tpidr_el0;
  lVar10 = *(long *)(lVar23 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar23 + 0x1000b8) = lVar10;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0x3d0) + 0x10);
  if (*(long *)(lVar10 + 8) == 0) {
    uVar24 = uVar21 * 8;
    local_70 = uVar24;
    if (lVar10 == 0) goto LAB_031cd2d0;
    local_68 = uVar24 + 0x3f & 0xffffffffffffffc0;
    if (*(ulong *)(lVar10 + 0x28) < local_68) {
LAB_031cd28c:
      pfVar5 = (float *)FUN_031cf3b4(lVar10,&local_68);
    }
    else {
      pfVar5 = *(float **)(lVar10 + 0x38);
      if (*(ulong *)(lVar10 + 0x40) < local_68 + (long)pfVar5) goto LAB_031cd28c;
      *(ulong *)(lVar10 + 0x38) = local_68 + (long)pfVar5;
    }
  }
  else {
    local_70 = uVar21 << 3;
LAB_031cd2d0:
    uVar24 = local_70;
    pfVar5 = (float *)(**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
    lVar10 = 0;
  }
  lVar11 = *(long *)(lVar23 + 0x1000b8);
  if (lVar11 == 0) {
    lVar11 = FUN_00e5d3b4();
    *(long *)(lVar23 + 0x1000b8) = lVar11;
  }
  uVar22 = uVar21 * 4;
  lVar11 = *(long *)(*(long *)(lVar11 + 0x3d0) + 0x10);
  local_70 = uVar22;
  if ((*(long *)(lVar11 + 8) == 0) && (lVar11 != 0)) {
    local_68 = uVar22 + 0x3f & 0xffffffffffffffc0;
    if (local_68 <= *(ulong *)(lVar11 + 0x28)) {
      piVar6 = *(int **)(lVar11 + 0x38);
      if (local_68 + (long)piVar6 <= *(ulong *)(lVar11 + 0x40)) {
        *(ulong *)(lVar11 + 0x38) = local_68 + (long)piVar6;
        goto LAB_031cd3b4;
      }
    }
    piVar6 = (int *)FUN_031cf3b4(lVar11,&local_68);
  }
  else {
    piVar6 = (int *)(**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
    lVar11 = 0;
  }
LAB_031cd3b4:
  local_74 = 0x80040200;
  if ((pfVar5 != (float *)0x0) && (piVar6 != (int *)0x0)) {
    if ((int)uVar19 < 1) {
LAB_031cd45c:
      bVar1 = false;
    }
    else {
      uVar21 = uVar21 & 3;
      if ((ulong)uVar19 - 1 < 3) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        piVar16 = piVar6 + 2;
        do {
          iVar13 = (int)uVar15;
          piVar16[-2] = iVar13;
          piVar16[-1] = iVar13 + 1;
          uVar15 = uVar15 + 4;
          *piVar16 = iVar13 + 2;
          piVar16[1] = iVar13 + 3;
          piVar16 = piVar16 + 4;
        } while (((ulong)uVar19 & 0xfffffffc) != uVar15);
      }
      for (; uVar21 != 0; uVar21 = uVar21 - 1) {
        piVar6[uVar15] = (int)uVar15;
        uVar15 = uVar15 + 1;
      }
      if ((int)uVar19 < 2) goto LAB_031cd45c;
      FUN_031cdba0(piVar6,0,uVar19 - 1,param_1);
      bVar1 = true;
    }
    uVar21 = 0;
    uVar20 = 0;
    *(undefined8 *)pfVar5 = *(undefined8 *)(*param_1 + (long)*piVar6 * 8);
    if (bVar1) {
      lVar12 = (ulong)uVar19 - 1;
      piVar16 = piVar6;
      do {
        piVar16 = piVar16 + 1;
        pfVar7 = (float *)(*param_1 + (long)*piVar16 * 8);
        if ((*(float *)((long)pfVar5 +
                       (-(uVar21 >> 0x1f & 1) & 0xfffffff800000000 | (uVar21 & 0xffffffff) << 3)) !=
             *pfVar7) || (pfVar5[(long)(int)uVar21 * 2 + 1] != pfVar7[1])) {
          uVar21 = (long)(int)uVar21 + 1;
          *(undefined8 *)(pfVar5 + uVar21 * 2) = *(undefined8 *)pfVar7;
          piVar6[uVar21] = *piVar16;
        }
        uVar20 = (uint)uVar21;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    lVar12 = *(long *)(lVar23 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar23 + 0x1000b8) = lVar12;
    }
    uVar19 = uVar20 + 1;
    uVar21 = (ulong)uVar19;
    lVar23 = *(long *)(*(long *)(lVar12 + 0x3d0) + 0x10);
    if (*(long *)(lVar23 + 8) == 0) {
      local_80 = -(ulong)(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3;
      local_70 = local_80;
      if (lVar23 == 0) goto LAB_031cd598;
      local_68 = local_80 + 0x3f & 0xffffffffffffffc0;
      if (*(ulong *)(lVar23 + 0x28) < local_68) {
LAB_031cd550:
        pfVar7 = (float *)FUN_031cf3b4(lVar23,&local_68);
      }
      else {
        pfVar7 = *(float **)(lVar23 + 0x38);
        if (*(ulong *)(lVar23 + 0x40) < local_68 + (long)pfVar7) goto LAB_031cd550;
        *(ulong *)(lVar23 + 0x38) = local_68 + (long)pfVar7;
      }
    }
    else {
      local_70 = -(ulong)(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3;
LAB_031cd598:
      local_80 = local_70;
      pfVar7 = (float *)(**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
      lVar23 = 0;
    }
    if (pfVar7 != (float *)0x0) {
      fVar25 = *pfVar5;
      if ((int)uVar20 < 1) {
        uVar15 = 1;
LAB_031cd5fc:
        uVar14 = (uint)uVar15;
        if (uVar14 == uVar19) goto LAB_031cd604;
        pfVar18 = pfVar5 + (long)(int)uVar20 * 2;
        uVar19 = uVar20 & (int)uVar20 >> 0x1f;
        lVar17 = 0;
        uVar4 = uVar14 - 1;
        lVar12 = (long)(int)uVar20;
        iVar13 = uVar19 - 1;
        pfVar8 = pfVar18;
        do {
          pfVar8 = pfVar8 + -2;
          if (lVar12 + lVar17 < 1) goto LAB_031cd694;
          lVar17 = lVar17 + -1;
        } while (*pfVar8 == *pfVar18);
        iVar13 = uVar20 + (int)lVar17;
        uVar19 = iVar13 + 1;
LAB_031cd694:
        fVar26 = pfVar5[(long)(int)uVar19 * 2];
        fVar28 = (pfVar5 + (long)(int)uVar19 * 2)[1];
        lVar17 = param_2[1];
        fVar27 = pfVar5[1];
        *(int *)(*param_2 + (long)(int)lVar17 * 4) = *piVar6;
        *(int *)(param_2 + 1) = (int)lVar17 + 1;
        *pfVar7 = fVar25;
        pfVar7[1] = fVar27;
        if ((int)uVar4 <= (int)uVar19) {
          uVar21 = (ulong)uVar4;
          uVar9 = 1;
          do {
            fVar2 = pfVar5[uVar21 * 2];
            fVar3 = (pfVar5 + uVar21 * 2)[1];
            if (((long)(int)uVar19 <= (long)uVar21) ||
               ((fVar26 - fVar25) * (fVar3 - fVar27) - (fVar28 - fVar27) * (fVar2 - fVar25) < 0.0))
            {
              if (1 < (int)uVar9) {
                pfVar8 = pfVar7 + (ulong)uVar9 * 2 + -2;
                uVar15 = (ulong)uVar9;
                do {
                  if ((fVar2 - pfVar8[-2]) * (pfVar8[1] - pfVar8[-1]) -
                      (fVar3 - pfVar8[-1]) * (*pfVar8 - pfVar8[-2]) < 0.0) {
                    uVar9 = (uint)uVar15;
                    goto LAB_031cd784;
                  }
                  *(int *)(param_2 + 1) = (int)param_2[1] + -1;
                  pfVar8 = pfVar8 + -2;
                  bVar1 = 2 < (long)uVar15;
                  uVar15 = uVar15 - 1;
                } while (bVar1);
                uVar9 = 1;
              }
LAB_031cd784:
              lVar17 = param_2[1];
              *(int *)(*param_2 + (long)(int)lVar17 * 4) = piVar6[uVar21];
              *(int *)(param_2 + 1) = (int)lVar17 + 1;
              lVar17 = (long)(int)uVar9;
              uVar9 = uVar9 + 1;
              pfVar7[lVar17 * 2] = fVar2;
              (pfVar7 + lVar17 * 2)[1] = fVar3;
            }
            uVar21 = uVar21 + 1;
          } while (uVar19 + 1 != (int)uVar21);
        }
        if (uVar20 != uVar19) {
          lVar17 = param_2[1];
          *(int *)(*param_2 + (long)(int)lVar17 * 4) = piVar6[lVar12];
          *(int *)(param_2 + 1) = (int)lVar17 + 1;
        }
        *(undefined8 *)pfVar7 = *(undefined8 *)pfVar18;
        if ((int)uVar14 <= (int)uVar19) {
          fVar25 = pfVar5[(long)(int)uVar4 * 2];
          fVar27 = (pfVar5 + (long)(int)uVar4 * 2)[1];
          fVar28 = pfVar5[lVar12 * 2 + 1];
          fVar26 = *pfVar18;
          uVar19 = 1;
          lVar12 = (long)iVar13;
          do {
            fVar2 = pfVar5[lVar12 * 2];
            fVar3 = (pfVar5 + lVar12 * 2)[1];
            if ((lVar12 < (int)uVar14) ||
               (0.0 < (fVar26 - fVar25) * (fVar3 - fVar27) - (fVar28 - fVar27) * (fVar2 - fVar25)))
            {
              if (1 < (int)uVar19) {
                pfVar18 = pfVar7 + (ulong)uVar19 * 2 + -2;
                uVar21 = (ulong)uVar19;
                do {
                  if (0.0 < (pfVar18[-2] - fVar2) * (pfVar18[1] - fVar3) -
                            (*pfVar18 - fVar2) * (pfVar18[-1] - fVar3)) {
                    uVar19 = (uint)uVar21;
                    goto LAB_031cd8ac;
                  }
                  *(int *)(param_2 + 1) = (int)param_2[1] + -1;
                  pfVar18 = pfVar18 + -2;
                  bVar1 = 2 < (long)uVar21;
                  uVar21 = uVar21 - 1;
                } while (bVar1);
                uVar19 = 1;
              }
LAB_031cd8ac:
              lVar17 = param_2[1];
              *(int *)(*param_2 + (long)(int)lVar17 * 4) = piVar6[lVar12];
              *(int *)(param_2 + 1) = (int)lVar17 + 1;
              lVar17 = (long)(int)uVar19;
              uVar19 = uVar19 + 1;
              pfVar7[lVar17 * 2] = fVar2;
              (pfVar7 + lVar17 * 2)[1] = fVar3;
            }
            bVar1 = (int)uVar14 <= lVar12;
            lVar12 = lVar12 + -1;
          } while (bVar1);
        }
        if (uVar4 != 0) {
          lVar12 = param_2[1];
          *(int *)(*param_2 + (long)(int)lVar12 * 4) = *piVar6;
          iVar13 = (int)lVar12 + 1;
          goto LAB_031cd8f8;
        }
      }
      else {
        uVar15 = 1;
        pfVar18 = pfVar5;
        do {
          pfVar18 = pfVar18 + 2;
          if (*pfVar18 != fVar25) goto LAB_031cd5fc;
          uVar15 = uVar15 + 1;
        } while (uVar21 != uVar15);
LAB_031cd604:
        iVar13 = (int)param_2[1];
        *(undefined4 *)(*param_2 + (long)iVar13 * 4) = 0;
        *(int *)(param_2 + 1) = iVar13 + 1;
        if (pfVar5[(long)(int)uVar20 * 2 + 1] != pfVar5[1]) {
          *(uint *)(*param_2 + (long)(iVar13 + 1) * 4) = uVar20;
          *(undefined4 *)(*param_2 + (long)(iVar13 + 2) * 4) = 0;
          iVar13 = iVar13 + 3;
LAB_031cd8f8:
          local_74 = 0;
          *(int *)(param_2 + 1) = iVar13;
          goto joined_r0x031cd8fc;
        }
      }
      local_74 = 0;
    }
joined_r0x031cd8fc:
    if (lVar23 == 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(1,pfVar7,local_80);
    }
    else {
      uVar21 = local_80 + 0x3f & 0xffffffffffffffc0;
      if ((*(ulong *)(lVar23 + 0x28) < uVar21) ||
         (*(long *)(lVar23 + 0x38) != uVar21 + (long)pfVar7)) {
        if (pfVar7 != (float *)0x0) {
          if (*(ulong *)(lVar23 + 0x28) < uVar21 + 0x40) {
            *(int *)(*(long *)(lVar23 + 0x30) + 0x20) =
                 *(int *)(*(long *)(lVar23 + 0x30) + 0x20) + -1;
            (**(code **)(**(long **)(lVar23 + 0x10) + 0x18))
                      (*(long **)(lVar23 + 0x10),(long)pfVar7 - (long)(int)pfVar7[-1],uVar21 + 0x44)
            ;
          }
          else {
            if (*(long *)(lVar23 + 0x38) == uVar21 + (long)pfVar7) {
              *(float **)(lVar23 + 0x38) = pfVar7;
              goto LAB_031cda7c;
            }
            FUN_031cf778(lVar23);
          }
        }
      }
      else {
        *(float **)(lVar23 + 0x38) = pfVar7;
        if (*(float **)(lVar23 + 0x48) == pfVar7) {
LAB_031cda7c:
          FUN_031cf578(lVar23);
        }
      }
    }
  }
  if (lVar11 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,piVar6,uVar22);
    goto LAB_031cdaa8;
  }
  uVar21 = uVar22 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar11 + 0x28) < uVar21) || (*(long *)(lVar11 + 0x38) != uVar21 + (long)piVar6)) {
    if (piVar6 == (int *)0x0) goto LAB_031cdaa8;
    if (*(ulong *)(lVar11 + 0x28) < uVar21 + 0x40) {
      *(int *)(*(long *)(lVar11 + 0x30) + 0x20) = *(int *)(*(long *)(lVar11 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar11 + 0x10) + 0x18))
                (*(long **)(lVar11 + 0x10),(long)piVar6 - (long)piVar6[-1],uVar21 + 0x44);
      goto LAB_031cdaa8;
    }
    if (*(long *)(lVar11 + 0x38) != uVar21 + (long)piVar6) {
      FUN_031cf778(lVar11,piVar6);
      goto LAB_031cdaa8;
    }
    *(int **)(lVar11 + 0x38) = piVar6;
  }
  else {
    *(int **)(lVar11 + 0x38) = piVar6;
    if (*(int **)(lVar11 + 0x48) != piVar6) goto LAB_031cdaa8;
  }
  FUN_031cf578(lVar11);
LAB_031cdaa8:
  if (lVar10 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,pfVar5,uVar24);
    return local_74;
  }
  uVar21 = uVar24 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar10 + 0x28) < uVar21) || (*(long *)(lVar10 + 0x38) != uVar21 + (long)pfVar5)) {
    if (pfVar5 == (float *)0x0) {
      return local_74;
    }
    if (*(ulong *)(lVar10 + 0x28) < uVar21 + 0x40) {
      *(int *)(*(long *)(lVar10 + 0x30) + 0x20) = *(int *)(*(long *)(lVar10 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar10 + 0x10) + 0x18))
                (*(long **)(lVar10 + 0x10),(long)pfVar5 - (long)(int)pfVar5[-1],uVar21 + 0x44);
      return local_74;
    }
    if (*(long *)(lVar10 + 0x38) != uVar21 + (long)pfVar5) {
      FUN_031cf778(lVar10,pfVar5);
      return local_74;
    }
    *(float **)(lVar10 + 0x38) = pfVar5;
  }
  else {
    *(float **)(lVar10 + 0x38) = pfVar5;
    if (*(float **)(lVar10 + 0x48) != pfVar5) {
      return local_74;
    }
  }
  FUN_031cf578(lVar10);
  return local_74;
}


