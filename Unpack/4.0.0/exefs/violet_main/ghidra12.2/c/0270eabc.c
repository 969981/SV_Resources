/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270eabc; name: FUN_0270eabc
 */


void FUN_0270eabc(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_045a2138;
  FUN_0270e92c(param_1 + 1,param_2 + 8);
  param_1[9] = &PTR_FUN_045a20f8;
  FUN_0270e92c(param_1 + 10,param_2 + 0x50);
  lVar5 = *(long *)(param_2 + 0x90);
  param_1[0x12] = lVar5;
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
    if (iVar2 == -1) goto LAB_0270ebf8;
  }
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  param_1[0x14] = &PTR_FUN_045a20f8;
  FUN_0270e92c(param_1 + 0x15,param_2 + 0xa8);
  lVar5 = *(long *)(param_2 + 0xe8);
  param_1[0x1d] = lVar5;
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
    if (iVar2 == -1) goto LAB_0270ebf8;
  }
  param_1[0x1e] = *(undefined8 *)(param_2 + 0xf0);
  param_1[0x1f] = &PTR_FUN_045a20f8;
  FUN_0270e92c(param_1 + 0x20,param_2 + 0x100);
  lVar5 = *(long *)(param_2 + 0x140);
  param_1[0x28] = lVar5;
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
    if (iVar2 == -1) goto LAB_0270ebf8;
  }
  param_1[0x29] = *(undefined8 *)(param_2 + 0x148);
  param_1[0x2a] = &PTR_FUN_045a20f8;
  FUN_0270e92c(param_1 + 0x2b,param_2 + 0x158);
  lVar5 = *(long *)(param_2 + 0x198);
  param_1[0x33] = lVar5;
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
LAB_0270ebf8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  param_1[0x34] = *(undefined8 *)(param_2 + 0x1a0);
  return;
}


