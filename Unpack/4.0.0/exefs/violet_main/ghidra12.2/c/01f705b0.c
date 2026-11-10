/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f705b0; name: FUN_01f705b0
 */


void FUN_01f705b0(undefined8 param_1,long *param_2)

{
  if (*(long *)(*param_2 + 0x60) == 0) {
    FUN_01e74fb0(param_1);
    return;
  }
  FUN_00259678(*param_2 + 0x70);
  return;
}


