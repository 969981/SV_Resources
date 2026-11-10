/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02596094; name: FUN_02596094
 */


undefined8 FUN_02596094(char *param_1,code *param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*param_1 == '\x01') {
    uVar2 = FUN_025960f0(param_1 + 8,param_2);
  }
  else if ((*param_1 == '\0') && (*(long *)(param_1 + 8) != 0)) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    uVar2 = (*param_2)(plVar1,param_4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


