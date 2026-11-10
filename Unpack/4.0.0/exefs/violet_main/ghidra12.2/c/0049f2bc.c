/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049f2bc; name: FUN_0049f2bc
 */


undefined8 * FUN_0049f2bc(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
    puVar2 = PTR_DAT_047cd6f0;
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar1[1] = 0;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x38);
    }
    puVar1 = (undefined8 *)FUN_00520c00(param_1,0x38);
    puVar2 = PTR_DAT_047cd6f0;
    puVar1[1] = param_1;
  }
  *puVar1 = puVar2 + 0x10;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_0051fcc4(puVar1 + 5,puVar1 + 2,puVar1 + 3);
  if (*(int *)PTR_DAT_047cd6f8 != 0) {
    FUN_0052b230(PTR_DAT_047cd6f8);
  }
  puVar2 = PTR_DAT_047cba80;
  puVar1[2] = PTR_DAT_047cba80;
  puVar1[3] = puVar2;
  return puVar1;
}


