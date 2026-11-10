/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034ab84; name: FUN_0034ab84
 */


undefined8 FUN_0034ab84(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  plVar5 = param_1 + 1;
  plVar3 = (long *)*plVar5;
  if (plVar3 != (long *)0x0) {
    lVar4 = *param_2;
    plVar6 = plVar3;
    plVar7 = plVar5;
    do {
      if (lVar4 <= plVar6[4]) {
        plVar7 = plVar6;
      }
      plVar6 = (long *)plVar6[plVar6[4] < lVar4];
    } while (plVar6 != (long *)0x0);
    if (plVar7 == plVar5) {
      return 0;
    }
    if (plVar7[4] <= lVar4) {
      plVar5 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        plVar5 = plVar7 + 2;
        plVar6 = (long *)*plVar5;
        if ((long *)*plVar6 != plVar7) {
          do {
            lVar4 = *plVar5;
            plVar5 = (long *)(lVar4 + 0x10);
            plVar6 = (long *)*plVar5;
          } while (*plVar6 != lVar4);
        }
      }
      else {
        do {
          plVar6 = plVar5;
          plVar5 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if ((long *)*param_1 == plVar7) {
        *param_1 = plVar6;
      }
      param_1[2] = param_1[2] + -1;
      FUN_01336080(plVar3,plVar7);
      puVar8 = (undefined8 *)plVar7[5];
      if (puVar8 != (undefined8 *)0x0) {
        plVar3 = puVar8 + 1;
        do {
          lVar4 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 + -1 == 0) {
          (**(code **)*puVar8)(puVar8);
          FUN_0049e790(PTR_LAB_047cba48,puVar8);
        }
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar7);
      return 1;
    }
  }
  return 0;
}


