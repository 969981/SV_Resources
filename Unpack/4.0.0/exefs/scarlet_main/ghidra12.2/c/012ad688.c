/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012ad688; name: FUN_012ad688
 */


void FUN_012ad688(long param_1,long *param_2)

{
  long *plVar1;
  
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0x800000;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x800000,0x10);
  *(long **)(param_1 + 0x18) = plVar1;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x012ad710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0xe8))();
    return;
  }
  FUN_012ad714(plVar1,plVar1 + 10,0x7fffb0);
  *(long **)(param_1 + 8) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x012ad6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe0))(plVar1,"gfl::lua::ResourceId::GlueCode");
  return;
}


