/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c0aa10; name: FUN_01c0aa10
 */


undefined * FUN_01c0aa10(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar3 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d5b18 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d5b18);
      puVar3 = PTR_DAT_047d5b20;
      if (iVar1 != 0) {
        *PTR_DAT_047d5b20 = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        FUN_00100190(&LAB_01a979c4,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d5b18);
      }
    }
    else {
      puVar3 = PTR_DAT_047d5b20;
    }
  }
  return puVar3;
}


