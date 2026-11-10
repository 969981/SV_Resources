/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f9484; name: FUN_001f9484
 */


void FUN_001f9484(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    FUN_001f93a0(param_1);
    return;
  }
  if (lVar2 == param_1[2] + -1) {
    param_1[2] = lVar2;
    return;
  }
  *(undefined8 *)(*param_1 + lVar2 * 8) = *(undefined8 *)(*param_1 + (param_1[2] + -1) * 8);
  **(long **)(*param_1 + *param_2 * 8) = *param_2;
  param_1[2] = param_1[2] + -1;
  iVar1 = (*(code *)param_1[4])(param_2,*(undefined8 *)(*param_1 + *param_2 * 8));
  if (iVar1 == 0) {
    FUN_001f9310(param_1,*param_2);
    return;
  }
  FUN_001f93dc(param_1);
  return;
}


