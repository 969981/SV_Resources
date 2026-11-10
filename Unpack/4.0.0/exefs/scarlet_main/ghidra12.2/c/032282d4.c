/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032282d4; name: FUN_032282d4
 */


void FUN_032282d4(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar5 = (long *)param_1[6];
  if (plVar5 == (long *)0x0) {
    if ((param_1[3] != 0) && ((long *)param_1[7] != (long *)0x0)) {
      *(long *)param_1[7] = *param_1 - param_1[2];
    }
  }
  else {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_1);
    plVar5 = (long *)param_1[6];
    param_1[6] = 0;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar6 = plVar5 + 2;
      do {
        lVar7 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  param_1[3] = 0;
  plVar5 = (long *)*param_2;
  if (plVar5 == (long *)0x0) {
    lVar7 = param_2[1];
    lVar2 = param_2[2];
    param_1[2] = lVar7;
    *param_1 = lVar7;
    param_1[1] = lVar2 + lVar7;
    param_1[4] = 0;
    param_1[7] = param_2[3];
  }
  else {
    if (plVar5[1] != 0) {
      plVar6 = plVar5 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = (long *)param_1[6];
    param_1[6] = (long)plVar5;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar1 = plVar6 + 2;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    (**(code **)(*plVar5 + 0x20))(plVar5,param_1);
    param_1[7] = 0;
  }
  param_1[3] = 1;
  return;
}


