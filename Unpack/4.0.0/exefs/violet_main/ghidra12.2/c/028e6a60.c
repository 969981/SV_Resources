/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028e6a60; name: FUN_028e6a60
 */


void FUN_028e6a60(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = (long)&DAT_cbf29ce484222645;
  param_1[1] = (long)&DAT_03c886bc;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  FUN_028e6e50(param_1 + 6,param_3);
  FUN_00ddaef8(param_1 + 7,*(undefined8 *)(param_2 + 8),0);
  plVar2 = (long *)param_1[7];
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 6;
  }
  lVar3 = *plVar1;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 7;
  }
  lVar4 = *plVar1;
  if (plVar2 == (long *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = plVar2[8];
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = (long *)param_1[3];
  *param_1 = lVar3;
  param_1[1] = lVar4;
  param_1[2] = lVar5;
  param_1[3] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[3] = (long)plVar2;
  return;
}


