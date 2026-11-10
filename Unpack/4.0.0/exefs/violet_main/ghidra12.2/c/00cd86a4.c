/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cd86a4; name: FUN_00cd86a4
 */


void FUN_00cd86a4(long *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *local_40;
  undefined8 local_38;
  
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
  *param_1 = (long)&PTR_LAB_045d5c38;
  param_1[1] = lVar7;
  param_1[4] = (long)&PTR_LAB_045d5c80;
  param_1[7] = 0;
  param_1[6] = 0;
  local_38 = *param_2;
  FUN_00cd882c(&local_40,local_38,&local_38);
  FUN_00cd896c(param_1 + 6,&local_40);
  if (local_40 != (long *)0x0) {
    plVar1 = local_40 + 5;
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
      (**(code **)(*local_40 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  param_1[7] = param_3;
  lVar6 = param_1[6];
  FUN_00c41540(lVar6);
  FUN_00cd88ec(lVar6 + 0x7c);
  return;
}


