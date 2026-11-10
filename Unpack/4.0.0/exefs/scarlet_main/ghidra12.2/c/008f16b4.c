/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f16b4; name: FUN_008f16b4
 */


void FUN_008f16b4(undefined8 param_1,undefined4 *param_2)

{
  (**(code **)PTR_DAT_047d2be0)();
  (**(code **)PTR_DAT_047d2bf0)(param_1,*param_2);
                    /* WARNING: Could not recover jumptable at 0x008f1710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d2be8)(param_1,*(undefined8 *)(param_2 + 2),param_2[1]);
  return;
}


