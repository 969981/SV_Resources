/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01818a84; name: FUN_01818a84
 */


long FUN_01818a84(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  long *local_58;
  long *local_50 [3];
  long *local_38;
  long local_18;
  
  uVar2 = FUN_01818d40(*(undefined8 *)(param_1 + 8));
  FUN_01818c84(&local_18,uVar2);
  *(undefined4 *)(local_18 + 0x60) = *(undefined4 *)(param_1 + 0x128);
  pcVar4 = *(char **)(param_2 + 8);
  local_58 = (long *)0x0;
  if (*pcVar4 == '\0') {
    plVar3 = (long *)FUN_00d44228();
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    lVar5 = local_18;
    local_58 = plVar3;
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar2;
    FUN_00cf9884(local_50,uVar2,pcVar4);
    plVar3 = local_58;
    local_58 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    local_58 = local_50[0];
    lVar5 = local_18;
  }
  FUN_0135d26c(local_50,&local_58);
  uVar2 = FUN_017b73ec(param_1 + 0xb0,local_50);
  FUN_017b71d0(uVar2,lVar5);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_01818c0c(&local_18);
  return lVar5;
}


