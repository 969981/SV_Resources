/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022fb510; name: FUN_022fb510
 */


void FUN_022fb510(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_022fb554(param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_018f99f8(param_1,param_2);
  return;
}


