/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156ea10; name: FUN_0156ea10
 */


void FUN_0156ea10(void)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  uint local_14;
  
  if (((*PTR_DAT_047d8b30 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8b30), iVar3 != 0))
  {
    FUN_00100190(&LAB_00a2faa8,PTR_DAT_047d8b38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8b30);
  }
  lVar4 = *(long *)PTR_DAT_047d8b38;
  *(long *)PTR_DAT_047d8b40 = lVar4;
  if ((*PTR_DAT_047d8b48 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047d8b48);
    puVar2 = PTR_DAT_047d8b50;
    if (iVar3 != 0) {
      cVar1 = *PTR_DAT_047d8b58;
      *PTR_DAT_047d8b58 = cVar1 + '\x01';
      *puVar2 = cVar1;
      __cxa_guard_release(PTR_DAT_047d8b48);
    }
  }
  local_14 = (uint)(byte)*PTR_DAT_047d8b50;
  lVar4 = FUN_0156eb20(lVar4 + 0x28,&local_14);
  if (lVar4 != 0) {
    (**(code **)(**(long **)(lVar4 + 0x20) + 0x10))();
  }
  return;
}


