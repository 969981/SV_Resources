/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0175d5e4; name: FUN_0175d5e4
 */


void FUN_0175d5e4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  
  param_1 = param_1 + (param_3 & 0xffffffff) * 0x20;
  *(undefined8 *)(param_1 + 0x10) = param_5;
  *(undefined8 *)(param_1 + 0x20) = 0x58;
  plVar1 = (long *)(**(code **)(*param_5 + 0x10))(param_5,0x58,8);
  *(long **)(param_1 + 0x18) = plVar1;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0175d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0xe8))();
    return;
  }
  FUN_014de418(plVar1,param_4,param_5,1);
  *(long **)(param_1 + 8) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x0175d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe0))(plVar1,param_2);
  return;
}


