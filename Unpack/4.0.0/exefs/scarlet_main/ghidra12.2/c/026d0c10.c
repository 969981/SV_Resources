/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026d0c10; name: FUN_026d0c10
 */


undefined8 FUN_026d0c10(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04857c70 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04857c70);
      if (iVar1 != 0) {
        DAT_04857c58 = 0;
        DAT_04857c60 = 0;
        FUN_00100190(FUN_011a3580,&DAT_04857c58,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04857c70);
      }
      puVar4 = &DAT_04857c58;
    }
    else {
      puVar4 = &DAT_04857c58;
    }
  }
  if (((DAT_04857cb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04857cb8), iVar1 != 0)) {
    DAT_04857ca8 = &LAB_02ba67f0;
    DAT_04857cb0 = 0;
    __cxa_guard_release(&DAT_04857cb8,puVar4);
  }
  uVar3 = FUN_01581a74(&DAT_04857ca8,puVar4);
  FUN_00c85bd0(param_1,uVar3);
  return 1;
}


