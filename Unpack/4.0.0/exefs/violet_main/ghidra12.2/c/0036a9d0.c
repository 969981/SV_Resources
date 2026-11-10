/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036a9d0; name: FUN_0036a9d0
 */


undefined8 FUN_0036a9d0(long *param_1,long param_2)

{
  *param_1 = param_2;
  if (*(int *)(param_2 + 8) == 0) {
    param_1[1] = param_2;
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  return 1;
}


