/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297d988; name: FUN_0297d988
 */


bool FUN_0297d988(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  
  uVar5 = param_2;
  if ((*PTR_DAT_047d7940 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d7940);
    uVar5 = param_2 & 0xffffffff;
    if (iVar2 != 0) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
      uVar5 = param_2 & 0xffffffff;
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar3;
  piVar4 = (int *)FUN_00cf60cc(uVar3,uVar5);
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
     (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = *(char *)((long)piVar4 + uVar5) == '\0';
  }
  return bVar1;
}


