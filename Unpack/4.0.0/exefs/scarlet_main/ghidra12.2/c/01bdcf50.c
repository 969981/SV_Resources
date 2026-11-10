/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bdcf50; name: FUN_01bdcf50
 */


undefined8 FUN_01bdcf50(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  if (((DAT_0480e5d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0480e5d8), iVar1 != 0)) {
    DAT_0480ee90 = 1;
    __cxa_guard_release(&DAT_0480e5d8);
  }
  uVar2 = FUN_01bdcd90(param_1,1);
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4760 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d4760);
      puVar4 = PTR_DAT_047d4768;
      if (iVar1 != 0) {
        *PTR_DAT_047d4768 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_FUN_047d4d00,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4760);
      }
    }
    else {
      puVar4 = PTR_DAT_047d4768;
    }
  }
  FUN_01bdd044(uVar2,puVar4);
  return 0;
}


