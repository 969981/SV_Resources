/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b801fc; name: FUN_01b801fc
 */


void FUN_01b801fc(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *plStack_28;
  
  if ((DAT_0483aff0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_0483aff0);
    if (iVar3 != 0) {
      FUN_00100190(&LAB_02a3d9c0,&DAT_0483afe0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483aff0);
    }
  }
  uVar2 = DAT_0483afe0;
  DAT_0483aff8 = DAT_0483afe0;
  local_40 = *param_1;
  uStack_38 = param_1[1];
  local_30 = param_1[2];
  plVar1 = (long *)param_1[3];
  plStack_28 = plVar1;
  if (plVar1 == (long *)0x0) {
    FUN_01fb06d4(DAT_0483afe0,&local_40);
    return;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1);
  FUN_01fb06d4(uVar2,&local_40);
                    /* WARNING: Could not recover jumptable at 0x01b80294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}


