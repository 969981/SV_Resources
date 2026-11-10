/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e53d00; name: FUN_00e53d00
 */


void FUN_00e53d00(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined1 local_3c [4];
  long local_38;
  undefined1 auStack_18 [4];
  undefined1 local_14 [4];
  
  if (((*PTR_DAT_047d4df8 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4df8,param_3,param_3), iVar1 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar3 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar3;
  local_14[0] = 1;
  local_3c[0] = 1;
  local_38 = param_2;
  plVar2 = (long *)FUN_00e53e08(auStack_18,*(undefined8 *)(lVar3 + 8),param_3,&local_38,local_14,
                                local_3c);
  *param_1 = (long)plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2);
  }
  FUN_00e54378(plVar2);
  FUN_00fe33a0(plVar2 + 0x59,param_2 + 0x2c8);
  FUN_00e5400c(plVar2);
  return;
}


