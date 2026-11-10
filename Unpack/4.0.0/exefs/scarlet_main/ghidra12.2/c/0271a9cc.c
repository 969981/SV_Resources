/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0271a9cc; name: FUN_0271a9cc
 */


void FUN_0271a9cc(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = (long)&PTR_FUN_045d2f98;
  param_1[4] = (long)&PTR_LAB_045d2fd8;
  lVar6 = nn::util::BinaryFileHeader::GetFirstBlock();
  if (0 < *(int *)(lVar6 + 0x1c)) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      FUN_0271ab74(*(undefined8 *)
                    (*(long *)(*(long *)(lVar6 + 0x20) + (&DAT_045d2f68)[*(byte *)(lVar6 + 0x14)] +
                              lVar8) + 0x68),&DAT_00003010 + *(long *)(param_1[10] + 0x30));
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x40;
    } while (lVar9 < *(int *)(lVar6 + 0x1c));
  }
  FUN_0271ab30(lVar6,&DAT_00003010 + *(long *)(param_1[10] + 0x30));
  plVar7 = (long *)param_1[10];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar2 = PTR_DAT_047dd2c8 + 0x50;
  *param_1 = (long)(PTR_DAT_047dd2c8 + 0x10);
  param_1[4] = (long)puVar2;
  FUN_0271a92c(param_1 + 6,0);
  puVar2 = PTR_DAT_047dcf30 + 0x50;
  *param_1 = (long)(PTR_DAT_047dcf30 + 0x10);
  param_1[4] = (long)puVar2;
                    /* WARNING: Could not recover jumptable at 0x0271aaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0xd0))();
  return;
}


