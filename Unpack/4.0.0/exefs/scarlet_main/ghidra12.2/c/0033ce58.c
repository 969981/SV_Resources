/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033ce58; name: FUN_0033ce58
 */


long FUN_0033ce58(undefined8 *param_1,long *param_2,undefined8 *param_3,long *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *local_50;
  undefined8 *local_48;
  undefined8 *local_38;
  
  lVar6 = FUN_0049e770(PTR_FUN_047cba38,0xf0);
  if (lVar6 != 0) {
    uVar7 = *param_1;
    local_38 = (undefined8 *)0x0;
    if (*param_2 != 0) {
      plVar1 = (long *)(*param_2 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_38 = (undefined8 *)*param_2;
    }
    uVar8 = *param_3;
    local_48 = (undefined8 *)0x0;
    if (*param_4 != 0) {
      plVar1 = (long *)(*param_4 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_48 = (undefined8 *)*param_4;
    }
    local_50 = (long *)*param_5;
    *param_5 = 0;
                    /* try { // try from 0033cefc to 0033cf0f has its CatchHandler @ 0033d000 */
    FUN_0033e8a8(lVar6,uVar7,&local_38,uVar8,&local_48,&local_50);
    plVar1 = local_50;
    puVar5 = local_48;
    if (local_50 != (long *)0x0) {
      plVar2 = local_50 + 1;
      do {
        lVar9 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*local_50 + 8))(local_50);
        FUN_0049e790(PTR_LAB_047cba48,plVar1);
        puVar5 = local_48;
      }
    }
    local_48 = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      plVar1 = puVar5 + 1;
      do {
        lVar9 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)*puVar5)(puVar5);
        FUN_0049e790(PTR_LAB_047cba48,puVar5);
      }
    }
    puVar5 = local_38;
    if (local_38 != (undefined8 *)0x0) {
      plVar1 = local_38 + 1;
      do {
        lVar9 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)*local_38)(local_38);
        FUN_0049e790(PTR_LAB_047cba48,puVar5);
      }
    }
  }
  return lVar6;
}


