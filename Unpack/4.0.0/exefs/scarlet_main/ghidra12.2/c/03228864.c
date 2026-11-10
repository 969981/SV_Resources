/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03228864; name: FUN_03228864
 */


void FUN_03228864(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *local_50;
  long *local_48;
  
  (**(code **)(*param_2 + 0x70))(&local_50);
  local_48 = local_50;
  local_50 = (long *)0x0;
  if (local_48 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    if (0 < (int)param_2[4]) {
      lVar5 = 0;
      lVar6 = 0;
LAB_032288bc:
      iVar4 = (**(code **)(param_2[3] + lVar5))
                        (&local_48,param_3,param_4,((undefined8 *)(param_2[3] + lVar5))[2]);
      if (-1 < iVar4) goto code_r0x032288e0;
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
      goto LAB_0322896c;
    }
LAB_032288f8:
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
LAB_0322896c:
      if (lVar6 == 0) {
        (**(code **)(*local_48 + 0x18))();
      }
    }
  }
  return;
code_r0x032288e0:
  lVar6 = lVar6 + 1;
  lVar5 = lVar5 + 0x18;
  if ((int)param_2[4] <= lVar6) goto LAB_032288f8;
  goto LAB_032288bc;
}


