/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02766708; name: FUN_02766708
 */


void FUN_02766708(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

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
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
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
LAB_02766780:
    if (*plVar13 == 0) goto code_r0x02766788;
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
            if (cVar6 == '\0') goto LAB_02766790;
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
LAB_02766790:
    bVar11 = false;
    goto LAB_02766794;
  }
  plVar13 = (long *)0x0;
  bVar11 = true;
LAB_02766794:
  iVar9 = *(int *)(lVar14 + 0x270);
  (**(code **)(*param_2 + 0x18))(local_78,param_2);
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  plVar3 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar3 = param_2 + 5;
  }
  if ((long *)local_78[0][2] == plVar3) {
    FUN_00c9ea00(&local_90,local_78);
  }
  puVar7 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78[0] + 3);
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
      piVar2 = (int *)((long)local_78[0] + 0x1c);
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
        local_68 = *puVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_68);
      }
    }
    else if (sVar4 == 0) goto LAB_027668c8;
  }
  local_80 = *param_1;
  FUN_02778068(lVar14 + (long)iVar9 * 0xa8 + 0x110,&local_90,param_3,param_4,param_5);
  puVar7 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_90 + 3);
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
      piVar2 = (int *)((long)local_90 + 0x1c);
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
        local_78[0] = (undefined8 *)*puVar7;
        FUN_00c44438(lVar10 + 0x8040,local_78);
      }
    }
    else if (sVar4 == 0) {
LAB_027668c8:
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
code_r0x02766788:
  cVar6 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar11) {
    *plVar13 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_02766790;
  goto LAB_02766780;
}


