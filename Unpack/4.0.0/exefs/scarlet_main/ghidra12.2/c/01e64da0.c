/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e64da0; name: FUN_01e64da0
 */


void FUN_01e64da0(long *param_1,long param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_848 [2072];
  undefined1 auStack_18 [8];
  
  lVar5 = *param_3;
  if (*(long *)(param_2 + 0xd8) == lVar5) {
    lVar6 = 0;
  }
  else if (*(long *)(param_2 + 0xa20) == lVar5) {
    lVar6 = 1;
  }
  else if (*(long *)(param_2 + 0x1368) == lVar5) {
    lVar6 = 2;
  }
  else {
    lVar6 = 3;
    if (*(long *)(param_2 + 0x1cb0) != lVar5) {
      lVar6 = 4;
    }
  }
  memcpy(auStack_848,(void *)(param_2 + lVar6 * 0x948 + 0xe0),0x814);
  lVar6 = FUN_0167513c(auStack_18,*(undefined8 *)(param_2 + 8));
  *param_1 = lVar6;
  lVar5 = 0;
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
    lVar5 = *param_1;
  }
  FUN_018e9224(lVar5,auStack_848);
  return;
}


