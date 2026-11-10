/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0275a52c; name: FUN_0275a52c
 */


bool FUN_0275a52c(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *local_18;
  
  pcVar3 = strchr(*(char **)(param_1 + 0x40),0x3a);
  if (pcVar3[1] == '\0') {
    local_18 = (long *)FUN_00d44228();
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x18))(local_18);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar4;
    FUN_00cf9884(&local_18,uVar4,pcVar3 + 1);
  }
  lVar5 = *param_2;
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 6;
  }
  lVar6 = *plVar1;
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))(local_18);
  }
  return lVar5 == lVar6;
}


