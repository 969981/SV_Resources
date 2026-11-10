/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d0bff0; name: FUN_00d0bff0
 */


void FUN_00d0bff0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_2;
  *param_2 = 0;
  *param_1 = plVar5;
  plVar2 = (long *)PTR_DAT_047d8b70;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 6;
  }
  plVar1 = (long *)PTR_PTR_047d4508;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 7;
  }
  lVar3 = *plVar1;
  if (plVar5 == (long *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = plVar5[8];
  }
  param_1[1] = *plVar2;
  param_1[2] = lVar3;
  param_1[3] = lVar4;
  param_1[4] = 0;
  if (plVar5 == (long *)0x0) {
    param_1[4] = 0;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    plVar2 = (long *)param_1[4];
    param_1[4] = plVar5;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
  }
  *(undefined4 *)(param_1 + 5) = param_3;
  FUN_00d0c0a4(param_1);
  return;
}


