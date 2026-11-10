/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01533224; name: FUN_01533224
 */


void FUN_01533224(undefined8 *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  if (cVar1 == '\x02') {
LAB_01533230:
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto LAB_01533238;
  }
  else {
    if ((cVar1 != '\0') && (cVar1 != '\x01')) {
      if (cVar1 != '\x03') goto LAB_01533238;
      goto LAB_01533230;
    }
    if (*(long *)(param_2 + 8) == 0) goto LAB_01533238;
  }
  cVar1 = *param_2;
  if (cVar1 == '\x02') {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00d391ac(param_1,param_2 + 8);
    return;
  }
  if ((cVar1 == '\x01') || (cVar1 == '\0')) {
    FUN_015cc1b4(*(undefined8 *)(param_2 + 8));
    return;
  }
LAB_01533238:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


