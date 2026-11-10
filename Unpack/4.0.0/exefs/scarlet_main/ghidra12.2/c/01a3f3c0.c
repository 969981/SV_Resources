/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a3f3c0; name: FUN_01a3f3c0
 */


uint FUN_01a3f3c0(char *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long *local_28;
  undefined8 local_8;
  
  uVar5 = DAT_0481b7d0;
  if ((*param_1 == '\0') || (*param_1 == '\x01')) {
    local_8 = *(undefined8 *)(param_1 + 8);
  }
  else {
    local_8 = 0;
  }
  FUN_00e43628(&local_28,param_2);
  uVar6 = FUN_01a3f4a0(uVar5,&local_8,&local_28);
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return uVar6 & 1;
}


