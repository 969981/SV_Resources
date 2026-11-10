/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


