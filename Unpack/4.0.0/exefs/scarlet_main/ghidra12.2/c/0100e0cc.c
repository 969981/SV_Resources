/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0100e0cc; name: FUN_0100e0cc
 */


void FUN_0100e0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long *local_48;
  
  if ((DAT_0483b1b0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0483b1b0);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02a3f278,&DAT_0483b1a0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483b1b0);
    }
  }
  uVar1 = DAT_0483b1a0;
  DAT_0483b1b8 = DAT_0483b1a0;
  plVar3 = (long *)*param_5;
  local_48 = plVar3;
  if (plVar3 == (long *)0x0) {
    FUN_0100e200(param_1,param_2,param_3,param_4,DAT_0483b1a0,&local_48,param_6);
    return;
  }
  (**(code **)(*plVar3 + 0x58))(plVar3);
  FUN_0100e200(param_1,param_2,param_3,param_4,uVar1,&local_48,param_6);
                    /* WARNING: Could not recover jumptable at 0x0100e174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x60))(plVar3);
  return;
}


