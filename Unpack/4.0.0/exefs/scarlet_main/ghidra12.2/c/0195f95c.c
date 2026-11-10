/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0195f95c; name: FUN_0195f95c
 */


void FUN_0195f95c(undefined8 param_1,undefined8 param_2)

{
  short *psVar1;
  undefined1 *puVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *local_8;
  
  puVar2 = &LAB_02b80ab8;
  if (DAT_048463a0 == '\0') {
    puVar2 = (undefined1 *)0x0;
  }
  FUN_0195fa10(&local_8,param_2,puVar2,0);
  FUN_0195fac0(param_1,&local_8);
  if (local_8 != (long *)0x0) {
    lVar6 = local_8[6];
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
      (**(code **)(*local_8 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


