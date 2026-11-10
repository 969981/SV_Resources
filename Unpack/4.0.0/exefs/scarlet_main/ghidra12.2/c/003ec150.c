/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ec150; name: FUN_003ec150
 */


uint FUN_003ec150(long *param_1,uint param_2)

{
  if (((int)param_2 < 0) || ((int)param_1[1] <= (int)(param_2 >> 5))) {
    return 0;
  }
  return *(uint *)(*param_1 + (ulong)(param_2 >> 5) * 4) >> (ulong)(param_2 & 0x1f) & 1;
}


