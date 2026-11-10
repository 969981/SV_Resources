/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0085bc00; name: FUN_0085bc00
 */


void FUN_0085bc00(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined4 *puVar21;
  long *plVar22;
  uint *puVar23;
  undefined1 auStack_280 [16];
  long local_270;
  undefined8 local_268;
  
  if (*(char *)(param_1 + 0x1fe) == '\0') {
    FUN_032260f8(auStack_280,&local_270,0x200);
    uVar9 = FUN_0322b1e0(auStack_280,"No index available (");
    uVar9 = FUN_0322b2c8(uVar9,*(undefined4 *)(param_1 + 0x1f8));
    FUN_0322b1e0(uVar9,") hkgpConvexHull::buildIndices need to be called before this operation.");
    iVar8 = FUN_03226f50(0x79f9d886,&local_270,
                         "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                         ,0x189);
    if (iVar8 != 0) {
      CallSupervisor(0x26);
    }
    FUN_032261b0(auStack_280);
  }
  uVar3 = *(uint *)(param_1 + 0x60);
  local_270 = 0;
  local_268 = 0x8000000000000000;
  if ((int)uVar3 < 1) {
    uVar11 = 0;
    bVar6 = SBORROW4(0,uVar3);
    iVar8 = -uVar3;
    bVar7 = uVar3 == 0;
    if ((int)uVar3 < 1) goto LAB_0085bd4c;
  }
  else {
    FUN_030fe388(&local_270,PTR_PTR_047d1a50,(ulong)uVar3);
    uVar11 = local_268 & 0xffffffff;
    bVar6 = SBORROW4((uint)local_268,uVar3);
    iVar8 = (uint)local_268 - uVar3;
    bVar7 = (uint)local_268 == uVar3;
    if ((int)uVar3 <= (int)(uint)local_268) {
LAB_0085bd4c:
      puVar5 = PTR_PTR_047d1a50;
      if (!bVar7 && iVar8 < 0 == bVar6) {
        local_268 = CONCAT44(local_268._4_4_,uVar3);
        uVar11 = -(uVar11 >> 0x1f) & 0xfffffff000000000 | uVar11 << 4;
        lVar19 = (long)(int)uVar3 * 0x10 - uVar11;
        puVar21 = (undefined4 *)(local_270 + uVar11 + -8);
        do {
          *puVar21 = 0;
          if ((-1 < (int)puVar21[1]) && (*(long *)(puVar21 + -2) != 0)) {
            (**(code **)(*(long *)puVar5 + 0x20))
                      (puVar5,*(long *)(puVar21 + -2),(ulong)(uint)puVar21[1] << 2);
          }
          *(undefined8 *)(puVar21 + -2) = 0;
          lVar19 = lVar19 + 0x10;
          puVar21[1] = 0x80000000;
          puVar21 = puVar21 + -4;
        } while (lVar19 != 0);
      }
      goto LAB_0085bdbc;
    }
  }
  uVar11 = -(uVar11 >> 0x1f) & 0xfffffff000000000 | uVar11 << 4;
  puVar13 = (undefined8 *)(local_270 + uVar11);
  uVar11 = ((long)(int)uVar3 * 0x10 - uVar11) - 0x10;
  uVar10 = ((uint)(uVar11 >> 4) & 0xfffffff) + 1;
  local_268 = CONCAT44(local_268._4_4_,uVar3);
  if ((uVar10 & 3) != 0) {
    lVar19 = -((ulong)uVar10 & 3);
    puVar12 = puVar13;
    do {
      puVar13 = puVar12 + 2;
      *puVar12 = 0;
      puVar12[1] = 0x8000000000000000;
      bVar7 = lVar19 != -1;
      lVar19 = lVar19 + 1;
      puVar12 = puVar13;
    } while (bVar7);
  }
  if (0x2f < uVar11) {
    do {
      *puVar13 = 0;
      puVar13[1] = 0x8000000000000000;
      puVar13[2] = 0;
      puVar13[3] = 0x8000000000000000;
      puVar13[4] = 0;
      puVar13[5] = 0x8000000000000000;
      puVar13[6] = 0;
      puVar13[7] = 0x8000000000000000;
      puVar13 = puVar13 + 8;
    } while (puVar13 != (undefined8 *)(local_270 + (long)(int)uVar3 * 0x10));
  }
LAB_0085bdbc:
  puVar5 = PTR_PTR_047d1a50;
  plVar22 = *(long **)(param_1 + 0x70);
  do {
    if (plVar22 == (long *)0x0) {
      *(undefined4 *)(param_3 + 1) = 0;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= (int)uVar3) {
        FUN_02e9b320(param_2,PTR_PTR_047d1a50,(long)(int)uVar3 + 1);
      }
      iVar8 = (int)((long)(int)uVar3 + 1);
      if (((int)param_2[1] <= (int)uVar3) || (iVar8 < (int)param_2[1])) {
        *(int *)(param_2 + 1) = iVar8;
      }
      *(undefined4 *)*param_2 = 0;
      puVar5 = PTR_PTR_047d1a50;
      if (0 < (int)uVar3) {
        uVar11 = 0;
        do {
          puVar13 = (undefined8 *)(local_270 + uVar11 * 0x10);
          puVar21 = (undefined4 *)*puVar13;
          iVar4 = *(int *)(puVar13 + 1);
          lVar19 = param_3[1];
          iVar8 = (int)lVar19 + iVar4;
          if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) < iVar8) {
            FUN_02e9b320(param_3,puVar5,(long)iVar8);
          }
          if (iVar4 != 0) {
            uVar18 = (long)iVar4 * 4 - 4;
            uVar10 = ((uint)(uVar18 >> 2) & 0x3fffffff) + 1;
            puVar15 = (undefined4 *)(*param_3 + (long)(int)lVar19 * 4);
            puVar17 = puVar21;
            if ((uVar10 & 7) != 0) {
              lVar19 = -((ulong)uVar10 & 7);
              puVar14 = puVar15;
              puVar16 = puVar21;
              do {
                puVar17 = puVar16 + 1;
                bVar7 = lVar19 != -1;
                lVar19 = lVar19 + 1;
                puVar15 = puVar14 + 1;
                *puVar14 = *puVar16;
                puVar14 = puVar15;
                puVar16 = puVar17;
              } while (bVar7);
            }
            if (0x1b < uVar18) {
              do {
                *puVar15 = *puVar17;
                puVar15[1] = puVar17[1];
                puVar15[2] = puVar17[2];
                puVar15[3] = puVar17[3];
                puVar15[4] = puVar17[4];
                puVar15[5] = puVar17[5];
                puVar15[6] = puVar17[6];
                puVar14 = puVar17 + 7;
                puVar17 = puVar17 + 8;
                puVar15[7] = *puVar14;
                puVar15 = puVar15 + 8;
              } while (puVar17 != puVar21 + iVar4);
            }
          }
          *(int *)(param_3 + 1) = iVar8;
          uVar11 = uVar11 + 1;
          *(int *)(*param_2 + uVar11 * 4) = iVar8;
        } while (uVar11 != uVar3);
      }
      lVar19 = local_270;
      puVar5 = PTR_PTR_047d1a50;
      if ((uint)local_268 != 0) {
        lVar20 = (long)(int)(uint)local_268 << 4;
        do {
          lVar2 = lVar19 + lVar20;
          *(undefined4 *)(lVar2 + -8) = 0;
          if ((-1 < (int)*(uint *)(lVar2 + -4)) && (*(long *)(lVar2 + -0x10) != 0)) {
            (**(code **)(*(long *)puVar5 + 0x20))
                      (puVar5,*(long *)(lVar2 + -0x10),(ulong)*(uint *)(lVar2 + -4) << 2);
          }
          lVar20 = lVar20 + -0x10;
          *(undefined8 *)(lVar2 + -0x10) = 0;
          *(undefined4 *)(lVar2 + -4) = 0x80000000;
        } while (lVar20 != 0);
      }
      uVar11 = local_268;
      uVar18 = (ulong)local_268._4_4_;
      local_268 = (ulong)local_268._4_4_ << 0x20;
      if ((-1 < (long)uVar11) && (local_270 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_270,uVar18 << 4);
      }
      return;
    }
    plVar1 = (long *)(local_270 + (long)*(int *)(plVar22[2] + 0x34) * 0x10);
    iVar8 = *(int *)(plVar22 + 0xb);
    puVar23 = (uint *)(plVar1 + 1);
    uVar10 = *puVar23;
    if (0 < (int)uVar10) {
      uVar11 = 0;
      do {
        if (*(int *)(*plVar1 + uVar11 * 4) == iVar8) {
          if (-1 < (int)uVar11) goto LAB_0085be6c;
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar10 != uVar11);
    }
    lVar19 = (long)(int)uVar10;
    if ((int)(*(uint *)((long)plVar1 + 0xc) & 0x7fffffff) <= (int)uVar10) {
      FUN_0133bb88(plVar1,puVar5,lVar19 + 1);
      uVar10 = *puVar23;
    }
    *(int *)(*plVar1 + (long)(int)uVar10 * 4) = iVar8;
    *puVar23 = (uint)(lVar19 + 1);
LAB_0085be6c:
    plVar1 = (long *)(local_270 + (long)*(int *)(plVar22[3] + 0x34) * 0x10);
    puVar23 = (uint *)(plVar1 + 1);
    uVar10 = *puVar23;
    if (0 < (int)uVar10) {
      uVar11 = 0;
      do {
        if (*(int *)(*plVar1 + uVar11 * 4) == iVar8) {
          if (-1 < (int)uVar11) goto LAB_0085beec;
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar10 != uVar11);
    }
    lVar19 = (long)(int)uVar10;
    if ((int)(*(uint *)((long)plVar1 + 0xc) & 0x7fffffff) <= (int)uVar10) {
      FUN_0133bb88(plVar1,puVar5,lVar19 + 1);
      uVar10 = *puVar23;
    }
    *(int *)(*plVar1 + (long)(int)uVar10 * 4) = iVar8;
    *puVar23 = (uint)(lVar19 + 1);
LAB_0085beec:
    plVar1 = (long *)(local_270 + (long)*(int *)(plVar22[4] + 0x34) * 0x10);
    puVar23 = (uint *)(plVar1 + 1);
    uVar10 = *puVar23;
    if (0 < (int)uVar10) {
      uVar11 = 0;
      do {
        if (*(int *)(*plVar1 + uVar11 * 4) == iVar8) {
          if (-1 < (int)uVar11) goto LAB_0085bddc;
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar10 != uVar11);
    }
    lVar19 = (long)(int)uVar10;
    if ((int)(*(uint *)((long)plVar1 + 0xc) & 0x7fffffff) <= (int)uVar10) {
      FUN_0133bb88(plVar1,puVar5,lVar19 + 1);
      uVar10 = *puVar23;
    }
    *(int *)(*plVar1 + (long)(int)uVar10 * 4) = iVar8;
    *puVar23 = (uint)(lVar19 + 1);
LAB_0085bddc:
    plVar22 = (long *)*plVar22;
  } while( true );
}


