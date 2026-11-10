/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0245f170; name: FUN_0245f170
 */


ulong FUN_0245f170(long param_1,long param_2,undefined4 param_3)

{
  switch(param_3) {
  case 1:
  case 3:
    return (ulong)*(byte *)(param_1 + param_2);
  case 2:
    return (long)*(char *)(param_1 + param_2);
  case 4:
    return (long)*(short *)(param_1 + param_2);
  case 5:
    return (ulong)*(ushort *)(param_1 + param_2);
  case 6:
    return (long)*(int *)(param_1 + param_2);
  case 7:
    return (ulong)*(uint *)(param_1 + param_2);
  case 8:
  case 9:
    return *(ulong *)(param_1 + param_2);
  case 10:
    return (long)*(float *)(param_1 + param_2);
  case 0xb:
    return (long)*(double *)(param_1 + param_2);
  default:
    return 0;
  }
}


