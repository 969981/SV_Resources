/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020e5b14; name: FUN_020e5b14
 */


void FUN_020e5b14(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong local_18;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  lVar2 = FUN_020e5ab8();
  local_18 = (**(code **)(**(long **)(lVar2 + 0x40) + 0x38))(*(long **)(lVar2 + 0x40),param_1);
  puVar3 = (undefined1 *)
           (**(code **)(**(long **)(lVar2 + 0x40) + 0x40))(*(long **)(lVar2 + 0x40),&local_18);
  *puVar3 = param_2;
  (**(code **)(**(long **)(lVar2 + 0x40) + 0x50))(*(long **)(lVar2 + 0x40),local_18 & 0xffffffff);
  return;
}


