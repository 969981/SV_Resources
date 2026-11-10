/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01858c9c; name: FUN_01858c9c
 */


void FUN_01858c9c(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_30 [2];
  
  FUN_01858e60(local_30,*(undefined8 *)(param_1 + 8));
  plVar5 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[6];
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
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_01858dfc;
  }
  *(undefined8 *)(param_1 + 0x30) = local_30[0];
  FUN_0185ba04();
  FUN_01859784(local_30,*(undefined8 *)(param_1 + 0x30));
  FUN_0185a72c(param_1 + 0x38,local_30);
  FUN_018590ac(local_30);
  FUN_01858f24(local_30,*(undefined8 *)(param_1 + 8));
  plVar5 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[6];
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
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_01858dfc;
  }
  *(undefined8 *)(param_1 + 0x48) = local_30[0];
  FUN_01859b98();
  FUN_018598e0(local_30,*(undefined8 *)(param_1 + 0x48));
  FUN_0185aa50(param_1 + 0x50,local_30);
  FUN_018591bc(local_30);
  FUN_01858fe8(local_30,*(undefined8 *)(param_1 + 8));
  plVar5 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[6];
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
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_01858dfc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(param_1 + 0x60) = local_30[0];
  FUN_0185bd5c();
  FUN_01859a3c(local_30,*(undefined8 *)(param_1 + 0x60));
  FUN_0185ad74(param_1 + 0x68,local_30);
  FUN_018592cc(local_30);
  return;
}


