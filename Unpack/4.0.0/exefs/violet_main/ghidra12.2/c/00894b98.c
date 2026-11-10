/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00894b98; name: FUN_00894b98
 */


void FUN_00894b98(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 8);
  lVar2 = *plVar1;
  *plVar1 = *param_1;
  *(long **)(lVar2 + 8) = param_1;
  *(long **)(*param_1 + 8) = plVar1;
  *param_1 = lVar2;
  return;
}


