/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e03aa8; name: FUN_00e03aa8
 */


uint FUN_00e03aa8(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long *local_48;
  long *local_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((*(long *)(param_1 + 0x670) == 0) || (*(short *)(*(long *)(param_1 + 0x670) + 0x1a) == 0)) {
    FUN_00c9e664(&local_48,param_1 + 0xe8);
    if (local_48 != (long *)0x0) {
      lVar9 = 0;
      if (local_40 != (long *)0x0) {
        lVar9 = local_40[9];
      }
      lVar9 = FUN_00e048ac(lVar9 + 0x108,&local_38);
      if (lVar9 != 0) {
        local_38 = (undefined8 *)0x0;
        uStack_30 = 0;
        FUN_00c43ef0(&local_38,lVar9 + 0x98);
        local_58 = (undefined8 *)0x0;
        uStack_50 = 0;
        if (local_38[2] == lVar9 + 0x28) {
          FUN_00e04b04(&local_58,&local_38);
        }
        puVar6 = local_38;
        if (local_38 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_38 + 3);
          do {
            sVar10 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar10 == 1) {
            piVar2 = (int *)((long)local_38 + 0x1c);
            do {
              iVar8 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
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
              lVar9 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar9;
              local_28 = *puVar6;
              FUN_00c44438(lVar9 + 0x8040,&local_28);
            }
          }
          else if (sVar10 == 0) goto LAB_00e03c04;
        }
        FUN_00e04ed4(param_1 + 0x670,&local_58);
        puVar6 = local_58;
        if (local_58 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_58 + 3);
          do {
            sVar10 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar10 == 1) {
            piVar2 = (int *)((long)local_58 + 0x1c);
            do {
              iVar8 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
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
              lVar9 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar9;
              local_38 = (undefined8 *)*puVar6;
              FUN_00c44438(lVar9 + 0x8040,&local_38);
            }
          }
          else if (sVar10 == 0) goto LAB_00e03c04;
        }
      }
    }
    if (local_40 != (long *)0x0) {
      plVar11 = local_40 + 5;
      do {
        lVar9 = *plVar11;
        iVar8 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
      else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x60))();
    }
  }
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_00e03f38(&local_68,param_1 + 0x670);
  puVar6 = local_68;
  uVar7 = 0;
  if (local_68 != (undefined8 *)0x0) {
    if (*(short *)((long)local_68 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_68 + 0x1a);
      sVar10 = *(short *)((long)local_68 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00e03d34;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00e03d34:
          bVar5 = false;
        }
        if (bVar5) {
          plVar11 = (long *)0x0;
          if (local_68[2] != 0) {
            plVar11 = (long *)(local_68[2] + -0x28);
          }
          goto LAB_00e03d48;
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
    }
    plVar11 = (long *)0x0;
LAB_00e03d48:
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
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
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_38 = (undefined8 *)*puVar6;
        FUN_00c44438(lVar9 + 0x8040,&local_38);
      }
    }
    else if (sVar10 == 0) {
LAB_00e03c04:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar11 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_00e052a4(plVar11 + 7,plVar11);
      lVar9 = plVar11[0x13];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return uVar7 & 1;
}


