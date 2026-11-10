/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e2219c; name: FUN_02e2219c
 */


undefined4 FUN_02e2219c(long *param_1,undefined4 param_2,short param_3)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  plVar3 = (long *)(**(code **)param_1[5])(param_1 + 5);
  if (((*PTR_DAT_047d3f00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar2 != 0))
  {
    uVar5 = FUN_01b07aa4();
    *(undefined8 *)PTR_DAT_047d3f08 = uVar5;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return param_2;
    }
    if (plVar3 == (long *)PTR_DAT_047d3f08) break;
    plVar3 = (long *)*plVar3;
  }
  if (*(char *)((long)param_1 + 0x714) == '\0') {
    return param_2;
  }
  if (*(char *)((long)param_1 + 0x715) != 'c') {
    return param_2;
  }
  if (param_3 == 0x353) {
    return 0x1f;
  }
  if (param_3 != 0x38a) {
    return param_2;
  }
  uVar4 = (**(code **)(*param_1 + 0x88))(param_1,0x3fd);
  uVar1 = 0x1f;
  if ((uVar4 & 1) == 0) {
    uVar1 = param_2;
  }
  return uVar1;
}


