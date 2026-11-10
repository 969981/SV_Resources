/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d9880; name: FUN_021d9880
 */


long FUN_021d9880(long param_1,ulong param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  bool bVar11;
  
  plVar8 = (long *)(param_1 + 0x110);
  lVar10 = *plVar8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar10) {
    bVar11 = true;
LAB_021d98d0:
    lVar3 = FUN_021d9a70(param_1,param_2,param_3);
    if (DAT_0485942c == '\x01') {
      puVar5 = (undefined8 *)(param_1 + 0xd8);
      puVar7 = (undefined8 *)*puVar5;
      if (puVar7 != (undefined8 *)0x0) {
        puVar9 = puVar5;
        do {
          lVar10 = 0x10;
          if (param_2 <= (ulong)puVar7[4]) {
            lVar10 = 8;
            puVar9 = puVar7;
          }
          puVar7 = *(undefined8 **)((long)puVar7 + lVar10);
        } while (puVar7 != (undefined8 *)0x0);
        if (puVar9 != puVar5) {
          puVar7 = puVar5;
          if ((ulong)puVar9[4] <= param_2) {
            puVar7 = puVar9;
          }
          if (puVar7 != puVar5) {
            puVar5 = *(undefined8 **)(param_1 + 0x108);
            plVar8 = puVar7 + -2;
            *plVar8 = param_1 + 0x100;
            puVar7[-1] = puVar5;
            *(long **)(param_1 + 0x108) = plVar8;
            *puVar5 = plVar8;
            *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + 1;
            lVar10 = puVar7[2];
            if (lVar10 == 0) {
              plVar8 = (long *)*puVar7;
              if ((puVar7 == (undefined8 *)plVar8[2]) &&
                 (plVar6 = (long *)*plVar8, plVar8 == (long *)((long *)*plVar8)[2])) {
                do {
                  bVar2 = plVar6 == (long *)((long *)*plVar6)[2];
                  plVar6 = (long *)*plVar6;
                } while (bVar2);
              }
            }
            else {
              do {
                lVar10 = *(long *)(lVar10 + 8);
              } while (lVar10 != 0);
            }
            FUN_00d28960(param_1 + 0xd8,puVar7);
            *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + -1;
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
          }
        }
      }
    }
    if (lVar3 != 0) {
      uVar4 = FUN_00fe5860(param_3,0x20);
      FUN_00fe5b04(param_1 + 0x58,lVar3,param_3,uVar4);
    }
    if (!bVar11) {
      *(undefined8 *)(param_1 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x118));
    }
    return lVar3;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar1 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar11) {
      *plVar8 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_021d98cc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
        while (*plVar8 == 0) {
          cVar1 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar11) {
            *plVar8 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_021d98cc;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar11) {
      *plVar8 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_021d98cc:
  bVar11 = false;
  goto LAB_021d98d0;
}


