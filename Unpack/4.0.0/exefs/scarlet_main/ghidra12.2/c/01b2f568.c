/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b2f568; name: FUN_01b2f568
 */


void FUN_01b2f568(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long *local_18;
  
  if ((DAT_04840ed0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04840ed0);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02b28d28,&DAT_04840ec0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840ed0);
    }
  }
  uVar1 = DAT_04840ec0;
  DAT_04840ed8 = DAT_04840ec0;
  plVar3 = (long *)*param_1;
  local_18 = plVar3;
  if (plVar3 == (long *)0x0) {
    FUN_02136a68(DAT_04840ec0,&local_18,param_2);
    return;
  }
  (**(code **)(*plVar3 + 0x58))(plVar3);
  FUN_02136a68(uVar1,&local_18,param_2);
                    /* WARNING: Could not recover jumptable at 0x01b2f5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x60))(plVar3);
  return;
}


