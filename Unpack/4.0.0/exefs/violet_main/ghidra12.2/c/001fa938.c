/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001fa938; name: FUN_001fa938
 */


undefined8 FUN_001fa938(long param_1)

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
  FUN_001cb588(*(long *)(puVar2 + 0x58),*(undefined8 *)(*(long *)(puVar2 + 0x58) + 8),param_1,
               param_1 + 0x1d8);
  nnosUnlockMutex(puVar1);
  return 0;
}


