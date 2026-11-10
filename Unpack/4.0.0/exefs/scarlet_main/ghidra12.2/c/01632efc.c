/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01632efc; name: FUN_01632efc
 */


void FUN_01632efc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  
  uVar1 = *(undefined2 *)param_3[1];
  if ((*PTR_DAT_047d7940 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d7940);
    if (iVar2 != 0) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar3;
  piVar4 = (int *)FUN_00cf60cc(uVar3,uVar1);
  if (((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) ||
      (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5], uVar5 == 0)) ||
     (*(char *)((long)piVar4 + uVar5) != '\a')) {
    return;
  }
  FUN_01633ebc(param_1,param_3[2],param_3[1],*param_3);
  return;
}


