/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010535f8; name: FUN_010535f8
 */


long * FUN_010535f8(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,
                   undefined1 *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
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
  plVar7 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x48,8);
  puVar4 = PTR_DAT_047d66f8;
  if (plVar7 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar7[2] = 0;
  *(undefined4 *)(plVar7 + 3) = 0;
  *plVar7 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar9 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(plVar7 + 5) = 0;
  *plVar7 = (long)&PTR_LAB_045d6518;
  plVar7[1] = lVar9;
  plVar7[4] = (long)&PTR_LAB_045d6560;
  plVar7[6] = (long)&PTR_LAB_045d6590;
  lVar8 = *param_4;
  plVar7[7] = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
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
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  *(undefined1 *)(plVar7 + 8) = *param_5;
  plVar7[1] = (long)param_2;
  plVar7[2] = (long)plVar7;
  *(undefined4 *)(plVar7 + 3) = 0x80048;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  return plVar7;
}


