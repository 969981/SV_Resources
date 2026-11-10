/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


