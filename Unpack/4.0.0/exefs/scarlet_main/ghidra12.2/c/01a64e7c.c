/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a64e7c; name: FUN_01a64e7c
 */


void FUN_01a64e7c(long param_1)

{
  short *psVar1;
  int *piVar2;
  uint uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  short sVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  undefined8 local_120;
  undefined4 local_118;
  undefined2 local_114;
  undefined1 local_112;
  undefined1 local_111;
  undefined1 uStack_110;
  undefined2 uStack_10f;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_38;
  
  uVar3 = *(uint *)(param_1 + 0x1c0);
  if (((*PTR_DAT_047d3be0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
  }
  uVar12 = (ulong)uVar3;
  lVar10 = *(long *)PTR_DAT_047d3be8;
  *(long *)PTR_DAT_047dcd80 = lVar10;
  uVar16 = *(ulong *)(lVar10 + 0x50);
  if (uVar16 == 0) {
    return;
  }
  uVar14 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar14 < 2) {
    uVar18 = (ulong)((int)uVar16 - 1U & uVar3);
  }
  else {
    uVar18 = uVar12;
    if (uVar16 <= uVar12) {
      uVar18 = 0;
      if (uVar16 != 0) {
        uVar18 = uVar12 / uVar16;
      }
      uVar18 = uVar12 - uVar18 * uVar16;
    }
  }
  plVar15 = *(long **)(*(long *)(lVar10 + 0x48) + uVar18 * 8);
  if (plVar15 == (long *)0x0) {
    return;
  }
  plVar15 = (long *)*plVar15;
  if (plVar15 == (long *)0x0) {
    return;
  }
  if (1 < uVar14) {
    do {
      uVar14 = plVar15[1];
      if (uVar14 == uVar12) {
        if (*(uint *)(plVar15 + 2) == uVar3) goto LAB_01a64fb8;
      }
      else {
        if (uVar16 <= uVar14) {
          uVar7 = 0;
          if (uVar16 != 0) {
            uVar7 = uVar14 / uVar16;
          }
          uVar14 = uVar14 - uVar7 * uVar16;
        }
        if (uVar14 != uVar18) {
          return;
        }
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar15[1] == uVar12) {
      if (*(uint *)(plVar15 + 2) == uVar3) break;
    }
    else if ((plVar15[1] & uVar16 - 1) != uVar18) {
      return;
    }
    plVar15 = (long *)*plVar15;
    if (plVar15 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_01a64fb8:
  if ((((plVar15[5] != 0) && (*(short *)(plVar15[5] + 0x1a) != 0)) &&
      (lVar10 = plVar15[5], lVar10 != 0)) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar17 = *(short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar17) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01a65060;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a65060:
        bVar6 = false;
      }
      if (bVar6) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return;
        }
        local_80 = *(undefined8 *)(param_1 + 0x110);
        uStack_78 = *(undefined8 *)(param_1 + 0x118);
        local_70 = *(undefined8 *)(param_1 + 0x120);
        plVar20 = *(long **)(param_1 + 0x128);
        local_68 = plVar20;
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x18))(plVar20);
        }
        if (*(code **)(param_1 + 0x10) == (code *)0x0) {
          local_60 = (undefined8 *)0x0;
          uStack_58 = 0;
        }
        else {
          (**(code **)(param_1 + 0x10))(&local_60,param_1 + 0x30,&local_80);
          plVar20 = local_68;
        }
        plVar19 = (long *)(lVar10 + -0x28);
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x20))(plVar20);
        }
        if (local_60 != (undefined8 *)0x0) {
          if (*(short *)((long)local_60 + 0x1a) != 0) {
            local_b0 = 0xdeda0913e9ef23dd;
            pcStack_a8 = "CAM_POS";
            local_a0 = 7;
            local_98 = (long *)0x0;
            if (*(code **)(param_1 + 0x10) == (code *)0x0) {
              local_90 = (undefined8 *)0x0;
              uStack_88 = 0;
            }
            else {
              (**(code **)(param_1 + 0x10))(&local_90,param_1 + 0x30,&local_b0);
              if (local_98 != (long *)0x0) {
                (**(code **)(*local_98 + 0x20))();
              }
            }
            local_c0 = (undefined8 *)0x0;
            uStack_b8 = 0;
            FUN_00d0a71c(&local_c0,&local_90);
            uVar11 = FUN_01180e7c(param_1,&local_c0);
            puVar8 = local_c0;
            if (local_c0 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_c0 + 3);
              do {
                sVar17 = *psVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar6) {
                  *psVar1 = sVar17 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar17 == 1) {
                piVar2 = (int *)((long)local_c0 + 0x1c);
                do {
                  iVar9 = *piVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar9 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar13 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar13;
                  local_120 = *puVar8;
                  FUN_00c44438(lVar13 + 0x8040,&local_120);
                }
              }
              else if (sVar17 == 0) goto LAB_01a65350;
            }
            local_f0 = 0x37a5913ff3d5f98;
            pcStack_e8 = "CAM_TRG";
            local_e0 = 7;
            local_d8 = (long *)0x0;
            local_38 = uVar11;
            if (*(code **)(param_1 + 0x10) == (code *)0x0) {
              local_d0 = (undefined8 *)0x0;
              uStack_c8 = 0;
            }
            else {
              (**(code **)(param_1 + 0x10))(&local_d0,param_1 + 0x30,&local_f0);
              if (local_d8 != (long *)0x0) {
                (**(code **)(*local_d8 + 0x20))();
              }
            }
            local_108 = (undefined8 *)0x0;
            uStack_100 = 0;
            FUN_00d0a71c(&local_108,&local_d0);
            uVar11 = FUN_01180e7c(param_1,&local_108);
            puVar8 = local_108;
            if (local_108 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_108 + 3);
              do {
                sVar17 = *psVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar6) {
                  *psVar1 = sVar17 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar17 == 1) {
                piVar2 = (int *)((long)local_108 + 0x1c);
                do {
                  iVar9 = *piVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar9 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar13 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar13;
                  local_120 = *puVar8;
                  FUN_00c44438(lVar13 + 0x8040,&local_120);
                }
              }
              else if (sVar17 == 0) goto LAB_01a65350;
            }
            uStack_10f = 0;
            uStack_110 = 0x46;
            local_111 = 0x36;
            local_112 = 0x30;
            local_114 = 0x4639;
            local_118 = 0x41394432;
            local_120 = 0x4445423742354153;
            local_f8 = uVar11;
            FUN_019f1610(plVar19,&local_120,plVar15 + 3,&local_60,&local_38,&local_f8);
            puVar8 = local_d0;
            if (local_d0 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_d0 + 3);
              do {
                sVar17 = *psVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar6) {
                  *psVar1 = sVar17 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar17 == 1) {
                piVar2 = (int *)((long)local_d0 + 0x1c);
                do {
                  iVar9 = *piVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar9 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar13 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar13;
                  local_120 = *puVar8;
                  FUN_00c44438(lVar13 + 0x8040,&local_120);
                }
              }
              else if (sVar17 == 0) goto LAB_01a65350;
            }
            puVar8 = local_90;
            if (local_90 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_90 + 3);
              do {
                sVar17 = *psVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar6) {
                  *psVar1 = sVar17 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar17 == 1) {
                piVar2 = (int *)((long)local_90 + 0x1c);
                do {
                  iVar9 = *piVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar9 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar13 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar13;
                  local_120 = *puVar8;
                  FUN_00c44438(lVar13 + 0x8040,&local_120);
                }
              }
              else if (sVar17 == 0) goto LAB_01a65350;
            }
          }
          puVar8 = local_60;
          if (local_60 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_60 + 3);
            do {
              sVar17 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar17 == 1) {
              piVar2 = (int *)((long)local_60 + 0x1c);
              do {
                iVar9 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar13 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar13;
                local_120 = *puVar8;
                FUN_00c44438(lVar13 + 0x8040,&local_120);
              }
            }
            else if (sVar17 == 0) {
LAB_01a65350:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
        }
        lVar10 = *(long *)(lVar10 + 8);
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar17 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar19 + 0x50))(plVar19);
          return;
        }
        if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar17 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


