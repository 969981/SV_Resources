/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038e100; name: FUN_0038e100
 */


int FUN_0038e100(long param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x20c49b) {
    if (param_1 < -0x20c49a) {
      return -0x7fffffff;
    }
    iVar1 = param_2 / 1000000 + (int)param_1 * 1000;
  }
  else {
    iVar1 = 0x7fffffff;
    if (param_1 == 0x20c49b) {
      iVar1 = 0x7fffffff;
      if (param_2 < 648000000) {
        iVar1 = param_2 / 1000000 + 0x7ffffd78;
      }
      return iVar1;
    }
  }
  return iVar1;
}


