/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02942920; name: FUN_02942920
 */


void FUN_02942920(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_01079790(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
                    /* WARNING: Could not recover jumptable at 0x02942944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x4d0))(plVar1,0);
  return;
}


