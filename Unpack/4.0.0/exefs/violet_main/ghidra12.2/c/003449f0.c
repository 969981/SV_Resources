/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003449f0; name: FUN_003449f0
 */


undefined8 FUN_003449f0(long param_1,long param_2,long param_3,long param_4)

{
  long *__ptr;
  long *plVar1;
  long *plVar2;
  
  __ptr = (long *)FUN_0038c780(0x10);
  *__ptr = param_1;
  __ptr[1] = param_1 + 0x28;
  plVar2 = *(long **)(param_1 + 0x30);
  plVar1 = (long *)FUN_0038c780(0x28);
  *plVar1 = *plVar2;
  plVar1[1] = (long)plVar2;
  *plVar2 = (long)plVar1;
  *(long **)(*plVar1 + 8) = plVar1;
  plVar1[2] = param_2;
  plVar1[3] = param_3;
  plVar1[4] = param_4;
  free(__ptr);
  return 1;
}


