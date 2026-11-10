/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01781478; name: FUN_01781478
 */


void FUN_01781478(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  plVar12 = (long *)(param_2 + 0x110);
  lVar11 = *plVar12;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar11) {
    lVar8 = nn::os::GetCurrentThread();
LAB_017814b4:
    if (*plVar12 == 0) goto code_r0x017814bc;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x118));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x118));
          while (*plVar12 == 0) {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar10) {
              *plVar12 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_017814c4;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar10) {
        *plVar12 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_017814c4:
    bVar10 = false;
    goto LAB_017814c8;
  }
  bVar10 = true;
LAB_017814c8:
  plVar12 = *(long **)(param_2 + 0x128);
  plVar4 = *(long **)(param_2 + 0x130);
  if (plVar12 == plVar4) {
LAB_01781528:
    plVar12 = *(long **)(param_2 + 0x160);
    plVar4 = *(long **)(param_2 + 0x168);
    if (plVar12 != plVar4) {
      do {
        if ((*plVar12 != 0) && (uVar9 = FUN_017817ec(*plVar12 + 8), (uVar9 & 1) != 0)) {
          uVar9 = (**(code **)(*(long *)*plVar12 + 0xc0))();
          if ((uVar9 & 1) == 0) goto LAB_0178156c;
        }
        plVar12 = plVar12 + 1;
      } while (plVar4 != plVar12);
      plVar12 = plVar4;
LAB_0178156c:
      if (plVar12 != *(long **)(param_2 + 0x168)) {
        lVar8 = 0;
        if (*plVar12 != 0) {
          lVar8 = *plVar12 + -0x20;
        }
        goto LAB_017815d4;
      }
    }
    lVar8 = 0;
  }
  else {
    do {
      if ((*plVar12 != 0) && (uVar9 = FUN_017817ec(*plVar12 + 8), (uVar9 & 1) != 0)) {
        uVar9 = (**(code **)(*(long *)*plVar12 + 0xc0))();
        if ((uVar9 & 1) == 0) goto LAB_0178150c;
      }
      plVar12 = plVar12 + 1;
    } while (plVar4 != plVar12);
    plVar12 = plVar4;
LAB_0178150c:
    if ((plVar12 == *(long **)(param_2 + 0x130)) || (*plVar12 == 0)) goto LAB_01781528;
    lVar8 = *plVar12 + -0x20;
  }
LAB_017815d4:
  if (!bVar10) {
    *(undefined8 *)(param_2 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x118));
  }
  if (lVar8 == 0) {
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_01781be8(param_1,&local_50);
    puVar6 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar8 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar8;
      local_28 = *puVar6;
      goto LAB_0178175c;
    }
  }
  else {
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00c43ef0(&local_50,lVar8 + 0x98);
    *param_1 = 0;
    param_1[1] = 0;
    if (local_50[2] == lVar8 + 0x28) {
      FUN_017818c4(param_1,&local_50);
    }
    puVar6 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar8 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar8;
      local_28 = *puVar6;
LAB_0178175c:
      FUN_00c44438(lVar8 + 0x8040,&local_28);
      return;
    }
  }
  if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
code_r0x017814bc:
  cVar5 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar10) {
    *plVar12 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_017814c4;
  goto LAB_017814b4;
}


