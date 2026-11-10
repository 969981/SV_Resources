/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f5d40; name: FUN_005f5d40
 */


int FUN_005f5d40(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_1 == 2) {
    iVar1 = 2;
  }
  if (param_1 != 3) {
    param_1 = iVar1;
  }
  return param_1;
}


