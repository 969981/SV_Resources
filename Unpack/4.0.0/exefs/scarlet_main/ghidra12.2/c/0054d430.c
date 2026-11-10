/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0054d430; name: FUN_0054d430
 */


void FUN_0054d430(long param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_0054d430(param_1,*param_2);
  FUN_0054d430(param_1,param_2[1]);
  plVar1 = (long *)param_2[0x10];
  if (plVar1 != (long *)0x0) {
    if (plVar1 == param_2 + 0xc) {
      pcVar2 = *(code **)(*plVar1 + 0x10);
    }
    else {
      pcVar2 = *(code **)(*plVar1 + 0x18);
    }
    (*pcVar2)();
  }
  plVar1 = (long *)param_2[10];
  if (plVar1 != (long *)0x0) {
    if (plVar1 == param_2 + 6) {
      pcVar2 = *(code **)(*plVar1 + 0x10);
    }
    else {
      pcVar2 = *(code **)(*plVar1 + 0x18);
    }
    (*pcVar2)();
  }
                    /* WARNING: Could not recover jumptable at 0x0054d4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),param_2,0x90,0x10);
  return;
}


