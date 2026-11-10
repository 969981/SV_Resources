/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0274071c; name: FUN_0274071c
 */


long * FUN_0274071c(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *local_48;
  undefined8 *puStack_40;
  undefined8 local_38;
  
  puVar2 = (undefined8 *)(param_1 + 0x18);
  plVar1 = (long *)(**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,0xd8,8);
  if (plVar1 == (long *)0x0) {
    (**(code **)(*(long *)*puVar2 + 0xe8))();
  }
  *plVar1 = 0;
  local_38 = 1;
  local_48 = plVar1;
  puStack_40 = puVar2;
  FUN_02740c74(puVar2,plVar1 + 2);
  *(long **)(*param_2 + 8) = plVar1;
  *plVar1 = *param_2;
  *param_2 = (long)plVar1;
  plVar1[1] = (long)param_2;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  local_48 = (long *)0x0;
  FUN_02740d80(&local_48);
  return plVar1;
}


