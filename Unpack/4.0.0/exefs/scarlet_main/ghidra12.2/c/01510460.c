/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01510460; name: FUN_01510460
 */


void FUN_01510460(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *local_18;
  
  puVar4 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  puVar4 = PTR_DAT_047d8c78;
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar8 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar8;
  param_1[4] = (long)(puVar4 + 0x88);
  plVar9 = param_1 + 5;
  *plVar9 = (long)(puVar4 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar9);
  plVar10 = param_1 + 8;
  *plVar10 = 0;
  *param_1 = (long)&PTR_FUN_0459c218;
  param_1[4] = (long)&PTR_LAB_0459c290;
  *plVar9 = (long)&DAT_0459c2e0;
  plVar9 = param_1 + 9;
  FUN_01510ab4(plVar9);
  FUN_0151073c(param_1 + 0x80);
  FUN_015106bc(param_1 + 0x9c);
  FUN_015106fc(param_1 + 0xa9);
  param_1[0xb6] = 0;
  *(undefined4 *)((long)param_1 + 0x5c4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0xb7,0,1);
  FUN_0150fff4(&local_18);
  FUN_0145dfc8(plVar10,&local_18);
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 5;
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  uVar7 = FUN_015106a8(plVar10);
  FUN_01511398(0,plVar9,uVar7,0x400,0,0,0,0);
  FUN_01510f5c(plVar9,&LAB_013e9174,param_1);
  puVar4 = PTR_DAT_047d2430;
  *(undefined1 **)PTR_DAT_047d2420 = &LAB_01193d7c;
  *(code **)puVar4 = FUN_0216d0a0;
  *(long **)PTR_DAT_047d2428 = param_1;
  return;
}


