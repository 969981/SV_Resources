/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028f0f9c; name: FUN_028f0f9c
 */


undefined8 FUN_028f0f9c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  bool bVar11;
  long *plVar12;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  
  plVar12 = (long *)(param_2 + 0x30);
  lVar10 = *plVar12;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar10) {
    if (*(long *)(param_2 + 0x1f8) == 0) {
      local_58[0] = *(undefined8 *)(param_2 + 8);
      FUN_0103caf0(&local_a0,local_58[0],local_58);
      lVar8 = local_a0;
      local_a0 = 0;
      lVar10 = *(long *)(param_2 + 0x1f8);
      *(long *)(param_2 + 0x1f8) = lVar8;
      if (lVar10 == 0) {
        *(undefined8 *)(param_2 + 0x210) = local_88;
        *(long *)(param_2 + 0x208) = local_90;
        *(undefined8 *)(param_2 + 0x200) = local_98;
      }
      else {
        FUN_0103e9d8(param_2 + 0x200);
        lVar8 = local_a0;
        *(undefined8 *)(param_2 + 0x210) = local_88;
        *(long *)(param_2 + 0x208) = local_90;
        *(undefined8 *)(param_2 + 0x200) = local_98;
        local_a0 = 0;
        if (lVar8 != 0) {
          FUN_0103e9d8(&local_98);
        }
      }
    }
    local_a0 = -0xfffffffd;
    uVar9 = FUN_0103b2e0(param_2 + 0xe8,&local_a0);
    plVar12 = (long *)(param_2 + 0x48);
    lVar10 = *plVar12;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 == lVar10) {
      plVar12 = (long *)0x0;
      bVar11 = true;
LAB_028f1114:
      local_88 = *param_3;
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      local_a0 = param_2;
      local_98 = uVar9;
      local_90 = param_2;
      FUN_00d0a71c(&local_80,param_3 + 1);
      local_70 = *(undefined1 *)(param_3 + 3);
      local_68 = (undefined4)param_1;
      local_60 = 1;
      FUN_028f14a8(param_2 + 0x60,&local_a0);
      puVar6 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_80 + 3);
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
          piVar2 = (int *)((long)local_80 + 0x1c);
          do {
            iVar7 = *piVar2;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_58[0] = *puVar6;
            FUN_00c44438(lVar8 + 0x8040,local_58);
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      if (!bVar11) {
        *plVar12 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar12 + 1));
      }
      return uVar9;
    }
    lVar8 = nn::os::GetCurrentThread();
    while (*plVar12 == 0) {
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar11) {
        *plVar12 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_028f1110;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
          while (*plVar12 == 0) {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar11) {
              *plVar12 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_028f1110;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar11) {
        *plVar12 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_028f1110:
    bVar11 = false;
    goto LAB_028f1114;
  }
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar11) {
      *plVar12 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_028f0fec;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x38));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x38));
        while (*plVar12 == 0) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar11) {
            *plVar12 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_028f0fec;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar11) {
      *plVar12 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_028f0fec:
  uVar9 = FUN_028f133c(param_1,param_2,param_3);
  *(undefined8 *)(param_2 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x38));
  return uVar9;
}


