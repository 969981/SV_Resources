/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0120be20; name: FUN_0120be20
 */


void FUN_0120be20(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  plVar10 = (long *)*param_2;
  plVar3 = (long *)param_2[1];
  if (plVar10 != plVar3) {
    lVar2 = *param_1;
    puVar11 = *(undefined8 **)param_1[1];
    do {
      lVar8 = *plVar10;
      if (((lVar8 != 0) && (uVar6 = FUN_00efcd10(lVar8 + 8), (uVar6 & 1) != 0)) &&
         (uVar6 = (**(code **)(*(long *)*plVar10 + 0xc0))(), (uVar6 & 1) == 0)) {
        plVar1 = (long *)(lVar8 + 0x128);
        lVar9 = *plVar1;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 != lVar9) {
          lVar7 = nn::os::GetCurrentThread();
LAB_0120be9c:
          if (*plVar1 == 0) goto code_r0x0120bea4;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x130));
          do {
            if (*plVar1 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x130));
                while (*plVar1 == 0) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = lVar7;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_0120beac;
                }
              } while( true );
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_0120beac:
          cVar4 = *(char *)(lVar8 + 0x120);
          *(undefined8 *)(lVar8 + 0x128) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x130));
          goto LAB_0120bec0;
        }
        cVar4 = *(char *)(lVar8 + 0x120);
LAB_0120bec0:
        if ((cVar4 == '\0') && (*(long *)*puVar11 == *(long *)(lVar8 + 0xd0))) goto LAB_0120bf30;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar3);
    plVar10 = plVar3;
LAB_0120bf30:
    if (plVar10 != (long *)param_2[1]) {
      (**(code **)(*(long *)*plVar10 + 0xa8))();
      *(undefined **)(lVar2 + 0xa8) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar2 + 0xb0) = 0;
    }
  }
  return;
code_r0x0120bea4:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar5) {
    *plVar1 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_0120beac;
  goto LAB_0120be9c;
}


