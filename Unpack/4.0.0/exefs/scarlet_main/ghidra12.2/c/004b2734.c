/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004b2734; name: FUN_004b2734
 */


void FUN_004b2734(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  bool bVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  size_t __n;
  undefined4 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  undefined4 *puVar21;
  uint *puVar22;
  uint *puVar23;
  int *piVar24;
  undefined8 uVar25;
  int iVar26;
  long lVar27;
  undefined *puVar28;
  long *plVar29;
  long *plVar30;
  int *local_90;
  int *local_88;
  int *local_80;
  long local_78;
  undefined8 local_70;
  uint *local_68;
  
  puVar7 = PTR_FUN_047cba38;
  if (*(long *)(param_1 + 0x28) != 0) {
    local_78 = 0;
    local_70 = 0;
    local_68 = (uint *)0x0;
    local_80 = (int *)0x0;
    local_90 = (int *)0x0;
    local_88 = (int *)0x0;
    if (*(int *)(param_2 + 0x18) != 0) {
      plVar1 = (long *)(param_2 + 0x10);
      plVar2 = (long *)(param_1 + 0x20);
      bVar6 = false;
      bVar9 = false;
      plVar30 = (long *)0x0;
      if (*(long *)(param_2 + 0x20) != 0) {
        plVar30 = (long *)(*(long *)(param_2 + 0x20) + 8);
      }
      puVar28 = PTR_LAB_047cba48;
      do {
        if (bVar9) {
          uVar18 = (long)local_88 - (long)local_90 >> 2;
          if ((ulong)(long)*(int *)(*plVar30 + 0x18) < uVar18) goto LAB_004b2850;
          if ((long)local_88 - (long)local_90 != 0) {
            uVar16 = 0;
            if (uVar18 < 2) {
              uVar18 = 1;
            }
            do {
              if (*(int *)(*(long *)(*plVar30 + 0x20) + uVar16 * 4) != local_90[uVar16])
              goto LAB_004b2850;
              uVar16 = uVar16 + 1;
            } while (uVar18 != uVar16);
          }
          bVar9 = true;
        }
        else {
LAB_004b2850:
          lVar20 = *plVar30;
          local_88 = local_90;
          if (*(int *)(lVar20 + 0x18) < 1) {
            plVar17 = (long *)*plVar2;
            if (plVar17 != (long *)0x0) goto LAB_004b2954;
LAB_004b2af4:
            if (bVar6) {
              if (local_68 == (uint *)0x0) {
                uVar14 = local_70._4_4_;
LAB_004b2b38:
                    /* try { // try from 004b2b3c to 004b2b7b has its CatchHandler @ 004b2e44 */
                FUN_00532334(&local_78,uVar14 + 1);
                uVar14 = *local_68;
LAB_004b2b4c:
                *local_68 = uVar14 + 1;
                uVar12 = FUN_004e76f0(local_78);
                lVar27 = (long)(int)local_70;
                local_70 = CONCAT44(local_70._4_4_,(int)local_70 + 1);
                *(undefined8 *)(local_68 + lVar27 * 2 + 2) = uVar12;
              }
              else {
                lVar27 = (long)(int)local_70;
                uVar14 = *local_68;
                if ((int)uVar14 <= (int)local_70) {
                  if (uVar14 == local_70._4_4_) goto LAB_004b2b38;
                  goto LAB_004b2b4c;
                }
                local_70 = CONCAT44(local_70._4_4_,(int)local_70 + 1);
                uVar12 = *(undefined8 *)(local_68 + lVar27 * 2 + 2);
              }
              FUN_004e43d8(uVar12,lVar20);
              bVar9 = false;
              bVar6 = true;
            }
            else {
              bVar9 = false;
              bVar6 = false;
            }
          }
          else {
            lVar27 = 0;
            do {
              iVar3 = *(int *)(*(long *)(lVar20 + 0x20) + lVar27 * 4);
              if (local_88 < local_80) {
                *local_88 = iVar3;
                local_88 = local_88 + 1;
              }
              else {
                lVar20 = (long)local_88 - (long)local_90 >> 2;
                uVar18 = lVar20 + 1;
                if (uVar18 >> 0x3e != 0) {
                    /* try { // try from 004b2e24 to 004b2e2b has its CatchHandler @ 004b2e2c */
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                uVar16 = (long)local_80 - (long)local_90 >> 1;
                if (uVar18 <= uVar16) {
                  uVar18 = uVar16;
                }
                if (0x1ffffffffffffffe < (ulong)((long)local_80 - (long)local_90 >> 2)) {
                  uVar18 = 0x3fffffffffffffff;
                }
                if (uVar18 == 0) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = FUN_0049e770(puVar7,uVar18 << 2);
                }
                piVar24 = (int *)(lVar10 + lVar20 * 4);
                __n = (long)local_88 - (long)local_90;
                local_80 = (int *)(lVar10 + uVar18 * 4);
                local_88 = piVar24 + 1;
                *piVar24 = iVar3;
                piVar24 = (int *)((long)piVar24 - __n);
                if (0 < (long)__n) {
                  memcpy(piVar24,local_90,__n);
                }
                bVar9 = local_90 != (int *)0x0;
                local_90 = piVar24;
                if (bVar9) {
                  FUN_0049e790(puVar28);
                }
              }
              lVar20 = *plVar30;
              lVar27 = lVar27 + 1;
            } while (lVar27 < *(int *)(lVar20 + 0x18));
            plVar17 = (long *)*plVar2;
            if (plVar17 == (long *)0x0) goto LAB_004b2af4;
LAB_004b2954:
            if (local_90 == local_88) {
              do {
                plVar29 = plVar17;
                plVar17 = (long *)*plVar29;
              } while ((long *)*plVar29 != (long *)0x0);
            }
            else {
              plVar29 = plVar2;
              do {
                piVar19 = (int *)plVar17[4];
                piVar24 = local_90;
                do {
                  if ((int *)plVar17[5] == piVar19) {
LAB_004b2974:
                    plVar8 = (long *)plVar17[1];
                    goto joined_r0x004b297c;
                  }
                  if (*piVar19 < *piVar24) goto LAB_004b2974;
                  if (*piVar24 < *piVar19) break;
                  piVar24 = piVar24 + 1;
                  piVar19 = piVar19 + 1;
                } while (local_88 != piVar24);
                plVar8 = (long *)*plVar17;
                plVar29 = plVar17;
joined_r0x004b297c:
                plVar17 = plVar8;
              } while (plVar17 != (long *)0x0);
            }
            if (plVar29 == plVar2) goto LAB_004b2af4;
            piVar19 = local_90;
            for (piVar24 = (int *)plVar29[4]; piVar24 != (int *)plVar29[5]; piVar24 = piVar24 + 1) {
              if (local_88 == piVar19) goto LAB_004b2af4;
              if (*piVar19 < *piVar24) goto LAB_004b2af4;
              if (*piVar24 < *piVar19) break;
              piVar19 = piVar19 + 1;
            }
            if (!bVar6) {
                    /* try { // try from 004b2a14 to 004b2a1b has its CatchHandler @ 004b2e44 */
              FUN_00532334(&local_78,*(undefined4 *)(param_2 + 0x18));
              plVar17 = (long *)0x0;
              uVar18 = local_70;
              if (*(long *)(param_2 + 0x20) != 0) {
                plVar17 = (long *)(*(long *)(param_2 + 0x20) + 8);
              }
              for (; local_70 = uVar18, plVar17 != plVar30; plVar17 = plVar17 + 1) {
                lVar20 = *plVar17;
                local_70._4_4_ = (uint)(uVar18 >> 0x20);
                if (local_68 == (uint *)0x0) {
LAB_004b2a78:
                  iVar3 = local_70._4_4_ + 1;
                    /* try { // try from 004b2a7c to 004b2abb has its CatchHandler @ 004b2e4c */
                  FUN_00532334(&local_78,iVar3);
                  uVar14 = *local_68;
                  uVar18 = local_70;
LAB_004b2a8c:
                  local_70 = uVar18;
                  *local_68 = uVar14 + 1;
                  uVar12 = FUN_004e76f0(local_78);
                  lVar27 = (long)(int)local_70;
                  local_70 = CONCAT44(local_70._4_4_,(int)local_70 + 1);
                  *(undefined8 *)(local_68 + lVar27 * 2 + 2) = uVar12;
                }
                else {
                  local_70._0_4_ = (int)uVar18;
                  lVar27 = (long)(int)local_70;
                  uVar14 = *local_68;
                  if ((int)uVar14 <= (int)local_70) {
                    bVar9 = uVar14 == local_70._4_4_;
                    local_70._4_4_ = uVar14;
                    if (bVar9) goto LAB_004b2a78;
                    goto LAB_004b2a8c;
                  }
                  local_70 = CONCAT44(local_70._4_4_,(int)local_70 + 1);
                  uVar12 = *(undefined8 *)(local_68 + lVar27 * 2 + 2);
                }
                FUN_004e43d8(uVar12,lVar20);
                uVar18 = local_70;
              }
            }
            if (local_68 == (uint *)0x0) {
              uVar14 = local_70._4_4_;
LAB_004b2b9c:
                    /* try { // try from 004b2ba0 to 004b2be7 has its CatchHandler @ 004b2e40 */
              FUN_00532334(&local_78,uVar14 + 1);
              uVar14 = *local_68;
LAB_004b2bb0:
              *local_68 = uVar14 + 1;
              lVar20 = FUN_004e76f0(local_78);
              lVar27 = (long)(int)local_70;
              local_70 = CONCAT44(local_70._4_4_,(int)local_70 + 1);
              *(long *)(local_68 + lVar27 * 2 + 2) = lVar20;
            }
            else {
              lVar20 = (long)(int)local_70;
              uVar14 = *local_68;
              if ((int)uVar14 <= (int)local_70) {
                if (uVar14 == local_70._4_4_) goto LAB_004b2b9c;
                goto LAB_004b2bb0;
              }
              local_70 = CONCAT44(local_70._4_4_,(int)local_70 + 1);
              lVar20 = *(long *)(local_68 + lVar20 * 2 + 2);
            }
            FUN_004e43d8(lVar20,*plVar30);
            *(undefined4 *)(lVar20 + 0x18) = 0;
            puVar21 = (undefined4 *)plVar29[7];
            puVar13 = (undefined4 *)plVar29[8];
            if (puVar21 != puVar13) {
              uVar18 = 0;
              do {
                uVar14 = (int)uVar18 + 1;
                uVar4 = *puVar21;
                if ((int)uVar18 == *(int *)(lVar20 + 0x1c)) {
                    /* try { // try from 004b2c34 to 004b2c3f has its CatchHandler @ 004b2e48 */
                  FUN_00531134(lVar20 + 0x18,uVar14);
                  puVar13 = (undefined4 *)plVar29[8];
                }
                puVar21 = puVar21 + 1;
                *(undefined4 *)(*(long *)(lVar20 + 0x20) + uVar18 * 4) = uVar4;
                *(uint *)(lVar20 + 0x18) = uVar14;
                uVar18 = (ulong)uVar14;
              } while (puVar21 != puVar13);
            }
            bVar9 = true;
            bVar6 = true;
          }
          puVar28 = PTR_LAB_047cba48;
        }
        puVar15 = *(undefined8 **)(param_2 + 0x20);
        puVar11 = (undefined8 *)0x0;
        if (puVar15 != (undefined8 *)0x0) {
          puVar11 = puVar15 + 1;
        }
        uVar14 = *(uint *)(param_2 + 0x18);
        plVar30 = plVar30 + 1;
      } while (plVar30 != puVar11 + (int)uVar14);
      if ((plVar1 != &local_78) && (!(bool)(bVar6 ^ 1))) {
        uVar18 = (ulong)uVar14;
        if (0 < (int)uVar14) {
          do {
            puVar15 = puVar15 + 1;
                    /* try { // try from 004b2c88 to 004b2c8b has its CatchHandler @ 004b2e3c */
            FUN_004e3568(*puVar15);
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
          *(undefined4 *)(param_2 + 0x18) = 0;
        }
        puVar23 = local_68;
        iVar3 = (int)local_70;
        uVar18 = local_70 & 0xffffffff;
        if ((int)local_70 != 0) {
                    /* try { // try from 004b2ca8 to 004b2cb3 has its CatchHandler @ 004b2e30 */
          puVar11 = (undefined8 *)FUN_0053234c(plVar1,local_70 & 0xffffffff);
          iVar26 = **(int **)(param_2 + 0x20);
          iVar5 = *(int *)(param_2 + 0x18);
          uVar14 = iVar26 - iVar5;
          uVar16 = (ulong)uVar14;
          if ((0 < iVar3) && (0 < (int)uVar14)) {
            if (uVar16 - 1 <= uVar18 - 1) {
              uVar18 = uVar16;
            }
            lVar20 = -uVar18;
            puVar15 = puVar11;
            puVar22 = puVar23;
            do {
              puVar22 = puVar22 + 2;
                    /* try { // try from 004b2d04 to 004b2d07 has its CatchHandler @ 004b2e34 */
              FUN_004c94ec(*(undefined8 *)puVar22,*puVar15);
              bVar9 = lVar20 != -1;
              lVar20 = lVar20 + 1;
              puVar15 = puVar15 + 1;
            } while (bVar9);
          }
          if ((int)uVar14 < iVar3) {
            lVar20 = *plVar1;
            iVar26 = (iVar5 + iVar3) - iVar26;
            uVar18 = -(ulong)(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3;
            puVar15 = (undefined8 *)(uVar18 + (long)puVar23);
            puVar11 = (undefined8 *)((long)puVar11 + uVar18);
            do {
              puVar15 = puVar15 + 1;
              uVar25 = *puVar15;
                    /* try { // try from 004b2d40 to 004b2d57 has its CatchHandler @ 004b2e38 */
              uVar12 = FUN_004e76f0(lVar20);
              FUN_004c94ec(uVar25,uVar12);
              iVar26 = iVar26 + -1;
              *puVar11 = uVar12;
              puVar11 = puVar11 + 1;
            } while (iVar26 != 0);
          }
          iVar3 = *(int *)(param_2 + 0x18) + iVar3;
          *(int *)(param_2 + 0x18) = iVar3;
          if (**(int **)(param_2 + 0x20) < iVar3) {
            **(int **)(param_2 + 0x20) = iVar3;
          }
        }
      }
    }
    if (local_90 != (int *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    puVar7 = PTR_LAB_047cba48;
    if ((local_68 != (uint *)0x0) && (local_78 == 0)) {
      uVar18 = (ulong)*local_68;
      if (0 < (int)*local_68) {
        puVar23 = local_68;
        do {
          puVar23 = puVar23 + 2;
          lVar20 = *(long *)puVar23;
          if (lVar20 != 0) {
            FUN_004e3468(lVar20);
            FUN_0049e790(puVar7,lVar20);
          }
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      FUN_0049e700(local_68);
    }
  }
  return;
}


