/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


