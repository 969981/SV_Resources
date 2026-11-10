/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003106e0; name: FUN_003106e0
 */


void FUN_003106e0(uint *param_1,uint param_2)

{
  uint uVar1;
  
  param_1[3] = param_2;
  uVar1 = *param_1;
  if (param_2 <= *param_1) {
    uVar1 = param_2;
  }
  FUN_00310700(param_1,uVar1);
  return;
}


