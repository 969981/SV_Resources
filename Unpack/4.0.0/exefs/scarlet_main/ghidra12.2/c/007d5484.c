/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d5484; name: FUN_007d5484
 */


void FUN_007d5484(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  FUN_007ec490();
  plVar1 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
                    /* WARNING: Could not recover jumptable at 0x007d54b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_2 + 8));
  return;
}


