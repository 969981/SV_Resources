/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0166f558; name: FUN_0166f558
 */


void FUN_0166f558(undefined8 *param_1)

{
  undefined8 *puVar1;
  short *psVar2;
  long *plVar3;
  undefined8 *puVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  int iVar9;
  long in_x4;
  undefined8 in_x5;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined1 local_8c [4];
  long local_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  
  FUN_00da2ea0();
  *param_1 = &PTR_FUN_045abd20;
  puVar1 = param_1 + 0x6f;
  param_1[4] = &PTR_LAB_045abdd0;
  param_1[5] = &DAT_045abe20;
  FUN_0161a100(puVar1);
  FUN_0166fa40(param_1 + 0x76);
  local_78 = (long *)param_1[0x3d];
  param_1[0x7d] = in_x5;
  param_1[0x7e] = 0;
  local_70 = (long *)FUN_00da36fc(&local_80,param_1[1],&local_78);
  if (local_70 == (long *)0x0) {
    local_70 = (long *)0x0;
  }
  else {
    local_70[0x37] = local_70[0x37] | 8;
    lVar12 = local_70[6];
    if (*(long *)(lVar12 + 0x10) == 0) {
LAB_0166f9d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar12 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar5 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar14;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
LAB_0166f9f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  FUN_00da3a8c(param_1,&local_70);
  if (local_70 != (long *)0x0) {
    lVar12 = local_70[6];
    psVar2 = (short *)(lVar12 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_0166f8e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00da382c(puVar1,in_x4);
  if (in_x4 == 0) {
LAB_0166f8a4:
    param_1[0x38] = param_1[0x38] | 2;
    return;
  }
  lVar12 = 0;
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
      if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0166f9d4;
      psVar2 = (short *)(lVar10 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar14;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) goto LAB_0166f9f4;
    }
    plVar8 = local_78;
    pcVar11 = (code *)local_78[0x71];
    if (pcVar11 != (code *)0x0) {
      local_78[0x72] = 0;
      local_78[0x73] = 0;
      local_78[0x70] = 0;
      local_78[0x71] = 0;
      (*pcVar11)(local_78 + 0x74);
    }
    plVar8[0x70] = (long)&LAB_02b78694;
    plVar8[0x71] = (long)&LAB_02b787d8;
    plVar8[0x74] = (long)param_1;
    plVar8[0x75] = (long)plVar8;
    plVar3 = plVar8 + 0x3a;
    *(int *)(plVar8 + 0x76) = (int)lVar12;
    plVar8[0x72] = (long)&LAB_02b787dc;
    plVar8[0x73] = (long)&LAB_02b787f0;
    lVar10 = nn::os::GetCurrentThread();
    while (*plVar3 == 0) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_0166f778;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3b));
    do {
      if (*plVar3 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3b));
          while (*plVar3 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar7) {
              *plVar3 = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0166f778;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0166f778:
    puVar13 = param_1;
    if ((undefined8 *)param_1[0x35] != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)param_1[0x35];
    }
    puVar4 = param_1;
    if ((undefined8 *)param_1[0x36] != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_1[0x36];
    }
    if (puVar13 == puVar4) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("input != output","InsertDependencyToTarget",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/mt/sync_object.h"
                 ,700);
    }
    FUN_00da3100(plVar8);
    puVar13 = (undefined8 *)param_1[0x70];
    if (puVar13 < (undefined8 *)param_1[0x71]) {
      uVar14 = param_1[0x72];
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 == 0) {
        *puVar13 = local_78;
      }
      else {
        if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar14;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        *puVar13 = local_78;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      local_78 = (long *)0x0;
      param_1[0x70] = puVar13 + 1;
    }
    else {
      FUN_0221ba78(puVar1,&local_78);
    }
    plVar8[0x3a] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar8 + 0x3b));
    if (local_78 != (long *)0x0) {
      lVar10 = local_78[6];
      psVar2 = (short *)(lVar10 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_78 + 0x50))();
      }
      else if (sVar5 == 0) goto LAB_0166f8e8;
    }
    lVar12 = lVar12 + 1;
    if (lVar12 == in_x4) goto LAB_0166f8a4;
  } while( true );
}


