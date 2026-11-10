/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028f9860; name: FUN_028f9860
 */


void FUN_028f9860(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    FUN_012d3d80(lVar1 + -0x50);
    FUN_012d3dcc(lVar1 + -0x10);
    lVar1 = lVar1 + -0x50;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


