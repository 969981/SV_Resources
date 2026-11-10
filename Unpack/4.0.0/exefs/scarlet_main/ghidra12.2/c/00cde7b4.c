/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cde7b4; name: FUN_00cde7b4
 */


void FUN_00cde7b4(long *param_1,long *param_2)

{
  long *__s;
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long local_48;
  long local_28;
  
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
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar7 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_LAB_045d5ac8;
  param_1[1] = lVar7;
  param_1[4] = (long)&PTR_LAB_045d5b50;
  param_1[6] = 0;
  FUN_00cdea90(param_1 + 8);
  __s = param_1 + 0x14;
  memset(__s,0,0x4c);
  *(undefined8 *)((long)param_1 + 0xec) = 0xbf800000;
  local_28 = *param_2;
  FUN_00cdeacc(&local_48,local_28,&local_28);
  local_28 = param_1[6];
  param_1[6] = 0;
  FUN_00cdea24(&local_28);
  lVar6 = local_48;
  local_48 = 0;
  param_1[6] = lVar6;
  FUN_00cdea24(&local_48);
  plVar8 = *(long **)(*param_2 + 0xb0);
  if (plVar8 == (long *)0x0) {
    FUN_0167119c(0,__s,param_1 + 0x15,0);
    lVar6 = param_1[6];
    FUN_00c41540(lVar6);
    FUN_00cdeccc(lVar6 + 0x7c);
    return;
  }
  plVar1 = plVar8 + 5;
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)lVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  FUN_0167119c(plVar8,__s,param_1 + 0x15,0);
  lVar6 = param_1[6];
  FUN_00c41540(lVar6);
  FUN_00cdeccc(lVar6 + 0x7c);
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
                    /* WARNING: Could not recover jumptable at 0x00cde96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x10))(plVar8);
    return;
  }
  if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


