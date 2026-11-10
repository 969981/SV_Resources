/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01def8a0; name: FUN_01def8a0
 */


void FUN_01def8a0(long *param_1,long *param_2,long *param_3,ulong param_4,long param_5)

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
  ulong uStack_68;
  
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
    if (iVar2 == -1) goto LAB_01def988;
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
    if (iVar2 == -1) goto LAB_01def988;
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
LAB_01def988:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  uStack_68 = param_4 & 0xffffffff | param_5 << 0x20;
  local_a0 = &LAB_01fb5678;
  local_98 = FUN_02a4337c;
  local_90 = FUN_02a43468;
  puStack_88 = &LAB_02a43520;
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


