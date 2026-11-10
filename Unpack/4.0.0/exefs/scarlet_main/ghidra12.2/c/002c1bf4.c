/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c1bf4; name: FUN_002c1bf4
 */


void FUN_002c1bf4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_002c1bf4(param_1,*param_2);
  FUN_002c1bf4(param_1,param_2[1]);
  lVar6 = param_2[8];
  if (lVar6 != 0) {
    lVar5 = param_2[9];
    if (lVar5 == lVar6) {
      lVar5 = lVar6;
    }
    else {
      do {
        puVar7 = (undefined8 *)(lVar5 + -0x10);
        lVar4 = lVar5 + -0x18;
        lVar5 = lVar5 + -0x38;
        FUN_002c1d5c(lVar4,*puVar7);
      } while (lVar6 != lVar5);
      lVar5 = param_2[8];
    }
    param_2[9] = lVar6;
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
  }
  FUN_002c1cd4(param_2 + 5,param_2[6]);
  puVar7 = (undefined8 *)param_2[4];
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
      FUN_0049e790(PTR_LAB_047cba48,puVar7);
    }
  }
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return;
}


