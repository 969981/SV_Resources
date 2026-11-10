/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aee650; name: FUN_01aee650
 */


uint FUN_01aee650(char *param_1,code *param_2,ulong param_3,undefined8 *param_4,undefined4 *param_5)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long *local_8;
  
  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 8) == 0) {
      uVar6 = 0;
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar2);
      }
      local_8 = (long *)*param_4;
      *param_4 = 0;
      uVar6 = (*param_2)(plVar2,&local_8,*param_5);
      if (local_8 != (long *)0x0) {
        lVar7 = local_8[6];
        psVar1 = (short *)(lVar7 + 0x1a);
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
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*local_8 + 0x50))();
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    return uVar6 & 1;
  }
  if (*param_1 != '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 8) == 0) {
    uVar6 = 0;
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar2);
    }
    local_8 = (long *)*param_4;
    *param_4 = 0;
    uVar6 = (*param_2)(plVar2,&local_8,*param_5);
    if (local_8 != (long *)0x0) {
      lVar7 = local_8[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_8 + 0x50))();
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return uVar6 & 1;
}


