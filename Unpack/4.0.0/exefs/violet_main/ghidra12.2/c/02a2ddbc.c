/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a2ddbc; name: FUN_02a2ddbc
 */


void FUN_02a2ddbc(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *local_60;
  undefined8 uStack_58;
  char local_50 [8];
  long *local_48;
  long *local_40;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x1f0) != 0) {
    FUN_018994ac();
  }
  FUN_00c9e664(&local_48,param_1 + 0xe8);
  if (local_48 != (long *)0x0) {
    if (local_40 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)local_40[9];
    }
    plVar12 = plVar11 + 5;
    plVar8 = (long *)(**(code **)*plVar12)(plVar12);
    if (((*PTR_DAT_047d6520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar7 != 0)) {
      uVar9 = FUN_0151c130();
      *(undefined8 *)PTR_DAT_047d6528 = uVar9;
      __cxa_guard_release(PTR_DAT_047d6520);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)PTR_DAT_047d6528) {
        (**(code **)(*plVar11 + 0x18))(local_38,plVar11);
        local_60 = (undefined8 *)0x0;
        uStack_58 = 0;
        if ((long *)local_38[0][2] == plVar12) {
          FUN_00cbc6dc(&local_60,local_38);
        }
        puVar6 = local_38[0];
        if (local_38[0] != (undefined8 *)0x0) {
          psVar1 = (short *)(local_38[0] + 3);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)local_38[0] + 0x1c);
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
              local_28 = *puVar6;
              FUN_00c44438(lVar10 + 0x8040,&local_28);
            }
          }
          else if (sVar3 == 0) goto LAB_02a2e2c0;
        }
        FUN_015ede48(local_50,&local_60);
        puVar6 = local_60;
        if (local_60 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_60 + 3);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)local_60 + 0x1c);
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
              local_38[0] = (undefined8 *)*puVar6;
              FUN_00c44438(lVar10 + 0x8040,local_38);
            }
          }
          else if (sVar3 == 0) goto LAB_02a2e2c0;
        }
        if (local_50[0] != '\0') {
          (**(code **)(*plVar11 + 0x18))(local_38,plVar11);
          local_60 = (undefined8 *)0x0;
          uStack_58 = 0;
          if ((long *)local_38[0][2] == plVar12) {
            FUN_00cbc6dc(&local_60,local_38);
          }
          puVar6 = local_38[0];
          if (local_38[0] != (undefined8 *)0x0) {
            psVar1 = (short *)(local_38[0] + 3);
            do {
              sVar3 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_38[0] + 0x1c);
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
                local_28 = *puVar6;
                FUN_00c44438(lVar10 + 0x8040,&local_28);
              }
            }
            else if (sVar3 == 0) goto LAB_02a2e2c0;
          }
          FUN_01937c28(&local_60);
          puVar6 = local_60;
          if (local_60 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_60 + 3);
            do {
              sVar3 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_60 + 0x1c);
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
                local_38[0] = (undefined8 *)*puVar6;
                FUN_00c44438(lVar10 + 0x8040,local_38);
              }
            }
            else if (sVar3 == 0) {
LAB_02a2e2c0:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          FUN_0159e67c((ulong)local_50 | 2);
          if (local_50[0] != '\0') {
            local_50[0] = '\0';
          }
        }
        break;
      }
    }
  }
  if (local_40 != (long *)0x0) {
    plVar11 = local_40 + 5;
    do {
      lVar10 = *plVar11;
      iVar7 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
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
  return;
}


