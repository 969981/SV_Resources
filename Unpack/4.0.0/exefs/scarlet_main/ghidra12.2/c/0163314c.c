/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0163314c; name: FUN_0163314c
 */


void FUN_0163314c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  
  uVar1 = *(undefined2 *)*param_3;
  if (((*PTR_DAT_047d7940 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047d7940,uVar1), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar5 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar5;
  piVar6 = (int *)FUN_00cf60cc(uVar5,uVar1);
  if (((10 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
      (uVar7 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[5], uVar7 != 0)) &&
     (*(char *)((long)piVar6 + uVar7) == '\b')) {
    uVar3 = *(undefined4 *)(param_3 + 3);
    uVar2 = FUN_01636894(*(undefined2 *)*param_3);
    uVar3 = FUN_01633ca0(uVar3,uVar2);
    uVar7 = FUN_01636cb0(param_1,param_3[1],param_3[2],uVar3);
    if ((uVar7 & 1) != 0) {
      uVar5 = FUN_01243584(param_1);
      uVar3 = (**(code **)(*(long *)param_3[1] + 0x98))();
      FUN_01636f5c(uVar5,uVar3,param_3[2],0x122);
      return;
    }
  }
  return;
}


