/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01932e44; name: FUN_01932e44
 */


void FUN_01932e44(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  
  *param_2 = 0;
  uVar1 = (**(code **)(*(long *)*param_3 + 0x208))();
  if (((uVar1 & 1) == 0) || (uVar1 = (**(code **)(*(long *)*param_3 + 0x1f8))(), (uVar1 & 1) != 0))
  {
    *param_2 = 1;
  }
  return;
}


