/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c26b44; name: FUN_01c26b44
 */


undefined2 FUN_01c26b44(undefined1 *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined2 uVar2;
  
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar1);
      }
      uVar2 = (*param_2)(plVar1,*param_4);
      return uVar2;
    }
  default:
    uVar2 = 0;
    break;
  case 2:
    uVar2 = FUN_01c29368(param_1 + 8,param_2);
    break;
  case 3:
    uVar2 = FUN_01c293b4(param_1 + 8,param_2);
  }
  return uVar2;
}


