/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038d5e0; name: FUN_0038d5e0
 */


long FUN_0038d5e0(long param_1,uint param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if ((param_1 != 0) && (param_3 != 0)) {
    while (*(byte *)(param_1 + -1 + param_3) != param_2) {
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        return 0;
      }
    }
    lVar1 = param_1 + param_3 + -1;
  }
  return lVar1;
}


