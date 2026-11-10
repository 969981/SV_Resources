/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033d1bc; name: FUN_0033d1bc
 */


undefined8 FUN_0033d1bc(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  plVar6 = param_1 + 1;
  plVar3 = (long *)*plVar6;
  if (plVar3 != (long *)0x0) {
    uVar5 = *param_2;
    plVar7 = plVar3;
    plVar8 = plVar6;
    do {
      if ((ulong)plVar7[4] >= uVar5) {
        plVar8 = plVar7;
      }
      plVar7 = (long *)plVar7[(ulong)plVar7[4] < uVar5];
    } while (plVar7 != (long *)0x0);
    if (plVar8 == plVar6) {
      return 0;
    }
    if ((ulong)plVar8[4] <= uVar5) {
      plVar6 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        plVar6 = plVar8 + 2;
        plVar7 = (long *)*plVar6;
        if ((long *)*plVar7 != plVar8) {
          do {
            lVar4 = *plVar6;
            plVar6 = (long *)(lVar4 + 0x10);
            plVar7 = (long *)*plVar6;
          } while (*plVar7 != lVar4);
        }
      }
      else {
        do {
          plVar7 = plVar6;
          plVar6 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if ((long *)*param_1 == plVar8) {
        *param_1 = plVar7;
      }
      param_1[2] = param_1[2] + -1;
      FUN_01336080(plVar3,plVar8);
      puVar9 = (undefined8 *)plVar8[5];
      if (puVar9 != (undefined8 *)0x0) {
        plVar3 = puVar9 + 1;
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
          (**(code **)*puVar9)(puVar9);
          FUN_0049e790(PTR_LAB_047cba48,puVar9);
        }
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar8);
      return 1;
    }
  }
  return 0;
}


