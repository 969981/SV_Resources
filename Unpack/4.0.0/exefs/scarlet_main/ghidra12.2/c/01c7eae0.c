/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c7eae0; name: FUN_01c7eae0
 */


undefined8 FUN_01c7eae0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  if (((DAT_048151a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048151a8), iVar1 != 0)) {
    DAT_04815b98 = 1;
    __cxa_guard_release(&DAT_048151a8);
  }
  uVar2 = FUN_017ce780(param_1,1);
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4528 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d4528);
      puVar4 = PTR_DAT_047d4530;
      if (iVar1 != 0) {
        *PTR_DAT_047d4530 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_LAB_047d6418,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4528);
      }
    }
    else {
      puVar4 = PTR_DAT_047d4530;
    }
  }
  FUN_01c7ebd4(uVar2,puVar4);
  return 0;
}


