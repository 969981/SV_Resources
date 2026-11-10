/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cca2c8; name: FUN_00cca2c8
 */


void FUN_00cca2c8(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long local_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  param_1[2] = 0;
  puVar4 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045d2960;
  param_1[1] = lVar6;
  param_1[4] = (long)&PTR_LAB_045d2998;
  lVar7 = *param_2;
  param_1[6] = lVar7;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar6 = param_1[1];
  }
  memset(param_1 + 7,0,0x50);
  FUN_00cca4c0(&local_50,lVar6,param_2);
  lVar6 = local_50;
  local_50 = 0;
  lVar7 = param_1[7];
  param_1[7] = lVar6;
  if (lVar7 != 0) {
    FUN_02716a24(param_1 + 8);
  }
  param_1[9] = lStack_40;
  param_1[10] = local_38;
  param_1[8] = local_48;
  FUN_00cca6c0(&local_50,param_1[1],param_2);
  lVar6 = local_50;
  local_50 = 0;
  lVar7 = param_1[0xb];
  param_1[0xb] = lVar6;
  if (lVar7 != 0) {
    FUN_02716e34(param_1 + 0xc);
  }
  param_1[0xd] = lStack_40;
  param_1[0xe] = local_38;
  param_1[0xc] = local_48;
  return;
}


