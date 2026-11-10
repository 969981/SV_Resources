/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019c9ba0; name: FUN_019c9ba0
 */


long FUN_019c9ba0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (lVar1 = FUN_019c9f30(param_1,param_2), lVar1 != 0)) {
    lVar1 = lVar1 - (ulong)(lVar1 == param_2);
    *(undefined2 *)(param_1 + lVar1 * 2) = 0;
  }
  return lVar1;
}


