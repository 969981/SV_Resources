/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015255c0; name: FUN_015255c0
 */


undefined8 FUN_015255c0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  if ((*(byte *)(param_1 + 0x278) & 1) == 0) {
LAB_01525688:
    uVar6 = 0;
  }
  else {
    plVar2 = *(long **)(param_1 + 0x180);
    for (plVar7 = *(long **)(param_1 + 0x178); plVar7 != plVar2; plVar7 = plVar7 + 1) {
      lVar8 = *plVar7;
      plVar1 = (long *)(lVar8 + 0x60);
      lVar5 = nn::os::GetCurrentThread();
LAB_015255fc:
      if (*plVar1 == 0) goto code_r0x01525604;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x68));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x68));
            while (*plVar1 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0152560c;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0152560c:
      cVar3 = *(char *)(lVar8 + 0xeb);
      *(undefined8 *)(lVar8 + 0x60) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x68));
      if (cVar3 == '\0') goto LAB_01525688;
    }
    uVar6 = 1;
  }
  return uVar6;
code_r0x01525604:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar4) {
    *plVar1 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_0152560c;
  goto LAB_015255fc;
}


