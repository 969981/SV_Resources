/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00303a30; name: FUN_00303a30
 */


void FUN_00303a30(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*(code **)(*param_1 + 0x10) != (code *)0x0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  FUN_00304b60(param_1[1]);
  FUN_00368470(param_1 + 2);
  free((void *)param_1[0x27]);
  free((void *)param_1[0x2a]);
  free(param_1);
  return;
}


