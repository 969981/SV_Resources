/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01491058; name: FUN_01491058
 */


void FUN_01491058(long param_1,undefined8 *param_2,uint param_3)

{
  if (*(long *)(param_1 + 0x128) == 0) {
    return;
  }
  FUN_01491158(*param_2,param_1 + 0x128,param_3 & 1);
  return;
}


