/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033a4f8; name: FUN_0033a4f8
 */


void FUN_0033a4f8(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  puVar5 = (undefined8 *)*param_2;
  *param_2 = 0;
  plVar6 = param_1 + 1;
  plVar7 = (long *)*plVar6;
  if (plVar7 == (long *)0x0) {
    plVar8 = plVar6;
  }
  else {
    plVar6 = param_1 + 1;
    while( true ) {
      while( true ) {
        plVar8 = plVar7;
        if ((undefined8 *)plVar7[4] <= puVar5) break;
        if ((long *)*plVar7 == (long *)0x0) {
          lVar4 = *plVar7;
          goto joined_r0x0033a560;
        }
        plVar6 = plVar7;
        plVar7 = (long *)*plVar7;
      }
      if (puVar5 <= (undefined8 *)plVar7[4]) break;
      plVar6 = plVar7 + 1;
      if ((long *)*plVar6 == (long *)0x0) break;
      plVar7 = (long *)*plVar6;
    }
  }
  lVar4 = *plVar6;
  plVar7 = plVar6;
joined_r0x0033a560:
  if (lVar4 == 0) {
    puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    puVar3[4] = puVar5;
    puVar3[5] = puVar5;
    puVar3[2] = plVar8;
    *puVar3 = 0;
    puVar3[1] = 0;
    *plVar7 = (long)puVar3;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar3 = (undefined8 *)*plVar7;
    }
    FUN_010108e0(param_1[1],puVar3);
    param_1[2] = param_1[2] + 1;
    return;
  }
  if (puVar5 != (undefined8 *)0x0) {
    plVar7 = puVar5 + 1;
    do {
      lVar4 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)*puVar5)(puVar5);
      FUN_0049e790(PTR_LAB_047cba48,puVar5);
      return;
    }
  }
  return;
}


