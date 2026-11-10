/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003da480; name: FUN_003da480
 */


void FUN_003da480(undefined4 *param_1,int *param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_3,"RSA");
  if (iVar1 == 0) {
    *param_1 = 6;
    return;
  }
  iVar1 = strcmp(param_3,"RSA-PSS");
  if ((iVar1 == 0) || (iVar1 = strcmp(param_3,"PSS"), iVar1 == 0)) {
    *param_1 = 0x390;
    return;
  }
  iVar1 = strcmp(param_3,"DSA");
  if (iVar1 == 0) {
    *param_1 = 0x74;
    return;
  }
  iVar1 = strcmp(param_3,"ECDSA");
  if (iVar1 == 0) {
    *param_1 = 0x198;
    return;
  }
  iVar1 = FUN_0045c340(param_3);
  *param_2 = iVar1;
  if (iVar1 == 0) {
    iVar1 = FUN_0045c430(param_3);
    *param_2 = iVar1;
    return;
  }
  return;
}


