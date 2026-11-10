/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0342047c; name: FUN_0342047c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0342047c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  float fVar24;
  undefined8 local_70;
  undefined8 uStack_68;
  
  iVar6 = *(int *)(*(long *)(*(long *)(param_1[6] + 8) + 0x58) + 0xbc);
  *(int *)(param_2 + 0xa0) = iVar6;
  if (*(int *)(param_2 + 0x58) == 0) {
    return;
  }
  puVar23 = *(undefined8 **)(param_2 + 0x50);
LAB_034204c8:
  uVar17 = *puVar23;
  FUN_03422220(param_1,uVar17,0,param_2);
  uVar7 = *(uint *)(param_1 + 5);
  if (uVar7 != 0) {
LAB_034204e8:
    do {
      pfVar13 = (float *)param_1[4];
      fVar24 = *pfVar13;
      lVar18 = *(long *)(pfVar13 + 2);
      if (uVar7 == 0 || uVar7 - 1 == 0) {
        uVar7 = 0;
        *(undefined4 *)(param_1 + 5) = 0;
      }
      else {
        uVar5 = *(undefined8 *)(pfVar13 + (ulong)(uVar7 - 1) * 4 + 2);
        *(undefined8 *)pfVar13 = *(undefined8 *)(pfVar13 + (ulong)(uVar7 - 1) * 4);
        *(undefined8 *)(pfVar13 + 2) = uVar5;
        uVar7 = (int)param_1[5] - 1;
        *(uint *)(param_1 + 5) = uVar7;
        uVar10 = 0;
        while( true ) {
          uVar12 = uVar10 << 1 | 1;
          uVar3 = uVar10 * 2 + 2;
          uVar11 = uVar10;
          if ((uVar12 < uVar7) &&
             (uVar11 = uVar12,
             *(float *)(param_1[4] + (ulong)uVar10 * 0x10) <=
             *(float *)(param_1[4] + (ulong)uVar12 * 0x10))) {
            uVar11 = uVar10;
          }
          uVar12 = uVar11;
          if ((uVar3 < uVar7) &&
             (uVar12 = uVar3,
             *(float *)(param_1[4] + (ulong)uVar11 * 0x10) <=
             *(float *)(param_1[4] + (ulong)uVar3 * 0x10))) {
            uVar12 = uVar11;
          }
          if (uVar12 == uVar10) break;
          puVar2 = (undefined8 *)(param_1[4] + (ulong)uVar10 * 0x10);
          puVar1 = (undefined8 *)(param_1[4] + (ulong)uVar12 * 0x10);
          local_70 = *puVar2;
          uStack_68 = puVar2[1];
          uVar5 = puVar1[1];
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2 = (undefined8 *)(param_1[4] + (ulong)uVar12 * 0x10);
          *puVar2 = local_70;
          puVar2[1] = uStack_68;
          uVar7 = *(uint *)(param_1 + 5);
          uVar10 = uVar12;
        }
      }
    } while ((uVar7 != 0) && (1.1920929e-07 < ABS(fVar24 - *(float *)(lVar18 + 0x30))));
    lVar14 = *(long *)(lVar18 + 0x10);
    if (*(uint *)(lVar14 + 0x58) != 0) {
      lVar16 = (ulong)*(uint *)(lVar14 + 0x58) << 3;
      plVar20 = *(long **)(lVar14 + 0x50);
      do {
        lVar22 = *plVar20;
        if (*(long *)(lVar22 + 0x70) != *(long *)(*(long *)(lVar18 + 0x18) + 0x70)) {
          if ((lVar22 != 0) && (uVar10 = *(uint *)(lVar22 + 0x58), uVar10 != 0)) {
            plVar21 = *(long **)(lVar22 + 0x50);
            plVar20 = plVar21;
            goto LAB_03420634;
          }
          break;
        }
        lVar16 = lVar16 + -8;
        plVar20 = plVar20 + 1;
      } while (lVar16 != 0);
    }
    goto LAB_034206a8;
  }
LAB_034206ac:
  uVar7 = *(uint *)(param_1 + 2);
  if (uVar7 != 0) {
    lVar18 = *(long *)param_1[1];
    if (lVar18 == 0) {
      uVar19 = 0;
      do {
        if (uVar7 - 1 == uVar19) goto LAB_0342081c;
        uVar19 = uVar19 + 1;
        lVar18 = ((long *)param_1[1])[uVar19 & 0xffffffff];
      } while (lVar18 == 0);
    }
    else {
      uVar19 = 0;
    }
    do {
      do {
        if (*(int *)(lVar18 + 0x34) != 0) {
          lVar14 = *(long *)(lVar18 + 0x10);
          if (*(int *)(lVar14 + 0xb8) != iVar6) {
            *(int *)(lVar14 + 0xb8) = iVar6;
            lVar14 = *(long *)(lVar18 + 0x10);
            *(undefined4 *)(lVar14 + 0x80) = 0;
            *(undefined8 *)(lVar14 + 0x9c) = 0;
            (*(code *)**(undefined8 **)(lVar14 + 0x88))();
            lVar14 = *(long *)(lVar18 + 0x10);
            if (*(long *)(lVar14 + 0x78) != 0) {
              *(undefined4 *)(lVar14 + 0x80) = 0;
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
              *(undefined8 *)(lVar14 + 0x78) = 0;
              *(undefined4 *)(lVar14 + 0x84) = 0;
              lVar14 = *(long *)(lVar18 + 0x10);
            }
            uVar7 = *(uint *)(param_2 + 0x58);
            if (uVar7 != 0) {
              lVar16 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(9,(ulong)uVar7 * 0x90);
              *(long *)(lVar14 + 0x78) = lVar16;
              if (lVar16 != 0) {
                *(uint *)(lVar14 + 0x84) = uVar7;
              }
            }
            lVar14 = *(long *)(lVar18 + 0x10);
            if (*(int *)(lVar14 + 0x58) != 0) {
              plVar20 = *(long **)(lVar14 + 0x50);
              do {
                plVar21 = plVar20 + 1;
                *(int *)(*plVar20 + 0xa0) = iVar6;
                lVar14 = *(long *)(lVar18 + 0x10);
                plVar20 = plVar21;
              } while (plVar21 !=
                       (long *)(*(long *)(lVar14 + 0x50) + (ulong)*(uint *)(lVar14 + 0x58) * 8));
            }
          }
          lVar14 = FUN_03423298(lVar14 + 0x78,uVar17,&local_70);
          if (lVar14 != 0) {
            *(undefined4 *)(lVar14 + 0x84) = *(undefined4 *)(lVar18 + 0x30);
            *(undefined4 *)(lVar14 + 0x80) = *(undefined4 *)(lVar18 + 0x34);
            lVar16 = lVar18;
            do {
              puVar2 = (undefined8 *)(lVar14 + (long)(*(int *)(lVar16 + 0x34) + -1) * 8);
              *puVar2 = *(undefined8 *)(lVar16 + 0x10);
              puVar2[8] = *(undefined8 *)(lVar16 + 0x18);
              lVar16 = *(long *)(lVar16 + 0x20);
            } while (lVar16 != 0);
          }
        }
        lVar18 = *(long *)(lVar18 + 0x28);
      } while (lVar18 != 0);
      uVar7 = *(uint *)(param_1 + 2);
      do {
        uVar10 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar10;
        if (uVar7 <= uVar10) goto LAB_0342081c;
        lVar18 = *(long *)(param_1[1] + (ulong)uVar10 * 8);
      } while (lVar18 == 0);
    } while( true );
  }
  goto LAB_0342098c;
LAB_03420634:
  lVar16 = *plVar20;
  if (lVar16 != lVar14) {
    if (*(uint *)(lVar16 + 0x58) != 0) {
      lVar14 = (ulong)*(uint *)(lVar16 + 0x58) << 3;
      plVar15 = *(long **)(lVar16 + 0x50);
      do {
        if (*(long *)(*plVar15 + 0x70) == *(long *)(param_2 + 0x70)) {
          if (*plVar15 != 0) goto LAB_0342068c;
          break;
        }
        lVar14 = lVar14 + -8;
        plVar15 = plVar15 + 1;
      } while (lVar14 != 0);
    }
    FUN_03422220(param_1,lVar16,lVar18,lVar22);
    plVar21 = *(long **)(lVar22 + 0x50);
    uVar10 = *(uint *)(lVar22 + 0x58);
  }
LAB_0342068c:
  plVar20 = plVar20 + 1;
  if (plVar20 == plVar21 + uVar10) goto LAB_034206a4;
  lVar14 = *(long *)(lVar18 + 0x10);
  goto LAB_03420634;
LAB_034206a4:
  uVar7 = *(uint *)(param_1 + 5);
LAB_034206a8:
  if (uVar7 == 0) goto LAB_034206ac;
  goto LAB_034204e8;
LAB_0342081c:
  if (uVar7 != 0) {
    plVar20 = *(long **)param_1[1];
    if (plVar20 == (long *)0x0) {
      uVar19 = 0;
      do {
        if (uVar7 - 1 == uVar19) goto LAB_0342098c;
        uVar19 = uVar19 + 1;
        plVar20 = (long *)((undefined8 *)param_1[1])[uVar19 & 0xffffffff];
      } while (plVar20 == (long *)0x0);
    }
    else {
      uVar19 = 0;
    }
    do {
      plVar15 = (long *)plVar20[5];
      uVar8 = uVar19 & 0xffffffff;
      plVar21 = plVar15;
      if (plVar15 == (long *)0x0) {
        uVar10 = *(uint *)(param_1 + 2);
        uVar7 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar7;
        if (uVar7 < uVar10) {
          do {
            plVar21 = *(long **)(param_1[1] + uVar19 * 8);
            if (plVar21 != (long *)0x0) goto LAB_0342089c;
            uVar7 = (int)uVar19 + 1;
            uVar19 = (ulong)uVar7;
          } while (uVar10 != uVar7);
          plVar21 = (long *)0x0;
          uVar19 = (ulong)uVar10;
        }
        else {
          plVar21 = (long *)0x0;
        }
      }
LAB_0342089c:
      *(long **)(param_1[1] + uVar8 * 8) = plVar15;
      plVar15 = (long *)*param_1;
      *(int *)(param_1 + 3) = (int)param_1[3] + -1;
      if (plVar15 == (long *)0x0) {
LAB_03420908:
        if (_DAT_000001d0 == (long *)0x0) {
          _DAT_000001d0 = plVar20;
          *plVar20 = 0;
        }
        else {
          *plVar20 = (long)_DAT_000001d0;
          _DAT_000001d0 = plVar20;
        }
        _DAT_000001c8 = _DAT_000001c8 + 1;
      }
      else {
        if ((plVar20 < plVar15) || (plVar15 + 0x38 <= plVar20)) {
          do {
            plVar9 = plVar15;
            plVar15 = (long *)plVar9[0x38];
            if (plVar15 == (long *)0x0) goto LAB_03420908;
          } while ((plVar20 < plVar15) || (plVar15 + 0x38 <= plVar20));
        }
        else {
          plVar9 = (long *)0x0;
        }
        if (plVar15[0x3a] == 0) {
          plVar15[0x3a] = (long)plVar20;
          *plVar20 = 0;
        }
        else {
          *plVar20 = plVar15[0x3a];
          plVar15[0x3a] = (long)plVar20;
        }
        iVar4 = (int)plVar15[0x39] + 1;
        *(int *)(plVar15 + 0x39) = iVar4;
        if (iVar4 == 8) {
          plVar20 = param_1;
          if ((long *)*param_1 != plVar15) {
            plVar20 = plVar9 + 0x38;
          }
          *plVar20 = plVar15[0x38];
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0xb);
        }
      }
      plVar20 = plVar21;
    } while (plVar21 != (long *)0x0);
  }
LAB_0342098c:
  puVar23 = puVar23 + 1;
  if (puVar23 == (undefined8 *)(*(long *)(param_2 + 0x50) + (ulong)*(uint *)(param_2 + 0x58) * 8)) {
    return;
  }
  goto LAB_034204c8;
}


