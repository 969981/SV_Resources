/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b5a748; name: FUN_01b5a748
 */


void FUN_01b5a748(undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  cVar1 = *param_2;
  if (cVar1 == '\x01') {
LAB_01b5a768:
    if (*(long *)(param_2 + 8) == 0) goto switchD_01b5a790_default;
  }
  else {
    if ((cVar1 != '\x03') && (cVar1 != '\x02')) {
      if (cVar1 != '\0') goto switchD_01b5a790_default;
      goto LAB_01b5a768;
    }
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto switchD_01b5a790_default;
  }
  switch(*param_2) {
  case '\0':
  case '\x01':
    FUN_01b5a87c(param_1,*(undefined8 *)(param_2 + 8));
    return;
  case '\x02':
    local_30 = 0;
    uStack_28 = 0;
    FUN_01b5a9a8(&local_30,param_2 + 8);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_01439080(param_1,&local_30);
    FUN_0196e794(&local_30);
    return;
  case '\x03':
    *param_1 = 0;
    param_1[1] = 0;
    FUN_01b5a9a8(param_1,param_2 + 8);
    return;
  }
switchD_01b5a790_default:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


