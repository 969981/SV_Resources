/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01780000; name: FUN_01780000
 */


void FUN_01780000(long param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  
  plVar4 = (long *)(**(code **)param_2[5])(param_2 + 5);
  if (((*PTR_DAT_047d3f00 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar3 != 0))
  {
    uVar6 = FUN_01b07aa4();
    *(undefined8 *)PTR_DAT_047d3f08 = uVar6;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return;
    }
    if (plVar4 == (long *)PTR_DAT_047d3f08) break;
    plVar4 = (long *)*plVar4;
  }
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  piVar5 = (int *)FUN_011e2dd4(*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8) + 0x50)
                               ,uVar1);
  if (piVar5 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar5;
    if (4 < iVar3) {
      iVar3 = 0;
    }
  }
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x250);
  uVar2 = FUN_01780124(param_2);
  FUN_0178012c(uVar6,iVar3,uVar1,uVar2 & 1);
  return;
}


