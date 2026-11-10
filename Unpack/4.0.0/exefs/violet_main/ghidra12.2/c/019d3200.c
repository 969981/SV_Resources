/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019d3200; name: FUN_019d3200
 */


void FUN_019d3200(undefined8 *param_1,long *param_2,long param_3,undefined4 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined4 local_158 [2];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  long *local_d8;
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [64];
  
  plVar1 = param_1 + 0x1c;
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && param_1[0x1d] == 0) {
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar12;
      param_1[0x1d] = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_019d3250;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e));
  do {
    if (*plVar1 != 0 || param_1[0x1d] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e));
        while (*plVar1 == 0 && param_1[0x1d] == 0) {
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar16) {
            *plVar1 = lVar12;
            param_1[0x1d] = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_019d3250;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar12;
      param_1[0x1d] = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_019d3250:
  uVar17 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar17;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  lVar13 = FUN_019d370c(param_1 + 1,param_2);
  if (lVar13 == 0) {
    local_158[0] = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_130 = 0;
    local_f8 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    FUN_019d381c(&uStack_110);
    FUN_019d3950(&local_f0,param_2,local_158);
    lVar13 = FUN_019d3c14(param_1 + 1,&local_f0);
    FUN_019d366c(auStack_a0);
    FUN_01816968(auStack_c8);
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    FUN_019d366c(&local_128);
    FUN_01816968(&local_150);
  }
  *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
  *(undefined4 *)(lVar13 + 0x58) = *param_4;
  if (**(char **)(param_3 + 8) != '\0') {
    FUN_018174c4(&local_f0,*param_1,*(char **)(param_3 + 8),0x10000,1);
    *(undefined1 *)(lVar13 + 0x48) = local_e0;
    plVar14 = *(long **)(lVar13 + 0x50);
    *(undefined8 *)(lVar13 + 0x50) = 0;
    *(undefined8 *)(lVar13 + 0x38) = local_f0;
    *(undefined8 *)(lVar13 + 0x40) = local_e8;
    if (plVar14 != (long *)0x0) {
      plVar5 = plVar14 + 5;
      do {
        lVar3 = *plVar5;
        iVar11 = (int)lVar3 + -1;
        cVar6 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar16) {
          *(int *)plVar5 = iVar11;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
      else if ((int)lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    plVar14 = local_d8;
    local_d8 = (long *)0x0;
    *(long **)(lVar13 + 0x50) = plVar14;
    FUN_01816968(&local_f0);
  }
  puVar10 = PTR_PTR_047d4508;
  puVar9 = PTR_DAT_047d3e30;
  puVar8 = PTR_DAT_047d3e28;
  plVar14 = (long *)param_1[0x14];
  if (plVar14 != (long *)0x0) {
    do {
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,puVar9,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar8);
      }
      if ((plVar14[0xd] == *(long *)puVar9) && (*(long *)(lVar13 + 0x50) != 0)) {
        plVar5 = (long *)plVar14[7];
        plVar7 = (long *)plVar14[6];
        do {
          if (plVar7 == plVar5) goto LAB_019d3418;
          puVar2 = (undefined8 *)puVar10;
          if (*plVar7 != 0) {
            puVar2 = (undefined8 *)(*plVar7 + 0x38);
          }
          uVar15 = FUN_00e3d990(lVar13 + 0x38,*puVar2);
          plVar7 = plVar7 + 1;
        } while ((uVar15 & 1) == 0);
        (*(code *)plVar14[0xe])(plVar14 + 0x12,param_2);
        plVar14[0xd] = *param_2;
      }
LAB_019d3418:
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
  }
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  do {
    lVar12 = *plVar1;
    lVar13 = param_1[0x1d];
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar12;
      param_1[0x1d] = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = param_1[0x1d];
    if (lVar3 != lVar12 || lVar4 != lVar13) {
      bVar16 = false;
      ClearExclusiveLocal();
      goto LAB_019d34d8;
    }
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0xe4) = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar16 = true;
LAB_019d34d8:
  if (!bVar16) {
    do {
      lVar12 = *plVar1;
      lVar13 = param_1[0x1d];
      if (lVar12 != lVar3 || lVar13 != lVar4) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto joined_r0x019d3624;
      }
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar16) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0xe4) = lVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar16 = true;
joined_r0x019d3624:
    if (!bVar16) {
      do {
        lVar3 = *plVar1;
        lVar4 = param_1[0x1d];
        if (lVar3 != lVar12 || lVar4 != lVar13) {
          bVar16 = false;
          ClearExclusiveLocal();
          lVar12 = lVar3;
          lVar13 = lVar4;
          goto joined_r0x019d3624;
        }
        cVar6 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar16) {
          *plVar1 = 0;
          *(long *)((long)param_1 + 0xe4) = lVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar16 = true;
      lVar12 = lVar3;
      lVar13 = lVar4;
      goto joined_r0x019d3624;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1e));
  return;
}


