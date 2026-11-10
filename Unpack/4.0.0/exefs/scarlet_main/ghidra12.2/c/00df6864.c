/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00df6864; name: FUN_00df6864
 */


void FUN_00df6864(long param_1,undefined8 param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  plVar12 = (long *)(param_1 + 0xb360);
  lVar11 = *plVar12;
  local_60 = param_2;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar11) {
    lVar9 = nn::os::GetCurrentThread();
LAB_00df68a8:
    if (*plVar12 == 0) goto code_r0x00df68b0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb368));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb368));
          while (*plVar12 == 0) {
            cVar6 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar10) {
              *plVar12 = lVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_00df68b8;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar10) {
        *plVar12 = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_00df68b8:
    bVar10 = false;
    goto LAB_00df68bc;
  }
  plVar12 = (long *)0x0;
  bVar10 = true;
LAB_00df68bc:
  (**(code **)(*param_3 + 0x18))(local_58,param_3);
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  plVar3 = (long *)0x0;
  if (param_3 != (long *)0x0) {
    plVar3 = param_3 + 5;
  }
  if ((long *)local_58[0][2] == plVar3) {
    FUN_00cbc6dc(&local_70,local_58);
  }
  puVar7 = local_58[0];
  if (local_58[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58[0] + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_58[0] + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_48 = *puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_00df69d4;
  }
  FUN_00dfb3ec(param_1 + 0xb378,&local_60,&local_70);
  puVar7 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_70 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_58[0] = (undefined8 *)*puVar7;
        FUN_00c44438(lVar9 + 0x8040,local_58);
      }
    }
    else if (sVar4 == 0) {
LAB_00df69d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (!bVar10) {
    *plVar12 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar12 + 1));
  }
  return;
code_r0x00df68b0:
  cVar6 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar10) {
    *plVar12 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00df68b8;
  goto LAB_00df68a8;
}


