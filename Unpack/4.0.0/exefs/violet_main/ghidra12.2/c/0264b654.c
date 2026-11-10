/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0264b654; name: FUN_0264b654
 */


void FUN_0264b654(long *param_1,undefined8 param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  bool bVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 *local_60 [2];
  undefined8 local_38;
  
  if (((*PTR_DAT_047d94e8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047dcfc0,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d94e8);
  }
  lVar14 = *(long *)PTR_DAT_047d94f0;
  plVar13 = (long *)(lVar14 + 0xf8);
  *(long *)PTR_DAT_047d94f8 = lVar14;
  lVar12 = *plVar13;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar12) {
    lVar10 = nn::os::GetCurrentThread();
LAB_0264b6bc:
    if (*plVar13 == 0) goto code_r0x0264b6c4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x100));
    do {
      if (*plVar13 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x100));
          while (*plVar13 == 0) {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar11) {
              *plVar13 = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0264b6cc;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar11) {
        *plVar13 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0264b6cc:
    bVar11 = false;
    goto LAB_0264b6d0;
  }
  plVar13 = (long *)0x0;
  bVar11 = true;
LAB_0264b6d0:
  iVar9 = *(int *)(lVar14 + 0x270);
  (**(code **)(*param_1 + 0x18))(local_60,param_1);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  plVar3 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar3 = param_1 + 5;
  }
  if ((long *)local_60[0][2] == plVar3) {
    FUN_00c9ea00(&local_78,local_60);
  }
  puVar7 = local_60[0];
  if (local_60[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60[0] + 3);
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
      piVar2 = (int *)((long)local_60[0] + 0x1c);
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *puVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar4 == 0) goto LAB_0264b7f0;
  }
  FUN_0264b9a4(lVar14 + (long)iVar9 * 0xa8 + 0x110,&local_78,param_2);
  puVar7 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78 + 3);
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
      piVar2 = (int *)((long)local_78 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_60[0] = (undefined8 *)*puVar7;
        FUN_00c44438(lVar10 + 0x8040,local_60);
      }
    }
    else if (sVar4 == 0) {
LAB_0264b7f0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (!bVar11) {
    *plVar13 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
  }
  return;
code_r0x0264b6c4:
  cVar6 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar11) {
    *plVar13 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0264b6cc;
  goto LAB_0264b6bc;
}


