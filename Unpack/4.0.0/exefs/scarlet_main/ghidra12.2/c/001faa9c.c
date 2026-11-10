/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001faa9c; name: FUN_001faa9c
 */


void FUN_001faa9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047cba18;
  if (*(int *)PTR_DAT_047cba18 == 0) {
                    /* WARNING: Subroutine does not return */
    nndetailDiagAbortFormatImpl(&DAT_03c886bc,&DAT_03c886bc,&DAT_03c886bc,0,&DAT_03c886bc);
  }
  puVar1 = PTR_DAT_047cba18 + 0x38;
  nnosLockMutex(puVar1);
  *(int *)(puVar2 + 4) = *(int *)(puVar2 + 4) + -1;
  nnosUnlockMutex(puVar1);
  nnosSignalEvent(puVar2 + 0x10);
  nnosWaitThread(*(undefined8 *)(puVar2 + 8));
  if (*(long *)(puVar2 + 0x60) != 0) {
    FUN_001cb68c(*(long *)(puVar2 + 0x60),0);
    FUN_001ec308(*(undefined8 *)(puVar2 + 0x60));
    *(undefined8 *)(puVar2 + 0x60) = 0;
  }
  if (*(long *)(puVar2 + 0x58) != 0) {
    FUN_001cb68c(*(long *)(puVar2 + 0x58),0);
    FUN_001ec308(*(undefined8 *)(puVar2 + 0x58));
    *(undefined8 *)(puVar2 + 0x58) = 0;
  }
  nnosFinalizeMutex(puVar2 + 0x38);
  nnosFinalizeEvent(puVar2 + 0x10);
  if (*(long *)(puVar2 + 8) != 0) {
    FUN_001fa6dc();
    *(undefined8 *)(puVar2 + 8) = 0;
  }
  *(undefined4 *)puVar2 = 0;
  memset(puVar2 + 0x10,0,0x58);
  return;
}


