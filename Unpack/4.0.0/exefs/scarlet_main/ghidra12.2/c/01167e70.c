/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01167e70; name: FUN_01167e70
 */


void FUN_01167e70(long *param_1,int param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined1 auVar10 [16];
  long local_60 [2];
  undefined4 local_50;
  undefined4 uStack_4c;
  ulong local_48;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  
  puVar5 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar9 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  auVar10 = NEON_fmov(0x3f800000,4);
  *param_1 = (long)&PTR_LAB_0459d480;
  param_1[1] = lVar9;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[4] = (long)&PTR_LAB_0459d4d8;
  param_1[6] = (long)&PTR_LAB_0459d508;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(int *)(param_1 + 0x24) = param_2;
  *(int *)((long)param_1 + 0x124) = param_2;
  param_1[0x21] = auVar10._8_8_;
  param_1[0x20] = auVar10._0_8_;
  param_1[0x23] = auVar10._8_8_;
  param_1[0x22] = auVar10._0_8_;
  memset(param_1 + 0x26,0,0x41);
  *(undefined8 *)((long)param_1 + 0x174) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x36) = 1;
  param_1[0x37] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)((long)param_1 + 0x1cc) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x38,0,1);
  param_1[0x3a] = 0;
  param_1[0x3b] = -1;
  local_48 = (ulong)(uint)(param_2 * param_2);
  *(undefined1 *)(param_1 + 0x3c) = 0;
  local_60[0] = *param_3;
  local_3c = 2;
  local_60[1] = 0;
  local_50 = 0;
  uStack_4c = 0x100;
  lVar7 = FUN_011680e8(auStack_38,*(undefined8 *)(local_60[0] + 8),local_60,&local_3c,&local_48,
                       &uStack_4c,&local_50,local_60 + 1);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar8 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 5;
    do {
      lVar9 = *plVar2;
      iVar6 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  param_1[7] = lVar7;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  memcpy((void *)((long)param_1 + 0x54),&DAT_03d62078,0x80);
  return;
}


