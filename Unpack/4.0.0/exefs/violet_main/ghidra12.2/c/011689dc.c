/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011689dc; name: FUN_011689dc
 */


void FUN_011689dc(long *param_1,long *param_2,long *param_3)

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
  long *plVar10;
  
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
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045d0c38;
  param_1[1] = lVar9;
  param_1[4] = (long)&PTR_LAB_045d0c70;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
     (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) {
    lVar9 = tpidr_el0;
    lVar7 = *(long *)(lVar9 + 0x30);
    if (lVar7 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar7 = DAT_04859430;
      *(long *)(lVar9 + 0x30) = DAT_04859430;
    }
  }
  plVar10 = param_1 + 0xd;
  *plVar10 = 0;
  param_1[9] = lVar7;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x442f0000;
  *(undefined2 *)((long)param_1 + 0x8c) = 0x100;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  param_1[0x12] = 0x4396000042c80000;
  param_1[10] = 0xfffffffffffffff;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar7 = *param_2;
  if (lVar7 == 0) {
    param_1[0xe] = 0;
  }
  else {
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
    if (iVar6 == -1) goto LAB_01168c80;
    plVar8 = (long *)param_1[0xe];
    param_1[0xe] = lVar7;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 5;
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
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_01168ca8;
    }
  }
  lVar7 = *param_3;
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
LAB_01168c80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar8 = (long *)*plVar10;
  *plVar10 = lVar7;
  if (plVar8 != (long *)0x0) {
    plVar10 = plVar8 + 5;
    do {
      lVar7 = *plVar10;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01168b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x10))();
      return;
    }
    if ((int)lVar7 == 0) {
LAB_01168ca8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


