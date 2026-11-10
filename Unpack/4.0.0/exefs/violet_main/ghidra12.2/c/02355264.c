/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02355264; name: FUN_02355264
 */


void FUN_02355264(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_28;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)&DAT_cbf29ce484222645;
  param_1[1] = (long)&DAT_03c886bc;
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar2 != 0))
  {
    local_28 = FUN_00d44228();
    puVar1 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_28);
    FUN_00100190(PTR_LAB_047d9240,puVar1,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar3 = *(long **)PTR_DAT_047d8c30;
  param_1[6] = (long)plVar3;
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x18))();
    plVar3 = (long *)param_1[6];
  }
  plVar4 = (long *)PTR_DAT_047d8b70;
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar3 + 6;
  }
  lVar5 = *plVar4;
  plVar4 = (long *)PTR_PTR_047d4508;
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar3 + 7;
  }
  lVar6 = *plVar4;
  if (plVar3 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = plVar3[8];
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  plVar4 = (long *)param_1[3];
  *param_1 = lVar5;
  param_1[1] = lVar6;
  param_1[2] = lVar7;
  param_1[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[3] = (long)plVar3;
  return;
}


