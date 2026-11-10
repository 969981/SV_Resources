/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025b6428; name: FUN_025b6428
 */


void FUN_025b6428(undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  cVar1 = *param_2;
  if ((cVar1 == '\0') || (cVar1 == '\x01')) {
    if (*(long *)(param_2 + 8) == 0) goto switchD_025b646c_default;
  }
  else if ((((cVar1 != '\x02') && (cVar1 != '\x03')) || (*(long *)(param_2 + 8) == 0)) ||
          (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0)) goto switchD_025b646c_default;
  switch(*param_2) {
  case '\0':
  case '\x01':
    FUN_025b6558(param_1,*(undefined8 *)(param_2 + 8));
    return;
  case '\x02':
    local_30 = 0;
    uStack_28 = 0;
    FUN_025b65f0(&local_30,param_2 + 8);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_02111f44(param_1,&local_30);
    FUN_019daa08(&local_30);
    return;
  case '\x03':
    *param_1 = 0;
    param_1[1] = 0;
    FUN_025b65f0(param_1,param_2 + 8);
    return;
  }
switchD_025b646c_default:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


