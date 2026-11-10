/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bc2640; name: FUN_01bc2640
 */


undefined8 FUN_01bc2640(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) ||
     (puVar5 = (undefined *)*puVar4, (undefined *)*puVar4 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d39e0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d39e0);
      puVar5 = PTR_DAT_047d39e8;
      if (iVar3 != 0) {
        *PTR_DAT_047d39e8 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_FUN_047d5460,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d39e0);
      }
    }
    else {
      puVar5 = PTR_DAT_047d39e8;
    }
  }
  if (((DAT_0480d1e0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0480d1e0), iVar3 != 0)) {
    DAT_0480edf0 = '\x01';
    __cxa_guard_release(&DAT_0480d1e0);
  }
  puVar1 = PTR_FUN_047d5580;
  if (DAT_0480edf0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_01bbf6f8(puVar5,puVar1,0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


