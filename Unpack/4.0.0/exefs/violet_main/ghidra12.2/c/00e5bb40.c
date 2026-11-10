/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5bb40; name: FUN_00e5bb40
 */


void FUN_00e5bb40(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  param_1[2] = 0;
  puVar5 = PTR_DAT_047d66f8;
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
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_LAB_045d4ec0;
  param_1[1] = lVar9;
  param_1[4] = (long)&PTR_LAB_045d4f70;
  param_1[6] = (long)&PTR_LAB_045d4fa0;
  param_1[7] = 0;
  lVar7 = *param_2;
  plVar10 = *(long **)(lVar7 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x1a0,8);
  if (puVar8 == (undefined8 *)0x0) {
    (**(code **)(*plVar10 + 0xe8))(plVar10);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00cf38a8(puVar8,lVar7);
  puVar8[2] = puVar8;
  *puVar8 = &DAT_045d62e8;
  puVar8[1] = plVar10;
  puVar8[4] = &PTR_LAB_045d6328;
  *(undefined4 *)(puVar8 + 3) = 0x801a0;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  piVar1 = (int *)(puVar8 + 5);
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
               "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  local_48 = 0;
  local_58 = 0x120;
  uStack_50 = 0x100;
  FUN_00d560a0(puVar8,&local_58,2,0,0);
  plVar10 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 5;
    do {
      lVar7 = *plVar2;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  param_1[7] = (long)puVar8;
  FUN_00c41540(puVar8);
  *(undefined8 *)((long)puVar8 + 0x10c) = 0x3f800000;
  *(undefined8 *)((long)puVar8 + 300) = 0;
  *(undefined8 *)((long)puVar8 + 0x11c) = 0;
  *(undefined8 *)((long)puVar8 + 0x124) = 0;
  *(undefined8 *)((long)puVar8 + 0x114) = 0x3f800000;
  *(undefined4 *)((long)puVar8 + 0x15c) = 0;
  *(undefined8 *)((long)puVar8 + 0x13c) = 0;
  *(undefined8 *)((long)puVar8 + 0x144) = 0;
  *(undefined8 *)((long)puVar8 + 0x14c) = 0;
  *(undefined8 *)((long)puVar8 + 0x154) = 0;
  *(undefined8 *)((long)puVar8 + 0x17c) = 0xffffffffffffffff;
  *(undefined4 *)((long)puVar8 + 0x184) = 0xffffffff;
  *(undefined8 *)((long)puVar8 + 0x16c) = 0;
  *(undefined8 *)((long)puVar8 + 0x174) = 0;
  *(undefined8 *)((long)puVar8 + 0x18c) = 0;
  *(undefined8 *)((long)puVar8 + 0x194) = 0;
  return;
}


