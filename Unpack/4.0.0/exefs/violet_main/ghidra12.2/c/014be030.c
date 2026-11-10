/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014be030; name: FUN_014be030
 */


long FUN_014be030(long param_1)

{
  long lVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  lVar1 = param_1 + 0x160;
  if ((*(long *)(param_1 + 0x160) == 0) || (*(short *)(*(long *)(param_1 + 0x160) + 0x1a) == 0)) {
    plVar9 = (long *)FUN_00d63f6c();
    if ((*plVar9 != 0) &&
       (((*(short *)(*plVar9 + 0x1a) != 0 && (lVar10 = *plVar9, lVar10 != 0)) &&
        (*(short *)(lVar10 + 0x1a) != 0)))) {
      psVar2 = (short *)(lVar10 + 0x1a);
      sVar12 = *(short *)(lVar10 + 0x1a);
      do {
        sVar4 = *psVar2;
        if (sVar4 == sVar12) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_014be0d8;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_014be0d8:
          bVar6 = false;
        }
        if (bVar6) {
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 == 0) {
            return lVar1;
          }
          plVar13 = (long *)(lVar10 + -0x28);
          plVar9 = (long *)FUN_01e149b8(plVar13);
          plVar9 = (long *)*plVar9;
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x18))(local_50);
            local_60 = (undefined8 *)0x0;
            uStack_58 = 0;
            if ((long *)local_50[0][2] == plVar9 + 5) {
              FUN_011d06f4(&local_60,local_50);
            }
            puVar7 = local_50[0];
            if (local_50[0] != (undefined8 *)0x0) {
              psVar2 = (short *)(local_50[0] + 3);
              do {
                sVar12 = *psVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar6) {
                  *psVar2 = sVar12 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar12 == 1) {
                piVar3 = (int *)((long)local_50[0] + 0x1c);
                do {
                  iVar8 = *piVar3;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar6) {
                    *piVar3 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar8 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar11 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar11;
                  local_28 = *puVar7;
                  FUN_00c44438(lVar11 + 0x8040,&local_28);
                }
              }
              else if (sVar12 == 0) goto LAB_014be1e8;
            }
            FUN_011d0324(lVar1,&local_60);
            puVar7 = local_60;
            if (local_60 != (undefined8 *)0x0) {
              psVar2 = (short *)(local_60 + 3);
              do {
                sVar12 = *psVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar6) {
                  *psVar2 = sVar12 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar12 == 1) {
                piVar3 = (int *)((long)local_60 + 0x1c);
                do {
                  iVar8 = *piVar3;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar6) {
                    *piVar3 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar8 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar11 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar11;
                  local_50[0] = (undefined8 *)*puVar7;
                  FUN_00c44438(lVar11 + 0x8040,local_50);
                }
              }
              else if (sVar12 == 0) {
LAB_014be1e8:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
          }
          lVar10 = *(long *)(lVar10 + 0x70);
          psVar2 = (short *)(lVar10 + 0x1a);
          do {
            sVar12 = *psVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar13 + 0x50))(plVar13);
            return lVar1;
          }
          if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return lVar1;
        }
        sVar12 = sVar4;
      } while (sVar4 != 0);
    }
  }
  return lVar1;
}


