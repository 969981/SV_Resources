/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018beea4; name: FUN_018beea4
 */


void FUN_018beea4(char *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  short sVar9;
  long *plVar10;
  undefined8 local_28;
  
  cVar2 = *param_1;
  if (cVar2 != '\x03') {
    lVar6 = (long)param_3 >> 1;
    if (cVar2 == '\x02') {
      if ((*(long *)(param_1 + 8) != 0) &&
         (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 != 0)) {
        plVar10 = (long *)(lVar7 + lVar6 + -0x28);
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar10);
        }
        plVar8 = (long *)*param_4;
        *param_4 = 0;
        (*param_2)(plVar10,(long)register0x00000008 + -0x18);
        if (plVar8 != (long *)0x0) {
          plVar10 = plVar8 + 5;
          do {
            lVar6 = *plVar10;
            iVar5 = (int)lVar6 + -1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *(int *)plVar10 = iVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
          else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
      return;
    }
    if (cVar2 == '\x01') {
      if (*(long *)(param_1 + 8) != 0) {
        plVar10 = (long *)(*(long *)(param_1 + 8) + lVar6);
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar10);
        }
        plVar8 = (long *)*param_4;
        *param_4 = 0;
        (*param_2)(plVar10,(long)register0x00000008 + -0x18);
        if (plVar8 != (long *)0x0) {
          plVar10 = plVar8 + 5;
          do {
            lVar6 = *plVar10;
            iVar5 = (int)lVar6 + -1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *(int *)plVar10 = iVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
          else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
      return;
    }
    if (cVar2 != '\0') {
      return;
    }
    if (*(long *)(param_1 + 8) != 0) {
      plVar10 = (long *)(*(long *)(param_1 + 8) + lVar6);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar10);
      }
      plVar8 = (long *)*param_4;
      *param_4 = 0;
      (*param_2)(plVar10,(long)register0x00000008 + -0x18);
      if (plVar8 != (long *)0x0) {
        plVar10 = plVar8 + 5;
        do {
          lVar6 = *plVar10;
          iVar5 = (int)lVar6 + -1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *(int *)plVar10 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    return;
  }
  lVar6 = *(long *)(param_1 + 8);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_018bef44;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_018bef44:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        plVar10 = (long *)*param_4;
        *param_4 = 0;
        local_28 = plVar10;
        FUN_026c81b4((long)register0x00000008 + -8,param_2,param_3,&local_28);
        if (plVar10 != (long *)0x0) {
          plVar8 = plVar10 + 5;
          do {
            lVar7 = *plVar8;
            iVar5 = (int)lVar7 + -1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *(int *)plVar8 = iVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
          else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        if ((long *)(lVar6 + -0x28) == (long *)0x0) {
          return;
        }
        lVar7 = *(long *)(lVar6 + 8);
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar9 = *psVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*(long *)(lVar6 + -0x28) + 0x50))();
          return;
        }
        if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


