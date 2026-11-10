/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023b1b08; name: FUN_023b1b08
 */


undefined8 FUN_023b1b08(undefined8 param_1,long param_2,undefined8 *param_3)

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
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  
  plVar12 = (long *)(param_2 + 0x30);
  lVar10 = *plVar12;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar10) {
    if (*(long *)(param_2 + 0x1f8) == 0) {
      local_58[0] = *(undefined8 *)(param_2 + 8);
      FUN_0103caf0(&local_d8,local_58[0],local_58);
      lVar8 = local_d8;
      local_d8 = 0;
      lVar10 = *(long *)(param_2 + 0x1f8);
      *(long *)(param_2 + 0x1f8) = lVar8;
      if (lVar10 == 0) {
        *(undefined8 *)(param_2 + 0x210) = local_c0;
        *(long *)(param_2 + 0x208) = local_c8;
        *(undefined8 *)(param_2 + 0x200) = local_d0;
      }
      else {
        FUN_0103e9d8(param_2 + 0x200);
        lVar8 = local_d8;
        *(undefined8 *)(param_2 + 0x210) = local_c0;
        *(long *)(param_2 + 0x208) = local_c8;
        *(undefined8 *)(param_2 + 0x200) = local_d0;
        local_d8 = 0;
        if (lVar8 != 0) {
          FUN_0103e9d8(&local_d0);
        }
      }
    }
    local_d8 = -0xfffffffd;
    uVar9 = FUN_0103b2e0(param_2 + 0xe8,&local_d8);
    plVar12 = (long *)(param_2 + 0x48);
    lVar10 = *plVar12;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 == lVar10) {
      plVar12 = (long *)0x0;
      bVar11 = true;
LAB_023b1c80:
      local_c0 = *param_3;
      local_b8 = param_3[1];
      local_b0 = param_3[2];
      uStack_a8 = param_3[3];
      local_a0 = param_3[4];
      local_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      local_d8 = param_2;
      local_d0 = uVar9;
      local_c8 = param_2;
      FUN_00c43ef0(&local_98,param_3 + 5);
      local_88 = param_3[7];
      uStack_80 = param_3[8];
      local_78 = param_3[9];
      local_70 = (long *)param_3[10];
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x18))();
      }
      local_68 = (undefined4)param_1;
      local_60 = 1;
      FUN_023b2060(param_2 + 0x60,&local_d8);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      puVar6 = local_98;
      if (local_98 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_98 + 3);
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
          piVar2 = (int *)((long)local_98 + 0x1c);
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
      if (cVar5 == '\0') goto LAB_023b1c7c;
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
            if (cVar5 == '\0') goto LAB_023b1c7c;
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
LAB_023b1c7c:
    bVar11 = false;
    goto LAB_023b1c80;
  }
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar11) {
      *plVar12 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_023b1b58;
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
          if (cVar5 == '\0') goto LAB_023b1b58;
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
LAB_023b1b58:
  uVar9 = FUN_023b1ef4(param_1,param_2,param_3);
  *(undefined8 *)(param_2 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x38));
  return uVar9;
}


