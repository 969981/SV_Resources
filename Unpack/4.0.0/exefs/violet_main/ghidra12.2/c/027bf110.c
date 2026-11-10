/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bf110; name: FUN_027bf110
 */


void FUN_027bf110(long param_1)

{
  long *plVar1;
  undefined1 auStack_40 [32];
  
  FUN_006c4b84(auStack_40);
  plVar1 = (long *)FUN_006c4ae0();
  *plVar1 = param_1;
  FUN_006c6c34(param_1 + 8);
  FUN_006c4cb4(auStack_40);
  return;
}


