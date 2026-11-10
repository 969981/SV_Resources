/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016096ec; name: FUN_016096ec
 */


uint FUN_016096ec(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  long *local_60 [4];
  long *local_40;
  
  pcVar6 = *(char **)(param_2 + 8);
  if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
    plVar5 = (long *)FUN_00d44228();
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar3 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar3;
    FUN_00cf9884(local_60,uVar3,pcVar6);
    plVar5 = local_60[0];
  }
  plVar4 = *(long **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  *(long **)(param_1 + 0x110) = plVar5;
  uVar3 = *(undefined8 *)(param_1 + 0x200);
  FUN_0105016c(local_60,param_2);
  uVar1 = FUN_0160983c(uVar3,local_60);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  return uVar1 & 1;
}


