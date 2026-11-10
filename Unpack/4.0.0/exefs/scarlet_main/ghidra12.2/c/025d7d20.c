/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025d7d20; name: FUN_025d7d20
 */


undefined8 FUN_025d7d20(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d7a08 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d7a08);
      puVar4 = PTR_DAT_047d7a10;
      if (iVar1 != 0) {
        *PTR_DAT_047d7a10 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_FUN_047dfc68,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7a08);
      }
    }
    else {
      puVar4 = PTR_DAT_047d7a10;
    }
  }
  if (((DAT_04853068 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04853068), iVar1 != 0)) {
    DAT_04853058 = PTR_LAB_047dfed0;
    DAT_04853060 = 0;
    __cxa_guard_release(&DAT_04853068,puVar4);
  }
  uVar3 = FUN_025d7e24(&DAT_04853058,puVar4);
  FUN_00c85bd0(param_1,uVar3);
  return 1;
}


