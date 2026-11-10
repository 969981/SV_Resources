/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0219fd30; name: FUN_0219fd30
 */


void FUN_0219fd30(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  long lVar10;
  long *plVar11;
  
  plVar11 = param_1 + 0xb;
  lVar6 = (**(code **)(*param_1 + 0x88))();
  lVar10 = *plVar11;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar10) {
    plVar11 = (long *)0x0;
    bVar9 = true;
  }
  else {
    lVar7 = nn::os::GetCurrentThread();
    do {
      if (*plVar11 != 0) {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
        do {
          if (*plVar11 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
              while (*plVar11 == 0) {
                cVar4 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar9) {
                  *plVar11 = lVar7;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') {
                  bVar9 = false;
                  goto LAB_0219fd88;
                }
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar9) {
            *plVar11 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar9 = false;
        break;
      }
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar9) {
        *plVar11 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
      bVar9 = false;
    } while (cVar4 != '\0');
  }
LAB_0219fd88:
  puVar1 = (undefined8 *)param_1[0xf];
  puVar2 = (undefined8 *)param_1[0x10];
  lVar7 = param_1[0x11];
  plVar3 = (long *)param_1[0x12];
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = lVar6;
  param_1[0x13] = 0x1fffffffffffffff;
  param_1[0x14] = 0;
  if (!bVar9) {
    *plVar11 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
  }
  if (puVar2 != puVar1) {
    (**(code **)(*param_1 + 0x78))(param_1,*puVar1);
    puVar5 = puVar1;
    while (puVar5 = puVar5 + 1, puVar5 != puVar2) {
      (**(code **)(*param_1 + 0x78))(param_1,*puVar5);
    }
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  uVar8 = (**(code **)(*plVar3 + 0xf8))(plVar3);
  if (((uVar8 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0219fe64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x18))(plVar3,puVar1,lVar7 - (long)puVar1,8);
    return;
  }
  FUN_00c48fe8(plVar3,puVar1,lVar7 - (long)puVar1,8);
  return;
}


