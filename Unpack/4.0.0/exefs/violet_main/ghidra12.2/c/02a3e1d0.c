/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a3e1d0; name: FUN_02a3e1d0
 */


bool FUN_02a3e1d0(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  char *local_b0 [13];
  char local_44 [4];
  undefined8 local_28;
  
  if ((*(char *)(param_1 + 0x440) == '\x02') && (*(short *)(param_1 + 0x420) == 0)) {
    if (*(char *)(param_1 + 0x448) == '\x03') {
      return true;
    }
    local_44[0] = '\x01';
    uVar3 = (**(code **)(*(long *)(param_1 + 0x40) + 0x70))();
    if ((uVar3 & 1) == 0) {
      plVar9 = (long *)(param_1 + 0x48);
      lVar6 = *plVar9;
      lVar4 = nn::os::GetCurrentThread();
      if (lVar4 == lVar6) {
        plVar9 = (long *)0x0;
        bVar7 = true;
      }
      else {
        lVar4 = nn::os::GetCurrentThread();
        do {
          if (*plVar9 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
              while (*plVar9 == 0) {
                cVar2 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar7) {
                  *plVar9 = lVar4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  bVar7 = false;
                  goto LAB_02a3e278;
                }
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar7) {
            *plVar9 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          bVar7 = false;
        } while (cVar2 != '\0');
      }
LAB_02a3e278:
      plVar5 = *(long **)(param_1 + 0x60);
      if (plVar5 != *(long **)(param_1 + 0x68)) {
        cVar2 = local_44[0];
        do {
          if (cVar2 == '\0') {
            cVar2 = false;
          }
          else {
            lVar4 = *plVar5;
            if ((*(byte *)(lVar4 + 0x438) >> 1 & 1) == 0) {
              if (*(char *)(lVar4 + 0x430) == '\0') {
                if (*(long *)(lVar4 + 0x128) != *(long *)(lVar4 + 0x130)) goto LAB_02a3e2e0;
                cVar2 = *(char *)(lVar4 + 0x7c2) == '\0';
              }
              else {
                cVar2 = true;
              }
            }
            else {
LAB_02a3e2e0:
              cVar2 = false;
            }
            local_44[0] = cVar2;
          }
          plVar5 = plVar5 + 1;
        } while (*(long **)(param_1 + 0x68) != plVar5);
      }
      if (!bVar7) {
        *plVar9 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
      }
    }
    if (local_44[0] != '\0') {
      local_b0[0] = local_44;
      plVar9 = (long *)(param_1 + 0x1d8);
      lVar6 = *plVar9;
      lVar4 = nn::os::GetCurrentThread();
      if (lVar4 == lVar6) {
        plVar9 = (long *)0x0;
        bVar7 = true;
      }
      else {
        lVar4 = nn::os::GetCurrentThread();
        do {
          if (*plVar9 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
              while (*plVar9 == 0) {
                cVar2 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar7) {
                  *plVar9 = lVar4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') goto LAB_02a3e364;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar7) {
            *plVar9 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_02a3e364:
        bVar7 = false;
      }
      puVar1 = *(undefined8 **)(param_1 + 0x1f8);
      for (puVar8 = *(undefined8 **)(param_1 + 0x1f0); puVar8 != puVar1; puVar8 = puVar8 + 1) {
        local_28 = *puVar8;
        FUN_02a3e7fc(local_b0,&local_28);
      }
      if (!bVar7) {
        *plVar9 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
      }
      FUN_02a3e838(local_b0);
      return local_44[0] != '\0';
    }
  }
  return false;
}


