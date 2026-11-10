/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0141b50c; name: FUN_0141b50c
 */


void FUN_0141b50c(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_28;
  undefined1 auStack_8 [8];
  
  if ((*PTR_DAT_047d4df8 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_047d4df8);
    if (iVar5 != 0) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
  }
  uVar6 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar6;
  FUN_00f7170c(&local_28,uVar6,param_2,param_2 + 0x20);
  if (local_28 != (long *)0x0) {
    lVar7 = FUN_010e1344(local_28 + 0x21,auStack_8);
    if (lVar7 != 0) {
      iVar5 = *(int *)*param_1;
      if (*(int *)(lVar7 + 0x140) != 1) {
        iVar5 = iVar5 + 1;
      }
      *(int *)*param_1 = iVar5;
      *(int *)param_1[1] = *(int *)param_1[1] + 1;
    }
    if (local_28 != (long *)0x0) {
      lVar7 = local_28[6];
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


