/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049c8e0; name: FUN_0049c8e0
 */


undefined8 FUN_0049c8e0(FILE *param_1)

{
  if (*(FILE **)PTR_stdout_047cb860 == param_1 || *(FILE **)PTR_stderr_047cb8b8 == param_1) {
    fwrite(&DAT_03c08ca3,4,1,param_1);
  }
  else if (*(FILE **)PTR_stdin_047cb840 != param_1) {
    if ((*(byte *)&param_1->_IO_read_end >> 1 & 1) != 0) {
      nn::fs::FlushFile(*(undefined8 *)param_1);
    }
    nn::fs::CloseFile(*(undefined8 *)param_1);
    free(param_1);
    return 0;
  }
  return 0;
}


