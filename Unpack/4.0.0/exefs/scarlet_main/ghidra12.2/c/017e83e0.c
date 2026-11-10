/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e83e0; name: FUN_017e83e0
 */


undefined8 FUN_017e83e0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar3 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4c40 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c40);
      puVar3 = PTR_DAT_047d4c48;
      if (iVar1 != 0) {
        *PTR_DAT_047d4c48 = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        FUN_00100190(&LAB_01b73b30,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c40);
      }
    }
    else {
      puVar3 = PTR_DAT_047d4c48;
    }
  }
  if (((DAT_04809230 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04809230), iVar1 != 0)) {
    DAT_04809228 = PTR_LAB_047d4c50;
    __cxa_guard_release(&DAT_04809230,puVar3);
  }
  FUN_017e84d0(&DAT_04809228,puVar3);
  return 0;
}


