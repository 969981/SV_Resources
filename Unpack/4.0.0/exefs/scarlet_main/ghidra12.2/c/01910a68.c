/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01910a68; name: FUN_01910a68
 */


void FUN_01910a68(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  lVar3 = FUN_01910b0c();
  *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)(lVar3 + 0x70);
  *(undefined4 *)(lVar3 + 0x44) = *(undefined4 *)(lVar3 + 0x74);
  uVar1 = *(uint *)(lVar3 + 0x78);
  if (0x4be < *(uint *)(lVar3 + 0x78) >> 9) {
    uVar1 = 0x97e00;
  }
  *(uint *)(lVar3 + 0x48) = uVar1;
  memcpy(*(void **)(lVar3 + 0x50),*(void **)(lVar3 + 0x80),(ulong)uVar1);
  return;
}


