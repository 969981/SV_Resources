/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fd204; name: FUN_007fd204
 */


void FUN_007fd204(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*param_2)(param_2);
  FUN_007bfaa0(param_2);
  return;
}


