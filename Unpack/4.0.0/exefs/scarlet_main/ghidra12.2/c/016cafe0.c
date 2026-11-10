/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016cafe0; name: FUN_016cafe0
 */


undefined8 FUN_016cafe0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_38 [24];
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d38e8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d38e8);
      puVar4 = PTR_DAT_047d38f0;
      if (iVar1 != 0) {
        *PTR_DAT_047d38f0 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_FUN_047d44a0,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38e8);
      }
    }
    else {
      puVar4 = PTR_DAT_047d38f0;
    }
  }
  uVar3 = FUN_00c646d0(param_1,2,0);
  if ((DAT_04857b30 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04857b30);
    if (iVar1 != 0) {
      DAT_04858fd8 = &LAB_026cb20c;
      __cxa_guard_release(&DAT_04857b30,uVar3);
    }
  }
  FUN_016cb5e4(auStack_38,puVar4,uVar3);
  FUN_016cb100(param_1,auStack_38);
  FUN_016cb38c(auStack_38);
  return 1;
}


