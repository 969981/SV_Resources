/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019a3dac; name: FUN_019a3dac
 */


void FUN_019a3dac(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
                    /* WARNING: Could not recover jumptable at 0x019a3ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2c0))(plVar1,param_3);
  return;
}


