/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0199e2e0; name: FUN_0199e2e0
 */


void FUN_0199e2e0(undefined8 *param_1)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  *param_1 = &DAT_045ce3f0;
  param_1[4] = &PTR_LAB_045ce428;
  FUN_0199e538();
  DAT_04859338 = 0;
  FUN_019dde4c(param_1 + 0x20);
  plVar8 = (long *)param_1[0x1c];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar11 = *plVar1;
      iVar7 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_0199e480;
  }
  plVar8 = (long *)param_1[0x1b];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar11 = *plVar1;
      iVar7 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
LAB_0199e480:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar11 = param_1[0x13];
  if (lVar11 != 0) {
    lVar4 = param_1[0x15];
    plVar8 = (long *)param_1[0x16];
    param_1[0x14] = lVar11;
    uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if ((uVar9 & 1) != 0) {
      lVar10 = FUN_00c4e600();
      if (0 < *(int *)(lVar10 + 0x12c8)) {
        FUN_00c48fe8(plVar8,lVar11,lVar4 - lVar11,4);
        goto LAB_0199e3a8;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar11,lVar4 - lVar11,4);
  }
LAB_0199e3a8:
  if ((long *)param_1[0x11] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x11] + 0x60))();
  }
  plVar8 = (long *)param_1[0x10];
  if (plVar8 != (long *)0x0) {
    lVar11 = plVar8[6];
    psVar2 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_0199e4d0(param_1 + 0xe);
  if ((long *)param_1[9] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0199e420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[9] + 0x20))();
  return;
}


