/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034d600; name: FUN_0034d600
 */


undefined8 FUN_0034d600(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 - 2 < 2) {
                    /* WARNING: Could not recover jumptable at 0x0034d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_047ccdd0 + 0x10))();
    return uVar1;
  }
  if (param_1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x0034d620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_047ccdc8 + 0x10))();
    return uVar1;
  }
  return 0;
}


