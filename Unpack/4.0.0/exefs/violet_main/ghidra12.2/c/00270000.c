/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00270000; name: FUN_00270000
 */


void FUN_00270000(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_0027310c(puVar2);
    *puVar2 = &PTR_FUN_0448c2e8;
  }
  *param_1 = puVar2;
  plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  puVar1 = PTR_DAT_047cc310 + 0x10;
  plVar3[2] = 0;
  plVar3[3] = (long)puVar2;
  *plVar3 = (long)puVar1;
  plVar3[1] = 0;
  param_1[1] = plVar3;
  return;
}


