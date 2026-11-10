/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002a1750; name: FUN_002a1750
 */


void FUN_002a1750(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar7 = (undefined8 *)param_1[4];
  *param_1 = &PTR_FUN_0448e210;
  if (puVar7 != (undefined8 *)0x0) {
    plVar1 = puVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar7)(puVar7);
      FUN_0049e790(PTR_LAB_047cba48,puVar7);
      lVar5 = param_1[1];
      puVar4 = PTR_LAB_047cba48;
      goto joined_r0x002a1844;
    }
  }
  lVar5 = param_1[1];
  puVar4 = PTR_LAB_047cba48;
joined_r0x002a1844:
  if (lVar5 == 0) {
    PTR_LAB_047cba48 = puVar4;
    return;
  }
  lVar8 = param_1[2];
  PTR_LAB_047cba48 = puVar4;
  if (lVar8 == lVar5) {
    lVar8 = lVar5;
  }
  else {
    do {
      puVar7 = *(undefined8 **)(lVar8 + -8);
      lVar8 = lVar8 + -0x10;
      if (puVar7 != (undefined8 *)0x0) {
        plVar1 = puVar7 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)*puVar7)(puVar7);
          FUN_0049e790(puVar4,puVar7);
        }
      }
    } while (lVar8 != lVar5);
    lVar8 = param_1[1];
  }
  puVar4 = PTR_LAB_047cba48;
  param_1[2] = lVar5;
  FUN_0049e790(puVar4,lVar8);
  return;
}


