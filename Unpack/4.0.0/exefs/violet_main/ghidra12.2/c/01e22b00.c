/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e22b00; name: FUN_01e22b00
 */


void FUN_01e22b00(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_48;
  long *local_40;
  undefined8 uStack_38;
  
  plVar3 = param_1 + 3;
  plVar1 = (long *)(**(code **)(*(long *)*plVar3 + 0x10))((long *)*plVar3,0x150,0x10);
  if (plVar1 == (long *)0x0) {
    (**(code **)(*(long *)*plVar3 + 0xe8))();
  }
  *plVar1 = 0;
  uStack_38 = 1;
  local_40 = plVar3;
  FUN_01e22bac(plVar3,plVar1 + 2,param_2);
  plVar1[1] = (long)param_1;
  lVar2 = *param_1;
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
  *param_1 = (long)plVar1;
  param_1[2] = param_1[2] + 1;
  local_48 = 0;
  FUN_01e22d38(&local_48);
  return;
}


