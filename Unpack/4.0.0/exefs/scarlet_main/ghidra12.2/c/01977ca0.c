/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01977ca0; name: FUN_01977ca0
 */


undefined8 FUN_01977ca0(void)

{
  undefined8 uVar1;
  
  if (DAT_0485e9d8 == (long *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x01977cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*DAT_0485e9d8 + 0x70))();
  return uVar1;
}


