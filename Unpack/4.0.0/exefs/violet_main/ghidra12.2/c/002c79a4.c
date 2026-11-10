/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c79a4; name: FUN_002c79a4
 */


long * FUN_002c79a4(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  
  plVar4 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    plVar4 = (long *)(param_2 + 0x10);
    plVar6 = (long *)*plVar4;
    if (*plVar6 != param_2) {
      do {
        lVar7 = *plVar4;
        plVar4 = (long *)(lVar7 + 0x10);
        plVar6 = (long *)*plVar4;
      } while (*plVar6 != lVar7);
    }
  }
  else {
    do {
      plVar6 = plVar4;
      plVar4 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
  if (*param_1 == param_2) {
    *param_1 = (long)plVar6;
  }
  param_1[2] = param_1[2] + -1;
  FUN_01336080(param_1[1],param_2);
  lVar7 = *(long *)(param_2 + 0x40);
  if (lVar7 != 0) {
    lVar5 = *(long *)(param_2 + 0x48);
    if (lVar5 == lVar7) {
      lVar5 = lVar7;
    }
    else {
      do {
        puVar8 = (undefined8 *)(lVar5 + -0x10);
        lVar3 = lVar5 + -0x18;
        lVar5 = lVar5 + -0x38;
        FUN_002c1d5c(lVar3,*puVar8);
      } while (lVar7 != lVar5);
      lVar5 = *(long *)(param_2 + 0x40);
    }
    *(long *)(param_2 + 0x48) = lVar7;
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
  }
  FUN_002c1cd4(param_2 + 0x28,*(undefined8 *)(param_2 + 0x30));
  puVar8 = *(undefined8 **)(param_2 + 0x20);
  if (puVar8 != (undefined8 *)0x0) {
    plVar4 = puVar8 + 1;
    do {
      lVar7 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)*puVar8)(puVar8);
      FUN_0049e790(PTR_LAB_047cba48,puVar8);
    }
  }
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return plVar6;
}


