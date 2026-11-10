/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022d2568; name: FUN_022d2568
 */


void FUN_022d2568(undefined1 *param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar1);
      }
      (*param_2)(plVar1,*param_4);
    }
    break;
  case 2:
    FUN_022d696c(param_1 + 8,param_2);
    return;
  case 3:
    FUN_022d69b0(0,param_1 + 8,param_2);
    return;
  }
  return;
}


