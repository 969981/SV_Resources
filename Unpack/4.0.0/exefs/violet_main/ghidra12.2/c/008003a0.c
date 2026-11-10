/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008003a0; name: FUN_008003a0
 */


void FUN_008003a0(int *param_1,long param_2,undefined8 param_3)

{
  FUN_00800664(*(undefined8 *)(param_2 + 0x1398));
  if (*param_1 == 0) {
    *(undefined8 *)(param_2 + 0x13a0) = param_3;
    FUN_0078cd58(*(undefined8 *)(param_2 + 0x1398),0);
    return;
  }
  return;
}


