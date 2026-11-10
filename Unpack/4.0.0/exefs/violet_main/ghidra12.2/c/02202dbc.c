/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02202dbc; name: FUN_02202dbc
 */


ulong FUN_02202dbc(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined1 local_70;
  uint7 uStack_6f;
  undefined8 local_68;
  undefined8 *local_60 [2];
  undefined8 local_38;
  
  plVar1 = param_1 + 0x1f;
  lVar12 = *plVar1;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar12) {
    lVar9 = nn::os::GetCurrentThread();
LAB_02202e00:
    if (*plVar1 == 0) goto code_r0x02202e08;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x20));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x20));
          while (*plVar1 == 0) {
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar14) {
              *plVar1 = lVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_02202e10;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_02202e10:
    bVar14 = false;
    goto LAB_02202e14;
  }
  bVar14 = true;
LAB_02202e14:
  local_68 = 0xffffffffffffffff;
  local_70 = 0;
  do {
    lVar9 = param_1[0x18] - param_1[0x17];
    if (lVar9 == 0) {
      uVar13 = param_1[10] - param_1[9] >> 4;
      FUN_0142ca9c(param_1 + 9,&local_70);
      goto LAB_02202e4c;
    }
    uVar13 = *(ulong *)(param_1[0x18] + -8);
    param_1[0x18] = lVar9 + param_1[0x17] + -8;
    uVar11 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[0x10] + uVar11) =
         *(ulong *)(param_1[0x10] + uVar11) & (1L << (uVar13 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(param_1[10] - param_1[9] >> 4) <= uVar13);
  plVar4 = (long *)(param_1[9] + uVar13 * 0x10);
  *plVar4 = (ulong)uStack_6f << 8;
  plVar4[1] = -1;
  if ((ulong)param_1[0x1e] <= uVar13) {
LAB_02202e4c:
    param_1[0x1e] = uVar13 + 1;
  }
  if (!bVar14) {
    param_1[0x1f] = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x20));
  }
  lVar9 = param_1[8];
  (**(code **)(*param_1 + 0x18))(local_60,param_1);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  if ((long *)local_60[0][2] == param_1 + 5) {
    FUN_015aa76c(&local_a8,local_60);
  }
  puVar7 = local_60[0];
  if (local_60[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_60[0] + 3);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)local_60[0] + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar14) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_38 = *puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_38);
      }
    }
    else if (sVar5 == 0) goto LAB_0220303c;
  }
  uStack_90 = *param_2;
  local_88 = param_2[1];
  uStack_80 = *param_3;
  local_78 = (long *)param_3[1];
  param_3[1] = 0;
  local_98 = uVar13;
  uVar10 = FUN_0220c224(lVar9,&local_a8);
  if (local_78 != (long *)0x0) {
    lVar9 = local_78[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_78 + 0x50))();
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar7 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_a8 + 3);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar14) {
          *piVar3 = -1;
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
        local_60[0] = (undefined8 *)*puVar7;
        FUN_00c44438(lVar9 + 0x8040,local_60);
      }
    }
    else if (sVar5 == 0) {
LAB_0220303c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar12 = *plVar1;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 == lVar12) {
    *(undefined8 *)(param_1[9] + uVar13 * 0x10 + 8) = uVar10;
    return uVar13;
  }
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar6 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_02202f34;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x20));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x20));
        while (*plVar1 == 0) {
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar14) {
            *plVar1 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02202f34;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02202f34:
  *(undefined8 *)(param_1[9] + uVar13 * 0x10 + 8) = uVar10;
  param_1[0x1f] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x20));
  return uVar13;
code_r0x02202e08:
  cVar6 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar14) {
    *plVar1 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_02202e10;
  goto LAB_02202e00;
}


