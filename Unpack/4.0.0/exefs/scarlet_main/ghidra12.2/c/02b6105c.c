/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b6105c; name: FUN_02b6105c
 */


undefined8 FUN_02b6105c(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    *param_2 = 0;
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x02b6108c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&UNK_02b61090 + (ulong)(byte)(&DAT_03d626a7)[param_1 - 1] * 4))(0);
  return uVar1;
}


