/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0255ce28; name: FUN_0255ce28
 */


void FUN_0255ce28(byte *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  short sVar8;
  long *plVar9;
  long *local_30;
  undefined4 local_28;
  undefined1 auStack_24 [4];
  
  if (3 < *param_1) {
    return;
  }
  lVar5 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) != 0) {
      plVar9 = (long *)(*(long *)(param_1 + 8) + lVar5);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar9);
      }
      plVar7 = (long *)*param_4;
      *param_4 = 0;
      (*param_2)(plVar9,auStack_24 + 4);
      if (plVar7 != (long *)0x0) {
        lVar5 = plVar7[6];
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))();
        }
        else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    return;
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar9 = (long *)(*(long *)(param_1 + 8) + lVar5);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar9);
      }
      plVar7 = (long *)*param_4;
      *param_4 = 0;
      (*param_2)(plVar9,auStack_24 + 4);
      if (plVar7 != (long *)0x0) {
        lVar5 = plVar7[6];
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))();
        }
        else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    return;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 != 0)) {
      plVar9 = (long *)(lVar6 + lVar5 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar9);
      }
      plVar7 = (long *)*param_4;
      *param_4 = 0;
      (*param_2)(plVar9,auStack_24 + 4);
      if (plVar7 != (long *)0x0) {
        lVar5 = plVar7[6];
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))();
        }
        else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    return;
  }
  lVar5 = *(long *)(param_1 + 8);
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar8 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0255d108;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0255d108:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          plVar9 = (long *)*param_4;
          *param_4 = 0;
          local_28 = *(undefined4 *)(param_4 + 1);
          local_30 = plVar9;
          FUN_0255d1b4(auStack_24 + 0x1c,param_2,param_3,&local_30);
          if (plVar9 != (long *)0x0) {
            lVar5 = plVar9[6];
            psVar1 = (short *)(lVar5 + 0x1a);
            do {
              sVar8 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar8 == 1) {
              *(undefined8 *)(lVar5 + 0x10) = 0;
              (**(code **)(*plVar9 + 0x50))(plVar9);
            }
            else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
        }
        break;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  FUN_02556068(auStack_24 + 0x1c);
  return;
}


