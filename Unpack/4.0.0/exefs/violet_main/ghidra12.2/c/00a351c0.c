/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a351c0; name: FUN_00a351c0
 */


uint FUN_00a351c0(undefined8 *param_1,undefined1 param_2,ulong param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *local_48;
  long *local_28;
  
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
    local_28 = (long *)0x0;
    cVar1 = FUN_00a333b8(&local_28,param_2);
    if (((*PTR_DAT_047d62a0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d62a0), iVar3 != 0)) {
      FUN_00100190(&LAB_00b12850,PTR_DAT_047d62a8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d62a0);
    }
    lVar4 = *(long *)PTR_DAT_047d62a8;
    *(long *)PTR_DAT_047d62b0 = lVar4;
    if (lVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00b0ebdc();
    }
  }
  else {
    (**(code **)(*plVar5 + 0x58))(plVar5);
    local_28 = plVar5;
    (**(code **)(*plVar5 + 0x58))(plVar5);
    cVar1 = FUN_00a333b8(&local_28,param_2);
    (**(code **)(*plVar5 + 0x60))(plVar5);
    if (((*PTR_DAT_047d62a0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d62a0), iVar3 != 0)) {
      FUN_00100190(&LAB_00b12850,PTR_DAT_047d62a8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d62a0);
    }
    lVar4 = *(long *)PTR_DAT_047d62a8;
    *(long *)PTR_DAT_047d62b0 = lVar4;
    if (lVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00b0ebdc();
    }
    (**(code **)(*plVar5 + 0x60))(plVar5);
  }
  plVar5 = (long *)*param_1;
  local_48 = plVar5;
  if (plVar5 == (long *)0x0) {
    iVar3 = FUN_00a34540(&local_48,param_3 & 0xffffffffffff);
  }
  else {
    (**(code **)(*plVar5 + 0x58))(plVar5);
    iVar3 = FUN_00a34540(&local_48,param_3 & 0xffffffffffff);
    (**(code **)(*plVar5 + 0x60))(plVar5);
  }
  return (uint)CONCAT11(cVar1,(uVar2 & 0xffff) == (int)cVar1) | iVar3 << 0x10;
}


