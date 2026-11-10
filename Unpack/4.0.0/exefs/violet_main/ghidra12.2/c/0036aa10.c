/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036aa10; name: FUN_0036aa10
 */


undefined8 FUN_0036aa10(long *param_1,long *param_2)

{
  if (*(int *)(*param_1 + 8) == 0) {
    if ((ulong)*(uint *)(param_1 + 2) < *(ulong *)(param_1[1] + 0x28)) {
      *param_2 = *(long *)(param_1[1] + 0x20) + (ulong)*(uint *)(param_1 + 2) * 0x20;
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      return 1;
    }
  }
  return 0;
}


