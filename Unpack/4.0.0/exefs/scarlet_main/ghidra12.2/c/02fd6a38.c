/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fd6a38; name: FUN_02fd6a38
 */


void FUN_02fd6a38(long param_1,long param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  int *piVar17;
  long lVar18;
  uint *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  bool bVar23;
  long *plVar24;
  long *plVar25;
  ulong *puVar26;
  long lVar27;
  uint *puVar28;
  undefined8 *puVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  uint *puVar34;
  long lVar35;
  long *plVar36;
  long *plVar37;
  long local_a0;
  long local_70;
  ulong local_68;
  
  plVar36 = *(long **)(param_2 + 8);
  if (plVar36 == (long *)0x0) {
    lVar27 = tpidr_el0;
    lVar13 = *(long *)(lVar27 + 0x1000b8);
    if (lVar13 == 0) {
      lVar13 = FUN_00e5d3b4();
      *(long *)(lVar27 + 0x1000b8) = lVar13;
    }
    plVar36 = *(long **)(lVar13 + 0x3e0);
    if (plVar36 != (long *)0x0) goto LAB_02fd6a88;
    bVar23 = true;
  }
  else {
LAB_02fd6a88:
    lVar27 = *plVar36;
    if (*(code **)(lVar27 + 0x18) != (code *)0x0) {
      (**(code **)(lVar27 + 0x18))("NarrowPhase",0xb,*(undefined8 *)(lVar27 + 0x28));
    }
    puVar21 = (undefined8 *)plVar36[2];
    uVar14 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar36[3]) && (plVar36[2] = uVar14, puVar21 != (undefined8 *)0x0)) {
      *puVar21 = "TtNarrowPhase";
      uVar8 = nn::os::GetSystemTick();
      puVar21[1] = uVar8;
    }
    if (((*(byte *)(lVar27 + 0x38) & 1) != 0) && (plVar36[6] != 0)) {
      puVar21 = (undefined8 *)plVar36[2];
      uVar14 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar36[3]) && (plVar36[2] = uVar14, puVar21 != (undefined8 *)0x0)) {
        *puVar21 = &DAT_03c4e575;
        puVar21[1] = *(undefined8 *)(plVar36[6] + 8);
      }
    }
    lVar27 = *plVar36;
    if (*(code **)(lVar27 + 0x18) != (code *)0x0) {
      (**(code **)(lVar27 + 0x18))("PairsTask",9,*(undefined8 *)(lVar27 + 0x28));
    }
    puVar21 = (undefined8 *)plVar36[2];
    uVar14 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar36[3]) && (plVar36[2] = uVar14, puVar21 != (undefined8 *)0x0)) {
      *puVar21 = "TtPairsTask";
      uVar8 = nn::os::GetSystemTick();
      puVar21[1] = uVar8;
    }
    if (((*(byte *)(lVar27 + 0x38) & 1) != 0) && (plVar36[6] != 0)) {
      puVar21 = (undefined8 *)plVar36[2];
      uVar14 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar36[3]) && (plVar36[2] = uVar14, puVar21 != (undefined8 *)0x0)) {
        *puVar21 = &DAT_03c4e575;
        puVar21[1] = *(undefined8 *)(plVar36[6] + 8);
      }
    }
    lVar27 = *plVar36;
    if (*(code **)(lVar27 + 0x18) != (code *)0x0) {
      (**(code **)(lVar27 + 0x18))("Finish",6,*(undefined8 *)(lVar27 + 0x28));
    }
    puVar21 = (undefined8 *)plVar36[2];
    uVar14 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar36[3]) && (plVar36[2] = uVar14, puVar21 != (undefined8 *)0x0)) {
      *puVar21 = "TtFinish";
      uVar8 = nn::os::GetSystemTick();
      puVar21[1] = uVar8;
    }
    if (((*(byte *)(lVar27 + 0x38) & 1) != 0) && (plVar36[6] != 0)) {
      puVar21 = (undefined8 *)plVar36[2];
      uVar14 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar36[3]) && (plVar36[2] = uVar14, puVar21 != (undefined8 *)0x0)) {
        *puVar21 = &DAT_03c4e575;
        bVar23 = false;
        puVar21[1] = *(undefined8 *)(plVar36[6] + 8);
        goto LAB_02fd6c50;
      }
    }
    bVar23 = false;
  }
LAB_02fd6c50:
  plVar37 = *(long **)(param_1 + 0x30);
  puVar2 = (uint *)(plVar37 + 0x22);
  uVar10 = *(uint *)(plVar37 + 0x22);
  uVar14 = (ulong)uVar10 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar9 = *puVar2;
  if (uVar9 == uVar10) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *puVar2 = uVar10 + 0x200 & 0xfffffe00 | puVar2[uVar14 + 1];
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_02fd6c94;
    puVar28 = puVar2 + uVar14 + 1;
  }
  else {
    ClearExclusiveLocal();
LAB_02fd6c94:
    do {
      uVar14 = (ulong)(uVar9 & 0x1ff);
      DataMemoryBarrier(2,3);
      uVar10 = *puVar2;
      if (uVar10 == uVar9) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = uVar9 + 0x200 & 0xfffffe00 | *(uint *)((long)plVar37 + uVar14 * 4 + 0x114);
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_02fd6cd0;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02fd6cd0:
        bVar7 = false;
      }
      uVar9 = uVar10;
    } while (!bVar7);
    puVar28 = (uint *)((long)plVar37 + uVar14 * 4 + 0x114);
  }
  *puVar28 = 0x1ff;
  DataMemoryBarrier(2,3);
  puVar28 = *(uint **)(*plVar37 + uVar14 * 8);
  lVar27 = *(long *)(puVar28 + 2);
  plVar15 = (long *)(*(ulong *)(lVar27 + 0x7e8) & 0xfffffffffffffffc);
  if (plVar15 != (long *)0x0) {
    do {
      uVar30 = plVar15[1];
      if ((uVar30 & 3) == 0) {
        (**(code **)(*plVar15 + 0x20))(plVar15,lVar27,uVar14);
      }
      plVar15 = (long *)(uVar30 & 0xfffffffffffffffc);
    } while (plVar15 != (long *)0x0);
    lVar27 = *(long *)(puVar28 + 2);
  }
  if (*(int *)(param_1 + 0x38) - 1U < 2) {
    if (bVar23) {
      FUN_02fd6690(param_1,puVar28);
      goto LAB_02fd7558;
    }
    lVar27 = *plVar36;
    if (*(code **)(lVar27 + 0x18) != (code *)0x0) {
      (**(code **)(lVar27 + 0x18))("ProcessSecondRoundResults",0x19,*(undefined8 *)(lVar27 + 0x28));
      if (*(code **)(lVar27 + 0x18) != (code *)0x0) {
        (**(code **)(lVar27 + 0x18))("DeferedManifolds",0x10,*(undefined8 *)(lVar27 + 0x28));
      }
    }
    puVar21 = (undefined8 *)plVar36[2];
    uVar14 = (long)puVar21 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar36[3]) && (plVar36[2] = uVar14, puVar21 != (undefined8 *)0x0)) {
      *puVar21 = "LtProcessSecondRoundResults";
      puVar21[2] = "StDeferedManifolds";
      uVar8 = nn::os::GetSystemTick();
      puVar21[1] = uVar8;
    }
    if (((*(byte *)(lVar27 + 0x38) & 1) != 0) && (plVar36[6] != 0)) {
      puVar21 = (undefined8 *)plVar36[2];
      uVar14 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar36[3]) && (plVar36[2] = uVar14, puVar21 != (undefined8 *)0x0)) {
        *puVar21 = &DAT_03c4e575;
        puVar21[1] = *(undefined8 *)(plVar36[6] + 8);
      }
    }
    FUN_02fd6690(param_1,puVar28);
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x500);
    puVar21 = *(undefined8 **)(puVar28 + 0x138);
    if (*(int *)(param_1 + 0x38) == 0) {
      puVar29 = puVar21;
      if (!bVar23) {
        lVar13 = *plVar36;
        if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
          (**(code **)(lVar13 + 0x18))
                    ("ProcessSecondRoundResults",0x19,*(undefined8 *)(lVar13 + 0x28));
          if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
            (**(code **)(lVar13 + 0x18))("GatherPairs",0xb,*(undefined8 *)(lVar13 + 0x28));
          }
        }
        puVar29 = (undefined8 *)plVar36[2];
        uVar14 = (long)puVar29 + 0x1fU & 0xfffffffffffffff8;
        if ((uVar14 <= (ulong)plVar36[3]) && (plVar36[2] = uVar14, puVar29 != (undefined8 *)0x0)) {
          *puVar29 = "LtProcessSecondRoundResults";
          puVar29[2] = "StGatherPairs";
          uVar8 = nn::os::GetSystemTick();
          puVar29[1] = uVar8;
        }
        if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar36[6] != 0)) {
          puVar29 = (undefined8 *)plVar36[2];
          uVar14 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
          if ((uVar14 <= (ulong)plVar36[3]) && (plVar36[2] = uVar14, puVar29 != (undefined8 *)0x0))
          {
            *puVar29 = &DAT_03c4e575;
            puVar29[1] = *(undefined8 *)(plVar36[6] + 8);
          }
        }
        puVar29 = *(undefined8 **)(puVar28 + 0x138);
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0x28) + 0x670);
      uVar10 = *(uint *)(lVar13 + 0x98);
      if (*(char *)(lVar13 + 0x8c) != '\0') {
        plVar15 = *(long **)(lVar13 + 0x90);
        if ((int)uVar10 < 1) {
          plVar24 = plVar15;
        }
        else {
          plVar24 = plVar15;
          if (uVar10 != 1) {
            iVar22 = -(uVar10 & 0xfffffffe);
            do {
              plVar16 = plVar15;
              if (*plVar24 != 0) {
                plVar16 = plVar15 + 1;
                *plVar15 = *plVar24;
              }
              plVar15 = plVar16;
              if (plVar24[1] != 0) {
                plVar15 = plVar16 + 1;
                *plVar16 = plVar24[1];
              }
              plVar24 = plVar24 + 2;
              iVar22 = iVar22 + 2;
            } while (iVar22 != 0);
          }
          plVar16 = plVar15;
          if (((uVar10 & 1) != 0) && (*plVar24 != 0)) {
            plVar16 = plVar15 + 1;
            *plVar15 = *plVar24;
          }
          plVar15 = plVar16;
          plVar24 = *(long **)(lVar13 + 0x90);
        }
        uVar10 = (uint)((ulong)((long)plVar15 - (long)plVar24) >> 3);
        *(undefined1 *)(lVar13 + 0x8c) = 0;
      }
      if (uVar10 != 0) {
        if (puVar29 == (undefined8 *)0x0) {
          (**(code **)(**(long **)(lVar13 + 0x80) + 0x28))
                    (*(long **)(lVar13 + 0x80),*(undefined8 *)(lVar13 + 0x90));
        }
        else {
          FUN_031c2998(puVar29,*(undefined8 *)(lVar13 + 0x90));
        }
      }
      *(undefined4 *)(lVar13 + 0x98) = 0;
      *(undefined4 *)(lVar13 + 0x88) = 0;
      FUN_031c2be4(lVar27 + 0x540,puVar21);
      FUN_031c2be4(lVar27 + 0x640,puVar21);
      FUN_031c2be4(lVar27 + 0x20,puVar21);
      FUN_031c2be4(lVar27 + 0x120,puVar21);
      FUN_02f601e0(lVar27 + 0x20,puVar21,lVar27 + 0x220);
      lVar13 = *(long *)(*(long *)(param_1 + 0x28) + 0x678);
      iVar22 = *(int *)(lVar13 + 0x2ab0);
      if (0 < iVar22) {
        lVar31 = 0;
        lVar33 = 0x400;
        do {
          if (*(char *)(*(long *)(lVar13 + 0x2aa8) + lVar33 + 0x200) != '\0') {
            FUN_031c2e70(lVar27 + 0x9a0,puVar21);
            iVar22 = *(int *)(lVar13 + 0x2ab0);
          }
          lVar31 = lVar31 + 1;
          lVar33 = lVar33 + 0x610;
        } while (lVar31 < iVar22);
        lVar27 = *(long *)(*(long *)(param_1 + 0x28) + 0x678);
        uVar10 = *(uint *)(lVar27 + 0x2ab0);
        if (0 < (int)uVar10) {
          iVar22 = 0;
          piVar17 = (int *)(*(long *)(lVar27 + 0x2aa8) + 0x508);
          uVar14 = (ulong)uVar10;
          do {
            if ((char)piVar17[0x3e] != '\0') {
              iVar22 = *piVar17 + iVar22;
            }
            uVar14 = uVar14 - 1;
            piVar17 = piVar17 + 0x184;
          } while (uVar14 != 0);
          if (iVar22 != 0) {
            lVar27 = *(long *)(param_1 + 0x40);
            uVar9 = *(uint *)(lVar27 + 0x54) & 0x7fffffff;
            if ((int)uVar9 < iVar22) {
              FUN_02fda10c(lVar27 + 0x48,(long)iVar22);
              lVar27 = *(long *)(param_1 + 0x40);
              uVar9 = *(uint *)(lVar27 + 0x54) & 0x7fffffff;
            }
            if ((int)uVar9 < iVar22) {
              FUN_02fda268(lVar27 + 0x48,(long)iVar22);
            }
            if (*(int *)(lVar27 + 0x50) != iVar22) {
              *(int *)(lVar27 + 0x50) = iVar22;
            }
            lVar31 = *(long *)(puVar28 + 2);
            iVar22 = *(int *)(*(long *)(lVar31 + 0x4b0) + 0x20);
            lVar32 = (long)iVar22;
            lVar33 = *(long *)(*(long *)(param_1 + 0x28) + 0x678);
            lVar27 = tpidr_el0;
            lVar13 = *(long *)(lVar27 + 0x1000b8);
            if (lVar13 == 0) {
              lVar13 = FUN_00e5d3b4();
              *(long *)(lVar27 + 0x1000b8) = lVar13;
            }
            lVar27 = *(long *)(*(long *)(lVar13 + 0x3d0) + 0x10);
            if (*(long *)(lVar27 + 8) == 0) {
              local_a0 = lVar32 * 4;
              local_70 = local_a0;
              if (lVar27 == 0) goto LAB_02fd768c;
              local_68 = local_a0 + 0x3fU & 0xffffffffffffffc0;
              if (*(ulong *)(lVar27 + 0x28) < local_68) {
LAB_02fd72b4:
                lVar13 = FUN_031cf3b4(lVar27,&local_68);
              }
              else {
                lVar13 = *(long *)(lVar27 + 0x38);
                if (*(ulong *)(lVar27 + 0x40) < local_68 + lVar13) goto LAB_02fd72b4;
                *(ulong *)(lVar27 + 0x38) = local_68 + lVar13;
              }
            }
            else {
              local_70 = lVar32 << 2;
LAB_02fd768c:
              local_a0 = local_70;
              lVar13 = (**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
              lVar27 = 0;
            }
            if ((int)(*(uint *)(*(long *)(param_1 + 0x40) + 100) & 0x7fffffff) < iVar22) {
              FUN_02fda3c4(*(long *)(param_1 + 0x40) + 0x58,lVar32);
            }
            if (0 < *(int *)(lVar33 + 0x2ac0)) {
              lVar32 = 0;
              iVar22 = 0;
              do {
                *(int *)(lVar13 + lVar32 * 4) = iVar22;
                iVar5 = *(int *)(*(long *)(lVar33 + 0x2ab8) + lVar32 * 4);
                iVar22 = iVar5 + iVar22;
                if (iVar5 != 0) {
                  lVar35 = *(long *)(param_1 + 0x40);
                  iVar12 = *(int *)(lVar35 + 0x60);
                  lVar18 = (long)iVar12;
                  if ((int)(*(uint *)(lVar35 + 100) & 0x7fffffff) <= iVar12) {
                    FUN_02fda53c(lVar35 + 0x58,lVar18 + 1);
                    iVar12 = *(int *)(lVar35 + 0x60);
                  }
                  *(int *)(lVar35 + 0x60) = (int)(lVar18 + 1);
                  puVar1 = (undefined4 *)(*(long *)(lVar35 + 0x58) + (long)iVar12 * 8);
                  *puVar1 = *(undefined4 *)(lVar13 + lVar32 * 4);
                  puVar1[1] = iVar5;
                }
                lVar32 = lVar32 + 1;
              } while (lVar32 < *(int *)(lVar33 + 0x2ac0));
            }
            uVar14 = 0;
            do {
              lVar33 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 0x678) + 0x2aa8);
              if (*(char *)(lVar33 + uVar14 * 0x610 + 0x600) != '\0') {
                lVar33 = lVar33 + uVar14 * 0x610;
                lVar32 = *(long *)(lVar31 + 0x500);
                uVar8 = *(undefined8 *)(puVar28 + 0x138);
                FUN_031c2e70(lVar32 + 0x20,uVar8,lVar33);
                FUN_031c2e70(lVar32 + 0x120,uVar8,lVar33 + 0x100);
                puVar19 = (uint *)**(undefined8 **)(lVar33 + 0x510);
                if ((*puVar19 & 0xffff) != 0) {
                  puVar26 = (ulong *)(puVar19 + 8);
                  uVar11 = 0x7fffffff;
                  uVar9 = *puVar19 & 0xffff;
                  do {
                    while( true ) {
                      uVar30 = *puVar26 >> 0x2e & 0x3fffc;
                      puVar3 = (ulong *)(*(long *)(*(long *)(param_1 + 0x40) + 0x48) +
                                        (long)*(int *)(lVar13 + uVar30) * 0x10);
                      *puVar3 = *puVar26;
                      puVar3[1] = (ulong)puVar26;
                      *(int *)(lVar13 + uVar30) = *(int *)(lVar13 + uVar30) + 1;
                      if (uVar9 - 1 != 0 && 0 < (int)uVar9) break;
                      if ((uVar11 == 0) ||
                         (puVar19 = *(uint **)(puVar19 + 2), puVar19 == (uint *)0x0))
                      goto LAB_02fd7844;
                      uVar9 = *puVar19 & 0xffff;
                      if ((int)uVar11 <= (int)(*puVar19 & 0xffff)) {
                        uVar9 = uVar11;
                      }
                      if ((int)uVar9 < 1) goto LAB_02fd7844;
                      uVar11 = uVar11 - uVar9;
                      puVar26 = (ulong *)(puVar19 + 8);
                      if (puVar26 == (ulong *)0x0) goto LAB_02fd7844;
                    }
                    puVar26 = puVar26 + 0xe;
                    uVar9 = uVar9 - 1;
                  } while (puVar26 != (ulong *)0x0);
                }
              }
LAB_02fd7844:
              uVar14 = uVar14 + 1;
            } while (uVar14 != uVar10);
            if (lVar27 == 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar13,local_a0);
            }
            else {
              uVar14 = local_a0 + 0x3fU & 0xffffffffffffffc0;
              if ((*(ulong *)(lVar27 + 0x28) < uVar14) ||
                 (*(long *)(lVar27 + 0x38) != uVar14 + lVar13)) {
                if (lVar13 != 0) {
                  if (*(ulong *)(lVar27 + 0x28) < uVar14 + 0x40) {
                    *(int *)(*(long *)(lVar27 + 0x30) + 0x20) =
                         *(int *)(*(long *)(lVar27 + 0x30) + 0x20) + -1;
                    (**(code **)(**(long **)(lVar27 + 0x10) + 0x18))
                              (*(long **)(lVar27 + 0x10),lVar13 - *(int *)(lVar13 + -4),
                               uVar14 + 0x44);
                  }
                  else {
                    if (*(long *)(lVar27 + 0x38) == uVar14 + lVar13) {
                      *(long *)(lVar27 + 0x38) = lVar13;
                      goto LAB_02fd7918;
                    }
                    FUN_031cf778(lVar27,lVar13);
                  }
                }
              }
              else {
                *(long *)(lVar27 + 0x38) = lVar13;
                if (*(long *)(lVar27 + 0x48) == lVar13) {
LAB_02fd7918:
                  FUN_031cf578();
                }
              }
            }
          }
        }
      }
    }
    else {
      if (!bVar23) {
        lVar13 = *plVar36;
        if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
          (**(code **)(lVar13 + 0x18))
                    ("ProcessSecondRoundResults",0x19,*(undefined8 *)(lVar13 + 0x28));
          if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
            (**(code **)(lVar13 + 0x18))("AppendOutputs",0xd,*(undefined8 *)(lVar13 + 0x28));
          }
        }
        puVar21 = (undefined8 *)plVar36[2];
        uVar14 = (long)puVar21 + 0x1fU & 0xfffffffffffffff8;
        if ((uVar14 <= (ulong)plVar36[3]) && (plVar36[2] = uVar14, puVar21 != (undefined8 *)0x0)) {
          *puVar21 = "LtProcessSecondRoundResults";
          puVar21[2] = "StAppendOutputs";
          uVar8 = nn::os::GetSystemTick();
          puVar21[1] = uVar8;
        }
        if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar36[6] != 0)) {
          puVar21 = (undefined8 *)plVar36[2];
          uVar14 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
          if ((uVar14 <= (ulong)plVar36[3]) && (plVar36[2] = uVar14, puVar21 != (undefined8 *)0x0))
          {
            *puVar21 = &DAT_03c4e575;
            puVar21[1] = *(undefined8 *)(plVar36[6] + 8);
          }
        }
        puVar21 = *(undefined8 **)(puVar28 + 0x138);
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0x28) + 0x670);
      if (*(int *)(lVar13 + 0x5c) != 0) {
        lVar31 = *(long *)(puVar28 + 0x1cc);
        puVar29 = (undefined8 *)**(undefined8 **)(lVar31 + 0x10);
        if (*(int *)((long)puVar29 + 0xc) == 0) {
          puVar29[1] = *(undefined8 *)(lVar13 + 0x58);
          uVar8 = *(undefined8 *)(lVar13 + 0x50);
          puVar29[2] = *(undefined8 *)(lVar13 + 0x60);
          *puVar29 = uVar8;
        }
        else {
          puVar19 = *(uint **)(*(long *)(puVar28 + 0x150) + (long)(int)puVar28[0x152] * 8 + -8);
          uVar10 = *puVar19;
          if (0x1e < uVar10 >> 0x17) {
            puVar34 = puVar19;
            do {
              uVar10 = *(int *)(puVar21 + 0xb) - 1;
              if (*(int *)(puVar21 + 0xb) < 1) {
                lVar33 = puVar21[1];
                (**(code **)(*(long *)*puVar21 + 0x20))((long *)*puVar21,lVar33,6);
                *(undefined4 *)(puVar21 + 0xb) = 5;
                puVar20 = (undefined8 *)(lVar33 + 0x28);
              }
              else {
                *(uint *)(puVar21 + 0xb) = uVar10;
                puVar20 = (undefined8 *)(puVar21[1] + (ulong)uVar10 * 8);
              }
              puVar19 = (uint *)*puVar20;
              puVar19[4] = 0;
              puVar19[5] = 0;
              puVar19[6] = 0;
              puVar19[7] = 0;
              puVar19[0] = 0;
              puVar19[1] = 0;
              puVar19[2] = 0;
              puVar19[3] = 0;
              puVar19[1] = puVar28[0x152];
              uVar10 = puVar28[0x152];
              lVar33 = (long)(int)uVar10;
              if ((int)(puVar28[0x153] & 0x7fffffff) <= (int)uVar10) {
                FUN_031c25b4(puVar28 + 0x150,PTR_PTR_047d1a50,lVar33 + 1);
                uVar10 = puVar28[0x152];
              }
              *(uint **)(*(long *)(puVar28 + 0x150) + (long)(int)uVar10 * 8) = puVar19;
              puVar28[0x152] = (uint)(lVar33 + 1);
              *(uint **)(puVar34 + 2) = puVar19;
              uVar10 = *puVar19;
              puVar34 = puVar19;
            } while (0x1e < uVar10 >> 0x17);
          }
          uVar10 = uVar10 >> 0x10;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar19,0x10);
            if (bVar7) {
              *puVar19 = *puVar19 + 0x200001;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          puVar28[0x14e] = puVar28[0x14e] + 1;
          uVar8 = *(undefined8 *)(lVar13 + 0x58);
          uVar4 = *(undefined8 *)(lVar13 + 0x60);
          puVar21 = (undefined8 *)((long)puVar19 + (ulong)uVar10 + 0x20);
          *puVar21 = *(undefined8 *)(lVar13 + 0x50);
          *(undefined8 *)((long)puVar19 + (ulong)uVar10 + 0x28) = uVar8;
          *(undefined8 *)((long)puVar19 + (ulong)uVar10 + 0x30) = uVar4;
          if (*(int *)((long)puVar29 + 0xc) == 0) {
            puVar29[1] = *(undefined8 *)((long)puVar19 + (ulong)uVar10 + 0x28);
            uVar8 = *puVar21;
            puVar29[2] = *(undefined8 *)((long)puVar19 + (ulong)uVar10 + 0x30);
            *puVar29 = uVar8;
          }
          else {
            *(undefined8 *)((long)puVar19 + (ulong)uVar10 + 0x30) = puVar29[2];
            puVar29[2] = puVar21;
          }
          **(long **)(lVar31 + 0x10) = (long)puVar21;
        }
      }
      lVar13 = *(long *)(param_1 + 0x40);
      if (0 < *(int *)(lVar13 + 0x40)) {
        lVar31 = 0;
        do {
          if (*(char *)(*(long *)(lVar13 + 0x38) + lVar31 * 0x210 + 0x200) != '\0') {
            FUN_031c2e70(lVar27 + 0x420,*(undefined8 *)(puVar28 + 0x138),
                         *(long *)(lVar13 + 0x38) + lVar31 * 0x210);
            lVar32 = *(long *)(*(long *)(param_1 + 0x40) + 0x38);
            lVar13 = lVar32 + lVar31 * 0x210;
            lVar33 = *(long *)(puVar28 + 0x138);
            uVar10 = *(uint *)(lVar13 + 0x118);
            plVar15 = (long *)(lVar13 + 0x110);
            if (*(char *)(lVar13 + 0x10c) != '\0') {
              plVar24 = (long *)*plVar15;
              if ((int)uVar10 < 1) {
                plVar16 = plVar24;
              }
              else {
                uVar9 = uVar10 & 3;
                plVar16 = plVar24;
                if (2 < uVar10 - 1) {
                  iVar22 = -(uVar10 & 0xfffffffc);
                  do {
                    plVar25 = plVar24;
                    if (*plVar16 != 0) {
                      plVar25 = plVar24 + 1;
                      *plVar24 = *plVar16;
                    }
                    plVar24 = plVar25;
                    if (plVar16[1] != 0) {
                      plVar24 = plVar25 + 1;
                      *plVar25 = plVar16[1];
                    }
                    plVar25 = plVar24;
                    if (plVar16[2] != 0) {
                      plVar25 = plVar24 + 1;
                      *plVar24 = plVar16[2];
                    }
                    plVar24 = plVar25;
                    if (plVar16[3] != 0) {
                      plVar24 = plVar25 + 1;
                      *plVar25 = plVar16[3];
                    }
                    plVar16 = plVar16 + 4;
                    iVar22 = iVar22 + 4;
                  } while (iVar22 != 0);
                }
                for (; uVar9 != 0; uVar9 = uVar9 - 1) {
                  plVar25 = plVar24;
                  if (*plVar16 != 0) {
                    plVar25 = plVar24 + 1;
                    *plVar24 = *plVar16;
                  }
                  plVar24 = plVar25;
                  plVar16 = plVar16 + 1;
                }
                plVar16 = (long *)*plVar15;
              }
              uVar10 = (uint)((ulong)((long)plVar24 - (long)plVar16) >> 3);
              *(undefined1 *)(lVar13 + 0x10c) = 0;
            }
            if (uVar10 != 0) {
              if (lVar33 == 0) {
                plVar24 = *(long **)(lVar32 + lVar31 * 0x210 + 0x100);
                (**(code **)(*plVar24 + 0x28))(plVar24,*plVar15);
              }
              else {
                FUN_031c2998(lVar33,*plVar15);
              }
            }
            *(undefined4 *)(lVar13 + 0x118) = 0;
            *(undefined4 *)(lVar32 + lVar31 * 0x210 + 0x108) = 0;
            lVar13 = *(long *)(param_1 + 0x40);
          }
          lVar31 = lVar31 + 1;
        } while (lVar31 < *(int *)(lVar13 + 0x40));
      }
    }
    if (bVar23) {
LAB_02fd7558:
      uVar10 = *puVar28;
      lVar27 = *(long *)(*(long *)(*plVar37 + (long)(int)uVar10 * 8) + 8);
      uVar14 = *(ulong *)(lVar27 + 0x7f0);
      while (plVar36 = (long *)(uVar14 & 0xfffffffffffffffc), plVar36 != (long *)0x0) {
        uVar14 = plVar36[1];
        if ((uVar14 & 3) == 0) {
          (**(code **)(*plVar36 + 0x20))(plVar36,lVar27,uVar10);
        }
      }
      uVar9 = *(uint *)(plVar37 + 0x22);
      lVar27 = (long)(int)uVar10 * 4;
      DataMemoryBarrier(2,3);
      *(uint *)((long)plVar37 + lVar27 + 0x114) = uVar9 & 0x1ff;
      uVar11 = *puVar2;
      if (uVar11 == uVar9) {
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar23) {
          *puVar2 = uVar9 & 0xfffffe00 | uVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        DataMemoryBarrier(2,3);
        *(uint *)((long)plVar37 + lVar27 + 0x114) = uVar11 & 0x1ff;
        uVar9 = *puVar2;
        if (uVar9 == uVar11) {
          cVar6 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar23) {
            *puVar2 = uVar11 & 0xfffffe00 | uVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_02fd7624;
          bVar23 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02fd7624:
          bVar23 = false;
        }
        uVar11 = uVar9;
        if (bVar23) {
          return;
        }
      } while( true );
    }
  }
  lVar27 = *plVar36;
  if (((*(byte *)(lVar27 + 0x38) & 1) != 0) && (plVar36[6] != 0)) {
    puVar21 = (undefined8 *)plVar36[2];
    uVar14 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar36[3]) && (plVar36[2] = uVar14, puVar21 != (undefined8 *)0x0)) {
      *puVar21 = &DAT_03c4e575;
      puVar21[1] = *(undefined8 *)(plVar36[6] + 8);
    }
  }
  puVar21 = (undefined8 *)plVar36[2];
  uVar14 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
  if ((uVar14 <= (ulong)plVar36[3]) && (plVar36[2] = uVar14, puVar21 != (undefined8 *)0x0)) {
    *puVar21 = &DAT_03c3697b;
    uVar8 = nn::os::GetSystemTick();
    puVar21[1] = uVar8;
  }
  if (*(code **)(lVar27 + 0x20) != (code *)0x0) {
    (**(code **)(lVar27 + 0x20))(*(undefined8 *)(lVar27 + 0x28));
    if (*(code **)(lVar27 + 0x20) != (code *)0x0) {
      (**(code **)(lVar27 + 0x20))(*(undefined8 *)(lVar27 + 0x28));
    }
  }
  uVar10 = *puVar28;
  lVar27 = *(long *)(*(long *)(*plVar37 + (long)(int)uVar10 * 8) + 8);
  uVar14 = *(ulong *)(lVar27 + 0x7f0);
  while (plVar15 = (long *)(uVar14 & 0xfffffffffffffffc), plVar15 != (long *)0x0) {
    uVar14 = plVar15[1];
    if ((uVar14 & 3) == 0) {
      (**(code **)(*plVar15 + 0x20))(plVar15,lVar27,uVar10);
    }
  }
  uVar9 = *(uint *)(plVar37 + 0x22);
  lVar27 = (long)(int)uVar10 * 4;
  DataMemoryBarrier(2,3);
  *(uint *)((long)plVar37 + lVar27 + 0x114) = uVar9 & 0x1ff;
  uVar11 = *puVar2;
  if (uVar11 == uVar9) {
    cVar6 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar23) {
      *puVar2 = uVar9 & 0xfffffe00 | uVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_02fd7a48;
  }
  else {
    ClearExclusiveLocal();
LAB_02fd7a48:
    do {
      DataMemoryBarrier(2,3);
      *(uint *)((long)plVar37 + lVar27 + 0x114) = uVar11 & 0x1ff;
      uVar9 = *puVar2;
      if (uVar9 == uVar11) {
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar23) {
          *puVar2 = uVar11 & 0xfffffe00 | uVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_02fd7a88;
        bVar23 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02fd7a88:
        bVar23 = false;
      }
      uVar11 = uVar9;
    } while (!bVar23);
  }
  lVar27 = *plVar36;
  if (((*(byte *)(lVar27 + 0x38) & 1) == 0) || (plVar36[6] == 0)) {
LAB_02fd7adc:
    puVar29 = (undefined8 *)plVar36[2];
    puVar20 = (undefined8 *)plVar36[3];
  }
  else {
    puVar21 = (undefined8 *)plVar36[2];
    puVar20 = (undefined8 *)plVar36[3];
    puVar29 = (undefined8 *)((long)puVar21 + 0x17U & 0xfffffffffffffff8);
    if (puVar20 < puVar29) goto LAB_02fd7adc;
    plVar36[2] = (long)puVar29;
    if (puVar21 != (undefined8 *)0x0) {
      *puVar21 = &DAT_03c4e575;
      puVar21[1] = *(undefined8 *)(plVar36[6] + 8);
      goto LAB_02fd7adc;
    }
  }
  puVar21 = (undefined8 *)((long)puVar29 + 0x17U & 0xfffffffffffffff8);
  if ((puVar21 <= puVar20) && (plVar36[2] = (long)puVar21, puVar29 != (undefined8 *)0x0)) {
    *puVar29 = &DAT_03c2d363;
    uVar8 = nn::os::GetSystemTick();
    puVar29[1] = uVar8;
  }
  if (*(code **)(lVar27 + 0x20) != (code *)0x0) {
    (**(code **)(lVar27 + 0x20))(*(undefined8 *)(lVar27 + 0x28));
  }
  lVar27 = *plVar36;
  if (((*(byte *)(lVar27 + 0x38) & 1) == 0) || (plVar36[6] == 0)) {
LAB_02fd7b64:
    puVar29 = (undefined8 *)plVar36[2];
    puVar20 = (undefined8 *)plVar36[3];
  }
  else {
    puVar21 = (undefined8 *)plVar36[2];
    puVar20 = (undefined8 *)plVar36[3];
    puVar29 = (undefined8 *)((long)puVar21 + 0x17U & 0xfffffffffffffff8);
    if (puVar20 < puVar29) goto LAB_02fd7b64;
    plVar36[2] = (long)puVar29;
    if (puVar21 != (undefined8 *)0x0) {
      *puVar21 = &DAT_03c4e575;
      puVar21[1] = *(undefined8 *)(plVar36[6] + 8);
      goto LAB_02fd7b64;
    }
  }
  puVar21 = (undefined8 *)((long)puVar29 + 0x17U & 0xfffffffffffffff8);
  if ((puVar21 <= puVar20) && (plVar36[2] = (long)puVar21, puVar29 != (undefined8 *)0x0)) {
    *puVar29 = &DAT_03c2d363;
    uVar8 = nn::os::GetSystemTick();
    puVar29[1] = uVar8;
  }
  if (*(code **)(lVar27 + 0x20) != (code *)0x0) {
    (**(code **)(lVar27 + 0x20))(*(undefined8 *)(lVar27 + 0x28));
  }
  lVar27 = *plVar36;
  if (((*(byte *)(lVar27 + 0x38) & 1) != 0) && (plVar36[6] != 0)) {
    puVar21 = (undefined8 *)plVar36[2];
    puVar20 = (undefined8 *)plVar36[3];
    puVar29 = (undefined8 *)((long)puVar21 + 0x17U & 0xfffffffffffffff8);
    if (puVar29 <= puVar20) {
      plVar36[2] = (long)puVar29;
      if (puVar21 == (undefined8 *)0x0) goto LAB_02fd7bf0;
      *puVar21 = &DAT_03c4e575;
      puVar21[1] = *(undefined8 *)(plVar36[6] + 8);
    }
  }
  puVar29 = (undefined8 *)plVar36[2];
  puVar20 = (undefined8 *)plVar36[3];
LAB_02fd7bf0:
  puVar21 = (undefined8 *)((long)puVar29 + 0x17U & 0xfffffffffffffff8);
  if ((puVar21 <= puVar20) && (plVar36[2] = (long)puVar21, puVar29 != (undefined8 *)0x0)) {
    *puVar29 = &DAT_03c2d363;
    uVar8 = nn::os::GetSystemTick();
    puVar29[1] = uVar8;
  }
  if (*(code **)(lVar27 + 0x20) == (code *)0x0) {
    return;
  }
  (**(code **)(lVar27 + 0x20))(*(undefined8 *)(lVar27 + 0x28));
  return;
}


