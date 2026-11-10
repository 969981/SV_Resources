/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159b96c; name: FUN_0159b96c
 */


void FUN_0159b96c(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)FUN_017dcd80();
  plVar2 = (long *)(**(code **)(*(long *)(*plVar2 + 0x30) + 0x30))();
  (**(code **)(*plVar2 + 0x60))(0,0,0,0x3f800000);
  if (((*PTR_DAT_047d8b18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8b18), iVar1 != 0))
  {
    FUN_00100190(&LAB_00a2f2fc,PTR_DAT_047d8b20,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8b18);
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d8b20;
  *(undefined8 *)PTR_DAT_047d8b28 = uVar3;
  FUN_0159ba2c(uVar3,0);
  DAT_048420a8 = 0x32;
  return;
}


