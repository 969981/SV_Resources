/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02379d14; name: FUN_02379d14
 */


void FUN_02379d14(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00c43ef0(param_2,param_1);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  param_2[5] = plVar1;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02379d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


