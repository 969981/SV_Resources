/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02232cb0; name: FUN_02232cb0
 */


void FUN_02232cb0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  ulong local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  char local_48 [8];
  undefined1 auStack_40 [24];
  long *local_28;
  
  local_70 = 0xe9813517e93e1402;
  pcStack_68 = "StateGroupName";
  local_60 = 0xe;
  local_58 = (long *)0x0;
  FUN_01315eac(local_48,param_1,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_48[0] != '\0') {
    local_90 = 0x2a559a4759fd295;
    pcStack_88 = "StateName";
    local_80 = 9;
    local_78 = (long *)0x0;
    FUN_01315eac(&local_70,param_1,&local_90);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if ((char)local_70 != '\0') {
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar1 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      uVar2 = *(undefined8 *)PTR_DAT_047d8288;
      *(undefined8 *)PTR_DAT_047d8290 = uVar2;
      FUN_019061d8(uVar2,auStack_40,&pcStack_68);
      if ((char)local_70 != '\0') {
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x20))();
        }
        local_70 = local_70 & 0xffffffffffffff00;
      }
    }
    if ((local_48[0] != '\0') && (local_28 != (long *)0x0)) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


