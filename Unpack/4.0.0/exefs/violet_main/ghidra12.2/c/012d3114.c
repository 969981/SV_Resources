/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012d3114; name: FUN_012d3114
 */


void FUN_012d3114(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x50;
    FUN_012d3d80();
    FUN_012d3dcc(lVar1 + -0x10);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}


