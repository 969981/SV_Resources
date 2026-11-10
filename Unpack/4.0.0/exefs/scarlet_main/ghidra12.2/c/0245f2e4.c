/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0245f2e4; name: FUN_0245f2e4
 */


uint FUN_0245f2e4(long param_1,long param_2,undefined4 param_3)

{
  switch(param_3) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 8:
  case 9:
    return (uint)*(byte *)(param_1 + param_2);
  case 6:
  case 7:
    return *(uint *)(param_1 + param_2);
  case 10:
    return (int)*(float *)(param_1 + param_2);
  case 0xb:
    return (int)*(double *)(param_1 + param_2);
  default:
    return 0;
  }
}


