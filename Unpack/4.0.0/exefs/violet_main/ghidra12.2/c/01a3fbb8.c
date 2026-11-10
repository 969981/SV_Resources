/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a3fbb8; name: FUN_01a3fbb8
 */


void FUN_01a3fbb8(undefined8 param_1,undefined8 *param_2)

{
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    FUN_01a3fbd0(param_1,0);
    return;
  }
  FUN_01a3fbd0(param_1,*(undefined8 *)*param_2);
  return;
}


