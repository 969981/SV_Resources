/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0199380c; name: FUN_0199380c
 */


void FUN_0199380c(undefined1 *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long *local_18;
  
  switch(*param_1) {
  case 0:
    FUN_026643e8(*(undefined8 *)(param_1 + 8));
    return;
  case 1:
    FUN_02664454(param_1 + 8);
    return;
  case 2:
    break;
  case 3:
    FUN_026644c4(param_1 + 8);
    return;
  default:
    return;
  }
  if ((*(long *)(param_1 + 8) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar2 != 0)) {
    plVar1 = (long *)(lVar2 + ((long)param_3 >> 1) + -0x28);
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    local_30 = *param_4;
    uStack_28 = param_4[1];
    local_20 = param_4[2];
    local_18 = (long *)param_4[3];
    param_4[3] = 0;
    (*param_2)(plVar1,&local_30);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return;
}


