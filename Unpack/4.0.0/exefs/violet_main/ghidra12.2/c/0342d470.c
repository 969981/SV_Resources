/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0342d470; name: FUN_0342d470
 */


void FUN_0342d470(long param_1,long *param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined2 local_98;
  undefined4 local_94;
  long local_90 [3];
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  
  lVar12 = param_2[0xf];
  uVar11 = *(uint *)(param_2 + 1);
  lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x58);
  if (uVar11 != 0) {
    uVar17 = 0;
    uVar16 = (uint)*(long *)(lVar15 + 0x68);
    if (uVar11 != 0) {
      uVar17 = uVar16 / uVar11;
    }
    for (local_90[0] = *(long *)(*param_2 + (ulong)(uVar16 - uVar17 * uVar11) * 8); local_90[0] != 0
        ; local_90[0] = *(long *)(local_90[0] + 0x78)) {
      if (*(long *)(local_90[0] + 0x70) == *(long *)(lVar15 + 0x68)) {
        lVar12 = *(long *)(local_90[0] + 0xa8);
        goto LAB_0342d4d8;
      }
    }
  }
  local_90[0] = 0;
LAB_0342d4d8:
  if (*(long *)(lVar15 + 0x58) != -1) {
    if (uVar11 != 0) {
      uVar17 = 0;
      uVar16 = (uint)*(long *)(lVar15 + 0x80);
      if (uVar11 != 0) {
        uVar17 = uVar16 / uVar11;
      }
      for (local_90[1] = *(long *)(*param_2 + (ulong)(uVar16 - uVar17 * uVar11) * 8);
          local_90[1] != 0; local_90[1] = *(long *)(local_90[1] + 0x78)) {
        if (*(long *)(local_90[1] + 0x70) == *(long *)(lVar15 + 0x80)) {
          uVar11 = 1;
          if (*(long *)(local_90[1] + 0xa8) != lVar12) {
            uVar11 = 2;
          }
          goto LAB_0342d51c;
        }
      }
    }
    local_90[1] = 0;
  }
  uVar11 = 1;
LAB_0342d51c:
  lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x28);
  uVar5 = *(ushort *)(lVar12 + 0x38);
  if ((ulong)uVar5 != 0) {
    uVar18 = 0;
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    do {
      lVar12 = *(long *)(param_1 + 0x20) + uVar18 * 0x90;
      puVar13 = (uint *)(lVar12 + 0x88);
      if (*puVar13 != 0) {
        plVar10 = (long *)(lVar12 + 0x80);
        plVar19 = (long *)*plVar10;
        do {
          uVar17 = *(uint *)(param_2 + 4);
          if (uVar17 == 0) {
            lVar12 = 0;
          }
          else {
            uVar16 = 0;
            uVar9 = (uint)*plVar19;
            if (uVar17 != 0) {
              uVar16 = uVar9 / uVar17;
            }
            for (lVar12 = *(long *)(param_2[3] + (ulong)(uVar9 - uVar16 * uVar17) * 8);
                (lVar12 != 0 && (*(long *)(lVar12 + 0x68) != *plVar19));
                lVar12 = *(long *)(lVar12 + 0x70)) {
            }
          }
          uVar21 = 0;
          plVar1 = plVar19 + 1;
          do {
            if (*(uint *)(lVar12 + 0x58) != 0) {
              lVar20 = local_90[uVar21];
              lVar15 = (ulong)*(uint *)(lVar12 + 0x58) << 3;
              plVar14 = *(long **)(lVar12 + 0x50);
              do {
                if (*(long *)(*plVar14 + 0x70) == *(long *)(lVar20 + 0x70)) {
                  if (*plVar14 != 0) {
                    *(undefined4 *)(plVar19 + 9) = 0xffffffff;
                    *(undefined4 *)(plVar19 + 8) = 0;
                    *(undefined8 *)((long)plVar19 + 0x1c) = 0;
                    (**(code **)plVar19[1])(plVar1);
                    lVar15 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x28) + 0x20) +
                             uVar18 * 0x28;
                    fVar4 = *(float *)(lVar15 + 0x20);
                    fVar2 = *(float *)(lVar15 + 0x18);
                    fVar3 = *(float *)(lVar15 + 0x1c);
                    if ((((*(uint *)(lVar12 + 0x58) == 0) || (**(long **)(lVar12 + 0x50) == lVar20))
                        || (*(uint *)(lVar12 + 0x58) < 2)) ||
                       ((*(long **)(lVar12 + 0x50))[1] != lVar20)) {
                      uVar8 = 0;
                    }
                    else {
                      uVar8 = 1;
                    }
                    FUN_03423e4c(&local_b8,lVar12,uVar8);
                    if (*(float *)(plVar19 + 0x11) * *(float *)(plVar19 + 0x11) <=
                        ((float)local_b8 - fVar2) * ((float)local_b8 - fVar2) +
                        (local_b8._4_4_ - fVar3) * (local_b8._4_4_ - fVar3) +
                        ((float)local_b0 - fVar4) * ((float)local_b0 - fVar4)) {
                      *(undefined1 *)((long)plVar19 + 0x22) = 1;
                    }
                    else {
                      if (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x58) ==
                          *(long *)(lVar12 + 0x68)) {
LAB_0342d6fc:
                        puVar7 = (undefined4 *)(**(code **)(*plVar1 + 8))();
                        if (puVar7 != (undefined4 *)0x0) {
                          puVar7[0x1b] = fVar2;
                          puVar7[0x1c] = fVar3;
                          puVar7[0x1d] = fVar4;
                          puVar7[0x1e] = 0;
                          *puVar7 = (float)local_b8;
                          puVar7[1] = local_b8._4_4_;
                          puVar7[2] = (float)local_b0;
                          *(undefined1 *)((long)plVar19 + 0x21) = 1;
                        }
                        *(undefined1 *)((long)plVar19 + 0x22) = 0;
                      }
                      else {
                        local_90[2] = local_b8;
                        local_78 = (float)local_b0;
                        local_70 = fVar2;
                        fStack_6c = fVar3;
                        local_68 = fVar4;
                        uVar6 = FUN_0342cbe0(&local_70,local_90 + 2,*(undefined8 *)(lVar20 + 0xa8),0
                                             ,plVar1);
                        if ((uVar6 & 1) != 0) goto LAB_0342d6fc;
                      }
                      uVar17 = *(uint *)(PTR_DAT_047e6e68 + 0xc);
                      lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x58);
                      if ((((uVar17 != 0) && (0.0 < *(float *)(lVar15 + 100))) &&
                          ((0 < *(int *)(lVar15 + 0xa8) || (*(int *)(lVar15 + 0x60) != 0)))) ||
                         (0 < *(int *)(lVar15 + 0xac))) {
                        local_b8 = 0;
                        local_b0 = 0;
                        if (3 < uVar17) {
                          uVar17 = 4;
                        }
                        uStack_9c = *(undefined4 *)PTR_DAT_047e6e78;
                        uStack_a4 = 1;
                        local_94 = 0x447a0000;
                        local_a0 = *(undefined4 *)(PTR_DAT_047e6e68 + 0x10);
                        local_98 = *(undefined2 *)(PTR_DAT_047e6e68 + 0x18);
                        local_a8 = uVar17;
                        FUN_03434bd8(&local_b8,lVar12,plVar19,lVar20,param_1,uVar18 & 0xffffffff);
                      }
                    }
                    if ((int)plVar19[6] != 0) {
                      lVar15 = plVar19[5];
                      do {
                        FUN_03426968(lVar15);
                        lVar15 = lVar15 + 0x94;
                      } while (lVar15 != plVar19[5] + (ulong)*(uint *)(plVar19 + 6) * 0x94);
                    }
                  }
                  break;
                }
                lVar15 = lVar15 + -8;
                plVar14 = plVar14 + 1;
              } while (lVar15 != 0);
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar11);
          plVar19 = plVar19 + 0x12;
        } while (plVar19 != (long *)(*plVar10 + (ulong)*puVar13 * 0x90));
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar5);
    lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x28);
  }
  *(byte *)(lVar12 + 0x54) = *(byte *)(lVar12 + 0x54) | 1;
  return;
}


