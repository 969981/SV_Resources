/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049d890; name: FUN_0049d890
 */


undefined4 FUN_0049d890(FILE *param_1)

{
  if (*(FILE **)PTR_stdout_047cb860 == param_1 || *(FILE **)PTR_stderr_047cb8b8 == param_1) {
    fwrite(&DAT_03c08ca3,4,1,param_1);
    return 0;
  }
  if (*(FILE **)PTR_stdin_047cb840 == param_1) {
    return 0;
  }
  return *(undefined4 *)((long)&param_1->_IO_read_end + 4);
}


