/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0193b438; name: FUN_0193b438
 */


void FUN_0193b438(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_48;
  long *local_40;
  undefined8 uStack_38;
  
  plVar3 = param_1 + 3;
  plVar1 = (long *)(**(code **)(*(long *)*plVar3 + 0x10))((long *)*plVar3,0x18,8);
  if (plVar1 == (long *)0x0) {
    (**(code **)(*(long *)*plVar3 + 0xe8))();
  }
  *plVar1 = 0;
  uStack_38 = 1;
  local_40 = plVar3;
  FUN_0193b710(plVar3,plVar1 + 2,param_2);
  plVar1[1] = (long)param_1;
  lVar2 = *param_1;
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
  *param_1 = (long)plVar1;
  param_1[2] = param_1[2] + 1;
  local_48 = 0;
  FUN_0193b4e8(&local_48);
  return;
}


