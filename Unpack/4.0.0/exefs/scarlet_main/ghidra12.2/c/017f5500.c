/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f5500; name: FUN_017f5500
 */


void FUN_017f5500(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *plStack_40;
  undefined4 local_38;
  
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_48 = param_2[2];
  plVar1 = (long *)param_2[3];
  plStack_40 = plVar1;
  if (plVar1 == (long *)0x0) {
    local_38 = *(undefined4 *)(param_2 + 4);
    FUN_017f55a0(param_1,&local_58);
    return;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1);
  local_38 = *(undefined4 *)(param_2 + 4);
  FUN_017f55a0(param_1,&local_58);
                    /* WARNING: Could not recover jumptable at 0x017f559c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}


