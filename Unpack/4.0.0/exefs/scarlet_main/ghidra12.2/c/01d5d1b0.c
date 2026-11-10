/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d5d1b0; name: FUN_01d5d1b0
 */


uint FUN_01d5d1b0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *plStack_28;
  
  if ((DAT_048383f8 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_048383f8);
    if (iVar4 != 0) {
      FUN_00100190(&LAB_00aa519c,&DAT_048383e8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048383f8);
    }
  }
  uVar2 = DAT_048383e8;
  DAT_04838400 = DAT_048383e8;
  local_40 = *param_1;
  uStack_38 = param_1[1];
  local_30 = param_1[2];
  plVar1 = (long *)param_1[3];
  plStack_28 = plVar1;
  if (plVar1 == (long *)0x0) {
    uVar3 = FUN_01e29570(DAT_048383e8,&local_40);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    uVar3 = FUN_01e29570(uVar2,&local_40);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return uVar3 & 1;
}


