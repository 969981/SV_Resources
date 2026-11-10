/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c2e70; name: FUN_031c2e70
 */


void FUN_031c2e70(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  undefined8 *puVar18;
  
  if (*(int *)(param_3 + 1) != 0) {
    iVar16 = *(int *)(param_1 + 0x18);
    plVar7 = (long *)(param_1 + 0x10);
    if (*(int *)(param_1 + 8) == 0) {
      if (iVar16 != 0) {
        *(undefined8 *)(param_2[1] + (long)*(int *)(param_2 + 0xb) * 8) = *(undefined8 *)*plVar7;
        iVar4 = *(int *)(param_2 + 0xb);
        iVar16 = iVar4 + 1;
        *(int *)(param_2 + 0xb) = iVar16;
        if (*(int *)((long)param_2 + 0x5c) <= iVar16) {
          iVar4 = iVar4 + -5;
          (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,param_2[1] + (long)iVar4 * 8,6);
          *(int *)(param_2 + 0xb) = iVar4;
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      iVar16 = *(int *)(param_3 + 3);
      puVar18 = (undefined8 *)param_3[2];
      if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar16) {
        FUN_031c2ad4(plVar7,PTR_PTR_047d1a50,(long)iVar16);
      }
      if (iVar16 != 0) {
        puVar5 = (undefined8 *)*plVar7;
        uVar17 = (long)iVar16 * 8 - 8;
        uVar15 = ((uint)(uVar17 >> 3) & 0x1fffffff) + 1;
        if ((uVar15 & 3) == 0) {
          puVar12 = puVar18;
        }
        else {
          lVar14 = -((ulong)uVar15 & 3);
          puVar6 = puVar5;
          puVar10 = puVar18;
          do {
            puVar12 = puVar10 + 1;
            bVar3 = lVar14 != -1;
            lVar14 = lVar14 + 1;
            puVar5 = puVar6 + 1;
            *puVar6 = *puVar10;
            puVar6 = puVar5;
            puVar10 = puVar12;
          } while (bVar3);
        }
        if (0x17 < uVar17) {
          do {
            *puVar5 = *puVar12;
            puVar5[1] = puVar12[1];
            puVar5[2] = puVar12[2];
            puVar6 = puVar12 + 3;
            puVar12 = puVar12 + 4;
            puVar5[3] = *puVar6;
            puVar5 = puVar5 + 4;
          } while (puVar12 != puVar18 + iVar16);
        }
      }
      *(int *)(param_1 + 0x18) = iVar16;
    }
    else {
      uVar17 = (ulong)iVar16;
      puVar18 = (undefined8 *)param_3[2];
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + (long)(iVar16 + -1) * 8) + 8) = *puVar18
      ;
      uVar15 = *(uint *)(param_3 + 3);
      iVar4 = *(int *)(param_1 + 0x18);
      if (0 < (int)uVar15) {
        iVar1 = iVar4 + uVar15;
        if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar1) {
          FUN_031c2ad4(plVar7,PTR_PTR_047d1a50,(long)iVar1);
        }
        puVar5 = (undefined8 *)(*plVar7 + uVar17 * 8);
        if (0 < iVar4 - iVar16) {
          FUN_031d0240(puVar5 + uVar15,puVar5,(ulong)(uint)(iVar4 - iVar16) << 3);
        }
        uVar2 = uVar15 & 3;
        if (2 < uVar15 - 1) {
          iVar4 = -(uVar15 & 0xfffffffc);
          puVar12 = puVar5;
          do {
            *puVar12 = *puVar18;
            puVar12[1] = puVar18[1];
            puVar12[2] = puVar18[2];
            puVar6 = puVar18 + 3;
            puVar5 = puVar12 + 4;
            puVar18 = puVar18 + 4;
            iVar4 = iVar4 + 4;
            puVar12[3] = *puVar6;
            puVar12 = puVar5;
          } while (iVar4 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar18;
          puVar5 = puVar5 + 1;
          puVar18 = puVar18 + 1;
        }
        *(int *)(param_1 + 0x18) = iVar1;
        iVar4 = iVar1;
      }
      if (iVar16 < iVar4) {
        uVar11 = ~uVar17;
        if ((iVar4 - iVar16 & 1U) != 0) {
          lVar14 = uVar17 * 8;
          uVar17 = uVar17 + 1;
          *(int *)(*(long *)(*plVar7 + lVar14) + 4) = iVar16;
        }
        if (uVar11 + (long)iVar4 != 0) {
          do {
            iVar16 = (int)uVar17;
            *(int *)(*(long *)(*plVar7 + uVar17 * 8) + 4) = iVar16;
            lVar14 = uVar17 * 8;
            uVar17 = uVar17 + 2;
            *(int *)(*(long *)(*plVar7 + lVar14 + 8) + 4) = iVar16 + 1;
          } while (uVar17 != (long)iVar4);
        }
      }
    }
    *(undefined4 *)(param_3 + 3) = 0;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_3 + 1);
    goto LAB_031c3270;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar15 = *(int *)(param_2 + 0xb) - 1;
    if (*(int *)(param_2 + 0xb) < 1) {
      (**(code **)(*(long *)*param_2 + 0x20))((long *)*param_2,param_2[1],6);
      *(undefined4 *)(param_2 + 0xb) = 5;
      puVar18 = (undefined8 *)(param_2[1] + 0x28);
    }
    else {
      *(uint *)(param_2 + 0xb) = uVar15;
      puVar18 = (undefined8 *)(param_2[1] + (ulong)uVar15 * 8);
    }
    puVar18 = (undefined8 *)*puVar18;
    puVar18[2] = 0;
    puVar18[3] = 0;
    *puVar18 = 0;
    puVar18[1] = 0;
    *(undefined4 *)((long)puVar18 + 4) = *(undefined4 *)(param_1 + 0x18);
    iVar16 = *(int *)(param_1 + 0x18);
    lVar14 = (long)iVar16;
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) <= iVar16) {
      FUN_031c25b4(param_1 + 0x10,PTR_PTR_047d1a50,lVar14 + 1);
      iVar16 = *(int *)(param_1 + 0x18);
    }
    *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar16 * 8) = puVar18;
    *(int *)(param_1 + 0x18) = (int)(lVar14 + 1);
  }
  uVar15 = *(uint *)(param_3 + 3);
  if (*(char *)((long)param_3 + 0xc) != '\0') {
    plVar7 = (long *)param_3[2];
    if ((int)uVar15 < 1) {
      plVar13 = plVar7;
    }
    else {
      plVar13 = plVar7;
      if (uVar15 != 1) {
        iVar16 = -(uVar15 & 0xfffffffe);
        do {
          plVar8 = plVar7;
          if (*plVar13 != 0) {
            plVar8 = plVar7 + 1;
            *plVar7 = *plVar13;
          }
          plVar7 = plVar8;
          if (plVar13[1] != 0) {
            plVar7 = plVar8 + 1;
            *plVar8 = plVar13[1];
          }
          plVar13 = plVar13 + 2;
          iVar16 = iVar16 + 2;
        } while (iVar16 != 0);
      }
      plVar8 = plVar7;
      if (((uVar15 & 1) != 0) && (*plVar13 != 0)) {
        plVar8 = plVar7 + 1;
        *plVar7 = *plVar13;
      }
      plVar7 = plVar8;
      plVar13 = (long *)param_3[2];
    }
    uVar15 = (uint)((ulong)((long)plVar7 - (long)plVar13) >> 3);
    *(undefined1 *)((long)param_3 + 0xc) = 0;
  }
  if (uVar15 != 0) {
    if (param_2 == (undefined8 *)0x0) {
      plVar7 = (long *)*param_3;
      lVar9 = *plVar7;
      lVar14 = param_3[2];
    }
    else {
      lVar14 = param_3[2];
      if ((int)uVar15 < 6) {
        iVar16 = *(int *)(param_2 + 0xb);
        if (*(int *)((long)param_2 + 0x5c) <= (int)(iVar16 + uVar15)) {
          iVar4 = iVar16;
          if (5 < iVar16) {
            iVar4 = 6;
          }
          iVar16 = iVar16 - iVar4;
          (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,param_2[1] + (long)iVar16 * 8);
          *(int *)(param_2 + 0xb) = iVar16;
        }
        if (0 < (int)uVar15) {
          if (uVar15 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = 0;
            do {
              puVar18 = (undefined8 *)(lVar14 + uVar17 * 8);
              iVar4 = (int)uVar17;
              *(undefined8 *)(param_2[1] + (long)(iVar4 + iVar16) * 8) = *puVar18;
              uVar17 = uVar17 + 2;
              *(undefined8 *)(param_2[1] + (long)(iVar4 + *(int *)(param_2 + 0xb) + 1) * 8) =
                   puVar18[1];
              iVar16 = *(int *)(param_2 + 0xb);
            } while (((ulong)uVar15 & 0xfffffffe) != uVar17);
          }
          if ((uVar15 & 1) != 0) {
            *(undefined8 *)(param_2[1] + (long)(iVar16 + (int)uVar17) * 8) =
                 *(undefined8 *)(lVar14 + uVar17 * 8);
            iVar16 = *(int *)(param_2 + 0xb);
          }
        }
        iVar4 = *(int *)((long)param_2 + 0x5c);
        iVar16 = iVar16 + uVar15;
        *(int *)(param_2 + 0xb) = iVar16;
        if (iVar4 < iVar16) {
          (**(code **)(*(long *)*param_2 + 0x28))
                    ((long *)*param_2,param_2[1] + (long)iVar4 * 8,iVar16 - iVar4);
          *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)((long)param_2 + 0x5c);
        }
        goto LAB_031c326c;
      }
      plVar7 = (long *)*param_2;
      lVar9 = *plVar7;
    }
    (**(code **)(lVar9 + 0x28))(plVar7,lVar14,uVar15);
  }
LAB_031c326c:
  *(undefined4 *)(param_3 + 3) = 0;
LAB_031c3270:
  *(undefined4 *)(param_3 + 1) = 0;
  return;
}


