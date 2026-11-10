/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ad85c; name: FUN_029ad85c
 */


void FUN_029ad85c(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long local_38;
  undefined8 local_18;
  
  uVar5 = FUN_00e31554();
  FUN_029adaf0(param_1 + 0x60,uVar5);
  FUN_029adcac(param_1,param_2);
  FUN_029ae304(param_1);
  lVar6 = FUN_029ae698(*(undefined8 *)(param_2 + 0x58));
  local_38 = lVar6;
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
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_18 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_029adc40(&local_18);
  local_38 = 0;
  *(long *)(param_1 + 0x68) = lVar6;
  FUN_029adc40(&local_38);
  FUN_029ae7d0(*(undefined8 *)(param_1 + 0x68));
  return;
}


