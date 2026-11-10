/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3223c; name: FUN_02a3223c
 */


void FUN_02a3223c(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  long lVar13;
  long *plVar14;
  undefined8 *local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  lVar13 = *param_2;
  local_78 = (undefined8 *)0x0;
  pcStack_70 = (char *)0x0;
  FUN_00c43ef0(&local_78,lVar13 + 0x30);
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  lVar11 = 0;
  if (lVar13 != 0) {
    lVar11 = lVar13 + 0x28;
  }
  if (local_78[2] == lVar11) {
    FUN_00e29918(&local_50,&local_78);
  }
  puVar8 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78 + 3);
    do {
      sVar12 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_78 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_28 = *puVar8;
        FUN_00c44438(lVar11 + 0x8040,&local_28);
      }
    }
    else if (sVar12 == 0) goto LAB_02a32ff0;
  }
  FUN_00dbd160(param_1 + 0x760,&local_50);
  puVar8 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar12 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_78 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar11 + 0x8040,&local_78);
      }
    }
    else if (sVar12 == 0) {
LAB_02a32ff0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined1 *)(param_1 + 0x758) = 1;
  puVar8 = (undefined8 *)FUN_01faaf0c(*(undefined8 *)(param_1 + 8));
  local_50 = puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar8 + 5);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_78 = *(undefined8 **)(param_1 + 0x7e0);
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  FUN_01fa81b0(&local_78);
  local_50 = (undefined8 *)0x0;
  *(undefined8 **)(param_1 + 0x7e0) = puVar8;
  FUN_01fa81b0(&local_50);
  lVar11 = *(long *)(param_1 + 0x760);
  *(undefined8 *)(param_1 + 0x750) = 0;
  *(undefined8 *)(param_1 + 0x748) = 0;
  *(undefined8 *)(param_1 + 0x740) = 0;
  *(undefined8 *)(param_1 + 0x738) = 0;
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar12 = *(short *)(lVar11 + 0x1a);
LAB_02a3251c:
    sVar3 = *psVar1;
    if (sVar3 == sVar12) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02a32540;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02a32540:
      bVar5 = false;
    }
    if (!bVar5) goto code_r0x02a32548;
    lVar11 = *(long *)(lVar11 + 0x10);
    if (lVar11 != 0) {
      local_78 = (undefined8 *)&DAT_5bf60fa790503c37;
      pcStack_70 = "DeliveryEnemyLotteryObject";
      lVar13 = lVar11 + 0x18;
      local_68 = 0x1a;
      local_60 = (long *)0x0;
      FUN_00cb7f10(&local_58,lVar13,&local_78);
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
      if (local_58 != (long *)0x0) {
        plVar14 = local_58 + 5;
        (**(code **)(*local_58 + 0x18))(&local_78);
        local_50 = (undefined8 *)0x0;
        uStack_48 = 0;
        if ((long *)local_78[2] == plVar14) {
          FUN_00cbc6dc(&local_50,&local_78);
        }
        puVar8 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_78 + 3);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            piVar2 = (int *)((long)local_78 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_28 = *puVar8;
              FUN_00c44438(lVar10 + 0x8040,&local_28);
            }
          }
          else if (sVar12 == 0) goto LAB_02a32ff0;
        }
        FUN_00ca1ea4(param_1 + 0x1668,&local_50);
        puVar8 = local_50;
        if (local_50 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_50 + 3);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            piVar2 = (int *)((long)local_50 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_78 = (undefined8 *)*puVar8;
              FUN_00c44438(lVar10 + 0x8040,&local_78);
            }
          }
          else if (sVar12 == 0) goto LAB_02a32ff0;
        }
        if (local_58 != (long *)0x0) {
          lVar10 = local_58[6];
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*local_58 + 0x50))();
          }
          else if (sVar12 == 0) goto LAB_02a32c50;
        }
      }
      local_78 = (undefined8 *)&DAT_ee407f37b96ede6a;
      pcStack_70 = "DeliveryFixedRewardItemObject";
      local_68 = 0x1d;
      local_60 = (long *)0x0;
      FUN_00cb7f10(&local_58,lVar13,&local_78);
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
      if (local_58 != (long *)0x0) {
        plVar14 = local_58 + 5;
        (**(code **)(*local_58 + 0x18))(&local_78);
        local_50 = (undefined8 *)0x0;
        uStack_48 = 0;
        if ((long *)local_78[2] == plVar14) {
          FUN_00cbc6dc(&local_50,&local_78);
        }
        puVar8 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_78 + 3);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            piVar2 = (int *)((long)local_78 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_28 = *puVar8;
              FUN_00c44438(lVar10 + 0x8040,&local_28);
            }
          }
          else if (sVar12 == 0) goto LAB_02a32ff0;
        }
        FUN_00ca1ea4(param_1 + 0x1678,&local_50);
        puVar8 = local_50;
        if (local_50 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_50 + 3);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            piVar2 = (int *)((long)local_50 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_78 = (undefined8 *)*puVar8;
              FUN_00c44438(lVar10 + 0x8040,&local_78);
            }
          }
          else if (sVar12 == 0) goto LAB_02a32ff0;
        }
        if (local_58 != (long *)0x0) {
          lVar10 = local_58[6];
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*local_58 + 0x50))();
          }
          else if (sVar12 == 0) goto LAB_02a32c50;
        }
      }
      local_78 = (undefined8 *)&DAT_747826617599de31;
      pcStack_70 = "DeliveryLotteryRewardItemObject";
      local_68 = 0x1f;
      local_60 = (long *)0x0;
      FUN_00cb7f10(&local_58,lVar13,&local_78);
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
      if (local_58 != (long *)0x0) {
        plVar14 = local_58 + 5;
        (**(code **)(*local_58 + 0x18))(&local_78);
        local_50 = (undefined8 *)0x0;
        uStack_48 = 0;
        if ((long *)local_78[2] == plVar14) {
          FUN_00cbc6dc(&local_50,&local_78);
        }
        puVar8 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_78 + 3);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            piVar2 = (int *)((long)local_78 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_28 = *puVar8;
              FUN_00c44438(lVar10 + 0x8040,&local_28);
            }
          }
          else if (sVar12 == 0) goto LAB_02a32ff0;
        }
        FUN_00ca1ea4(param_1 + 0x1688,&local_50);
        puVar8 = local_50;
        if (local_50 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_50 + 3);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            piVar2 = (int *)((long)local_50 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_78 = (undefined8 *)*puVar8;
              FUN_00c44438(lVar10 + 0x8040,&local_78);
            }
          }
          else if (sVar12 == 0) goto LAB_02a32ff0;
        }
        if (local_58 != (long *)0x0) {
          lVar10 = local_58[6];
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*local_58 + 0x50))();
          }
          else if (sVar12 == 0) goto LAB_02a32c50;
        }
      }
      local_78 = (undefined8 *)&DAT_f01a4c42462bc3f6;
      pcStack_70 = "DeliveryPriorityObject";
      local_68 = 0x16;
      local_60 = (long *)0x0;
      FUN_00cb7f10(&local_58,lVar13,&local_78);
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
      if (local_58 != (long *)0x0) {
        plVar14 = local_58 + 5;
        (**(code **)(*local_58 + 0x18))(&local_78);
        local_50 = (undefined8 *)0x0;
        uStack_48 = 0;
        if ((long *)local_78[2] == plVar14) {
          FUN_00cbc6dc(&local_50,&local_78);
        }
        puVar8 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_78 + 3);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            piVar2 = (int *)((long)local_78 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar13 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar13;
              local_28 = *puVar8;
              FUN_00c44438(lVar13 + 0x8040,&local_28);
            }
          }
          else if (sVar12 == 0) goto LAB_02a32ff0;
        }
        FUN_00ca1ea4(param_1 + 0x1698,&local_50);
        puVar8 = local_50;
        if (local_50 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_50 + 3);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            piVar2 = (int *)((long)local_50 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar13 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar13;
              local_78 = (undefined8 *)*puVar8;
              FUN_00c44438(lVar13 + 0x8040,&local_78);
            }
          }
          else if (sVar12 == 0) goto LAB_02a32ff0;
        }
        if (local_58 != (long *)0x0) {
          lVar13 = local_58[6];
          psVar1 = (short *)(lVar13 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar13 + 0x10) = 0;
            (**(code **)(*local_58 + 0x50))();
          }
          else if (sVar12 == 0) goto LAB_02a32c50;
        }
      }
      (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))();
    }
  }
LAB_02a3236c:
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar11 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar11;
  plVar14 = *(long **)(lVar11 + 0x1c8);
  plVar6 = *(long **)(lVar11 + 0x1c0);
  do {
    if (plVar6 == plVar14) {
      return;
    }
    lVar11 = *plVar6;
    uVar9 = FUN_00f280dc(lVar11 + 0x28);
    plVar6 = plVar6 + 1;
  } while ((uVar9 & 1) == 0);
  *(undefined4 *)(param_1 + 0x16a8) = *(undefined4 *)(lVar11 + 0xe300);
  if (0 < *(int *)(lVar11 + 0xe300)) {
    lVar13 = *(long *)(param_1 + 0x1668);
    if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar13 + 0x1a);
      sVar12 = *(short *)(lVar13 + 0x1a);
LAB_02a32904:
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02a32928;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a32928:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x02a32930;
      lVar13 = *(long *)(lVar13 + 0x10);
      if (lVar13 != 0) {
        lVar10 = FUN_01289558(lVar13 + 0xe0,&local_78);
        if (lVar10 != 0) {
          local_78 = *(undefined8 **)(lVar11 + 0xe308);
          FUN_01faa4e0(lVar10,&local_78);
        }
        lVar10 = *(long *)(lVar13 + 8);
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))((long *)(lVar13 + -0x28));
        }
        else if (sVar12 == 0) goto LAB_02a32c50;
      }
    }
LAB_02a323e0:
    lVar13 = *(long *)(param_1 + 0x1678);
    if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar13 + 0x1a);
      sVar12 = *(short *)(lVar13 + 0x1a);
LAB_02a3294c:
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02a32970;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a32970:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x02a32978;
      lVar13 = *(long *)(lVar13 + 0x10);
      if (lVar13 != 0) {
        lVar10 = FUN_01289558(lVar13 + 0xe0,&local_78);
        if (lVar10 != 0) {
          local_78 = *(undefined8 **)(lVar11 + 0xe340);
          FUN_01faa4e0(lVar10,&local_78);
        }
        lVar10 = *(long *)(lVar13 + 8);
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))((long *)(lVar13 + -0x28));
        }
        else if (sVar12 == 0) goto LAB_02a32c50;
      }
    }
LAB_02a323e8:
    lVar13 = *(long *)(param_1 + 0x1688);
    if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar13 + 0x1a);
      sVar12 = *(short *)(lVar13 + 0x1a);
LAB_02a32994:
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02a329b8;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a329b8:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x02a329c0;
      lVar13 = *(long *)(lVar13 + 0x10);
      if (lVar13 != 0) {
        lVar10 = FUN_01289558(lVar13 + 0xe0,&local_78);
        if (lVar10 != 0) {
          local_78 = *(undefined8 **)(lVar11 + 0xe378);
          FUN_01faa4e0(lVar10,&local_78);
        }
        lVar10 = *(long *)(lVar13 + 8);
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))((long *)(lVar13 + -0x28));
        }
        else if (sVar12 == 0) goto LAB_02a32c50;
      }
    }
LAB_02a323f0:
    lVar13 = *(long *)(param_1 + 0x1698);
    if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar13 + 0x1a);
      sVar12 = *(short *)(lVar13 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar12) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02a32a00;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02a32a00:
          bVar5 = false;
        }
        if (bVar5) {
          lVar13 = *(long *)(lVar13 + 0x10);
          if (lVar13 == 0) {
            return;
          }
          lVar10 = FUN_01289558(lVar13 + 0xe0,&local_78);
          if (lVar10 != 0) {
            local_78 = *(undefined8 **)(lVar11 + 0xe3b0);
            FUN_01faa4e0(lVar10,&local_78);
          }
          lVar11 = *(long *)(lVar13 + 8);
          psVar1 = (short *)(lVar11 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))((long *)(lVar13 + -0x28));
            return;
          }
          if (sVar12 != 0) {
            return;
          }
LAB_02a32c50:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        sVar12 = sVar3;
      } while (sVar3 != 0);
    }
  }
  return;
code_r0x02a32548:
  sVar12 = sVar3;
  if (sVar3 == 0) goto LAB_02a3236c;
  goto LAB_02a3251c;
code_r0x02a32930:
  sVar12 = sVar3;
  if (sVar3 == 0) goto LAB_02a323e0;
  goto LAB_02a32904;
code_r0x02a32978:
  sVar12 = sVar3;
  if (sVar3 == 0) goto LAB_02a323e8;
  goto LAB_02a3294c;
code_r0x02a329c0:
  sVar12 = sVar3;
  if (sVar3 == 0) goto LAB_02a323f0;
  goto LAB_02a32994;
}


