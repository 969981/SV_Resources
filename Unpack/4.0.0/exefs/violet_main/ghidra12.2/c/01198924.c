/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01198924; name: FUN_01198924
 */


void FUN_01198924(long param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a8;
  long local_a0 [12];
  
  plVar1 = (long *)(param_1 + 0x80);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01198960;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x88));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x88));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01198960;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01198960:
  local_b0 = (code *)0x0;
  local_a8 = (code *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_b8 = (code *)0x0;
  local_a0[0] = *param_2;
  if (local_a0[0] != 0) {
    lVar9 = *(long *)(local_a0[0] + 0x30);
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar10;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  local_a0[1] = 0;
  local_a0[2] = 0;
  FUN_01198c14(local_a0 + 1,param_2 + 1);
  local_a0[3] = 0;
  local_a0[4] = 0;
  FUN_00dddfdc(local_a0 + 3,param_2 + 3);
  local_c0 = &LAB_021d7980;
  local_b8 = FUN_021d7e3c;
  local_b0 = FUN_021d809c;
  local_a8 = FUN_0103ef40;
  puVar4 = *(undefined8 **)(param_1 + 0x48);
  if (puVar4 < *(undefined8 **)(param_1 + 0x50)) {
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 != 0) {
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar10;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    }
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    if (local_a8 != (code *)0x0) {
      (*local_a8)(local_a0,puVar4 + 4);
      pcVar7 = local_b8;
      puVar4[3] = local_a8;
      *puVar4 = local_c0;
      puVar4[1] = local_b8;
      puVar4[2] = local_b0;
      if (local_b8 != (code *)0x0) {
        local_b0 = (code *)0x0;
        local_a8 = (code *)0x0;
        local_c0 = (undefined1 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar7)(local_a0);
      }
    }
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x48) = puVar4 + 0x10;
  }
  else {
    FUN_01198fcc(param_1 + 0x40,&local_c0);
  }
  pcVar7 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(local_a0);
  }
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x88));
  return;
}


