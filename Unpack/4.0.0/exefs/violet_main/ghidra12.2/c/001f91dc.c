/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f91dc; name: FUN_001f91dc
 */


void FUN_001f91dc(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    param_1[1] = param_2;
    plVar1 = param_1;
  }
  else {
    *(long *)(lVar2 + 0x88) = param_2;
    plVar1 = param_1 + 1;
  }
  *plVar1 = param_2;
  param_1[2] = param_1[2] + 1;
  return;
}


