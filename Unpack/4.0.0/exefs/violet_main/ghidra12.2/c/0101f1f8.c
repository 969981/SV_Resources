/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0101f1f8; name: FUN_0101f1f8
 */


void FUN_0101f1f8(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 *local_90 [2];
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_047d3918;
  puVar6 = PTR_DAT_047d3910;
  plVar11 = *(long **)(param_1 + 0x88);
  do {
    while( true ) {
      do {
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)(param_1 + 0x40);
          lVar10 = nn::os::GetCurrentThread();
          goto LAB_0101f238;
        }
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        FUN_00c43ef0(&local_80,plVar11 + 3);
        local_70 = (long *)plVar11[5];
        if ((local_80 == (undefined8 *)0x0) || (*(short *)((long)local_80 + 0x1a) == 0)) {
          plVar11 = (long *)FUN_0101fdbc(param_1 + 0x58,plVar11);
        }
        else {
          plVar11 = (long *)*plVar11;
        }
        puVar8 = local_80;
      } while (local_80 == (undefined8 *)0x0);
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 != 1) break;
      piVar2 = (int *)((long)local_80 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,puVar6,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)puVar6;
        *(long *)puVar7 = lVar10;
        local_90[0] = (undefined8 *)*puVar8;
        FUN_00c44438(lVar10 + 0x8040,local_90);
      }
    }
  } while (sVar3 != 0);
LAB_0101f394:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x33,"Reference counter underflows.");
LAB_0101f238:
  if (*plVar11 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
          while (*plVar11 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_0101f248;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_0101f248:
    (**(code **)(*param_2 + 0x20))(local_90,param_2);
    uStack_98 = 0;
    if (local_90[0] != (undefined8 *)0x0) {
      uStack_98 = *local_90[0];
    }
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    FUN_00c43ef0(&local_a8,local_90);
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_00c43ef0(&local_80,&local_a8);
    puVar8 = local_a8;
    local_70 = param_2;
    if (local_a8 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_a8 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_a8 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_68 = *puVar8;
          FUN_00c44438(lVar10 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) goto LAB_0101f394;
    }
    FUN_0101f6a8(param_1 + 0x58,&uStack_98,&local_80);
    puVar8 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_68 = *puVar8;
          FUN_00c44438(lVar10 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) goto LAB_0101f394;
    }
    puVar8 = local_90[0];
    if (local_90[0] == (undefined8 *)0x0) {
LAB_0101f2b8:
      *(undefined8 *)(param_1 + 0x40) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x48));
      return;
    }
    psVar1 = (short *)(local_90[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_90[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_80 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_80);
      }
      goto LAB_0101f2b8;
    }
    if (sVar3 != 0) goto LAB_0101f2b8;
    goto LAB_0101f394;
  }
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar5) {
    *plVar11 = lVar10;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_0101f248;
  goto LAB_0101f238;
}


