/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ed408; name: FUN_002ed408
 */


long FUN_002ed408(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *local_30;
  undefined8 *local_28;
  
  lVar6 = FUN_0049e770(PTR_FUN_047cba38,0x38);
  if (lVar6 != 0) {
    local_28 = (undefined8 *)*param_1;
    *param_1 = 0;
    local_30 = (undefined8 *)*param_2;
    *param_2 = 0;
                    /* try { // try from 002ed448 to 002ed457 has its CatchHandler @ 002ed4fc */
    FUN_002ec748(lVar6,&local_28,&local_30);
    puVar5 = local_30;
    puVar4 = local_28;
    if (local_30 != (undefined8 *)0x0) {
      plVar1 = local_30 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)*local_30)(local_30);
        FUN_0049e790(PTR_LAB_047cba48,puVar5);
        puVar4 = local_28;
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      plVar1 = puVar4 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        local_28 = puVar4;
        (**(code **)*puVar4)(puVar4);
        FUN_0049e790(PTR_LAB_047cba48,puVar4);
      }
    }
  }
  return lVar6;
}


