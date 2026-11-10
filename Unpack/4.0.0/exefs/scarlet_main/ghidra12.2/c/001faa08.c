/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001faa08; name: FUN_001faa08
 */


undefined8 FUN_001faa08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_DAT_047cba18;
  if (*(int *)PTR_DAT_047cba18 != 0) {
    puVar1 = PTR_DAT_047cba18 + 0x38;
    nnosLockMutex(puVar1);
    iVar3 = FUN_001fa9b4(*(undefined8 *)(puVar2 + 0x58),param_1);
    if (iVar3 == 0) {
      FUN_001cb588(*(long *)(puVar2 + 0x60),*(undefined8 *)(*(long *)(puVar2 + 0x60) + 8),param_1,
                   param_1 + 0x1d8);
      nnosSignalEvent(puVar2 + 0x10);
      nnosUnlockMutex(puVar1);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  nndetailDiagAbortFormatImpl(&DAT_03c886bc,&DAT_03c886bc,&DAT_03c886bc,0,&DAT_03c886bc);
}


