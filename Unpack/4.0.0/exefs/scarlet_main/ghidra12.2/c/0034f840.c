/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034f840; name: FUN_0034f840
 */


void FUN_0034f840(void *param_1,undefined4 param_2,undefined8 param_3)

{
  memset(param_1,0,0x1028);
  *(undefined4 *)((long)param_1 + 4) = param_2;
  *(undefined8 *)((long)param_1 + 8) = param_3;
  *(undefined8 *)((long)param_1 + 0x1028) = 2;
  return;
}


