/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00305380; name: FUN_00305380
 */


undefined8 * FUN_00305380(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_0038c7b0(0x20);
    *puVar2 = &PTR_FUN_04494580;
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 != (long *)0x0) {
      puVar7 = (undefined8 *)0x0;
      do {
        lVar5 = plVar6[1];
        if (lVar5 == 0) {
          puVar4 = (undefined8 *)0x0;
        }
        else {
          puVar4 = (undefined8 *)FUN_0038c7b0(0x10);
          uVar3 = FUN_0038ccb0(lVar5);
          puVar4[1] = uVar3;
        }
        puVar1 = puVar2 + 3;
        if (puVar7 != (undefined8 *)0x0) {
          puVar1 = puVar7;
        }
        *puVar1 = puVar4;
        plVar6 = (long *)*plVar6;
        puVar7 = puVar4;
      } while (plVar6 != (long *)0x0);
    }
    FUN_00305720(param_1 + 8,puVar2 + 1);
  }
  return puVar2;
}


