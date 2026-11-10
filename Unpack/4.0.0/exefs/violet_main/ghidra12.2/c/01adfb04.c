/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01adfb04; name: FUN_01adfb04
 */


void FUN_01adfb04(undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  cVar1 = *param_2;
  if (cVar1 == '\x01') {
LAB_01adfb24:
    if (*(long *)(param_2 + 8) == 0) goto switchD_01adfb4c_default;
  }
  else {
    if ((cVar1 != '\x03') && (cVar1 != '\x02')) {
      if (cVar1 != '\0') goto switchD_01adfb4c_default;
      goto LAB_01adfb24;
    }
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto switchD_01adfb4c_default;
  }
  switch(*param_2) {
  case '\0':
  case '\x01':
    FUN_01adfc38(param_1,*(undefined8 *)(param_2 + 8));
    return;
  case '\x02':
    local_30 = 0;
    uStack_28 = 0;
    FUN_01adfd64(&local_30,param_2 + 8);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_01adf558(param_1,&local_30);
    FUN_0181c0dc(&local_30);
    return;
  case '\x03':
    *param_1 = 0;
    param_1[1] = 0;
    FUN_01adfd64(param_1,param_2 + 8);
    return;
  }
switchD_01adfb4c_default:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


