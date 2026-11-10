/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d9708; name: FUN_015d9708
 */


undefined2 FUN_015d9708(long param_1,int param_2)

{
  if (((param_2 < 5) && (*(char *)(param_1 + (long)param_2 * 4 + 9) != '\0')) &&
     (param_1 = param_1 + (long)param_2 * 4, *(char *)(param_1 + 8) == '\0')) {
    return *(undefined2 *)(param_1 + 10);
  }
  return 0xffff;
}


