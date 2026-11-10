/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016fabbc; name: FUN_016fabbc
 */


void FUN_016fabbc(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  short *psVar1;
  undefined *puVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined4 local_2c;
  long *local_28;
  undefined8 local_8;
  
  puVar2 = PTR_LAB_047d5ab0;
  if (DAT_04810f00 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  local_2c = param_3;
  FUN_016fac94(&local_28,param_2,puVar2,0,&local_2c);
  FUN_016facd0(&local_8,&local_28);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = local_8;
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


