/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001fa4f4; name: FUN_001fa4f4
 */


int FUN_001fa4f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_DAT_047cba18;
  if (*(int *)PTR_DAT_047cba18 == 0) {
    iVar4 = -1;
  }
  else {
    puVar1 = PTR_DAT_047cba18 + 0x38;
    nnosLockMutex(puVar1);
    iVar3 = FUN_001cb6d0(*(undefined8 *)(puVar2 + 0x58));
    iVar4 = FUN_001cb6d0(*(undefined8 *)(puVar2 + 0x60));
    iVar4 = iVar4 + iVar3;
    nnosUnlockMutex(puVar1);
  }
  return iVar4;
}


