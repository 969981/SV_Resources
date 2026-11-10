/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017dab34; name: FUN_017dab34
 */


void FUN_017dab34(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 local_4b;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined2 local_33;
  undefined8 local_30;
  undefined4 local_28;
  
  if ((*PTR_DAT_047d8938 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8938);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8938);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8940;
  *(undefined8 *)PTR_DAT_047d8948 = uVar2;
  FUN_011b00ec(&local_38,uVar2,*param_2);
  if (((DAT_048383f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048383f8), iVar1 != 0)) {
    FUN_00100190(&LAB_00aa519c,&DAT_048383e8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048383f8);
  }
  local_50 = local_38;
  local_4c = local_34;
  local_4b = local_33;
  local_48 = local_30;
  DAT_04838400 = DAT_048383e8;
  local_40 = local_28;
  FUN_017dac64(DAT_048383e8,param_1,&local_50);
  return;
}


