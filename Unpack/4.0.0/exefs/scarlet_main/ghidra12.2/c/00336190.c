/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00336190; name: FUN_00336190
 */


void FUN_00336190(void *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  *(undefined8 *)((long)param_1 + 0x88) = param_4;
  memcpy(param_1,param_2,param_3);
  *(int *)((long)param_1 + 0x80) = (int)param_3;
  return;
}


