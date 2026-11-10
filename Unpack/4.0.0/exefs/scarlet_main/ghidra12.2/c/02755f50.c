/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02755f50; name: FUN_02755f50
 */


undefined1  [16] FUN_02755f50(long param_1)

{
  ulong uVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if ((*(long **)(param_1 + 0x48) == (long *)0x0) ||
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x40))(), (uVar1 & 1) == 0)) {
    return ZEXT816(0);
  }
                    /* WARNING: Could not recover jumptable at 0x02755f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x38))();
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}


