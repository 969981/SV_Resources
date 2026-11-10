/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216b2a0; name: FUN_0216b2a0
 */


void FUN_0216b2a0(long *param_1)

{
  undefined *puVar1;
  short *psVar2;
  long *plVar3;
  short sVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_DAT_047d8c90 + 0x40;
  *param_1 = (long)(PTR_DAT_047d8c90 + 0x10);
  param_1[4] = (long)puVar1;
  FUN_0216b4a4();
  plVar9 = (long *)param_1[0x1d];
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[6];
    psVar2 = (short *)(lVar11 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_0216b454;
  }
  FUN_0150fa70(param_1 + 0x1c);
  plVar9 = (long *)param_1[0x1b];
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 5;
    do {
      lVar11 = *plVar3;
      iVar8 = (int)lVar11 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x18));
  lVar11 = param_1[0x10];
  if (lVar11 != 0) {
    lVar12 = param_1[0x11];
    if (lVar12 == lVar11) {
      lVar12 = lVar11;
    }
    else {
      do {
        lVar12 = lVar12 + -0x40;
        FUN_00fa65c0(lVar12);
      } while (lVar11 != lVar12);
      lVar12 = param_1[0x10];
    }
    lVar5 = param_1[0x12];
    plVar9 = (long *)param_1[0x13];
    param_1[0x11] = lVar11;
    uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if ((uVar10 & 1) != 0) {
      lVar11 = FUN_00c4e600();
      if (0 < *(int *)(lVar11 + 0x12c8)) {
        FUN_00c48fe8(plVar9,lVar12,lVar5 - lVar12,8);
        goto LAB_0216b398;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar12,lVar5 - lVar12,8);
  }
LAB_0216b398:
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xe));
  FUN_0216b558(param_1 + 6);
  plVar9 = (long *)param_1[5];
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[6];
    psVar2 = (short *)(lVar11 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0216b450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x50))();
      return;
    }
    if (sVar4 == 0) {
LAB_0216b454:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


