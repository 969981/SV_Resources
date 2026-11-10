/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03228994; name: FUN_03228994
 */


void FUN_03228994(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *local_50;
  long *local_48;
  
  (**(code **)(*param_2 + 0x78))(&local_50);
  local_48 = local_50;
  local_50 = (long *)0x0;
  if (local_48 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    if (0 < (int)param_2[6]) {
      lVar5 = 0;
      lVar6 = 0;
LAB_032289ec:
      iVar4 = (**(code **)(param_2[5] + lVar5))
                        (&local_48,param_3,param_4,((undefined8 *)(param_2[5] + lVar5))[2]);
      if (-1 < iVar4) goto code_r0x03228a10;
      *param_1 = 0;
      if (local_48 == (long *)0x0) {
        return;
      }
      if (local_48[1] == 0) {
        return;
      }
      plVar1 = local_48 + 2;
      do {
        lVar6 = *plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_03228a9c;
    }
LAB_03228a28:
    if (local_48[1] != 0) {
      plVar1 = local_48 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = local_48;
    if ((local_48 != (long *)0x0) && (local_48[1] != 0)) {
      plVar1 = local_48 + 2;
      do {
        lVar6 = *plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_03228a9c:
      if (lVar6 == 0) {
        (**(code **)(*local_48 + 0x18))();
      }
    }
  }
  return;
code_r0x03228a10:
  lVar6 = lVar6 + 1;
  lVar5 = lVar5 + 0x18;
  if ((int)param_2[6] <= lVar6) goto LAB_03228a28;
  goto LAB_032289ec;
}


