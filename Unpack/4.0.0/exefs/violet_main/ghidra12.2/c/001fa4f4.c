/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


