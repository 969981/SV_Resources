/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eafc24; name: FUN_02eafc24
 */


void FUN_02eafc24(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  
  *param_1 = (long)(PTR_DAT_047e3478 + 0x10);
  lVar7 = param_1[4];
  if (((lVar7 != 0) && (plVar1 = (long *)(lVar7 + (long)(param_1 + 4)), plVar1 != (long *)0x0)) &&
     (plVar1[1] != 0)) {
    plVar5 = plVar1 + 2;
    do {
      lVar7 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))();
    }
  }
  iVar6 = (int)param_1[6];
  plVar1 = param_1 + 5;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      plVar5 = *(long **)((long)plVar1 + lVar7 * 8 + *plVar1);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x10))();
        iVar6 = (int)param_1[6];
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
  lVar7 = param_1[7];
  if (*(int *)((long)param_1 + 0x44) < 0) {
    lVar2 = 0;
    if (lVar7 != 0) {
      lVar2 = lVar7 + (long)(param_1 + 7);
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar2,0);
  }
  if (*(int *)((long)param_1 + 0x34) < 0) {
    lVar7 = 0;
    if (param_1[5] != 0) {
      lVar7 = param_1[5] + (long)plVar1;
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar7,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


