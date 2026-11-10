/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010744c4; name: FUN_010744c4
 */


void FUN_010744c4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((DAT_048383f8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048383f8);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00aa519c,&DAT_048383e8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048383f8);
    }
  }
  uVar1 = DAT_048383e8;
  DAT_04838400 = DAT_048383e8;
  local_40 = *param_2;
  uStack_38 = param_2[1];
  local_30 = param_2[2];
  local_28 = (long *)param_2[3];
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  FUN_010745a4(param_1,uVar1,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


