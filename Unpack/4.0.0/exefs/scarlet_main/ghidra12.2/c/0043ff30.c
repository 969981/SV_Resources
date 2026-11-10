/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043ff30; name: FUN_0043ff30
 */


void FUN_0043ff30(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_003ec760(param_3);
  puVar2 = *(undefined4 **)(lVar1 + 0x40);
  *puVar2 = param_1;
  puVar2[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x0043ff5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x38))();
  return;
}


