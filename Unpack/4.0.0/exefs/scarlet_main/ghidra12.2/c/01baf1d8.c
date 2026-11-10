/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01baf1d8; name: FUN_01baf1d8
 */


void FUN_01baf1d8(undefined8 *param_1,char *param_2,long param_3)

{
  long lVar1;
  
  if (((*param_2 == '\x01') || (*param_2 == '\0')) && (lVar1 = *(long *)(param_2 + 8), lVar1 != 0))
  {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00d0a71c(param_1,lVar1 + param_3);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


