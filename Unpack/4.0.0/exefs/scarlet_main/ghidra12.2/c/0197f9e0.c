/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197f9e0; name: FUN_0197f9e0
 */


undefined8 FUN_0197f9e0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined4 local_18;
  undefined4 uStack_14;
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) ||
     (puVar6 = (undefined *)*puVar5, (undefined *)*puVar5 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d38b8 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_047d38b8);
      puVar6 = PTR_DAT_047d38c0;
      if (iVar4 != 0) {
        *PTR_DAT_047d38c0 = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        FUN_00100190(PTR_LAB_047d3fe8,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38b8);
      }
    }
    else {
      puVar6 = PTR_DAT_047d38c0;
    }
  }
  uVar2 = FUN_00c92df0(param_1,2,0);
  uVar3 = FUN_00c92df0(param_1,3,0);
  if (((DAT_04803820 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04803820), iVar4 != 0)) {
    DAT_04804230 = '\x01';
    __cxa_guard_release(&DAT_04803820);
  }
  puVar1 = &LAB_008faea4;
  if (DAT_04804230 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_18 = uVar3;
  uStack_14 = uVar2;
  FUN_0197fb18(puVar6,puVar1,0,&uStack_14,&local_18);
  return 0;
}


