/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03441774; name: FUN_03441774
 */


void FUN_03441774(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_03444cc4();
  puVar1 = PTR_DAT_047e2fd0;
  if (param_1[0xc9] != 0) {
    *(undefined4 *)(param_1 + 0xc6) = 0;
    param_1[199] = 0;
    param_1[200] = 0;
    (**(code **)(puVar1 + 0x30))(7);
  }
  *(undefined4 *)(param_1 + 0xc6) = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  FUN_03444cc4(param_1);
  FUN_03440538(param_1 + 0x55);
  (**(code **)*param_1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x034417f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 0x30))(7,param_1);
  return;
}


