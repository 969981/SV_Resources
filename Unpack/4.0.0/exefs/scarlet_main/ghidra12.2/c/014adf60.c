/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014adf60; name: FUN_014adf60
 */


void FUN_014adf60(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *local_38;
  
  plVar7 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xa0,8);
  if (plVar7 == (long *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
    puVar1 = PTR_DAT_047dd330 + 0x10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    *plVar7 = 0;
    plVar7[1] = (long)puVar1;
    plVar7[8] = 0;
    plVar7[9] = 0;
    puVar1 = PTR_DAT_047d2408 + 0x10;
    *(undefined4 *)(plVar7 + 0xc) = 0;
    plVar7[0x11] = 0;
    *(undefined4 *)(plVar7 + 0x12) = 0;
    *(undefined4 *)(plVar7 + 0x13) = 0;
    plVar7[10] = (long)puVar1;
    plVar7[0xb] = -1;
    plVar7[0xd] = 0;
    plVar7[0xe] = (long)&DAT_cbf29ce484222645;
    plVar7[0xf] = (long)&DAT_03c886bc;
    plVar7[0x10] = 0;
    (*DAT_04859f60)(&local_38,&DAT_04859f80);
    if (local_38 != (long *)0x0) {
      plVar9 = local_38 + 5;
      do {
        lVar5 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = (int)lVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar9 = (long *)*plVar7;
    *plVar7 = (long)local_38;
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 5;
      do {
        lVar5 = *plVar2;
        iVar6 = (int)lVar5 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_014ae1d8;
    }
    if (local_38 != (long *)0x0) {
      plVar9 = local_38 + 5;
      do {
        lVar5 = *plVar9;
        iVar6 = (int)lVar5 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
LAB_014ae1d8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    *param_1 = plVar7;
    param_1[1] = param_2;
    param_1[2] = 0xa0;
    param_1[3] = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  return;
}


