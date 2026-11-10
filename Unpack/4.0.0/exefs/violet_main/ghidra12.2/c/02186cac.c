/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02186cac; name: FUN_02186cac
 */


void FUN_02186cac(long *param_1)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_38;
  
  lVar10 = *param_1;
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar12 = *(short *)(lVar10 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar12) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_02186d20;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02186d20:
        bVar7 = false;
      }
      if (bVar7) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return;
        }
        plVar15 = (long *)(lVar10 + -0x28);
        puVar9 = (undefined8 *)FUN_01a52324(plVar15);
        plVar13 = (long *)*puVar9;
        if (plVar13 != (long *)0x0) {
          plVar2 = plVar13 + 5;
          do {
            lVar11 = *plVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *(int *)plVar2 = (int)lVar11 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)lVar11 == -1) {
LAB_02186f30:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          plVar14 = (long *)plVar13[6];
          if (plVar14 != (long *)0x0) {
            plVar3 = plVar14 + 5;
            do {
              lVar11 = *plVar3;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar7) {
                *(int *)plVar3 = (int)lVar11 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((int)lVar11 == -1) goto LAB_02186f30;
            if ((plVar14[0x3a] != 0) && (plVar14[0x3b] == -1)) {
              local_60 = (undefined8 *)0x0;
              uStack_58 = 0;
              FUN_01160880(&local_60,param_1);
              FUN_0115e024(plVar14,&local_60);
              puVar9 = local_60;
              if (local_60 != (undefined8 *)0x0) {
                psVar1 = (short *)(local_60 + 3);
                do {
                  sVar12 = *psVar1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar7) {
                    *psVar1 = sVar12 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (sVar12 == 1) {
                  piVar4 = (int *)((long)local_60 + 0x1c);
                  do {
                    iVar8 = *piVar4;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                    if (bVar7) {
                      *piVar4 = -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar8 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar11 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar11;
                    local_38 = *puVar9;
                    FUN_00c44438(lVar11 + 0x8040,&local_38);
                  }
                }
                else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                             ,0x33,"Reference counter underflows.");
                }
              }
            }
            do {
              lVar11 = *plVar3;
              iVar8 = (int)lVar11 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar7) {
                *(int *)plVar3 = iVar8;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar8 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
            else if ((int)lVar11 == 0) goto LAB_02186f58;
          }
          do {
            lVar11 = *plVar2;
            iVar8 = (int)lVar11 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *(int *)plVar2 = iVar8;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
          else if ((int)lVar11 == 0) {
LAB_02186f58:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        lVar10 = *(long *)(lVar10 + 0x70);
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar15 + 0x50))(plVar15);
          return;
        }
        if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar12 = sVar5;
    } while (sVar5 != 0);
  }
  return;
}


