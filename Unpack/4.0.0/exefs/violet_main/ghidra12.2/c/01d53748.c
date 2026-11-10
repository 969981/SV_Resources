/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d53748; name: FUN_01d53748
 */


void FUN_01d53748(byte *param_1,code *param_2,ulong param_3,undefined8 param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  undefined8 *local_40;
  undefined8 *local_38;
  long local_30;
  undefined8 local_28;
  
  if (3 < *param_1) {
    return;
  }
  lVar9 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) != 0) {
      plVar11 = (long *)(*(long *)(param_1 + 8) + lVar9);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar11);
      }
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_010764a4(&local_38,param_4);
      (*param_2)(plVar11,&local_38);
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
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_28 = *puVar6;
            FUN_00c44438(lVar9 + 0x8040,&local_28);
          }
        }
        else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    return;
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar11 = (long *)(*(long *)(param_1 + 8) + lVar9);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar11);
      }
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_010764a4(&local_38,param_4);
      (*param_2)(plVar11,&local_38);
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
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_28 = *puVar6;
            FUN_00c44438(lVar9 + 0x8040,&local_28);
          }
        }
        else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    return;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar8 != 0)) {
      plVar11 = (long *)(lVar8 + lVar9 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar11);
      }
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_010764a4(&local_38,param_4);
      (*param_2)(plVar11,&local_38);
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
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_28 = *puVar6;
            FUN_00c44438(lVar9 + 0x8040,&local_28);
          }
        }
        else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    return;
  }
  lVar9 = *(long *)(param_1 + 8);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01d53bcc;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01d53bcc:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar9 + 0x10) != 0) {
          local_30 = *(long *)(lVar9 + 0x10) + -0x28;
          local_40 = (undefined8 *)0x0;
          local_38 = (undefined8 *)0x0;
          FUN_010764a4(&local_40,param_4);
          FUN_01d53d08(&local_30,param_2,param_3,&local_40);
          puVar6 = local_40;
          if (local_40 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_40 + 3);
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
              piVar2 = (int *)((long)local_40 + 0x1c);
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
                lVar9 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar9;
                local_28 = *puVar6;
                FUN_00c44438(lVar9 + 0x8040,&local_28);
              }
            }
            else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          goto LAB_01d53b80;
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  local_30 = 0;
LAB_01d53b80:
  FUN_01d529b8(&local_30);
  return;
}


