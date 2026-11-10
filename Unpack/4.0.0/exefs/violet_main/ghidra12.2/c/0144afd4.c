/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0144afd4; name: FUN_0144afd4
 */


void FUN_0144afd4(long param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar8 = (long *)(param_1 + 0x78);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0144b010;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
        while (*plVar8 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0144b010;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0144b010:
  uVar6 = *param_2;
  uVar5 = *param_3;
  plVar7 = (long *)(param_1 + 0x48);
  plVar8 = (long *)*plVar7;
  if (plVar8 != (long *)0x0) {
    if (((ulong)plVar8[4] < uVar6) ||
       ((plVar9 = plVar8, (ulong)plVar8[4] <= uVar6 && ((ulong)plVar8[5] < uVar5)))) {
      plVar9 = plVar8 + 1;
      plVar8 = plVar7;
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      if (((ulong)plVar9[4] < uVar6) ||
         ((plVar10 = plVar9, (ulong)plVar9[4] <= uVar6 && ((ulong)plVar9[5] < uVar5)))) {
        plVar10 = plVar9 + 1;
        plVar9 = plVar8;
      }
      plVar8 = (long *)*plVar10;
      if (plVar8 == (long *)0x0) {
        plVar8 = plVar9;
      }
      else {
        if (((ulong)plVar8[4] < uVar6) ||
           ((plVar10 = plVar8, (ulong)plVar8[4] <= uVar6 && ((ulong)plVar8[5] < uVar5)))) {
          plVar10 = plVar8 + 1;
          plVar8 = plVar9;
        }
        plVar10 = (long *)*plVar10;
        if (plVar10 != (long *)0x0) {
          do {
            if (((ulong)plVar10[4] < uVar6) ||
               ((plVar9 = plVar10, (ulong)plVar10[4] <= uVar6 && ((ulong)plVar10[5] < uVar5)))) {
              plVar10 = plVar10 + 1;
              plVar9 = plVar8;
            }
            plVar8 = plVar9;
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
    if ((((plVar8 != plVar7) && ((ulong)plVar8[4] <= uVar6)) &&
        (((ulong)plVar8[4] < uVar6 || ((ulong)plVar8[5] <= uVar5)))) &&
       (lVar4 = plVar8[7], iVar3 = (int)lVar4 + -1, *(int *)(plVar8 + 7) = iVar3,
       iVar3 == 0 || (int)lVar4 < 1)) {
      FUN_0144b1cc(param_1 + 0x40);
    }
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
  return;
}


