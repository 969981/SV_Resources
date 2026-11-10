/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02af64a4; name: FUN_02af64a4
 */


void FUN_02af64a4(long *param_1,long param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_80 [56];
  undefined1 auStack_48 [40];
  
  if (param_3 < 0x14) {
    lVar6 = *(long *)(param_2 + (ulong)param_3 * 0x80);
    *param_1 = lVar6;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x28);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    param_2 = param_2 + (ulong)param_3 * 0x80;
    memcpy(param_1 + 2,(void *)(param_2 + 0x10),0x24);
    plVar5 = *(long **)(param_2 + 0x38);
    param_1[7] = (long)plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    memcpy(param_1 + 8,(void *)(param_2 + 0x40),0x34);
  }
  else {
    *param_1 = 0;
    memcpy(param_1 + 2,auStack_48,0x24);
    param_1[7] = 0;
    memcpy(param_1 + 8,auStack_80,0x30);
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  return;
}


