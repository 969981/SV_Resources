/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ed320; name: FUN_001ed320
 */


undefined8 FUN_001ed320(long param_1)

{
  if (*(long *)PTR_stdout_047cb860 != param_1 && *(long *)PTR_stderr_047cb8b8 != param_1) {
                    /* WARNING: Subroutine does not return */
    nndetailDiagAbortFormatImpl(&DAT_03c886bc,&DAT_03c886bc,&DAT_03c886bc,0,&DAT_03c886bc);
  }
  return 0;
}


