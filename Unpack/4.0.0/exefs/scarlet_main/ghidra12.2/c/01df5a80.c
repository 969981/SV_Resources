/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df5a80; name: FUN_01df5a80
 */


void FUN_01df5a80(long param_1,undefined8 param_2,char *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  size_t sVar5;
  long lVar6;
  long *local_68 [4];
  long *local_48;
  long *local_38;
  undefined8 local_18;
  
  local_18 = param_2;
  sVar5 = strlen(param_3);
  local_38 = (long *)0x0;
  FUN_01df5b88(local_68,&local_18);
  FUN_01dbe9e0(&local_38,local_68,*(undefined8 *)(param_1 + 8));
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68[0] != (long *)0x0) {
    (**(code **)(*local_68[0] + 0x20))();
  }
  FUN_01761c28(local_38,param_3,sVar5);
  if (local_38 != (long *)0x0) {
    lVar6 = local_38[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


