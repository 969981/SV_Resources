/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022e2420; name: FUN_022e2420
 */


undefined8 FUN_022e2420(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  uVar2 = FUN_022e2520(param_1,1);
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047de048 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047de048);
      puVar4 = PTR_DAT_047de050;
      if (iVar1 != 0) {
        *PTR_DAT_047de050 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(&LAB_0116a6f4,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047de048);
      }
    }
    else {
      puVar4 = PTR_DAT_047de050;
    }
  }
  if (((DAT_048448b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048448b8), iVar1 != 0)) {
    DAT_04846408 = 1;
    __cxa_guard_release(&DAT_048448b8,puVar4);
  }
  FUN_022e25ac(uVar2,puVar4);
  return 0;
}


