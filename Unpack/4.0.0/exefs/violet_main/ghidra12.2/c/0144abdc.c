/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0144abdc; name: FUN_0144abdc
 */


void FUN_0144abdc(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_0257235c(param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0144a8b8(param_1,param_2);
  return;
}


