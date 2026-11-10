/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012b3df8; name: FUN_012b3df8
 */


void FUN_012b3df8(long param_1,undefined4 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *local_38;
  
  *(undefined4 *)(param_1 + 0x4c) = *param_2;
  puVar5 = PTR_DAT_047d8c58;
  if (((*PTR_DAT_047d8c58 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  puVar7 = PTR_DAT_047d8c68;
  puVar6 = PTR_DAT_047d8c60;
  uVar9 = *(undefined8 *)PTR_DAT_047d8c60;
  *(undefined8 *)PTR_DAT_047d8c68 = uVar9;
  FUN_00f8b03c(&local_38,uVar9,*(undefined8 *)(param_1 + 8));
  FUN_012b3fbc(param_1 + 0x118,&local_38);
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[6];
    psVar1 = (short *)(lVar10 + 0x1a);
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
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_012b3f94;
  }
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  uVar9 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar9;
  FUN_00f8b03c(&local_38,uVar9,*(undefined8 *)(param_1 + 8));
  FUN_012b3fbc(param_1 + 0x120,&local_38);
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[6];
    psVar1 = (short *)(lVar10 + 0x1a);
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
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_012b3f94:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_012b73b0(param_1);
  return;
}


