/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00394c20; name: FUN_00394c20
 */


void FUN_00394c20(int param_1,undefined1 *param_2)

{
  if (param_1 < 0) {
    *param_2 = 0x2d;
    FUN_00394a70(-param_1,param_2 + 1);
    return;
  }
  FUN_00394a70();
  return;
}


