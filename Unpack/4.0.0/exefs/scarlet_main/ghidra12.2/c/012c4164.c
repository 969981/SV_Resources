/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c4164; name: FUN_012c4164
 */


void FUN_012c4164(undefined8 *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_012c45e8();
  *param_1 = &PTR_FUN_0460ca20;
  param_1[4] = &PTR_LAB_0460ca50;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar5 = PTR_DAT_047d8c00;
  param_1[8] = 0;
  param_1[9] = 0;
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar10 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar10;
  FUN_012c4440(&local_50,param_1[1]);
  uVar9 = local_50;
  local_50 = 0;
  lVar8 = param_1[5];
  param_1[5] = uVar9;
  if (lVar8 == 0) {
    param_1[7] = uStack_40;
    param_1[8] = local_38;
    param_1[6] = local_48;
  }
  else {
    FUN_022b0988(param_1 + 6);
    param_1[7] = uStack_40;
    param_1[8] = local_38;
    param_1[6] = local_48;
    uVar9 = param_1[5];
  }
  local_50 = 0;
  local_58 = *(long *)(lVar10 + 0xc0);
  if (local_58 != 0) {
    FUN_012dcb00();
  }
  iVar6 = (**(code **)(**(long **)(lVar10 + 200) + 0x50))();
  FUN_012c7b08(uVar9,param_2,&local_58,iVar6 + 1);
  if (local_58 != 0) {
    FUN_012c4338();
  }
  local_60 = param_1;
  FUN_012c4368(&local_50,param_2,&local_60);
  plVar7 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[6];
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
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[9] = local_50;
  return;
}


