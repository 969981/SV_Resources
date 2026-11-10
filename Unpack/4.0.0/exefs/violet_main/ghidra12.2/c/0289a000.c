/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289a000; name: FUN_0289a000
 */


long * FUN_0289a000(long *param_1,long *param_2,char *param_3)

{
  char *pcVar1;
  
  if (param_1 != param_2) {
    do {
      if (((*param_1 != 0) && (pcVar1 = (char *)FUN_019462f4(), *pcVar1 == *param_3)) &&
         (pcVar1[1] == param_3[1])) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (param_2 != param_1);
    param_1 = param_2;
  }
  return param_1;
}


