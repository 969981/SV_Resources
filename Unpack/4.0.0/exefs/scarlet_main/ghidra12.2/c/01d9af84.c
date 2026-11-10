/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d9af84; name: FUN_01d9af84
 */


uint FUN_01d9af84(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (((*PTR_DAT_047d8938 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8938,param_1), iVar2 != 0)) {
    FUN_00100190(PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8938);
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d8940;
  *(undefined8 *)PTR_DAT_047d8948 = uVar3;
  FUN_011b00ec(auStack_38,uVar3,param_1);
  FUN_011b00ec(auStack_50,uVar3,param_2);
  uVar1 = FUN_01dbdf00(auStack_38,auStack_50);
  return uVar1 & 1;
}


