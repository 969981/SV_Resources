/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d63cc; name: FUN_029d63cc
 */


void FUN_029d63cc(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = (long)&PTR_FUN_04608648;
  param_1[4] = (long)&PTR_LAB_046086e0;
  param_1[5] = (long)&DAT_04608730;
  FUN_00ca246c(param_1 + 0x54);
  FUN_00e87298(param_1 + 0x4c);
  FUN_00ca246c(param_1 + 0x44);
  plVar6 = (long *)param_1[0x43];
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[6];
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
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar5 = PTR_DAT_047d9260;
  *param_1 = (long)(PTR_DAT_047d9260 + 0x10);
  param_1[4] = (long)(puVar5 + 0xa8);
  param_1[5] = (long)(puVar5 + 0xf8);
  FUN_029d64ac(param_1 + 0x3e,0);
  FUN_00db9ce0(param_1);
  return;
}


