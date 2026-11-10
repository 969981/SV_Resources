/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002ec0d0; name: FUN_002ec0d0
 */


long * FUN_002ec0d0(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = FUN_00305350();
  if ((uVar1 & 1) == 0) {
    return (long *)0x0;
  }
  plVar2 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (plVar2 != (long *)0x0) {
    plVar2[2] = (long)&DAT_03c6e797;
    *plVar2 = (long)(PTR_DAT_047cc960 + 0x10);
    plVar2[1] = 1;
    lVar3 = FUN_00305470(param_1);
    plVar2[3] = lVar3;
    lVar3 = FUN_0038ccb0("metadata.google.internal.:8080");
    plVar2[4] = lVar3;
    FUN_002f3590(plVar2[3] + 8);
  }
  return plVar2;
}


