/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010747a0; name: FUN_010747a0
 */


bool FUN_010747a0(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  
  if ((*PTR_DAT_047ddaa8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047ddaa8);
    if (iVar2 != 0) {
      FUN_00100190(PTR_LAB_047ddad0,PTR_DAT_047ddab0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047ddaa8);
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_047ddab0;
  *(undefined8 *)PTR_DAT_047ddab8 = uVar3;
  piVar4 = (int *)FUN_01074860(uVar3,param_1);
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x11) ||
     (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[8], uVar5 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)((long)piVar4 + uVar5) != '\0';
  }
  return bVar1;
}


