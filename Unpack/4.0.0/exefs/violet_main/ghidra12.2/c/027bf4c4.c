/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bf4c4; name: FUN_027bf4c4
 */


uint FUN_027bf4c4(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined1 auStack_40 [32];
  
  FUN_006c4b84(auStack_40);
  plVar2 = (long *)FUN_006c4ae0();
  *plVar2 = param_1;
  uVar1 = FUN_006c6bb0(param_1 + 8);
  FUN_006c4cb4(auStack_40);
  return uVar1 & 1;
}


