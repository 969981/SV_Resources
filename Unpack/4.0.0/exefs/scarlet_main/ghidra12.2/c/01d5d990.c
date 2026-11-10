/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d5d990; name: FUN_01d5d990
 */


undefined8 FUN_01d5d990(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00c92df0(param_1,1,0);
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d6380 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d6380);
      puVar4 = PTR_DAT_047d6388;
      if (iVar2 != 0) {
        *PTR_DAT_047d6388 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_LAB_047d7ab0,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6380);
      }
    }
    else {
      puVar4 = PTR_DAT_047d6388;
    }
  }
  if (((DAT_04830128 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04830128), iVar2 != 0)) {
    __cxa_guard_release(&DAT_04830128,puVar4);
  }
  FUN_01d5da84((long)iVar1,puVar4);
  return 0;
}


