/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f4614; name: FUN_001f4614
 */


void FUN_001f4614(long param_1,int *param_2)

{
  FUN_001ed53c(param_1,*param_2 << 8);
  *(char *)(param_1 + 3) = (char)param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)((long)param_2 + 0xd);
  FUN_001ed53c(param_1 + 5,param_2[2]);
  return;
}


