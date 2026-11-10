/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014aec40; name: FUN_014aec40
 */


undefined1 FUN_014aec40(uint param_1,long *param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  
  if ((param_1 & 0xffff) == 0xae) {
    if (param_2 != (long *)0x0) {
      uVar3 = (**(code **)(*param_2 + 0x300))(param_2,7);
      uVar1 = 0;
      if ((uVar3 & 1) == 0) {
        uVar1 = 7;
      }
      return uVar1;
    }
    if (((*PTR_DAT_047d7940 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d7948;
    *(undefined8 *)PTR_DAT_047d7950 = uVar4;
    param_1 = 0xae;
  }
  else if ((param_1 & 0xffff) == 0x38a) {
    uVar3 = (**(code **)(*param_2 + 0x90))(param_2,0x3fd,2);
    if ((uVar3 & 1) != 0) {
      return 5;
    }
    if (((*PTR_DAT_047d7940 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d7948;
    param_1 = 0x38a;
    *(undefined8 *)PTR_DAT_047d7950 = uVar4;
  }
  else {
    if (((*PTR_DAT_047d7940 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar2 != 0)) {
      FUN_00100190(param_1,PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d7948;
    *(undefined8 *)PTR_DAT_047d7950 = uVar4;
  }
  piVar5 = (int *)FUN_00cf60cc(uVar4,param_1);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 0x27) ||
     (uVar3 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x13], uVar3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)((long)piVar5 + uVar3);
  }
  return uVar1;
}


