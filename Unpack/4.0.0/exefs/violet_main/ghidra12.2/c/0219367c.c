/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0219367c; name: FUN_0219367c
 */


void FUN_0219367c(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  char cVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined4 local_188 [2];
  undefined1 auStack_180 [64];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  long *local_f0;
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  
  plVar1 = param_1 + 0x1c;
  lVar14 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && param_1[0x1d] == 0) {
    cVar8 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar18) {
      *plVar1 = lVar14;
      param_1[0x1d] = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_021936cc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e));
  do {
    if (*plVar1 != 0 || param_1[0x1d] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e));
        while (*plVar1 == 0 && param_1[0x1d] == 0) {
          cVar8 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar18) {
            *plVar1 = lVar14;
            param_1[0x1d] = 0;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_021936cc;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar18) {
      *plVar1 = lVar14;
      param_1[0x1d] = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_021936cc:
  uVar19 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar19;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
  lVar15 = FUN_02193ad0(param_1 + 1,param_2);
  if (lVar15 == 0) {
    local_188[0] = 0;
    memset(auStack_180,0,0x78);
    FUN_02193bdc(auStack_128);
    FUN_02193d14(&local_108,param_2,local_188);
    lVar15 = FUN_02193e5c(param_1 + 1,&local_108);
    FUN_02194058(auStack_a0);
    FUN_01816968(auStack_e0);
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    FUN_02194058(auStack_140);
    FUN_01816968(auStack_180);
  }
  *(int *)(lVar15 + 0x30) = *(int *)(lVar15 + 0x30) + 1;
  uVar19 = *param_4;
  uVar5 = param_4[1];
  uVar6 = param_4[3];
  *(undefined8 *)(lVar15 + 0x68) = param_4[2];
  *(undefined8 *)(lVar15 + 0x70) = uVar6;
  *(undefined8 *)(lVar15 + 0x58) = uVar19;
  *(undefined8 *)(lVar15 + 0x60) = uVar5;
  if (**(char **)(param_3 + 8) != '\0') {
    FUN_018174c4(&local_108,*param_1,*(char **)(param_3 + 8),0x10000,1);
    *(undefined1 *)(lVar15 + 0x48) = local_f8;
    plVar16 = *(long **)(lVar15 + 0x50);
    *(undefined8 *)(lVar15 + 0x50) = 0;
    *(undefined8 *)(lVar15 + 0x38) = local_108;
    *(undefined8 *)(lVar15 + 0x40) = local_100;
    if (plVar16 != (long *)0x0) {
      plVar7 = plVar16 + 5;
      do {
        lVar3 = *plVar7;
        iVar13 = (int)lVar3 + -1;
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar18) {
          *(int *)plVar7 = iVar13;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plVar16 + 0x10))();
      }
      else if ((int)lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    plVar16 = local_f0;
    local_f0 = (long *)0x0;
    *(long **)(lVar15 + 0x50) = plVar16;
    FUN_01816968(&local_108);
  }
  puVar12 = PTR_PTR_047d4508;
  puVar11 = PTR_DAT_047d3e30;
  puVar10 = PTR_DAT_047d3e28;
  plVar16 = (long *)param_1[0x14];
  if (plVar16 != (long *)0x0) {
    do {
      if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,puVar11,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar10);
      }
      if ((plVar16[0xd] == *(long *)puVar11) && (*(long *)(lVar15 + 0x50) != 0)) {
        plVar7 = (long *)plVar16[7];
        plVar9 = (long *)plVar16[6];
        do {
          if (plVar9 == plVar7) goto LAB_02193830;
          puVar2 = (undefined8 *)puVar12;
          if (*plVar9 != 0) {
            puVar2 = (undefined8 *)(*plVar9 + 0x38);
          }
          uVar17 = FUN_00e3d990(lVar15 + 0x38,*puVar2);
          plVar9 = plVar9 + 1;
        } while ((uVar17 & 1) == 0);
        (*(code *)plVar16[0xe])(plVar16 + 0x12,param_2);
        plVar16[0xd] = *param_2;
      }
LAB_02193830:
      plVar16 = (long *)*plVar16;
    } while (plVar16 != (long *)0x0);
  }
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  do {
    lVar14 = *plVar1;
    lVar15 = param_1[0x1d];
    cVar8 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar18) {
      *plVar1 = lVar14;
      param_1[0x1d] = lVar15;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = param_1[0x1d];
    if (lVar3 != lVar14 || lVar4 != lVar15) {
      bVar18 = false;
      ClearExclusiveLocal();
      goto LAB_021938cc;
    }
    cVar8 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar18) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0xe4) = lVar15;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar18 = true;
LAB_021938cc:
  if (!bVar18) {
    do {
      lVar14 = *plVar1;
      lVar15 = param_1[0x1d];
      if (lVar14 != lVar3 || lVar15 != lVar4) {
        bVar18 = false;
        ClearExclusiveLocal();
        goto joined_r0x02193a88;
      }
      cVar8 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar18) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0xe4) = lVar4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar18 = true;
joined_r0x02193a88:
    if (!bVar18) {
      do {
        lVar3 = *plVar1;
        lVar4 = param_1[0x1d];
        if (lVar3 != lVar14 || lVar4 != lVar15) {
          bVar18 = false;
          ClearExclusiveLocal();
          lVar14 = lVar3;
          lVar15 = lVar4;
          goto joined_r0x02193a88;
        }
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar18) {
          *plVar1 = 0;
          *(long *)((long)param_1 + 0xe4) = lVar15;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar18 = true;
      lVar14 = lVar3;
      lVar15 = lVar4;
      goto joined_r0x02193a88;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1e));
  return;
}


