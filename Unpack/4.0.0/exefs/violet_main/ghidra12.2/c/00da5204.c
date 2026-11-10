/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da5204; name: FUN_00da5204
 */


undefined * FUN_00da5204(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 local_8;
  
  if (((*PTR_DAT_047d8c18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c18), iVar2 != 0))
  {
    if (((*PTR_DAT_047d8c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar2 != 0)) {
      local_8 = FUN_00d44228();
      puVar1 = PTR_DAT_047d8c30;
      FUN_00d1e764(PTR_DAT_047d8c30,&local_8);
      FUN_00100190(&LAB_00a2d208,puVar1,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c28);
    }
    puVar1 = PTR_DAT_047d8c20;
    FUN_01db7420(PTR_DAT_047d8c20,PTR_DAT_047d8c30,0);
    FUN_00100190(FUN_00a2d1ac,puVar1,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c18);
  }
  return PTR_DAT_047d8c20;
}


