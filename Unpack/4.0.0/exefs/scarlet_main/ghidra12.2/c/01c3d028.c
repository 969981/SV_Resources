/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c3d028; name: FUN_01c3d028
 */


void FUN_01c3d028(undefined8 *param_1,char param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_228;
  undefined1 auStack_220 [512];
  
  if (DAT_048392f8 == 0) {
    *param_1 = 0;
  }
  else {
    if ((byte)(param_2 - 1U) < 10) {
      lVar6 = *(long *)(&DAT_03d5b6f0 + (long)(char)(param_2 - 1U) * 8);
    }
    else {
      lVar6 = 1;
    }
    memcpy(auStack_220,(void *)(DAT_048392f8 + lVar6 * 0x200 + 4),0x200);
    uVar5 = FUN_0126a9c0();
    FUN_01e93784(&local_228,uVar5,auStack_220);
    *param_1 = local_228;
    if (local_228 != (long *)0x0) {
      plVar1 = local_228 + 5;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      if (local_228 != (long *)0x0) {
        plVar1 = local_228 + 5;
        do {
          lVar6 = *plVar1;
          iVar4 = (int)lVar6 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_228 + 0x10))();
        }
        else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
  }
  return;
}


