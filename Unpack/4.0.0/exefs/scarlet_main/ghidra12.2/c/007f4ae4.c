/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f4ae4; name: FUN_007f4ae4
 */


void FUN_007f4ae4(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x58))();
                    /* WARNING: Could not recover jumptable at 0x007f4b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,uVar1);
  return;
}


