/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029aa384; name: FUN_029aa384
 */


void FUN_029aa384(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long *local_28;
  
  *param_1 = &PTR_FUN_04602148;
  param_1[4] = &PTR_LAB_04602288;
  param_1[5] = &DAT_046023b0;
  param_1[6] = &PTR_LAB_04602408;
  param_1[7] = &PTR_LAB_04602430;
  if (*(char *)(param_1 + 0x36) != '\0') {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    uVar3 = *(undefined8 *)PTR_DAT_047d8288;
    *(undefined8 *)PTR_DAT_047d8290 = uVar3;
    FUN_0135d26c(auStack_40,param_1 + 0x34);
    FUN_0299e318(uVar3,auStack_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  if ((long *)param_1[0x34] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x34] + 0x20))();
  }
  pcVar2 = (code *)param_1[0x25];
  if (pcVar2 != (code *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    (*pcVar2)(param_1 + 0x28);
  }
  FUN_00e6bfa4(param_1);
  return;
}


