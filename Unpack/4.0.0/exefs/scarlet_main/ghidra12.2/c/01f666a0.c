/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f666a0; name: FUN_01f666a0
 */


void FUN_01f666a0(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  long lVar6;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    return;
  }
  sVar5 = FUN_00cf44f4(*(undefined8 *)(*param_2 + 0x70));
  if ((sVar5 == 0x3e6) || (sVar5 = FUN_00cf44f4(*(undefined8 *)(*param_2 + 0x70)), sVar5 == 999)) {
    FUN_01dbffa8(*param_2,0);
  }
  lVar6 = *param_2;
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
  return;
}


