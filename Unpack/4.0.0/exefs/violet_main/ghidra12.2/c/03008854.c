/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03008854; name: FUN_03008854
 */


void FUN_03008854(long param_1,long *param_2,long *param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  int iVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [136];
  
  lVar10 = *param_2;
  uVar12 = param_2[1] - lVar10;
  uVar25 = uVar12 >> 2;
  iVar24 = (int)uVar25;
  uVar5 = iVar24 - 1;
  iVar9 = *(int *)(param_1 + 0x15d4) - iVar24;
  if (iVar24 < 1) {
LAB_0300893c:
    *(int *)(param_1 + 0x15d4) = iVar9;
    if (*(long *)(param_1 + 0x1660) != 0) {
      *(undefined1 *)(param_1 + 0x1668) = 1;
      if (*(char *)(param_1 + 0x1658) != '\0') {
        if (0 < *(int *)(param_1 + 0x1640)) {
          lVar13 = *(long *)(param_1 + 0x1648);
          lVar10 = 0;
          lVar16 = *(long *)(param_1 + 0x1638);
          do {
            *(int *)(lVar13 + (ulong)*(uint *)(lVar16 + lVar10 * 0x10 + 0xc) * 4) = (int)lVar10;
            lVar10 = lVar10 + 1;
          } while (lVar10 < *(int *)(param_1 + 0x1640));
        }
        *(undefined1 *)(param_1 + 0x1658) = 0;
      }
      local_f8 = local_e8;
      local_f0 = 0x8000002000000000;
      if (iVar24 < 0x21) {
        uVar12 = 0;
      }
      else {
        FUN_02e9b320(&local_f8,PTR_PTR_047d1a50,(long)(uVar12 * 0x40000000) >> 0x20);
        uVar12 = local_f0 & 0xffffffff;
      }
      if ((int)uVar12 != iVar24) {
        uVar12 = uVar25 & 0xffffffff;
        local_f0 = CONCAT44(local_f0._4_4_,iVar24);
      }
      if (0 < (int)uVar12) {
        lVar10 = 0;
        do {
          *(undefined4 *)(local_f8 + lVar10 * 4) =
               *(undefined4 *)
                (*(long *)(param_1 + 0x1648) + (long)*(int *)(*param_2 + lVar10 * 4) * 4);
          uVar12 = (ulong)(int)local_f0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < (long)uVar12);
      }
      iVar9 = (int)uVar12;
      if (iVar24 < 0x21) {
        if (0 < iVar9) {
          uVar25 = 0;
          do {
            iVar9 = *(int *)(local_f8 + uVar25 * 4);
            if (uVar25 != 0) {
              uVar17 = uVar25;
              do {
                if (*(int *)(local_f8 + (ulong)((int)uVar17 - 1) * 4) <= iVar9) goto LAB_03008a60;
                *(int *)(local_f8 + uVar17 * 4) = *(int *)(local_f8 + (ulong)((int)uVar17 - 1) * 4);
                uVar6 = uVar17 - 1;
                bVar1 = 0 < (long)uVar17;
                uVar17 = uVar6;
              } while (uVar6 != 0 && bVar1);
            }
            uVar17 = 0;
LAB_03008a60:
            uVar25 = uVar25 + 1;
            *(int *)(local_f8 +
                    (-(uVar17 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar17 & 0xffffffff) << 2)) =
                 iVar9;
          } while (uVar25 != (uVar12 & 0xffffffff));
        }
      }
      else if (1 < iVar9) {
        FUN_02efaeb0(local_f8,0,iVar9 + -1);
      }
      lVar10 = param_3[1];
      if ((int)lVar10 != 0) {
        piVar11 = (int *)*param_3;
        piVar7 = piVar11;
        do {
          piVar14 = piVar7 + 2;
          iVar9 = piVar7[1];
          iVar26 = *(int *)(*(long *)(param_1 + 0x1648) + (long)*piVar7 * 4);
          *(int *)(*(long *)(param_1 + 0x1638) + (long)iVar26 * 0x10 + 0xc) = iVar9;
          *(int *)(*(long *)(param_1 + 0x1648) + (long)iVar9 * 4) = iVar26;
          piVar7 = piVar14;
        } while (piVar14 != piVar11 + (long)(int)lVar10 * 2);
      }
      if (0 < iVar24) {
        iVar9 = *(int *)(param_1 + 0x1640);
        lVar10 = (long)iVar9 * 0x10;
        uVar12 = (ulong)uVar5;
        do {
          iVar9 = iVar9 + -1;
          lVar10 = lVar10 + -0x10;
          if (iVar9 != *(int *)(local_f8 + uVar12 * 4)) {
            lVar13 = *(long *)(param_1 + 0x1638);
            puVar18 = (undefined8 *)(lVar13 + lVar10);
            iVar24 = *(int *)((long)puVar18 + 0xc);
            puVar19 = (undefined8 *)(lVar13 + (long)*(int *)(local_f8 + uVar12 * 4) * 0x10);
            uVar22 = puVar18[1];
            *puVar19 = *puVar18;
            puVar19[1] = uVar22;
            *(undefined4 *)(*(long *)(param_1 + 0x1648) + (long)iVar24 * 4) =
                 *(undefined4 *)(local_f8 + uVar12 * 4);
          }
          bVar1 = 0 < (long)uVar12;
          uVar12 = uVar12 - 1;
        } while (bVar1);
      }
      iVar9 = *(int *)(param_1 + 0x15d4);
      if ((int)(*(uint *)(param_1 + 0x1644) & 0x7fffffff) < iVar9) {
        FUN_02eaf0f8((long *)(param_1 + 0x1638),PTR_PTR_047d1a50,(long)iVar9);
      }
      uVar12 = local_f0;
      if (*(int *)(param_1 + 0x1640) != iVar9) {
        *(int *)(param_1 + 0x1640) = iVar9;
      }
      uVar25 = (ulong)local_f0._4_4_;
      local_f0 = (ulong)local_f0._4_4_ << 0x20;
      if ((-1 < (long)uVar12) && (local_f8 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_f8,uVar25 << 2);
      }
    }
    iVar9 = (int)param_3[1];
    if (iVar9 != 0) {
      piVar7 = (int *)*param_3;
      piVar11 = piVar7 + (long)iVar9 * 2;
      piVar14 = piVar7;
      do {
        piVar15 = piVar14 + 2;
        puVar18 = (undefined8 *)(*(long *)(param_1 + 0x108) + (long)*piVar14 * 0x20);
        puVar19 = (undefined8 *)(*(long *)(param_1 + 0x108) + (long)piVar14[1] * 0x20);
        uVar28 = *puVar18;
        uVar27 = puVar18[3];
        uVar22 = puVar18[2];
        puVar19[1] = puVar18[1];
        *puVar19 = uVar28;
        puVar19[3] = uVar27;
        puVar19[2] = uVar22;
        piVar14 = piVar15;
      } while (piVar15 != piVar11);
      piVar14 = piVar7;
      do {
        piVar15 = piVar14 + 2;
        puVar19 = (undefined8 *)(*(long *)(param_1 + 0x15c0) + (long)*piVar14 * 0x14);
        puVar18 = (undefined8 *)(*(long *)(param_1 + 0x15c0) + (long)piVar14[1] * 0x14);
        uVar22 = *puVar19;
        uVar27 = puVar19[1];
        *(undefined4 *)(puVar18 + 2) = *(undefined4 *)(puVar19 + 2);
        *puVar18 = uVar22;
        puVar18[1] = uVar27;
        piVar14 = piVar15;
      } while (piVar15 != piVar11);
      lVar13 = *(long *)(param_1 + 0x1670);
      lVar10 = (long)iVar9 * 8;
      if (lVar13 != 0) {
        piVar14 = piVar7;
        do {
          piVar15 = piVar14 + 2;
          puVar21 = (undefined4 *)(*(long *)(lVar13 + 0x20) + (long)*piVar14 * 6);
          puVar20 = (undefined4 *)(*(long *)(lVar13 + 0x20) + (long)piVar14[1] * 6);
          uVar3 = *puVar21;
          *(undefined2 *)(puVar20 + 1) = *(undefined2 *)(puVar21 + 1);
          *puVar20 = uVar3;
          piVar14 = piVar15;
        } while (piVar15 != piVar11);
        lVar16 = lVar10 + -8;
        piVar14 = piVar7;
        if (((uint)lVar16 >> 3 & 1) == 0) {
          puVar18 = (undefined8 *)(*(long *)(lVar13 + 0x30) + (long)*piVar7 * 0x10);
          puVar19 = (undefined8 *)(*(long *)(lVar13 + 0x30) + (long)piVar7[1] * 0x10);
          uVar22 = *puVar18;
          *(undefined8 *)((long)puVar19 + 5) = *(undefined8 *)((long)puVar18 + 5);
          *puVar19 = uVar22;
          piVar14 = piVar7 + 2;
        }
        if (lVar16 != 0) {
          do {
            puVar18 = (undefined8 *)(*(long *)(lVar13 + 0x30) + (long)*piVar14 * 0x10);
            puVar19 = (undefined8 *)(*(long *)(lVar13 + 0x30) + (long)piVar14[1] * 0x10);
            uVar22 = *puVar18;
            *(undefined8 *)((long)puVar19 + 5) = *(undefined8 *)((long)puVar18 + 5);
            *puVar19 = uVar22;
            piVar15 = piVar14 + 2;
            piVar2 = piVar14 + 3;
            piVar14 = piVar14 + 4;
            puVar18 = (undefined8 *)(*(long *)(lVar13 + 0x30) + (long)*piVar15 * 0x10);
            puVar19 = (undefined8 *)(*(long *)(lVar13 + 0x30) + (long)*piVar2 * 0x10);
            uVar22 = *puVar18;
            *(undefined8 *)((long)puVar19 + 5) = *(undefined8 *)((long)puVar18 + 5);
            *puVar19 = uVar22;
          } while (piVar14 != piVar11);
        }
      }
      if (*(char *)(param_1 + 0x15dc) != '\0') {
        lVar10 = lVar10 + -8;
        if (((uint)lVar10 >> 3 & 1) == 0) {
          puVar18 = (undefined8 *)(*(long *)(param_1 + 0x118) + (long)*piVar7 * 0x10);
          uVar22 = *puVar18;
          puVar19 = (undefined8 *)(*(long *)(param_1 + 0x118) + (long)piVar7[1] * 0x10);
          puVar19[1] = puVar18[1];
          *puVar19 = uVar22;
          piVar7 = piVar7 + 2;
        }
        if (lVar10 != 0) {
          do {
            puVar18 = (undefined8 *)(*(long *)(param_1 + 0x118) + (long)*piVar7 * 0x10);
            uVar22 = *puVar18;
            puVar19 = (undefined8 *)(*(long *)(param_1 + 0x118) + (long)piVar7[1] * 0x10);
            puVar19[1] = puVar18[1];
            *puVar19 = uVar22;
            piVar14 = piVar7 + 2;
            piVar15 = piVar7 + 3;
            piVar7 = piVar7 + 4;
            puVar18 = (undefined8 *)(*(long *)(param_1 + 0x118) + (long)*piVar14 * 0x10);
            uVar22 = *puVar18;
            puVar19 = (undefined8 *)(*(long *)(param_1 + 0x118) + (long)*piVar15 * 0x10);
            puVar19[1] = puVar18[1];
            *puVar19 = uVar22;
          } while (piVar7 != piVar11);
        }
      }
      FUN_0300a94c(*(undefined8 *)(param_1 + 0x1678));
    }
    return;
  }
  iVar26 = *(int *)(param_1 + 0x15d4) + -1;
  uVar17 = (ulong)uVar5;
  uVar23 = uVar5;
LAB_030088bc:
  iVar4 = *(int *)(lVar10 + uVar17 * 4);
  if (iVar4 < iVar9) {
    piVar7 = (int *)(lVar10 + (long)(int)uVar23 * 4);
    do {
      if (iVar26 == *piVar7) {
        iVar26 = iVar26 + -1;
      }
      else if (*piVar7 <= iVar26) goto LAB_030088f0;
      uVar23 = uVar23 - 1;
      piVar7 = piVar7 + -1;
    } while( true );
  }
  goto LAB_0300892c;
LAB_030088f0:
  iVar8 = (int)param_3[1];
  lVar10 = (long)iVar8;
  if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar8) {
    FUN_03009eb4(param_3,lVar10 + 1);
    iVar8 = (int)param_3[1];
  }
  piVar7 = (int *)(*param_3 + (long)iVar8 * 8);
  *(int *)(param_3 + 1) = (int)(lVar10 + 1);
  *piVar7 = iVar26;
  piVar7[1] = iVar4;
  iVar26 = iVar26 + -1;
LAB_0300892c:
  if ((long)uVar17 < 1) goto LAB_0300893c;
  lVar10 = *param_2;
  uVar17 = uVar17 - 1;
  goto LAB_030088bc;
}


