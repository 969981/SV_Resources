/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00398e90; name: FUN_00398e90
 */


void FUN_00398e90(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_00399848();
  }
                    /* WARNING: Could not recover jumptable at 0x00398ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x18) + 0x10))(param_1,*(long **)(lVar1 + 0x18),param_3);
  return;
}


