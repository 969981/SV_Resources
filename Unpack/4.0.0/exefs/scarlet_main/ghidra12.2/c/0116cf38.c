/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0116cf38; name: FUN_0116cf38
 */


void FUN_0116cf38(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *plStack_38;
  
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  uVar4 = *(undefined8 *)PTR_DAT_047d8288;
  *(undefined8 *)PTR_DAT_047d8290 = uVar4;
  local_50 = *param_2;
  uStack_48 = param_2[1];
  local_40 = param_2[2];
  plVar1 = (long *)param_2[3];
  plStack_38 = plVar1;
  if (plVar1 == (long *)0x0) {
    lVar3 = FUN_0116d064(uVar4,&local_50);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar3 = FUN_0116d064(uVar4,&local_50);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (lVar3 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x308) != 0) {
    FUN_013eda3c(*(long *)(param_1 + 0x308),param_1 + 0x120);
  }
  FUN_0116d3a8(lVar3,param_1 + 0x120);
  return;
}


