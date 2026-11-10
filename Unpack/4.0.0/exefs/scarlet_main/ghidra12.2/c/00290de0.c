/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00290de0; name: FUN_00290de0
 */


undefined8 FUN_00290de0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = param_1 + 1;
  puVar7 = (undefined8 *)*puVar6;
  if (puVar7 != (undefined8 *)0x0) {
    puVar5 = puVar6;
    do {
      iVar1 = FUN_00290c34(puVar7[4],*param_2);
      if (iVar1 >= 0) {
        puVar5 = puVar7;
      }
      puVar7 = (undefined8 *)puVar7[iVar1 < 0];
    } while (puVar7 != (undefined8 *)0x0);
    if ((puVar5 != puVar6) && (iVar1 = FUN_00290c34(*param_2,puVar5[4]), -1 < iVar1)) {
      plVar3 = (long *)puVar5[1];
      if ((long *)puVar5[1] == (long *)0x0) {
        plVar3 = puVar5 + 2;
        plVar2 = (long *)*plVar3;
        if ((undefined8 *)*plVar2 != puVar5) {
          do {
            lVar4 = *plVar3;
            plVar3 = (long *)(lVar4 + 0x10);
            plVar2 = (long *)*plVar3;
          } while (*plVar2 != lVar4);
        }
      }
      else {
        do {
          plVar2 = plVar3;
          plVar3 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
      if ((undefined8 *)*param_1 == puVar5) {
        *param_1 = plVar2;
      }
      param_1[2] = param_1[2] + -1;
      FUN_01336080(param_1[1],puVar5);
      FUN_0049e790(PTR_LAB_047cba48,puVar5);
      return 1;
    }
  }
  return 0;
}


