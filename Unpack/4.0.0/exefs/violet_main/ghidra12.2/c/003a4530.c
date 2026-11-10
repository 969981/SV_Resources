/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a4530; name: FUN_003a4530
 */


void FUN_003a4530(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    FUN_003a6d20(*param_1);
  }
  if (param_1[3] != 0) {
    FUN_003a6cb0(*param_1);
  }
  FUN_003a6dd0(param_1 + 0xa9,0x20);
  return;
}


