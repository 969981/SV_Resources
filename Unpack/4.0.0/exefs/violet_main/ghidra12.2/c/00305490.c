/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00305490; name: FUN_00305490
 */


void FUN_00305490(long *param_1)

{
  code *pcVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 8), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1);
  }
  free(param_1);
  return;
}


