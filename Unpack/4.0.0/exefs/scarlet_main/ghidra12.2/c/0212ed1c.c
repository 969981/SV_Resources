/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0212ed1c; name: FUN_0212ed1c
 */


undefined8 FUN_0212ed1c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 auStack_24 [4];
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  uVar2 = FUN_016a9610();
  local_48 = auStack_24;
  local_50 = 0;
  puStack_40 = &local_50;
  local_38 = param_1;
  uStack_30 = param_2;
  FUN_0212edcc(uVar2,&local_48);
  return CONCAT71(uStack_4f,local_50);
}


