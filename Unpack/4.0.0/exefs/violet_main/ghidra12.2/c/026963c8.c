/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026963c8; name: FUN_026963c8
 */


void FUN_026963c8(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_0269693c(param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_02696984(param_1,param_2);
  return;
}


