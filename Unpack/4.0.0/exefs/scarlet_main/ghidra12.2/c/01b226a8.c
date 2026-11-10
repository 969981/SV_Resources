/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b226a8; name: FUN_01b226a8
 */


void FUN_01b226a8(undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  cVar1 = *param_2;
  if (cVar1 == '\x01') {
LAB_01b226c8:
    if (*(long *)(param_2 + 8) == 0) goto switchD_01b226f0_default;
  }
  else {
    if ((cVar1 != '\x03') && (cVar1 != '\x02')) {
      if (cVar1 != '\0') goto switchD_01b226f0_default;
      goto LAB_01b226c8;
    }
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto switchD_01b226f0_default;
  }
  switch(*param_2) {
  case '\0':
  case '\x01':
    FUN_01b227dc(param_1,*(undefined8 *)(param_2 + 8));
    return;
  case '\x02':
    local_30 = 0;
    uStack_28 = 0;
    FUN_01b22908(&local_30,param_2 + 8);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_01a90650(param_1,&local_30);
    FUN_019cb630(&local_30);
    return;
  case '\x03':
    *param_1 = 0;
    param_1[1] = 0;
    FUN_01b22908(param_1,param_2 + 8);
    return;
  }
switchD_01b226f0_default:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


