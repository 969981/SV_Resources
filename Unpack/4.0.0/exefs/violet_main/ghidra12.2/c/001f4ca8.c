/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f4ca8; name: FUN_001f4ca8
 */


long FUN_001f4ca8(long param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined4 *)(param_2 + 4);
    lVar2 = param_3;
    do {
      FUN_001ed514(param_1,puVar1[-1]);
      FUN_001ed53c(param_1 + 2,*puVar1);
      lVar2 = lVar2 + -1;
      param_1 = param_1 + 6;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
  }
  return param_3 * 6;
}


