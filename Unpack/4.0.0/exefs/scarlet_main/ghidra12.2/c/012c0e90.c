/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c0e90; name: FUN_012c0e90
 */


void FUN_012c0e90(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_047d3f70;
  uVar7 = *(undefined8 *)(*(long *)PTR_DAT_047d3f70 + 8);
  FUN_012c1008(uVar7);
  FUN_012d0844(uVar7);
  FUN_012c10d0(uVar7);
  uVar3 = FUN_012c1198(uVar7);
  uVar4 = (**(code **)(*param_1 + 0x30))(param_1);
  FUN_012c9794(uVar3,uVar4);
  FUN_012c1260(*(undefined8 *)(*(long *)puVar1 + 8));
  FUN_01302fe0();
  FUN_012c1328(uVar7);
  if (((*PTR_DAT_047d88e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d88e8), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047df3e0,PTR_DAT_047d88f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88e8);
  }
  *(undefined8 *)PTR_DAT_047d88f8 = *(undefined8 *)PTR_DAT_047d88f0;
  uVar5 = FUN_012c1000();
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (((*PTR_DAT_047d91d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d91d0), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047dcf90,PTR_DAT_047d91d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91d0);
  }
  lVar6 = *(long *)PTR_DAT_047d91d8;
  *(long *)PTR_DAT_047d91e0 = lVar6;
  FUN_012c13f0(*(undefined8 *)(lVar6 + 0x28));
  return;
}


