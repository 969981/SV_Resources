/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049d650; name: FUN_0049d650
 */


char * FUN_0049d650(FILE *param_1)

{
  if (*(FILE **)PTR_stdout_047cb860 == param_1 || *(FILE **)PTR_stderr_047cb8b8 == param_1) {
    fwrite(&DAT_03c08ca3,4,1,param_1);
    return (char *)0x0;
  }
  if (*(FILE **)PTR_stdin_047cb840 == param_1) {
    return (char *)0x0;
  }
  return param_1->_IO_read_ptr;
}


