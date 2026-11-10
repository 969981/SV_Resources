/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c812b0; name: FUN_01c812b0
 */


undefined8 FUN_01c812b0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  
  if (((DAT_04815300 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04815300), iVar1 != 0)) {
    DAT_0452f828 = 8;
    __cxa_guard_release(&DAT_04815300);
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_048152e8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048152e8);
      puVar3 = &DAT_048152c0;
      if (iVar1 != 0) {
        DAT_048152c0 = 0;
        DAT_048152c8 = 0;
        FUN_00100190(&LAB_0117fe5c,&DAT_048152c0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048152e8);
      }
    }
    else {
      puVar3 = &DAT_048152c0;
    }
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d42b8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d42b8);
      puVar4 = PTR_DAT_047d42c0;
      if (iVar1 != 0) {
        *PTR_DAT_047d42c0 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_LAB_047d5820,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d42b8);
      }
    }
    else {
      puVar4 = PTR_DAT_047d42c0;
    }
  }
  FUN_01c81418(&DAT_0452f828,puVar3,puVar4);
  return 0;
}


