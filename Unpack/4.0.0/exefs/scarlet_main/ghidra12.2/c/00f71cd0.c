/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f71cd0; name: FUN_00f71cd0
 */


void FUN_00f71cd0(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_28;
  undefined1 auStack_8 [8];
  
  if ((*PTR_DAT_047d4df8 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_047d4df8);
    if (iVar6 != 0) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
  }
  uVar7 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar7;
  FUN_00f7170c(&local_28,uVar7,param_2,param_2 + 0x20);
  if (local_28 != (long *)0x0) {
    lVar8 = FUN_010e1344(local_28 + 0x21,auStack_8);
    if (lVar8 != 0) {
      uVar5 = FUN_02168c80();
      *(int *)*param_1 = *(int *)*param_1 + (uVar5 & 1);
      *(int *)param_1[1] = *(int *)param_1[1] + 1;
    }
    if (local_28 != (long *)0x0) {
      lVar8 = local_28[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_28 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


