/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027805cc; name: FUN_027805cc
 */


void FUN_027805cc(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  short *psVar6;
  short sVar7;
  long lVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  *param_1 = (long)&PTR_FUN_045de9e8;
  param_1[4] = (long)&PTR_LAB_045deb80;
  param_1[5] = (long)&DAT_045deca8;
  param_1[6] = (long)&PTR_LAB_045ded00;
  param_1[7] = (long)&PTR_LAB_045ded28;
  lVar15 = param_1[0x24];
  param_1[0x25] = (long)&PTR_LAB_045ded60;
  if (lVar15 != 0) {
    plVar12 = *(long **)(lVar15 + 0xc0);
    if ((plVar12 == (long *)param_1[0x27]) &&
       (*(undefined8 *)(lVar15 + 0xc0) = 0, plVar12 != (long *)0x0)) {
      plVar1 = plVar12 + 5;
      do {
        lVar15 = *plVar1;
        iVar11 = (int)lVar15 + -1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *(int *)plVar1 = iVar11;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      else if ((int)lVar15 == 0) goto LAB_02780710;
    }
    plVar12 = (long *)param_1[0x24];
    param_1[0x24] = 0;
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 5;
      do {
        lVar15 = *plVar1;
        iVar11 = (int)lVar15 + -1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *(int *)plVar1 = iVar11;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      else if ((int)lVar15 == 0) goto LAB_02780710;
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x31));
  lVar15 = param_1[0x29];
  if (lVar15 != 0) {
    lVar8 = param_1[0x2b];
    plVar12 = (long *)param_1[0x2c];
    param_1[0x2a] = lVar15;
    uVar13 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar15,lVar8 - lVar15,0x10);
    }
    else {
      FUN_00c48fe8(plVar12,lVar15,lVar8 - lVar15,0x10);
    }
  }
  plVar12 = (long *)param_1[0x28];
  if (plVar12 != (long *)0x0) {
    lVar15 = plVar12[6];
    psVar6 = (short *)(lVar15 + 0x1a);
    do {
      sVar7 = *psVar6;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar6,0x10);
      if (bVar10) {
        *psVar6 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))();
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar12 = (long *)param_1[0x27];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 5;
    do {
      lVar15 = *plVar1;
      iVar11 = (int)lVar15 + -1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = iVar11;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar15 == 0) goto LAB_02780710;
  }
  plVar12 = (long *)param_1[0x24];
  puVar2 = PTR_DAT_047e1f98 + 0x160;
  puVar3 = PTR_DAT_047e1f98 + 0x288;
  puVar4 = PTR_DAT_047e1f98 + 0x2e0;
  puVar5 = PTR_DAT_047e1f98 + 0x308;
  *param_1 = (long)(PTR_DAT_047e1f98 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  param_1[6] = (long)puVar4;
  param_1[7] = (long)puVar5;
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 5;
    do {
      lVar15 = *plVar1;
      iVar11 = (int)lVar15 + -1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = iVar11;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar15 == 0) {
LAB_02780710:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_00e6bfa4(param_1);
  return;
}


