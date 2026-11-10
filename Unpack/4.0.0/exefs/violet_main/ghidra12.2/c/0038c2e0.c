/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038c2e0; name: FUN_0038c2e0
 */


undefined8 FUN_0038c2e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1 != 0) {
    uVar1 = FUN_0038c7b0(param_1 * 0x18);
    *param_2 = uVar1;
    param_2[1] = param_1;
  }
  return 0;
}


