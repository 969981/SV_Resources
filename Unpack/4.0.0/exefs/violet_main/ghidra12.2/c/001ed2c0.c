/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ed2c0; name: FUN_001ed2c0
 */


size_t FUN_001ed2c0(char *param_1,long param_2)

{
  size_t sVar1;
  
  if (*(long *)PTR_stdout_047cb860 != param_2 && *(long *)PTR_stderr_047cb8b8 != param_2) {
                    /* WARNING: Subroutine does not return */
    nndetailDiagAbortFormatImpl(&DAT_03c886bc,&DAT_03c886bc,&DAT_03c886bc,0,&DAT_03c886bc);
  }
  if (param_1 == (char *)0x0) {
    sVar1 = 0xffffffff;
  }
  else {
    sVar1 = strlen(param_1);
  }
  return sVar1;
}


