/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dec528; name: FUN_00dec528
 */


void FUN_00dec528(long param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  long *plVar13;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  plVar11 = (long *)(param_1 + 0x10);
  lVar10 = *plVar11;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar10) {
    lVar9 = nn::os::GetCurrentThread();
LAB_00dec56c:
    if (*plVar11 == 0) goto code_r0x00dec574;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x18));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x18));
          while (*plVar11 == 0) {
            cVar5 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar12) {
              *plVar11 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00dec57c;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00dec57c:
    bVar12 = false;
    goto LAB_00dec580;
  }
  plVar11 = (long *)0x0;
  bVar12 = true;
LAB_00dec580:
  puVar6 = PTR_DAT_047d3910;
  if ((*(long *)(param_1 + 8) != 0) &&
     (plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x48), plVar13 != (long *)0x0)) {
    do {
      lVar10 = plVar13[2];
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_00c43ef0(&local_78,lVar10 + 0x30);
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      lVar9 = 0;
      if (lVar10 != 0) {
        lVar9 = lVar10 + 0x28;
      }
      if (local_78[2] == lVar9) {
        FUN_00f5d3e8(&local_88,&local_78);
      }
      puVar7 = local_78;
      if (local_78 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_78 + 3);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_78 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar6,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)puVar6;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_68 = *puVar7;
            FUN_00c44438(lVar9 + 0x8040,&local_68);
          }
        }
        else if (sVar3 == 0) goto LAB_00dec8c0;
      }
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_00fa4838(&local_78,&local_88);
      (*(code *)*param_2)(param_2 + 4,&local_78);
      puVar7 = local_78;
      if (local_78 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_78 + 3);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_78 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar6,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)puVar6;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_68 = *puVar7;
            FUN_00c44438(lVar9 + 0x8040,&local_68);
          }
        }
        else if (sVar3 == 0) goto LAB_00dec8c0;
      }
      puVar7 = local_88;
      if (local_88 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_88 + 3);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_88 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar6,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)puVar6;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_78 = (undefined8 *)*puVar7;
            FUN_00c44438(lVar9 + 0x8040,&local_78);
          }
        }
        else if (sVar3 == 0) {
LAB_00dec8c0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  if (!bVar12) {
    *plVar11 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
  }
  return;
code_r0x00dec574:
  cVar5 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar12) {
    *plVar11 = lVar9;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00dec57c;
  goto LAB_00dec56c;
}


