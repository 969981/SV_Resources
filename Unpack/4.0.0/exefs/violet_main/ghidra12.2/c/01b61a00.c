/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b61a00; name: FUN_01b61a00
 */


void FUN_01b61a00(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 *local_40 [3];
  long *local_28;
  
  *(undefined8 *)((long)param_1 + 0x15) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)PTR_DAT_047d4ca0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar5;
  FUN_00d8fb98(local_40,PTR_DAT_047dcc90);
  lVar3 = FUN_00f844f4(uVar5,local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_48[0] = 0xa1fe2727;
  local_50 = 0x1d;
  local_40[0] = param_1;
  cVar1 = FUN_020f0024(lVar3,local_48,local_40,&local_50);
  if ((cVar1 == '\0') && (plVar4 = *(long **)(lVar3 + 0x60), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,local_48);
  }
  return;
}


