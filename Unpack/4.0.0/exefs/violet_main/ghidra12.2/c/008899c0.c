/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008899c0; name: FUN_008899c0
 */


float FUN_008899c0(long param_1)

{
  int iVar1;
  float fVar2;
  
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
    fVar2 = 0.0;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x58))();
    fVar2 = (float)iVar1;
  }
  return fVar2 * *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x44);
}


