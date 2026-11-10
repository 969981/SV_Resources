/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bbad9c; name: FUN_01bbad9c
 */


void FUN_01bbad9c(undefined8 *param_1,char *param_2,long param_3)

{
  long lVar1;
  
  if (((*param_2 == '\x01') || (*param_2 == '\0')) && (lVar1 = *(long *)(param_2 + 8), lVar1 != 0))
  {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00ca0ae4(param_1,lVar1 + param_3);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


