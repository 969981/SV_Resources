/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ead814; name: FUN_01ead814
 */


void FUN_01ead814(undefined8 param_1,int param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long local_28;
  
  local_28 = param_3;
  if (param_2 == 1) {
    lVar1 = FUN_0156cb10(param_4);
    if (lVar1 == param_3) {
      FUN_01eada6c(param_1);
      return;
    }
    FUN_01eadab8(param_1,param_3);
    FUN_01eadb64(param_1,param_3);
    FUN_01eadbe8(param_1,&local_28);
  }
  else if (param_2 == 0) {
    lVar1 = FUN_0156cb10(param_4);
    if (lVar1 == param_3) {
      FUN_01eab0f0(param_1);
      return;
    }
    FUN_01ead8d8(param_1,param_3);
    FUN_011db3e4(param_1);
    return;
  }
  return;
}


