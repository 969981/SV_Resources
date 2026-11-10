/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002cb974; name: FUN_002cb974
 */


void FUN_002cb974(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  *param_1 = (long)(PTR_DAT_047cc880 + 0x10);
  plVar5 = param_1 + 2;
                    /* try { // try from 002cb9a4 to 002cb9ab has its CatchHandler @ 002cba60 */
  FUN_002bee00(*plVar5,param_1[3],param_1[4],param_1[5],param_1[6],param_1[7],param_1[8],param_1);
  plVar6 = (long *)*plVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
      FUN_0049e790(PTR_LAB_047cba48,plVar6);
    }
  }
  param_1[2] = 0;
  FUN_002c648c(param_1 + 0xd,param_1[0xe]);
                    /* try { // try from 002cb9e0 to 002cb9e3 has its CatchHandler @ 002cba5c */
  FUN_0038db20(param_1 + 9);
  plVar5 = (long *)*plVar5;
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      FUN_0049e790(PTR_LAB_047cba48,plVar5);
      return;
    }
  }
  return;
}


