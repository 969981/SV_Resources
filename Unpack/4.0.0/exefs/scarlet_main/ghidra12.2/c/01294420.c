/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01294420; name: FUN_01294420
 */


void FUN_01294420(undefined8 param_1,long *param_2,undefined8 param_3)

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
    FUN_00100190(&LAB_00aa3b14,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d94e8);
  }
  lVar14 = *(long *)PTR_DAT_047d94f0;
  plVar13 = (long *)(lVar14 + 0xf8);
  *(long *)PTR_DAT_047d94f8 = lVar14;
  lVar12 = *plVar13;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar12) {
    lVar10 = nn::os::GetCurrentThread();
LAB_01294488:
    if (*plVar13 == 0) goto code_r0x01294490;
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
            if (cVar6 == '\0') goto LAB_01294498;
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
LAB_01294498:
    bVar11 = false;
    goto LAB_0129449c;
  }
  plVar13 = (long *)0x0;
  bVar11 = true;
LAB_0129449c:
  iVar9 = *(int *)(lVar14 + 0x270);
  (**(code **)(*param_2 + 0x18))(local_60,param_2);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  plVar3 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar3 = param_2 + 5;
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
    else if (sVar4 == 0) goto LAB_012945bc;
  }
  FUN_01294770(lVar14 + (long)iVar9 * 0xa8 + 0x110,&local_78,param_3);
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
LAB_012945bc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (!bVar11) {
    *plVar13 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
  }
  return;
code_r0x01294490:
  cVar6 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar11) {
    *plVar13 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01294498;
  goto LAB_01294488;
}


