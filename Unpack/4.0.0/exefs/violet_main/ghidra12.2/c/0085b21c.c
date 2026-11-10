/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0085b21c; name: FUN_0085b21c
 */


/* WARNING: Removing unreachable block (ram,0x0085b4a8) */

int FUN_0085b21c(long param_1,int param_2,long *param_3,long *param_4,char param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined4 *puVar26;
  int iVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  long local_280;
  undefined8 local_278;
  undefined1 *local_270;
  undefined8 local_268;
  undefined1 local_260 [512];
  
  lVar12 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar12 + 0x1fe) == '\0') {
    FUN_032260f8(&local_280,&local_270,0x200);
    uVar13 = FUN_0322b1e0(&local_280,"No index available (");
    uVar13 = FUN_0322b2c8(uVar13,*(undefined4 *)(lVar12 + 0x1f8));
    FUN_0322b1e0(uVar13,") hkgpConvexHull::buildIndices need to be called before this operation.");
    iVar11 = FUN_03226f50(0x79f9d886,&local_270,
                          "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                          ,0x189);
    if (iVar11 != 0) {
      CallSupervisor(0x26);
    }
    FUN_032261b0(&local_280);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) < *(int *)(lVar12 + 0x98)) {
    FUN_0133bb88(param_3,PTR_PTR_047d1a50);
  }
  *(undefined4 *)(param_4 + 1) = 0;
  if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < *(int *)(lVar12 + 0x60) * 3) {
    FUN_0133bb88(param_4,PTR_PTR_047d1a50);
  }
  if (*(int *)(lVar12 + 0x1f0) == 2) {
    iVar11 = (int)param_3[1];
    lVar32 = (long)iVar11;
    uVar1 = *(undefined4 *)(lVar12 + 0x60);
    if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar11) {
      FUN_0133bb88(param_3,PTR_PTR_047d1a50,lVar32 + 1);
      iVar11 = (int)param_3[1];
    }
    *(undefined4 *)(*param_3 + (long)iVar11 * 4) = uVar1;
    *(int *)(param_3 + 1) = (int)(lVar32 + 1);
    puVar9 = PTR_PTR_047d1a50;
    if (param_2 != 0) {
      if (0 < *(int *)(lVar12 + 0x60)) {
        lVar32 = param_4[1];
        iVar11 = 0;
        do {
          iVar14 = (int)lVar32 + iVar11;
          iVar27 = iVar14 + 1;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar14) {
            FUN_0133bb88(param_4,puVar9,(long)iVar27);
            iVar14 = (int)param_4[1];
          }
          *(int *)(*param_4 + (long)iVar14 * 4) = iVar11;
          *(int *)(param_4 + 1) = iVar27;
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(lVar12 + 0x60));
      }
    }
    else {
      plVar16 = *(long **)(lVar12 + 0x58);
      if (plVar16 != (long *)0x0) {
        iVar11 = (int)param_4[1];
        do {
          uVar2 = *(uint *)((long)plVar16 + 0x1c);
          iVar27 = iVar11 + 1;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar11) {
            FUN_0133bb88(param_4,puVar9,(long)iVar27);
            iVar11 = (int)param_4[1];
          }
          *(uint *)(*param_4 + (long)iVar11 * 4) = uVar2 & 0xc0ffffff;
          *(int *)(param_4 + 1) = iVar27;
          plVar16 = (long *)*plVar16;
          iVar11 = iVar27;
        } while (plVar16 != (long *)0x0);
      }
    }
    iVar11 = 1;
  }
  else {
    if (*(int *)(lVar12 + 0x1f0) != 3) {
      return 0;
    }
    local_270 = (undefined1 *)0x0;
    local_268 = 0x8000000000000000;
    if (*(int *)(lVar12 + 0x78) < 1) {
      uVar15 = 0;
      plVar16 = *(long **)(lVar12 + 0x70);
    }
    else {
      FUN_0085ecac(&local_270,PTR_PTR_047d1a50);
      uVar15 = local_268 & 0xffffffff;
      plVar16 = *(long **)(lVar12 + 0x70);
    }
    if (plVar16 != (long *)0x0) {
      uVar30 = -(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3;
      do {
        uVar2 = (int)uVar15 + 1;
        uVar15 = (ulong)uVar2;
        *(long **)(local_270 + uVar30) = plVar16;
        local_268 = CONCAT44(local_268._4_4_,uVar2);
        plVar16 = (long *)*plVar16;
        uVar30 = uVar30 + 8;
      } while (plVar16 != (long *)0x0);
    }
    iVar11 = (int)uVar15 + -1;
    if (iVar11 != 0 && 0 < (int)uVar15) {
      FUN_0085ede0(local_270,0,iVar11);
      uVar15 = local_268 & 0xffffffff;
    }
    if ((int)uVar15 < 1) {
      iVar11 = 0;
    }
    else {
      uVar30 = 0;
      iVar11 = 0;
      do {
        uVar28 = *(ulong *)(local_270 + uVar30 * 8);
        if (*(int *)(uVar28 + 0x58) == iVar11) {
          if (*(int *)((*(ulong *)(uVar28 + 0x28) & 0xfffffffffffffffc) + 0x58) == iVar11) {
            if (*(int *)((*(ulong *)(uVar28 + 0x30) & 0xfffffffffffffffc) + 0x58) == iVar11) {
              if (*(int *)((*(ulong *)(uVar28 + 0x38) & 0xfffffffffffffffc) + 0x58) == iVar11) {
                uVar28 = *(ulong *)PTR_DAT_047d1bb8;
                uVar31 = (ulong)*(uint *)(PTR_DAT_047d1bb8 + 8);
              }
              else {
                uVar31 = 2;
              }
            }
            else {
              uVar31 = 1;
            }
          }
          else {
            uVar31 = 0;
          }
          if (uVar28 != 0) {
            lVar32 = *(long *)(uVar28 + (long)(int)uVar31 * 8 + 0x10);
            if (param_2 != 0) {
              iVar27 = 0;
              lVar17 = lVar32;
              iVar14 = (int)param_4[1];
              while( true ) {
                uVar1 = *(undefined4 *)(lVar17 + 0x34);
                iVar3 = iVar14 + 1;
                if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar14) {
                  FUN_0133bb88(param_4,PTR_PTR_047d1a50,(long)iVar3);
                  iVar14 = (int)param_4[1];
                }
                *(undefined4 *)(*param_4 + (long)iVar14 * 4) = uVar1;
                uVar31 = (ulong)(9U >> (ulong)(((uint)uVar31 & 0xf) << 1) & 3);
                iVar27 = iVar27 + 1;
                *(int *)(param_4 + 1) = iVar3;
                lVar17 = uVar28 + uVar31 * 8;
                while( true ) {
                  uVar21 = *(ulong *)(lVar17 + 0x28) & 0xfffffffffffffffc;
                  if (*(int *)(uVar21 + 0x58) != iVar11) break;
                  uVar31 = (ulong)(9U >> (ulong)(((uint)*(ulong *)(lVar17 + 0x28) & 3) << 1) & 3);
                  lVar17 = uVar21 + uVar31 * 8;
                  uVar28 = uVar21;
                }
                if (*(long *)(uVar28 + uVar31 * 8 + 0x10) == lVar32) break;
                lVar17 = *(long *)(uVar28 + uVar31 * 8 + 0x10);
                iVar14 = iVar3;
              }
            }
            else {
              iVar27 = 0;
              lVar17 = lVar32;
              iVar14 = (int)param_4[1];
              while( true ) {
                uVar2 = *(uint *)(lVar17 + 0x1c);
                iVar3 = iVar14 + 1;
                if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar14) {
                  FUN_0133bb88(param_4,PTR_PTR_047d1a50,(long)iVar3);
                  iVar14 = (int)param_4[1];
                }
                *(uint *)(*param_4 + (long)iVar14 * 4) = uVar2 & 0xc0ffffff;
                uVar31 = (ulong)(9U >> (ulong)(((uint)uVar31 & 0xf) << 1) & 3);
                lVar17 = uVar28 + uVar31 * 8;
                iVar27 = iVar27 + 1;
                *(int *)(param_4 + 1) = iVar3;
                while( true ) {
                  uVar21 = *(ulong *)(lVar17 + 0x28) & 0xfffffffffffffffc;
                  if (*(int *)(uVar21 + 0x58) != iVar11) break;
                  uVar31 = (ulong)(9U >> (ulong)(((uint)*(ulong *)(lVar17 + 0x28) & 3) << 1) & 3);
                  lVar17 = uVar21 + uVar31 * 8;
                  uVar28 = uVar21;
                }
                if (*(long *)(uVar28 + uVar31 * 8 + 0x10) == lVar32) break;
                lVar17 = *(long *)(uVar28 + uVar31 * 8 + 0x10);
                iVar14 = iVar3;
              }
            }
            iVar14 = (int)param_3[1];
            lVar32 = (long)iVar14;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar14) {
              FUN_0133bb88(param_3,PTR_PTR_047d1a50,lVar32 + 1);
              iVar14 = (int)param_3[1];
            }
            *(int *)(*param_3 + (long)iVar14 * 4) = iVar27;
            iVar11 = iVar11 + 1;
            *(int *)(param_3 + 1) = (int)(lVar32 + 1);
          }
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 != uVar15);
    }
    uVar15 = local_268;
    uVar30 = (ulong)local_268._4_4_;
    local_268 = (ulong)local_268._4_4_ << 0x20;
    if ((-1 < (long)uVar15) && (local_270 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_270,uVar30 << 3);
    }
    if (iVar11 == 0) {
      return 0;
    }
  }
  if (param_5 != '\0') {
    local_280 = 0;
    local_278._0_4_ = 0;
    local_278._4_4_ = 0x80000000;
    puVar26 = (undefined4 *)*param_4;
    if (0 < *(int *)(lVar12 + 0x60)) {
      FUN_0085cb24(&local_280,PTR_PTR_047d1a50);
    }
    puVar9 = PTR_PTR_047d1a50;
    plVar16 = *(long **)(lVar12 + 0x58);
    if (plVar16 != (long *)0x0) {
      do {
        iVar27 = (int)local_278 + 1;
        if ((int)(local_278._4_4_ & 0x7fffffff) <= (int)local_278) {
          FUN_0085cb24(&local_280,puVar9,(long)iVar27);
        }
        *(long **)(local_280 + (long)(int)local_278 * 8) = plVar16;
        plVar16 = (long *)*plVar16;
        local_278._0_4_ = iVar27;
      } while (plVar16 != (long *)0x0);
    }
    puVar9 = PTR_PTR_047d1a50;
    iVar27 = (int)param_3[1];
    if (0 < iVar27) {
      lVar12 = 0;
      do {
        uVar2 = *(uint *)(*param_3 + lVar12 * 4);
        lVar32 = (long)(int)uVar2;
        if (2 < (int)uVar2) {
          uVar15 = 0;
          uVar29 = 0xffffffff;
          lVar17 = -1;
          do {
            iVar14 = (uint)uVar15 + 2;
            iVar3 = 0;
            if (uVar2 != 0) {
              iVar3 = iVar14 / (int)uVar2;
            }
            lVar23 = 0;
            if ((ulong)uVar2 - 1 != uVar15) {
              lVar23 = uVar15 + 1;
            }
            lVar24 = *(long *)(local_280 + (long)(int)puVar26[uVar15] * 8);
            lVar25 = *(long *)(local_280 + (long)(int)puVar26[lVar23] * 8);
            lVar23 = *(long *)(local_280 + (long)(int)puVar26[iVar14 - iVar3 * uVar2] * 8);
            iVar4 = *(int *)(lVar25 + 0x24) - *(int *)(lVar24 + 0x24);
            iVar3 = *(int *)(lVar25 + 0x28) - *(int *)(lVar24 + 0x28);
            iVar5 = *(int *)(lVar23 + 0x24) - *(int *)(lVar24 + 0x24);
            iVar6 = *(int *)(lVar23 + 0x28) - *(int *)(lVar24 + 0x28);
            iVar7 = *(int *)(lVar25 + 0x20) - *(int *)(lVar24 + 0x20);
            iVar8 = *(int *)(lVar23 + 0x20) - *(int *)(lVar24 + 0x20);
            iVar14 = iVar6 * iVar4 - iVar5 * iVar3;
            iVar3 = iVar8 * iVar3 - iVar6 * iVar7;
            iVar4 = iVar5 * iVar7 - iVar8 * iVar4;
            lVar23 = (long)iVar3 * (long)iVar3 + (long)iVar4 * (long)iVar4 +
                     (long)iVar14 * (long)iVar14;
            uVar10 = (uint)uVar15;
            if (lVar23 <= lVar17) {
              lVar23 = lVar17;
              uVar10 = uVar29;
            }
            uVar29 = uVar10;
            uVar15 = uVar15 + 1;
            lVar17 = lVar23;
          } while (uVar2 != uVar15);
          if (0 < (int)uVar29) {
            local_268 = 0x8000002000000000;
            local_270 = local_260;
            if ((int)uVar29 < 0x21) {
              if (uVar29 != 0) goto LAB_0085b97c;
            }
            else {
              FUN_02e9b320(&local_270,puVar9,uVar29);
              if ((uint)local_268 != uVar29) {
LAB_0085b97c:
                local_268 = local_268 & 0xffffffff00000000;
              }
            }
            uVar30 = local_268;
            uVar15 = (ulong)uVar29;
            uVar28 = uVar15 & 3;
            if (uVar15 - 1 < 3) {
              lVar17 = 0;
            }
            else {
              lVar17 = 0;
              puVar20 = puVar26 + 2;
              do {
                lVar23 = lVar17 * 4;
                lVar17 = lVar17 + 4;
                *(undefined4 *)(local_270 + lVar23) = puVar20[-2];
                *(undefined4 *)(local_270 + lVar23 + 4) = puVar20[-1];
                *(undefined4 *)(local_270 + lVar23 + 8) = *puVar20;
                puVar18 = puVar20 + 1;
                puVar20 = puVar20 + 4;
                *(undefined4 *)(local_270 + lVar23 + 0xc) = *puVar18;
              } while (uVar15 - uVar28 != lVar17);
            }
            if ((uVar29 & 3) != 0) {
              lVar17 = lVar17 << 2;
              uVar31 = uVar28;
              do {
                uVar31 = uVar31 - 1;
                *(undefined4 *)(local_270 + lVar17) = *(undefined4 *)((long)puVar26 + lVar17);
                lVar17 = lVar17 + 4;
              } while (uVar31 != 0);
            }
            puVar20 = puVar26;
            if ((int)uVar29 < (int)uVar2) {
              uVar21 = (ulong)(int)uVar29;
              uVar22 = ~uVar21;
              uVar31 = (ulong)(uVar2 - uVar29) & 7;
              if ((uVar2 - uVar29 & 7) != 0) {
                lVar17 = -uVar21;
                puVar18 = puVar26;
                do {
                  uVar31 = uVar31 - 1;
                  puVar20 = puVar18 + 1;
                  *puVar18 = puVar18[uVar21];
                  lVar17 = lVar17 + -1;
                  puVar18 = puVar20;
                } while (uVar31 != 0);
                uVar21 = -lVar17;
              }
              if (uVar22 + lVar32 < 7) goto LAB_0085ba68;
              lVar17 = lVar32 - uVar21;
              puVar18 = puVar26 + uVar21 + 4;
              puVar19 = puVar20;
              do {
                *puVar19 = puVar18[-4];
                puVar19[1] = puVar18[-3];
                puVar19[2] = puVar18[-2];
                puVar19[3] = puVar18[-1];
                puVar19[4] = *puVar18;
                puVar19[5] = puVar18[1];
                puVar19[6] = puVar18[2];
                puVar20 = puVar19 + 8;
                lVar17 = lVar17 + -8;
                puVar19[7] = puVar18[3];
                puVar18 = puVar18 + 8;
                puVar19 = puVar20;
              } while (lVar17 != 0);
              if (uVar15 - 1 < 3) goto LAB_0085ba78;
LAB_0085bb04:
              lVar17 = 0;
              puVar18 = puVar20;
              do {
                puVar19 = puVar18;
                lVar24 = lVar17 * 4;
                lVar23 = lVar17 + 4;
                puVar18 = puVar20 + lVar17;
                *puVar18 = *(undefined4 *)(local_270 + lVar24);
                puVar18[1] = *(undefined4 *)(local_270 + lVar24 + 4);
                puVar18[2] = *(undefined4 *)(local_270 + lVar24 + 8);
                puVar18[3] = *(undefined4 *)(local_270 + lVar24 + 0xc);
                lVar17 = lVar23;
                puVar18 = puVar18 + 4;
              } while (uVar15 - uVar28 != lVar23);
              puVar20 = puVar19 + 4;
            }
            else {
LAB_0085ba68:
              if (2 < uVar15 - 1) goto LAB_0085bb04;
LAB_0085ba78:
              lVar23 = 0;
            }
            if ((uVar29 & 3) != 0) {
              uVar15 = uVar15 & 3;
              lVar23 = lVar23 << 2;
              do {
                uVar15 = uVar15 - 1;
                puVar18 = (undefined4 *)(local_270 + lVar23);
                lVar23 = lVar23 + 4;
                *puVar20 = *puVar18;
                puVar20 = puVar20 + 1;
              } while (uVar15 != 0);
            }
            uVar15 = (ulong)local_268._4_4_;
            local_268 = (ulong)local_268._4_4_ << 0x20;
            if ((-1 < (long)uVar30) && (local_270 != (undefined1 *)0x0)) {
              (**(code **)(*(long *)puVar9 + 0x20))(puVar9,local_270,uVar15 << 2);
            }
            iVar27 = (int)param_3[1];
          }
        }
        puVar26 = puVar26 + lVar32;
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar27);
    }
    uVar2 = local_278._4_4_;
    uVar15 = (ulong)local_278._4_4_;
    local_278 = (ulong)local_278._4_4_ << 0x20;
    if ((-1 < (int)uVar2) && (local_280 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_280,uVar15 << 3);
    }
  }
  return iVar11;
}


