/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02425e60; name: FUN_02425e60
 */


undefined8 FUN_02425e60(undefined8 param_1,long param_2,undefined8 *param_3)

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
  undefined8 uVar10;
  long lVar11;
  bool bVar12;
  long *plVar13;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  
  plVar13 = (long *)(param_2 + 0x30);
  lVar11 = *plVar13;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar11) {
    if (*(long *)(param_2 + 0x1f8) == 0) {
      local_58[0] = *(undefined8 *)(param_2 + 8);
      FUN_0103caf0(&local_b8,local_58[0],local_58);
      lVar8 = local_b8;
      local_b8 = 0;
      lVar11 = *(long *)(param_2 + 0x1f8);
      *(long *)(param_2 + 0x1f8) = lVar8;
      if (lVar11 == 0) {
        *(undefined8 *)(param_2 + 0x210) = local_a0;
        *(long *)(param_2 + 0x208) = local_a8;
        *(undefined8 *)(param_2 + 0x200) = local_b0;
      }
      else {
        FUN_0103e9d8(param_2 + 0x200);
        lVar8 = local_b8;
        *(undefined8 *)(param_2 + 0x210) = local_a0;
        *(long *)(param_2 + 0x208) = local_a8;
        *(undefined8 *)(param_2 + 0x200) = local_b0;
        local_b8 = 0;
        if (lVar8 != 0) {
          FUN_0103e9d8(&local_b0);
        }
      }
    }
    local_b8 = -0xfffffffd;
    uVar9 = FUN_0103b2e0(param_2 + 0xe8,&local_b8);
    plVar13 = (long *)(param_2 + 0x48);
    lVar11 = *plVar13;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 == lVar11) {
      plVar13 = (long *)0x0;
      bVar12 = true;
LAB_02425fd8:
      local_a0 = *param_3;
      local_98 = param_3[1];
      local_90 = param_3[2];
      uStack_88 = param_3[3];
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      local_b8 = param_2;
      local_b0 = uVar9;
      local_a8 = param_2;
      FUN_00d32adc(&local_80,param_3 + 4);
      local_70 = (long *)param_3[6];
      if (local_70 != (long *)0x0) {
        lVar8 = local_70[6];
        if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          *(undefined8 *)(lVar8 + 8) = uVar10;
          *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      local_68 = (undefined4)param_1;
      local_60 = 1;
      FUN_02426480(param_2 + 0x60,&local_b8);
      if (local_70 != (long *)0x0) {
        lVar8 = local_70[6];
        psVar1 = (short *)(lVar8 + 0x1a);
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
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*local_70 + 0x50))();
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
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
      if (!bVar12) {
        *plVar13 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
      }
      return uVar9;
    }
    lVar8 = nn::os::GetCurrentThread();
    while (*plVar13 == 0) {
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar12) {
        *plVar13 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_02425fd4;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
    do {
      if (*plVar13 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
          while (*plVar13 == 0) {
            cVar5 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar12) {
              *plVar13 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02425fd4;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar12) {
        *plVar13 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02425fd4:
    bVar12 = false;
    goto LAB_02425fd8;
  }
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar12) {
      *plVar13 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_02425eb0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x38));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x38));
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar12) {
            *plVar13 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02425eb0;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar12) {
      *plVar13 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02425eb0:
  uVar9 = FUN_02426314(param_1,param_2,param_3);
  *(undefined8 *)(param_2 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x38));
  return uVar9;
}


