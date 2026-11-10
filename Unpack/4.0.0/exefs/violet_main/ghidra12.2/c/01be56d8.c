/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01be56d8; name: FUN_01be56d8
 */


long FUN_01be56d8(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *local_8;
  
  uVar2 = 0x28;
  if (DAT_0480ef10 == '\0') {
    uVar2 = 0xffffffffffffffff;
  }
  FUN_01be5c48(&local_8,param_1,uVar2);
  plVar1 = (long *)PTR_PTR_047d4508;
  if (local_8 != (long *)0x0) {
    plVar1 = local_8 + 7;
  }
  lVar3 = *plVar1;
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x20))();
  }
  return lVar3;
}


