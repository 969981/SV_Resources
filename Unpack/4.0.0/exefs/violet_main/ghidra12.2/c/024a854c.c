/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


