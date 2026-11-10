/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0089a654; name: FUN_0089a654
 */


undefined8 FUN_0089a654(long *param_1,uint param_2)

{
  return *(undefined8 *)(*param_1 + (long)(int)((int)param_1[1] + ~param_2) * 8);
}


