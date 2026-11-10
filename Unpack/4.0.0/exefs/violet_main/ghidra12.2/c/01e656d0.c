/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e656d0; name: FUN_01e656d0
 */


void FUN_01e656d0(int *param_1,long param_2,long *param_3)

{
  int local_18 [2];
  
  FUN_01e65734(local_18);
  if (local_18[0] == 0) {
    *(undefined1 *)(*param_3 + param_3[2]) = *(undefined1 *)(param_2 + 9);
    param_3[2] = param_3[2] + 1;
  }
  *param_1 = local_18[0];
  return;
}


