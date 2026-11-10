/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c6a510; name: FUN_01c6a510
 */


undefined4 FUN_01c6a510(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((DAT_048398e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_048398e8), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048398e8);
  }
  DAT_048398d0 = DAT_048398d8;
  if ((DAT_048398d8 == 0) || (*(long *)(DAT_048398d8 + 0x78) == *(long *)(DAT_048398d8 + 0x80))) {
    uVar1 = 0xffffffff;
  }
  else {
    puVar3 = (undefined4 *)(*(long *)(DAT_048398d8 + 0x80) + -4);
    uVar1 = *puVar3;
    *(undefined4 **)(DAT_048398d8 + 0x80) = puVar3;
  }
  return uVar1;
}


