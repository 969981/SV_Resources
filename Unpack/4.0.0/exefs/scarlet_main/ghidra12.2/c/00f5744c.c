/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f5744c; name: FUN_00f5744c
 */


bool FUN_00f5744c(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  long *local_30;
  long *local_28;
  
  FUN_00ca03fc(&local_28);
  if (local_28 == (long *)0x0) {
    bVar5 = true;
LAB_00f57490:
    FUN_01f86a40(&local_30,param_1);
    if (local_30 == (long *)0x0) {
      bVar6 = true;
    }
    else {
      bVar6 = *(char *)(local_30[0xb] + 0x164) != '\0';
      lVar7 = local_30[6];
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
        (**(code **)(*local_30 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_00f5754c;
    }
    bVar5 = (bool)(bVar5 & bVar6);
    if (local_28 == (long *)0x0) {
      return bVar5;
    }
  }
  else {
    bVar5 = *(char *)(local_28[0xb] + 0x33) != '\0';
    if (*(char *)(local_28[0xb] + 0x35) == '\0') goto LAB_00f57490;
  }
  lVar7 = local_28[6];
  psVar1 = (short *)(lVar7 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 1) {
    *(undefined8 *)(lVar7 + 0x10) = 0;
    (**(code **)(*local_28 + 0x50))();
  }
  else if (sVar2 == 0) {
LAB_00f5754c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return bVar5;
}


