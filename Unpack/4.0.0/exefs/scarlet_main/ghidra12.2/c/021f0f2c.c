/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f0f2c; name: FUN_021f0f2c
 */


void FUN_021f0f2c(long *param_1,long param_2)

{
  FUN_021f0f6c(*(undefined8 *)(param_2 + 0x70),&DAT_04842118);
                    /* WARNING: Could not recover jumptable at 0x021f0f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,&DAT_04842118);
  return;
}


