/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0156f54c; name: FUN_0156f54c
 */


bool FUN_0156f54c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  *(ulong *)(param_2 + 8) = (ulong)*(uint *)(param_2 + 0x10);
  lVar1 = FUN_0156f824();
  if (lVar1 == 0) {
    FUN_0156f62c(param_1,param_2);
  }
  return lVar1 == 0;
}


