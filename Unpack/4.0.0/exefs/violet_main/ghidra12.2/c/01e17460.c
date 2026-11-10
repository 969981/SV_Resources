/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e17460; name: FUN_01e17460
 */


long * FUN_01e17460(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  undefined8 *local_50 [2];
  long *local_40;
  undefined8 local_38;
  
  plVar11 = (long *)(param_1 + 0xc0);
  if ((*plVar11 == 0) || (*(short *)(*plVar11 + 0x1a) == 0)) {
    plVar7 = (long *)FUN_00c73d48();
    lVar8 = *plVar7;
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar10 = *(short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01e174e8;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01e174e8:
          bVar5 = false;
        }
        if (bVar5) {
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 == 0) {
            return plVar11;
          }
          plVar7 = (long *)(lVar8 + -0x28);
          FUN_01e176c0(&local_40,plVar7);
          if (local_40 != (long *)0x0) {
            FUN_01e1771c(local_50);
            FUN_01e1787c(plVar11,local_50);
            if (local_50[0] != (undefined8 *)0x0) {
              psVar1 = (short *)(local_50[0] + 3);
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
                piVar2 = (int *)((long)local_50[0] + 0x1c);
                do {
                  iVar6 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar6 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar9 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar9;
                  local_38 = *local_50[0];
                  FUN_00c44438(lVar9 + 0x8040,&local_38);
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
            if (local_40 != (long *)0x0) {
              lVar9 = local_40[6];
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
                (**(code **)(*local_40 + 0x50))();
              }
              else if (sVar10 == 0) goto LAB_01e17588;
            }
          }
          lVar8 = *(long *)(lVar8 + 0x70);
          psVar1 = (short *)(lVar8 + 0x1a);
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
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar7 + 0x50))(plVar7);
            return plVar11;
          }
          if (sVar10 != 0) {
            return plVar11;
          }
LAB_01e17588:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
    }
  }
  return plVar11;
}


