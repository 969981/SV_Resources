/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01af8c38; name: FUN_01af8c38
 */


void FUN_01af8c38(byte *param_1,code *param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *local_48;
  undefined8 local_28;
  
  if (3 < *param_1) {
    return;
  }
  lVar5 = (long)param_3 >> 1;
  switch(*param_1) {
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar8 = (long *)(*(long *)(param_1 + 8) + lVar5);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar8);
      }
      plVar7 = (long *)*param_4;
      *param_4 = 0;
      (*param_2)(plVar8,(long)register0x00000008 + -0x18,*param_5);
      if (plVar7 != (long *)0x0) {
        lVar5 = plVar7[6];
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    return;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 != 0)) {
      plVar8 = (long *)(lVar6 + lVar5 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar8);
      }
      plVar7 = (long *)*param_4;
      *param_4 = 0;
      (*param_2)(plVar8,(long)register0x00000008 + -0x18,*param_5);
      if (plVar7 != (long *)0x0) {
        lVar5 = plVar7[6];
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    return;
  case 3:
    FUN_01af8590(&local_28,param_1 + 8);
    if (local_28 != 0) {
      plVar8 = (long *)*param_4;
      *param_4 = 0;
      local_48 = plVar8;
      FUN_01af8f88(&local_28,param_2,param_3,&local_48,*param_5);
      if (plVar8 != (long *)0x0) {
        lVar5 = plVar8[6];
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))(plVar8);
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    FUN_0169eca0(&local_28);
    return;
  }
  if (*(long *)(param_1 + 8) != 0) {
    plVar8 = (long *)(*(long *)(param_1 + 8) + lVar5);
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar8);
    }
    plVar7 = (long *)*param_4;
    *param_4 = 0;
    (*param_2)(plVar8,(long)register0x00000008 + -0x18,*param_5);
    if (plVar7 != (long *)0x0) {
      lVar5 = plVar7[6];
      psVar1 = (short *)(lVar5 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar5 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


