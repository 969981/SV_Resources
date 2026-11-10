/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0236cabc; name: FUN_0236cabc
 */


undefined1  [16] FUN_0236cabc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*(ulong *)(param_1 + 0x60) < 0xfffffffffffffffe) {
    if ((*PTR_DAT_047d88d0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d88d0);
      if (iVar1 != 0) {
        FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d88d0);
      }
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d88d8;
    *(undefined8 *)PTR_DAT_047d88e0 = uVar2;
    auVar3 = FUN_0236cb70(uVar2,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60));
  }
  else {
    auVar3 = ZEXT816(0);
  }
  return auVar3;
}


