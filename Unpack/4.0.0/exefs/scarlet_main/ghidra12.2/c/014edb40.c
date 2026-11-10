/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014edb40; name: FUN_014edb40
 */


void FUN_014edb40(long *param_1,long *param_2,long *param_3,undefined4 param_4,undefined4 param_5,
                 byte param_6)

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
  undefined4 local_68;
  undefined4 uStack_64;
  byte local_60;
  
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
    if (iVar2 == -1) goto LAB_014edc2c;
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
    if (iVar2 == -1) goto LAB_014edc2c;
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
LAB_014edc2c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_60 = param_6 & 1;
  local_a0 = &LAB_019e90a4;
  local_98 = FUN_02a43198;
  local_90 = FUN_02a43284;
  puStack_88 = &LAB_02a43344;
  local_68 = param_4;
  uStack_64 = param_5;
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


