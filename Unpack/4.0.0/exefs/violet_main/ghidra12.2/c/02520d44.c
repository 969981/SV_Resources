/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02520d44; name: FUN_02520d44
 */


undefined1  [16]
FUN_02520d44(char *param_1,code *param_2,ulong param_3,undefined8 *param_4,undefined1 *param_5)

{
  long *plVar1;
  undefined1 auVar2 [16];
  
  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 8) == 0) {
      auVar2 = ZEXT816(0);
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar1);
      }
      auVar2 = (*param_2)(*param_4,plVar1,*param_5);
    }
    return auVar2;
  }
  if (*param_1 != '\0') {
    return ZEXT816(0);
  }
  if (*(long *)(param_1 + 8) == 0) {
    return ZEXT816(0);
  }
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar1);
  }
  auVar2 = (*param_2)(*param_4,plVar1,*param_5);
  return auVar2;
}


