/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010b9fa0; name: FUN_010b9fa0
 */


void FUN_010b9fa0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 local_30;
  long lStack_28;
  
  plVar1 = (long *)*param_1;
  lStack_28 = FUN_010ba018(plVar1 + 0x21,param_1 + 2);
  if (lStack_28 == 0) {
                    /* WARNING: Could not recover jumptable at 0x010ba014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x118))(plVar1);
    return;
  }
  local_30 = param_1[1];
  lStack_28 = lStack_28 + 0x20;
  (**(code **)param_1[3])((undefined8 *)param_1[3] + 4,&lStack_28,&local_30);
  return;
}


