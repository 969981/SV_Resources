/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012eeb7c; name: FUN_012eeb7c
 */


void FUN_012eeb7c(undefined8 *param_1)

{
  short *psVar1;
  long *plVar2;
  undefined8 *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long in_x4;
  undefined8 in_x5;
  long lVar10;
  code *pcVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 local_8c [4];
  long local_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  
  FUN_00da2ea0();
  *param_1 = &PTR_FUN_045a1c28;
  param_1[0x6f] = 0;
  param_1[4] = &PTR_LAB_045a1cd8;
  param_1[5] = &DAT_045a1d28;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
     (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) {
    lVar9 = FUN_01060ed0();
  }
  param_1[0x72] = lVar9;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0x73] = 0x1fffffffffffffff;
  FUN_012ef10c(param_1 + 0x76);
  local_78 = (long *)param_1[0x3d];
  param_1[0x7d] = in_x5;
  param_1[0x7e] = 0;
  local_70 = (long *)FUN_00da36fc(&local_80,param_1[1],&local_78);
  if (local_70 == (long *)0x0) {
    local_70 = (long *)0x0;
  }
  else {
    local_70[0x37] = local_70[0x37] | 8;
    lVar9 = local_70[6];
    if (*(long *)(lVar9 + 0x10) == 0) {
LAB_012ef088:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar13;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
LAB_012ef0cc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  FUN_00da3a8c(param_1,&local_70);
  if (local_70 != (long *)0x0) {
    lVar9 = local_70[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar4 == 0) {
LAB_012eef44:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00da382c(param_1 + 0x6f,in_x4);
  if (in_x4 == 0) {
LAB_012eef00:
    param_1[0x38] = param_1[0x38] | 2;
    return;
  }
  lVar9 = 0;
  do {
    local_80 = param_1[0x3d];
    local_88 = 0;
    if (param_1[0x6c] != 0) {
      lVar10 = *(long *)(param_1[0x6c] + 0x10);
      local_88 = 0;
      if (lVar10 != 0) {
        local_88 = lVar10 + -8;
      }
    }
    local_8c[0] = *(undefined1 *)((long)param_1 + 0x374);
    local_78 = (long *)FUN_00da2d2c(auStack_68,param_1[1],&local_80,&local_88,local_8c);
    if (local_78 == (long *)0x0) {
      local_78 = (long *)0x0;
    }
    else {
      local_78[0x37] = local_78[0x37] | 8;
      lVar10 = local_78[6];
      if (*(long *)(lVar10 + 0x10) == 0) goto LAB_012ef088;
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar13;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) goto LAB_012ef0cc;
    }
    plVar7 = local_78;
    pcVar11 = (code *)local_78[0x71];
    if (pcVar11 != (code *)0x0) {
      local_78[0x72] = 0;
      local_78[0x73] = 0;
      local_78[0x70] = 0;
      local_78[0x71] = 0;
      (*pcVar11)(local_78 + 0x74);
    }
    plVar7[0x74] = (long)param_1;
    plVar7[0x75] = (long)plVar7;
    plVar2 = plVar7 + 0x3a;
    *(int *)(plVar7 + 0x76) = (int)lVar9;
    plVar7[0x70] = (long)&LAB_02b55710;
    plVar7[0x71] = (long)&LAB_02b557f0;
    plVar7[0x72] = (long)&LAB_02b557f4;
    plVar7[0x73] = (long)&LAB_02b55808;
    lVar10 = nn::os::GetCurrentThread();
    while (*plVar2 == 0) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_012eedc8;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x3b));
    do {
      if (*plVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x3b));
          while (*plVar2 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_012eedc8;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_012eedc8:
    puVar12 = param_1;
    if ((undefined8 *)param_1[0x35] != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)param_1[0x35];
    }
    puVar3 = param_1;
    if ((undefined8 *)param_1[0x36] != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)param_1[0x36];
    }
    if (puVar12 == puVar3) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("input != output","InsertDependencyToTarget",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/mt/sync_object.h"
                 ,700);
    }
    FUN_00da3100(plVar7);
    puVar12 = (undefined8 *)param_1[0x70];
    if (puVar12 < (undefined8 *)param_1[0x71]) {
      uVar13 = param_1[0x72];
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 == 0) {
        *puVar12 = local_78;
      }
      else {
        if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar13;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        *puVar12 = local_78;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      local_78 = (long *)0x0;
      param_1[0x70] = puVar12 + 1;
    }
    else {
      FUN_01312dc8(param_1 + 0x6f,&local_78);
    }
    plVar7[0x3a] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar7 + 0x3b));
    if (local_78 != (long *)0x0) {
      lVar10 = local_78[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_78 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_012eef44;
    }
    lVar9 = lVar9 + 1;
    if (lVar9 == in_x4) goto LAB_012eef00;
  } while( true );
}


