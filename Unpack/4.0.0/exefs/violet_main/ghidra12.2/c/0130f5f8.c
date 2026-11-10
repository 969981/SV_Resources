/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0130f5f8; name: FUN_0130f5f8
 */


void FUN_0130f5f8(long param_1,long *param_2,long *param_3,uint param_4,undefined2 param_5,
                 undefined8 param_6,undefined4 param_7)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_81;
  undefined4 local_80;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar7 = (**(code **)(*param_2 + 0x10))(param_2,0x90,8);
  if (lVar7 == 0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_0130fa48();
  *(undefined4 *)(lVar7 + 0x18) = 0x80090;
  *(long **)(lVar7 + 8) = param_2;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  piVar1 = (int *)(lVar7 + 0x28);
  do {
    iVar5 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  lVar6 = param_1 + 0xf0;
  lVar8 = FUN_00c822f8(lVar6,param_6);
  if (4 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_022518a0();
  }
  lVar11 = (long)(int)param_4;
  plVar9 = *(long **)(lVar8 + lVar11 * 8);
  *(undefined8 *)(lVar8 + lVar11 * 8) = 0;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
    do {
      lVar10 = *plVar2;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(long *)(lVar8 + lVar11 * 8) = lVar7;
  lVar7 = FUN_00c822f8(lVar6,param_6);
  lVar8 = *(long *)(lVar7 + lVar11 * 8);
  lVar7 = *param_3;
  if (lVar7 != 0) {
    plVar9 = (long *)(lVar7 + 0x20);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  lVar10 = *(long *)(lVar8 + 0x38);
  *(long *)(lVar8 + 0x38) = lVar7;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x20) + 0x18))();
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x20) + 0x18))((long *)(lVar7 + 0x20));
  }
  lVar7 = FUN_00c822f8(lVar6,param_6);
  lVar7 = *(long *)(lVar7 + lVar11 * 8);
  FUN_0130f944(&local_90);
  local_90 = *(long *)(lVar7 + 0x38) + 95000;
  local_81 = 1;
  local_80 = 0x3f;
  local_88 = param_7;
  local_84 = param_5;
  FUN_0130f95c(lVar7 + 0x40,&local_90);
  lVar6 = FUN_00c822f8(lVar6,param_6);
  plVar9 = (long *)(*(long *)(lVar6 + lVar11 * 8) + 0x40);
  iVar5 = (**(code **)(*plVar9 + 0x20))(plVar9);
  lVar6 = FUN_00f38594(param_1 + 0x158,param_6);
  *(float *)(lVar6 + lVar11 * 8) = (float)iVar5;
  iVar5 = (**(code **)(*plVar9 + 0x28))(plVar9);
  lVar6 = FUN_00f38594(param_1 + 0x158,param_6);
  *(float *)(lVar6 + lVar11 * 8 + 4) = (float)iVar5;
  return;
}


