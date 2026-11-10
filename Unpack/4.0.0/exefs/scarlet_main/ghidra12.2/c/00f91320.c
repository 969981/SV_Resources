/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f91320; name: FUN_00f91320
 */


void FUN_00f91320(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_38 [2];
  long *local_28;
  
  if ((*PTR_DAT_047d8c40 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_047d8c40);
    if (iVar6 != 0) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
  }
  uVar7 = *(undefined8 *)PTR_DAT_047d8c48;
  *(undefined8 *)PTR_DAT_047d8c50 = uVar7;
  FUN_00f9649c(&local_28,uVar7,param_2,param_3);
  plVar1 = (long *)(param_1 + 8);
  FUN_00f91474(plVar1,&local_28);
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (*plVar1 != 0) {
    FUN_00f916e8(local_38,plVar1);
    FUN_00cfe35c(local_38[0],param_1 + 0x18,1);
    FUN_00d1f59c(local_38[0]);
    FUN_00f914c8(local_38);
  }
  return;
}


