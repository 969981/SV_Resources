/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a854c; name: FUN_024a854c
 */


void FUN_024a854c(long *param_1,long *param_2)

{
  if (*param_1 != *param_2) {
    do {
      FUN_024a8d74(param_1);
      *param_1 = *(long *)(*param_1 + 8);
      FUN_024a83d0(param_1);
      if (*(char *)param_1[2] != '\0') {
        *(char *)param_1[2] = '\0';
      }
    } while (*param_1 != *param_2);
  }
  return;
}


