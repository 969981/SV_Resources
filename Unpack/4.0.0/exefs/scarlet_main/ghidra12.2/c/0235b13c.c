/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0235b13c; name: FUN_0235b13c
 */


void FUN_0235b13c(undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  cVar1 = *param_2;
  if (cVar1 == '\x01') {
LAB_0235b15c:
    if (*(long *)(param_2 + 8) == 0) goto switchD_0235b184_default;
  }
  else {
    if ((cVar1 != '\x03') && (cVar1 != '\x02')) {
      if (cVar1 != '\0') goto switchD_0235b184_default;
      goto LAB_0235b15c;
    }
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto switchD_0235b184_default;
  }
  switch(*param_2) {
  case '\0':
  case '\x01':
    FUN_0235b270(param_1,*(undefined8 *)(param_2 + 8));
    return;
  case '\x02':
    local_30 = 0;
    uStack_28 = 0;
    FUN_0235b39c(&local_30,param_2 + 8);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_01a30628(param_1,&local_30);
    FUN_01a30468(&local_30);
    return;
  case '\x03':
    *param_1 = 0;
    param_1[1] = 0;
    FUN_0235b39c(param_1,param_2 + 8);
    return;
  }
switchD_0235b184_default:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


