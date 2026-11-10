/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a52134; name: FUN_01a52134
 */


void FUN_01a52134(long *param_1,byte param_2)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  long *plVar14;
  
  lVar11 = *param_1;
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar12 = *(short *)(lVar11 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar12) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01a5219c;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a5219c:
        bVar6 = false;
      }
      if (bVar6) {
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 == 0) {
          return;
        }
        plVar14 = (long *)(lVar11 + -0x28);
        puVar9 = (undefined8 *)FUN_01a52324(plVar14);
        plVar13 = (long *)*puVar9;
        if (plVar13 != (long *)0x0) {
          plVar2 = plVar13 + 5;
          do {
            lVar8 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = (int)lVar8 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((int)lVar8 == -1) {
LAB_01a522d4:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          plVar10 = (long *)plVar13[6];
          if (plVar10 != (long *)0x0) {
            plVar3 = plVar10 + 5;
            do {
              lVar8 = *plVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *(int *)plVar3 = (int)lVar8 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((int)lVar8 == -1) goto LAB_01a522d4;
            *(byte *)(plVar10 + 0x3c) = param_2 & 1;
            do {
              lVar8 = *plVar3;
              iVar7 = (int)lVar8 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *(int *)plVar3 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar10 + 0x10))();
            }
            else if ((int)lVar8 == 0) goto LAB_01a522fc;
          }
          do {
            lVar8 = *plVar2;
            iVar7 = (int)lVar8 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
          else if ((int)lVar8 == 0) {
LAB_01a522fc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        lVar11 = *(long *)(lVar11 + 0x70);
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01a522d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar14 + 0x50))(plVar14);
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
      sVar12 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


