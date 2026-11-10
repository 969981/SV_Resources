/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0277f7f8; name: FUN_0277f7f8
 */


void FUN_0277f7f8(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x70) + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0277f80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,param_1 + 0x30);
  return;
}


