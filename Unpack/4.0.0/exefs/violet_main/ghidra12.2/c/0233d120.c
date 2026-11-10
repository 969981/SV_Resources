/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0233d120; name: FUN_0233d120
 */


void FUN_0233d120(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_0233d890(param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0233d8e0(param_1,param_2);
  return;
}


