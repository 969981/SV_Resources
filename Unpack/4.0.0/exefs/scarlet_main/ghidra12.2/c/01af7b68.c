/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01af7b68; name: FUN_01af7b68
 */


void FUN_01af7b68(undefined8 param_1,undefined8 param_2,char *param_3)

{
  short *psVar1;
  undefined *puVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 local_38;
  long *local_18;
  
  puVar2 = PTR_FUN_047d3d78;
  if (DAT_04802198 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  FUN_01af8b1c(&local_18,param_2);
  if ((*param_3 == '\x01') || (local_38 = 0, *param_3 == '\0')) {
    local_38 = *(undefined8 *)(param_3 + 8);
  }
  FUN_01af8c38(param_1,puVar2,0,&local_18,&local_38);
  if (local_18 != (long *)0x0) {
    lVar6 = local_18[6];
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
      (**(code **)(*local_18 + 0x50))();
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


