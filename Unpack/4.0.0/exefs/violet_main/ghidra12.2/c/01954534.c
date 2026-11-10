/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01954534; name: FUN_01954534
 */


void FUN_01954534(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_02162064();
  if ((uVar1 & 1) == 0) {
    FUN_014254dc(param_1);
  }
  else {
    FUN_02162158(param_1,param_2);
  }
  return;
}


