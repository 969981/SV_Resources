/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01db8f10; name: FUN_01db8f10
 */


void FUN_01db8f10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  code *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  long *local_c8;
  undefined8 auStack_c0 [13];
  long *local_58;
  long *local_38;
  
  uVar6 = *param_2;
  if (*(int *)(param_1 + 1) != 3) {
    local_e0 = (code *)0x422175850e8864b0;
    local_d8 = (code *)0x3c11c0e;
    local_d0 = (undefined1 *)0xf;
    local_c8 = (long *)0x0;
    FUN_00c5cf04(&local_58,uVar6,&local_e0);
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    plVar4 = local_58;
    if (local_58 != (long *)0x0) {
      auStack_c0[0] = *param_1;
      local_e0 = FUN_01db9650;
      local_d8 = FUN_00a2f308;
      local_d0 = &LAB_00a2f30c;
      plVar10 = local_58 + 0x3b;
      local_c8 = (long *)&LAB_00a2f318;
      lVar8 = *plVar10;
      lVar5 = nn::os::GetCurrentThread();
      if (lVar5 != lVar8) {
        lVar5 = nn::os::GetCurrentThread();
LAB_01db8ffc:
        if (*plVar10 == 0) goto code_r0x01db9004;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar4 + 0x3c));
        do {
          if (*plVar10 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar4 + 0x3c));
              while (*plVar10 == 0) {
                cVar2 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar7) {
                  *plVar10 = lVar5;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') goto LAB_01db900c;
              }
            } while( true );
          }
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_01db900c:
        bVar7 = false;
        goto LAB_01db9010;
      }
      plVar10 = (long *)0x0;
      bVar7 = true;
LAB_01db9010:
      puVar1 = (undefined8 *)plVar4[0x3f];
      for (puVar9 = (undefined8 *)plVar4[0x3e]; puVar9 != puVar1; puVar9 = puVar9 + 1) {
        local_38 = (long *)*puVar9;
        (*local_e0)(auStack_c0,&local_38);
      }
      if (!bVar7) {
        *plVar10 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
      }
      pcVar3 = local_d8;
      if (local_d8 != (code *)0x0) {
        local_d0 = (undefined1 *)0x0;
        local_c8 = (long *)0x0;
        local_e0 = (code *)0x0;
        local_d8 = (code *)0x0;
        (*pcVar3)(auStack_c0);
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x60))();
      }
    }
    if (*(int *)(param_1 + 1) == 0) {
      local_e0 = (code *)0xa9f15d3f508427c4;
      local_d8 = (code *)0x3c4271d;
      local_d0 = (undefined1 *)0xf;
      local_c8 = (long *)0x0;
      FUN_00c5cf04(&local_58,uVar6,&local_e0);
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      plVar4 = local_58;
      if (local_58 != (long *)0x0) {
        auStack_c0[0] = *param_1;
        local_e0 = FUN_01db9650;
        local_d8 = FUN_00a2f308;
        local_d0 = &LAB_00a2f30c;
        plVar10 = local_58 + 0x3b;
        local_c8 = (long *)&LAB_00a2f318;
        lVar8 = *plVar10;
        lVar5 = nn::os::GetCurrentThread();
        if (lVar5 != lVar8) {
          lVar5 = nn::os::GetCurrentThread();
LAB_01db9100:
          if (*plVar10 == 0) goto code_r0x01db9108;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar4 + 0x3c));
          do {
            if (*plVar10 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(plVar4 + 0x3c));
                while (*plVar10 == 0) {
                  cVar2 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar7) {
                    *plVar10 = lVar5;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') goto LAB_01db9110;
                }
              } while( true );
            }
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_01db9110:
          bVar7 = false;
          goto LAB_01db9114;
        }
        plVar10 = (long *)0x0;
        bVar7 = true;
LAB_01db9114:
        puVar1 = (undefined8 *)plVar4[0x3f];
        for (puVar9 = (undefined8 *)plVar4[0x3e]; puVar9 != puVar1; puVar9 = puVar9 + 1) {
          local_38 = (long *)*puVar9;
          (*local_e0)(auStack_c0,&local_38);
        }
        if (!bVar7) {
          *plVar10 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
        }
        pcVar3 = local_d8;
        if (local_d8 != (code *)0x0) {
          local_d0 = (undefined1 *)0x0;
          local_c8 = (long *)0x0;
          local_e0 = (code *)0x0;
          local_d8 = (code *)0x0;
          (*pcVar3)(auStack_c0);
        }
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x60))();
        }
      }
      local_e0 = (code *)0x3cf57e0a37ae20d3;
      local_d8 = (code *)0x3ca606b;
      local_d0 = (undefined1 *)0xf;
      local_c8 = (long *)0x0;
      FUN_00c5cf04(&local_38,uVar6,&local_e0);
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      if ((local_38 != (long *)0x0) && (FUN_01db92d8(param_1), local_38 != (long *)0x0)) {
        (**(code **)(*local_38 + 0x60))();
      }
    }
  }
  return;
code_r0x01db9004:
  cVar2 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar7) {
    *plVar10 = lVar5;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01db900c;
  goto LAB_01db8ffc;
code_r0x01db9108:
  cVar2 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar7) {
    *plVar10 = lVar5;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01db9110;
  goto LAB_01db9100;
}


