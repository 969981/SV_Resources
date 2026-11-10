/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a42a10; name: FUN_02a42a10
 */


void FUN_02a42a10(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined1 *local_a0;
  code *local_98;
  code *local_90;
  undefined1 *puStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  
  local_80 = *param_1;
  if (local_80 != 0) {
    piVar1 = (int *)(local_80 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == -1) goto LAB_02a42af0;
  }
  lStack_78 = *param_2;
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == -1) goto LAB_02a42af0;
  }
  local_70 = *param_3;
  if (local_70 != 0) {
    piVar1 = (int *)(local_70 + 0x28);
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
LAB_02a42af0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_a0 = &LAB_02a439e4;
  local_98 = FUN_02a43c10;
  local_90 = FUN_02a43cf4;
  puStack_88 = &LAB_02a43da4;
  FUN_014edc60(&local_a0);
  pcVar5 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (code *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar5)(&local_80);
  }
  return;
}


