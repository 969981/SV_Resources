/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0169d4c4; name: FUN_0169d4c4
 */


bool FUN_0169d4c4(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if ((*PTR_DAT_047d7940 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d7940);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02b72d48,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
  }
  plVar4 = (long *)PTR_DAT_047d7950;
  plVar3 = (long *)PTR_DAT_047d7948;
  puVar1 = PTR_DAT_047d7940;
  lVar5 = *(long *)PTR_DAT_047d7948;
  *(long *)PTR_DAT_047d7950 = lVar5;
  if (lVar5 == 0) {
    return false;
  }
  if ((*puVar1 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d7940);
    plVar3 = (long *)PTR_DAT_047d7948;
    plVar4 = (long *)PTR_DAT_047d7950;
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02b72d48,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
      plVar3 = (long *)PTR_DAT_047d7948;
      plVar4 = (long *)PTR_DAT_047d7950;
    }
  }
  lVar5 = *plVar3;
  *plVar4 = lVar5;
  if ((*(long *)(lVar5 + 0x30) == 0) || ((*(byte *)(*(long *)(lVar5 + 0x30) + 0x1e8) & 1) == 0)) {
    return false;
  }
  return *(char *)(lVar5 + 0xd8) != '\0';
}


