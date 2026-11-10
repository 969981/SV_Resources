/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a284b4; name: FUN_02a284b4
 */


void FUN_02a284b4(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  long *plVar5;
  undefined8 *puVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_40;
  undefined8 local_38;
  
  if (*param_2 != 0) {
    lVar10 = *param_2 + 0x40;
    local_50 = 0x19;
    local_48 = (long *)0x0;
    local_60 = (undefined8 *)&DAT_b1fc851ca9e6292c;
    pcStack_58 = "DeliveryOutbreakZone_Main";
    FUN_00cb7f10(&local_40,lVar10,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_40 != (long *)0x0) {
      plVar12 = local_40 + 5;
      (**(code **)(*local_40 + 0x18))(&local_60);
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      if ((long *)local_60[2] == plVar12) {
        FUN_00cbc6dc(&local_70,&local_60);
      }
      puVar6 = local_60;
      if (local_60 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_60 + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_60 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_38 = *puVar6;
            FUN_00c44438(lVar11 + 0x8040,&local_38);
          }
        }
        else if (sVar3 == 0) goto LAB_02a28f8c;
      }
      FUN_00ca1ea4(*(undefined8 *)(param_1 + 0x220),&local_70);
      puVar6 = local_70;
      if (local_70 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_70 + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_70 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_60 = (undefined8 *)*puVar6;
            FUN_00c44438(lVar11 + 0x8040,&local_60);
          }
        }
        else if (sVar3 == 0) goto LAB_02a28f8c;
      }
      if (local_40 != (long *)0x0) {
        lVar11 = local_40[6];
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_40 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_02a289b0;
      }
    }
    local_60 = (undefined8 *)&DAT_faa6b79b52a6afb4;
    pcStack_58 = "DeliveryOutbreakZone_F1";
    local_50 = 0x17;
    local_48 = (long *)0x0;
    FUN_00cb7f10(&local_40,lVar10,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_40 != (long *)0x0) {
      plVar12 = local_40 + 5;
      (**(code **)(*local_40 + 0x18))(&local_60);
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      if ((long *)local_60[2] == plVar12) {
        FUN_00cbc6dc(&local_70,&local_60);
      }
      puVar6 = local_60;
      if (local_60 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_60 + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_60 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_38 = *puVar6;
            FUN_00c44438(lVar11 + 0x8040,&local_38);
          }
        }
        else if (sVar3 == 0) goto LAB_02a28f8c;
      }
      FUN_00ca1ea4(*(long *)(param_1 + 0x220) + 0x10,&local_70);
      puVar6 = local_70;
      if (local_70 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_70 + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_70 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_60 = (undefined8 *)*puVar6;
            FUN_00c44438(lVar11 + 0x8040,&local_60);
          }
        }
        else if (sVar3 == 0) goto LAB_02a28f8c;
      }
      if (local_40 != (long *)0x0) {
        lVar11 = local_40[6];
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_40 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_02a289b0;
      }
    }
    local_60 = (undefined8 *)&DAT_faa6ba9b52a6b4cd;
    pcStack_58 = "DeliveryOutbreakZone_F2";
    local_50 = 0x17;
    local_48 = (long *)0x0;
    FUN_00cb7f10(&local_40,lVar10,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_40 != (long *)0x0) {
      plVar12 = local_40 + 5;
      (**(code **)(*local_40 + 0x18))(&local_60);
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      if ((long *)local_60[2] == plVar12) {
        FUN_00cbc6dc(&local_70,&local_60);
      }
      puVar6 = local_60;
      if (local_60 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_60 + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_60 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_38 = *puVar6;
            FUN_00c44438(lVar11 + 0x8040,&local_38);
          }
        }
        else if (sVar3 == 0) goto LAB_02a28f8c;
      }
      FUN_00ca1ea4(*(long *)(param_1 + 0x220) + 0x20,&local_70);
      puVar6 = local_70;
      if (local_70 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_70 + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_70 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_60 = (undefined8 *)*puVar6;
            FUN_00c44438(lVar11 + 0x8040,&local_60);
          }
        }
        else if (sVar3 == 0) goto LAB_02a28f8c;
      }
      if (local_40 != (long *)0x0) {
        lVar11 = local_40[6];
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_40 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_02a289b0;
      }
    }
    local_60 = (undefined8 *)&DAT_b59d6776b558e12f;
    pcStack_58 = "DeliveryOutbreakPoke";
    local_50 = 0x14;
    local_48 = (long *)0x0;
    FUN_00cb7f10(&local_40,lVar10,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_40 == (long *)0x0) goto LAB_02a28854;
    plVar12 = local_40 + 5;
    (**(code **)(*local_40 + 0x18))(&local_60);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    if ((long *)local_60[2] == plVar12) {
      FUN_00cbc6dc(&local_70,&local_60);
    }
    puVar6 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_38 = *puVar6;
          FUN_00c44438(lVar10 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) goto LAB_02a28f8c;
    }
    FUN_00ca1ea4(*(long *)(param_1 + 0x220) + 0x30,&local_70);
    puVar6 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_60 = (undefined8 *)*puVar6;
          FUN_00c44438(lVar10 + 0x8040,&local_60);
        }
      }
      else if (sVar3 == 0) {
LAB_02a28f8c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (local_40 != (long *)0x0) {
      lVar10 = local_40[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_40 + 0x50))();
      }
      else if (sVar3 == 0) {
LAB_02a289b0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
LAB_02a28854:
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar10 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar10;
  plVar12 = *(long **)(lVar10 + 0x1c8);
  plVar5 = *(long **)(lVar10 + 0x1c0);
  do {
    if (plVar5 == plVar12) {
      bVar7 = false;
      goto LAB_02a288b8;
    }
    lVar10 = *plVar5;
    uVar9 = FUN_02a1360c(lVar10 + 0x28);
    plVar5 = plVar5 + 1;
  } while ((uVar9 & 1) == 0);
  bVar7 = *(char *)(lVar10 + 0x40) != '\0';
LAB_02a288b8:
  FUN_02a299b4(param_1,bVar7);
  return;
}


