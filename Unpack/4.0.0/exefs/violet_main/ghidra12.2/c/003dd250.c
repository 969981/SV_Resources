/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003dd250; name: FUN_003dd250
 */


bool FUN_003dd250(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    return true;
  }
  iVar1 = FUN_003e8f00();
  return iVar1 == param_3;
}


