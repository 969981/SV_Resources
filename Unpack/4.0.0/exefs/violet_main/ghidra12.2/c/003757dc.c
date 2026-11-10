/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003757dc; name: FUN_003757dc
 */


undefined8 FUN_003757dc(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  plVar5 = param_1 + 1;
  plVar1 = (long *)*plVar5;
  uVar3 = 0;
  if (plVar1 != (long *)0x0) {
    uVar4 = *param_2;
    plVar6 = plVar1;
    plVar8 = plVar5;
    do {
      if ((ulong)plVar6[4] >= uVar4) {
        plVar8 = plVar6;
      }
      plVar6 = (long *)plVar6[(ulong)plVar6[4] < uVar4];
    } while (plVar6 != (long *)0x0);
    if ((plVar8 == plVar5) || (uVar4 < (ulong)plVar8[4])) {
      return 0;
    }
    plVar5 = (long *)plVar8[1];
    if ((long *)plVar8[1] == (long *)0x0) {
      plVar5 = plVar8 + 2;
      plVar6 = (long *)*plVar5;
      if ((long *)*plVar6 != plVar8) {
        do {
          lVar7 = *plVar5;
          plVar5 = (long *)(lVar7 + 0x10);
          plVar6 = (long *)*plVar5;
        } while (*plVar6 != lVar7);
      }
    }
    else {
      do {
        plVar6 = plVar5;
        plVar5 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
    if ((long *)*param_1 == plVar8) {
      *param_1 = plVar6;
    }
    param_1[2] = param_1[2] + -1;
    FUN_01336080(plVar1,plVar8);
    puVar2 = (undefined8 *)plVar8[5];
    plVar8[5] = 0;
    if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 003758b0 to 003758b3 has its CatchHandler @ 003758d0 */
      (**(code **)*puVar2)();
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar8);
    uVar3 = 1;
  }
  return uVar3;
}


