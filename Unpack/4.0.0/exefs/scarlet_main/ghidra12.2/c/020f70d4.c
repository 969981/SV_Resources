/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020f70d4; name: FUN_020f70d4
 */


void FUN_020f70d4(long *param_1,long param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  
  if (param_3 < 5) {
    local_3c = 0xd;
    lVar5 = FUN_00ea5b00(auStack_38,*(undefined8 *)(param_2 + 8),&local_3c);
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x28);
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
    FUN_019202d0(lVar5,*(long *)(param_2 + 0x40) + (ulong)param_3 * 0x844);
    *param_1 = lVar5;
  }
  else {
    *param_1 = 0;
  }
  return;
}


