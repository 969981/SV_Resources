/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019ace40; name: FUN_019ace40
 */


void FUN_019ace40(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  char local_48 [8];
  undefined1 auStack_40 [24];
  long *local_28;
  
  local_70 = 0x68d23bb3399f48d5;
  pcStack_68 = "LayerName";
  local_60 = 9;
  local_58 = (long *)0x0;
  FUN_01315eac(local_48,param_1,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_48[0] != '\0') {
    local_70 = 0xa64abbe5b55e89e0;
    pcStack_68 = "Wait";
    local_60 = 4;
    local_58 = (long *)0x0;
    uVar1 = FUN_0141f968(param_1,&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if ((uVar1 & 0xff) == 0 || uVar1 < 0x100) {
      if (((*PTR_DAT_047d8a70 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8a70);
      }
      uVar3 = *(undefined8 *)PTR_DAT_047d8a78;
      *(undefined8 *)PTR_DAT_047d8a80 = uVar3;
      FUN_015eb0b0(uVar3,auStack_40,0,0);
    }
    else {
      if (((*PTR_DAT_047d8a70 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8a70);
      }
      uVar3 = *(undefined8 *)PTR_DAT_047d8a78;
      *(undefined8 *)PTR_DAT_047d8a80 = uVar3;
      FUN_01314f00(&local_70,uVar3,auStack_40);
      FUN_022365d8(&local_70);
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x20))();
      }
    }
    if ((local_48[0] != '\0') && (local_28 != (long *)0x0)) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


