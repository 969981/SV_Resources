/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d132d4; name: FUN_01d132d4
 */


void FUN_01d132d4(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_047cfbf8 + 0x10);
  FUN_01cfa5b0(param_1 + 1,param_2 + 8);
  FUN_01cfa5b0(param_1 + 5,param_2 + 0x28);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  FUN_01cfa5b0(param_1 + 10,param_2 + 0x50);
  FUN_01cfa5b0(param_1 + 0xe,param_2 + 0x70);
  FUN_01cfa5b0(param_1 + 0x12,param_2 + 0x90);
  memcpy(param_1 + 0x16,(void *)(param_2 + 0xb0),100);
  lVar5 = *(long *)(param_2 + 0x118);
  param_1[0x23] = lVar5;
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
    if (iVar2 == -1) goto LAB_01d133b8;
  }
  memcpy(param_1 + 0x24,(void *)(param_2 + 0x120),0x102);
  lVar5 = *(long *)(param_2 + 0x228);
  param_1[0x45] = lVar5;
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
LAB_01d133b8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  return;
}


