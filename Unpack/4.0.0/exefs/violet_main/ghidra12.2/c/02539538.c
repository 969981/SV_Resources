/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02539538; name: FUN_02539538
 */


ulong FUN_02539538(undefined8 param_1,long *param_2,undefined8 *param_3,long param_4)

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
  undefined8 *local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  uint7 uStack_7f;
  undefined8 local_78;
  undefined8 *local_70 [2];
  undefined8 local_58;
  
  plVar1 = param_2 + 0x1f;
  lVar12 = *plVar1;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar12) {
    lVar9 = nn::os::GetCurrentThread();
LAB_02539584:
    if (*plVar1 == 0) goto code_r0x0253958c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x20));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x20));
          while (*plVar1 == 0) {
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar14) {
              *plVar1 = lVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_02539594;
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
LAB_02539594:
    bVar14 = false;
    goto LAB_02539598;
  }
  bVar14 = true;
LAB_02539598:
  local_78 = 0xffffffffffffffff;
  local_80 = 0;
  do {
    lVar9 = param_2[0x18] - param_2[0x17];
    if (lVar9 == 0) {
      uVar13 = param_2[10] - param_2[9] >> 4;
      FUN_01538700(param_2 + 9,&local_80);
      goto LAB_025395d0;
    }
    uVar13 = *(ulong *)(param_2[0x18] + -8);
    param_2[0x18] = lVar9 + param_2[0x17] + -8;
    uVar11 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_2[0x10] + uVar11) =
         *(ulong *)(param_2[0x10] + uVar11) & (1L << (uVar13 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(param_2[10] - param_2[9] >> 4) <= uVar13);
  plVar4 = (long *)(param_2[9] + uVar13 * 0x10);
  *plVar4 = (ulong)uStack_7f << 8;
  plVar4[1] = -1;
  if ((ulong)param_2[0x1e] <= uVar13) {
LAB_025395d0:
    param_2[0x1e] = uVar13 + 1;
  }
  if (!bVar14) {
    param_2[0x1f] = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x20));
  }
  lVar9 = param_2[8];
  (**(code **)(*param_2 + 0x18))(local_70,param_2);
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  if ((long *)local_70[0][2] == param_2 + 5) {
    FUN_0142d514(&local_d8,local_70);
  }
  puVar7 = local_70[0];
  if (local_70[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_70[0] + 3);
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
      piVar3 = (int *)((long)local_70[0] + 0x1c);
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
        local_58 = *puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_58);
      }
    }
    else if (sVar5 == 0) goto LAB_025397d0;
  }
  uStack_c0 = *param_3;
  local_b8 = param_3[1];
  uStack_b0 = 0;
  local_a8 = 0;
  local_c8 = uVar13;
  FUN_00d334b4(&uStack_b0,param_4);
  local_a0 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_4 + 0x10) = 0;
  uStack_98 = 0;
  local_90 = 0;
  FUN_00c96b7c(&uStack_98,param_4 + 0x18);
  local_88 = *(undefined8 *)(param_4 + 0x28);
  uVar10 = FUN_02539c40(param_1,lVar9,&local_d8);
  FUN_025399ac(&uStack_b0);
  puVar7 = local_d8;
  if (local_d8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_d8 + 3);
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
      piVar3 = (int *)((long)local_d8 + 0x1c);
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
        local_70[0] = (undefined8 *)*puVar7;
        FUN_00c44438(lVar9 + 0x8040,local_70);
      }
    }
    else if (sVar5 == 0) {
LAB_025397d0:
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
    *(undefined8 *)(param_2[9] + uVar13 * 0x10 + 8) = uVar10;
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
    if (cVar6 == '\0') goto LAB_025396c4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x20));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x20));
        while (*plVar1 == 0) {
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar14) {
            *plVar1 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_025396c4;
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
LAB_025396c4:
  *(undefined8 *)(param_2[9] + uVar13 * 0x10 + 8) = uVar10;
  param_2[0x1f] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x20));
  return uVar13;
code_r0x0253958c:
  cVar6 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar14) {
    *plVar1 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_02539594;
  goto LAB_02539584;
}


