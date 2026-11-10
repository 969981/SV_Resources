/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079fc24; name: FUN_0079fc24
 */


void FUN_0079fc24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00796784(param_3);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0079fc68(param_1,param_2,param_3);
  return;
}


