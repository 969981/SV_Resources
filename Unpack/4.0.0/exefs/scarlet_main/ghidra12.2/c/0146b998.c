/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0146b998; name: FUN_0146b998
 */


char * FUN_0146b998(undefined8 param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  if ((param_2 == param_3) || (*param_2 != '\\')) {
    pcVar2 = param_2;
  }
  else {
    pcVar1 = param_2 + 1;
    if (pcVar1 == param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_028a5f80();
    }
    pcVar2 = (char *)FUN_028a5f8c(param_1,pcVar1,param_3);
    if ((pcVar2 == pcVar1) &&
       (pcVar2 = (char *)FUN_028a6048(param_1,pcVar1,param_3), pcVar2 == pcVar1)) {
      pcVar2 = (char *)FUN_028a6110(param_1,pcVar1,param_3,0);
      if (pcVar2 != pcVar1) {
        param_2 = pcVar2;
      }
      pcVar2 = param_2;
    }
  }
  return pcVar2;
}


