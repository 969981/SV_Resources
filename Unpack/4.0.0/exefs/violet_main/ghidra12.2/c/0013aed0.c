/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013aed0; name: FUN_0013aed0
 */


void FUN_0013aed0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x10);
  lVar2 = lVar1 + -0x7fffffffffffffff;
  if (lVar2 <= param_2) {
    lVar2 = param_2;
  }
  *(long *)(param_1 + 0x10) = lVar1 - lVar2;
  *(long *)(param_1 + 0x18) = lVar2;
  return;
}


